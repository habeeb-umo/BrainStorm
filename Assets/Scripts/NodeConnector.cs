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

    void OnStart()
    {
        LinkLine = GameObject.Find("Lines").GetComponent<LineConnector>();
        soundGO = GameObject.Find("LinkSound");
    }

    private void Awake()
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
    public void SetNode1(Bubble node1)
    {
        this.Node1 = node1;
    }
    public void SetNode2(Bubble node2)
    {
        this.Node2 = node2;
    }

    public void ResetNodesToNull()
    {
        SetNode1(null);
        SetNode2(null);
    }
}
