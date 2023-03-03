using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class Compass : MonoBehaviour
{
    // Start is called before the first frame update
    Transform initTransform;
    public TextMeshProUGUI compassPrint;
    private bool startTracking = false;


    void Start()
    {
        Input.compass.enabled = true;
        Input.location.Start();
        initTransform.rotation = Quaternion.Euler(0, -Input.compass.trueHeading, 0);
        StartCoroutine(InitializeCompass());
        compassPrint.text = "change";
        compassPrint.text = "" + Input.compass.enabled;
    }

    // Update is called once per frame
    void Update()
    {
        if (startTracking)
        {
            transform.rotation = Quaternion.Euler(0, Input.compass.trueHeading, 0);
            compassPrint.text = ((int)Input.compass.trueHeading).ToString() + "¡Æ " + DegreesToCardinalDetailed(Input.compass.trueHeading);
        }
        /*
        Quaternion north = Quaternion.Euler(0, -Input.compass.trueHeading, 0);

        transform.rotation= north;
        compassPrint.text = "compass x: " + north.x + "\ny: " + north.y + "\nz: " + north.z;
        */
    }

    IEnumerator InitializeCompass()
    {
        yield return new WaitForSeconds(1f);
        startTracking |= Input.compass.enabled;
    }
    private static string DegreesToCardinalDetailed(double degrees)
    {
        string[] caridnals = { "N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW", "N" };
        return caridnals[(int)Math.Round(((double)degrees * 10 % 3600) / 225)];
    }

}
