using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class makeNorth : MonoBehaviour
{
    public TextMeshProUGUI compassUI;
    // Start is called before the first frame update
    void Start()
    {
        Input.compass.enabled = true;
        Input.location.Start();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.compass.headingAccuracy > 0)
        {
            compassUI.text = Input.compass.headingAccuracy.ToString();
            this.transform.rotation = Quaternion.Euler(0, -Input.compass.trueHeading, 0);
        }
        else
        {
            compassUI.text = "failed!";
        }
    }
}
