using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System.Security.Cryptography;

public class Compass : MonoBehaviour
{
    private GameObject aRSessionOrigin;

    public GameObject target;
    public Transform targetTransform;
    private GameObject sign2;

    // Start is called before the first frame update
    void Start()
    {
        Input.compass.enabled = true;
        Input.location.Start();


        aRSessionOrigin = GameObject.Find("AR Session Origin");
        var aRScript = aRSessionOrigin.GetComponent<ARSessionOrigin>();

        aRScript.MakeContentAppearAt(targetTransform, targetTransform.position, Quaternion.Euler(0, -Input.compass.trueHeading, 0));

        //aRSessionOrigin.MakeContentAppearAt(target, target.position, Quaternion.Euler(0, -Input.compass.trueHeading, 0));


        //FindObjectOfType<ARSessionOrigin>().MakeContentAppearAt(target, target.position, Quaternion.Euler(0, -Input.compass.trueHeading, 0));
    }

    // Update is called once per frame
    void Update()
    {
        aRSessionOrigin = GameObject.Find("AR Session Origin");
        var aRScript = aRSessionOrigin.GetComponent<ARSessionOrigin>();
        aRScript.MakeContentAppearAt(targetTransform, targetTransform.position, Quaternion.Euler(0, -Input.compass.trueHeading, 0));

        sign2 = GameObject.Find("compass");
        var sign2text = sign2.GetComponent<Text>();

        sign2text.text = Input.compass.trueHeading.ToString();

    }
}