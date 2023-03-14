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
        //����,GPS��� �㰡�� ���� ���ߴٸ�, ���� �㰡 �˾��� ���
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            while (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                yield return null;
            }
        }

        //���� GPS ��ġ�� ���� ���� ������ ��ġ ������ ������ �� ���ٰ� ǥ��
        if (!Input.location.isEnabledByUser)
        {
            latitude_text.text = "GPS Off";
            longitude_text.text = "GPS Off";
            yield break;
        }

        //��ġ �����͸� ��û -> ���� ���
        Input.location.Start();

        //GPS ���� ���°� �ʱ� ���¿��� ���� �ð� ���� �����
        while (Input.location.status == LocationServiceStatus.Initializing && waitTime < maxWaitTime)
        {
            yield return new WaitForSeconds(1.0f);
            waitTime++;
        }

        //���� ���� �� ������ ���еƴٴ� ���� ���
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            latitude_text.text = "��ġ ���� ���� ����";
            longitude_text.text = "��ġ ���� ���� ����";
        }

        //���� ��� �ð��� �Ѿ���� ������ �����ٸ� �ð� �ʰ������� ���
        if (waitTime >= maxWaitTime)
        {
            latitude_text.text = "���� ��� �ð� �ʰ�";
            longitude_text.text = "���� ��� �ð� �ʰ�";
        }

        //���ŵ� GPS �����͸� ȭ�鿡 ���/

        LocationInfo li = Input.location.lastData;
        /*latitude = li.latitude;
       longitude = li.longitude;
       latitude_text.text = "���� : " + latitude.ToString();
       longitude_text.text = "�浵 : " + longitude.ToString();
       */
        //��ġ ���� ���� ���� üũ
        receiveGPS = true;

        //��ġ ������ ���� ���� ���� resendTime ������� ��ġ ������ �����ϰ� ���
        while (receiveGPS)
        {
            li = Input.location.lastData;
            latitude = li.latitude;
            longitude = li.longitude;

            latitude_text.text = "���� : " + latitude.ToString();
            longitude_text.text = "�浵 : " + longitude.ToString();

            yield return new WaitForSeconds(resendTime);
        }
    }
}