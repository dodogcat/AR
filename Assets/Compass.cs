using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System.Security.Cryptography;
using Unity.MARS;
using TMPro;
using UnityEngine.Android;

public class Compass : MonoBehaviour
{
    public TextMeshProUGUI latitudeUI;
    public TextMeshProUGUI longitudeUI;

    private Text latitude_text;
    private Text longitude_text;
    private float maxWaitTime = 10.0f;
    private float resendTime = 1.0f;

    public float latitude = 0;
    public float longitude = 0;
    float waitTime = 0;

    public bool receiveGPS = false;

    public float getLat()
    {
        return latitude;
    }

    public float getLng()
    {
        return longitude;
    }

    // Start is called before the first frame update
    void Start()
    {
        Input.location.Start();
        StartCoroutine(GPS_On());

    }

    // Update is called once per frame
    void Update()
    {
        latitudeUI.text = "latitude : " + latitude.ToString();
        longitudeUI.text = "longitude : " + longitude.ToString();
    }

    public IEnumerator GPS_On()
    {
        //만일,GPS사용 허가를 받지 못했다면, 권한 허가 팝업을 띄움
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            while (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                yield return null;
            }
        }

        //만일 GPS 장치가 켜져 있지 않으면 위치 정보를 수신할 수 없다고 표시
        if (!Input.location.isEnabledByUser)
        {
            latitude_text.text = "GPS Off";
            longitude_text.text = "GPS Off";
            yield break;
        }

        //위치 데이터를 요청 -> 수신 대기
        Input.location.Start();

        //GPS 수신 상태가 초기 상태에서 일정 시간 동안 대기함
        while (Input.location.status == LocationServiceStatus.Initializing && waitTime < maxWaitTime)
        {
            yield return new WaitForSeconds(1.0f);
            waitTime++;
        }

        //수신 실패 시 수신이 실패됐다는 것을 출력
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            latitude_text.text = "위치 정보 수신 실패";
            longitude_text.text = "위치 정보 수신 실패";
        }

        //응답 대기 시간을 넘어가도록 수신이 없었다면 시간 초과됐음을 출력
        if (waitTime >= maxWaitTime)
        {
            latitude_text.text = "응답 대기 시간 초과";
            longitude_text.text = "응답 대기 시간 초과";
        }

        //수신된 GPS 데이터를 화면에 출력/

        LocationInfo li = Input.location.lastData;
        /*latitude = li.latitude;
       longitude = li.longitude;
       latitude_text.text = "위도 : " + latitude.ToString();
       longitude_text.text = "경도 : " + longitude.ToString();
       */
        //위치 정보 수신 시작 체크
        receiveGPS = true;

        //위치 데이터 수신 시작 이후 resendTime 경과마다 위치 정보를 갱신하고 출력
        while (receiveGPS)
        {
            li = Input.location.lastData;
            latitude = li.latitude;
            longitude = li.longitude;

            latitude_text.text = "위도 : " + latitude.ToString();
            longitude_text.text = "경도 : " + longitude.ToString();

            yield return new WaitForSeconds(resendTime);
        }
    }
}