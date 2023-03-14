using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

[System.Serializable]
public class Southwest
{
    public string lat;
    public string lng;
}

[System.Serializable]
public class Northeast
{
    public string lat;
    public string lng;
}

[System.Serializable]
public class Viewport
{
    public Northeast northeast;
    public Southwest southwest;
}

[System.Serializable]
public class Location
{
    public string lat;
    public string lng;
}

[System.Serializable]
public class Geometry
{
    public Location location;
    public Viewport viewport;
}

[System.Serializable]
public class LocationData
{
    public string formatted_address;
    public Geometry geometry;
    public string name;
}

[System.Serializable]
public class SearchResult
{
    public List<LocationData> candidates;
    public string status;
}
public class Search : MonoBehaviour
{
    private WWW request;
    private string url = "https://maps.googleapis.com/maps/api/place/findplacefromtext/json?";
    private string input = "어린이 대공원";
    private string inputtype = "inputtype=textquery";
    private string fields = "formatted_address,name,geometry";
    private string key;

    public string address;
    public string addressLat;
    public string addressLng;

    // Start is called before the first frame update
    public string getAddress()
    {
        return address;
    }
    public string getAddressLat()
    {
        return addressLat;
    }
    public string getAddressLng()
    {
        return addressLng;
    }

    void Start()
    {
        url += inputtype;

        StreamReader sr = new StreamReader("googleMap.txt");
        key = sr.ReadToEnd();
        sr.Close();

        Debug.Log(key);
         
        url += "&key=" + key;

        url += "&fields=" + fields;

        url += "&input= " + input;

        request = new WWW(url);

        Debug.Log(request.text);

        string jsonString = request.text;

        SearchResult resJson = JsonUtility.FromJson<SearchResult>(jsonString);

        Debug.Log(resJson.status);

        address = resJson.candidates[0].formatted_address;
        addressLat = resJson.candidates[0].geometry.location.lat;
        addressLng = resJson.candidates[0].geometry.location.lng;
        int a = 1;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
