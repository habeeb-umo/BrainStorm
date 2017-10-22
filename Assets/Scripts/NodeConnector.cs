using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NodeConnector
{
    public Bubble Node1;
    public Bubble Node2;
    public bool isLinkInProgress = false;
    public LineConnector LinkLine;
    //soundlies?


    public void ConnectNodes()
    {
        Node1.LinkedBubbles.Add(Node2);
        Node2.LinkedBubbles.Add(Node1);
        if(null != LinkLine)
        {
            LinkLine.Connect(Node1.gameObject, Node2.gameObject);
        }
        //ADD LINE RENDERING (need transform pos... update? stuff? Bunnies?)
        //SOUND THINGIES? BLOOPS? NOIZESH?!
    }
}
