using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class GetPath : MonoBehaviour
{
    private WWW request;
    private string url = "https://maps.googleapis.com/maps/api/directions/json?";
    private string origin = "어린이 대공원";
    private string destination = "inputtype=textquery";
    private string fields = "formatted_address,name,geometry";
    private string key;
    private string example = "https://maps.googleapis.com/maps/api/directions/json?mode=walking&origin=군자역&destination=어린이대공원&key=AIzaSyASRa9ZDFa_QOQ63Y76hYYIPipW_w7eA_w";
    public GameObject googleMapSearch;
    public GameObject compass;

    // Start is called before the first frame update
    void Start()
    {
        string currentLat = compass.GetComponent<Compass>().getLat().ToString();
        string currentLng = compass.GetComponent<Compass>().getLng().ToString();
        origin = currentLat + "," + currentLng;
        destination = googleMapSearch.GetComponent<Search>().getAddress();

        url += "origin=" + origin;

        url += "&destination=" + destination;

        StreamReader sr = new StreamReader("googleMap.txt");
        key = sr.ReadToEnd();
        sr.Close();

        Debug.Log(key);

        url += "&key=" + key;

        request = new WWW(url);

        Debug.Log(request.text);

        string jsonString = request.text;

        SearchResult resJson = JsonUtility.FromJson<SearchResult>(jsonString);

        Debug.Log(resJson.status);

        int a = 1;

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
