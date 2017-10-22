using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NodeConnector
{
    public Bubble Node1;
    public Bubble Node2;
    public GameObject lineRenderer;
    public bool isLinkInProgress = false;
    //soundlies?

    public NodeConnector(GameObject lineRenderer)
    {

    }

    public void ConnectNodes()
    {
        Node1.LinkedBubbles.Add(Node2);
        Node2.LinkedBubbles.Add(Node1);
        //ADD LINE RENDERING (need transform pos... update? stuff? Bunnies?)
        //SOUND THINGIES? BLOOPS? NOIZESH?!
    }
}
