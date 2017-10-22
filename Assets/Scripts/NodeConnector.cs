using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NodeConnector : MonoBehaviour
{
    public Bubble Node1;
    public Bubble Node2;
    public bool isLinkInProgress = false;
    public LineConnector LinkLine;
    public GameObject soundGO;
    //soundlies?

    public void Start()
    {
        LinkLine = GameObject.Find("Lines").GetComponent<LineConnector>();
        soundGO = GameObject.Find("LinkSound");
    }

    public void ConnectNodes()
    {
        Node1.LinkedBubbles.Add(Node2);
        Node2.LinkedBubbles.Add(Node1);
        if(null != LinkLine)
        {
            LinkLine.Connect(Node1.gameObject, Node2.gameObject);
            soundGO.GetComponent<AudioSource>().Play();
        }
        //ADD LINE RENDERING (need transform pos... update? stuff? Bunnies?)
        //SOUND THINGIES? BLOOPS? NOIZESH?!
    }
}
