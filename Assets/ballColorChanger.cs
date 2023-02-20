using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ballColorChanger : MonoBehaviour
{
    public GameObject m_ball;
    public TextMeshProUGUI m_UI;
    public TextMeshProUGUI m_LOG;
    public TextMeshProUGUI m_score;

    Vector3 m_location;
    bool m_multiTouch;
    GameObject m_start;

    int m_timer;

    // Start is called before the first frame update
    void Start()
    {
        m_timer = 0;
    }

    int getScore()
    {
        int ret = int.Parse( m_score.text.Substring(7));

        return ret;
    }

    void updateScore()
    {
        m_score.text = "SCORE: " + (getScore() + 1);
    }

    // Update is called once per frame
    void Update()
    {
        m_timer += 1;

#if UNITY_EDITOR
        m_location = Input.mousePosition;
#else
        m_location = Input.GetTouch(0).position;
            if (Input.GetTouch(0).phase != TouchPhase.Began)
        {
            return;
        }
        m_multiTouch = false;

        m_LOG.text = "touchCout: " + Input.touchCount;

        if(Input.touchCount > 1)
        {
            m_multiTouch = true;
        }

#endif

        Ray ray = Camera.main.ScreenPointToRay(m_location);
        RaycastHit hit;



#if UNITY_EDITOR
        m_multiTouch = true;

        if (m_multiTouch == true && m_timer % 60 == 0)
        {

            m_start = GameObject.Find("BallPoll");
            Vector3 basketPos = m_start.transform.position;

            Vector3 add = new Vector3(0, 1, 0);

            m_ball.transform.SetParent(m_start.transform, true);
            //m_ball.transform.parent = m_start.transform;

            //m_ball.transform.localScale = add;

            Debug.Log(m_ball.transform.localScale);

            m_UI.text = "X: " + m_ball.transform.localScale.x + " Y: " + m_ball.transform.localScale.y + " Z: " + m_ball.transform.localScale.z;

            Instantiate(m_ball, basketPos + add, Quaternion.identity);

            Debug.Log("make Ball");
            Debug.Log(basketPos + add);
        }
#else
        if (m_multiTouch == true)
        {
            m_start = GameObject.Find("PlayerBasket");
//            m_start = GameObject.Find("Shoot");
            Vector3 basketPos = m_start.transform.position;

            Vector3 add = new Vector3(0, 1, 0);
                
            m_ball.transform.SetParent(m_start.transform, true);
            //m_ball.transform.parent = m_start.transform;
    
            m_UI.text = "X: " + m_ball.transform.localScale.x + " Y: " + m_ball.transform.localScale.y + " Z: " + m_ball.transform.localScale.z;
                
            Instantiate(m_ball, basketPos + add, Quaternion.identity);

            Debug.Log("make Ball");
            Debug.Log(basketPos + add);

            m_multiTouch = false;
        }

#endif

        if (Physics.Raycast(ray, out hit))
        {


            // 어떤 오브젝트인지 로그를 찍습니다.
            //Debug.Log(hit.collider.name);

            GameObject gameObject = GameObject.Find(hit.collider.name);
            Renderer color = gameObject.GetComponent<Renderer>();

            // 오브젝트 별로 코드를 작성할 수 있습니다.
            if (hit.collider.name == "MainBall")
            {
                Debug.Log("Main Hit");
                color.material.color = Color.blue;
            }
            else if (hit.collider.name == "SubBall")
            {
                Debug.Log("Sub Hit");
            }
        }


    }
}
