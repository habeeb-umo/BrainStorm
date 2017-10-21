using UnityEngine;
using UnityEngine.XR.WSA.Input;
using System;
using System.Collections.Generic;

public class NodeManager : MonoBehaviour
{
    public GameObject NodePrefab;
    private List<Node> Nodes;

	// Use this for initialization
	void Start ()
    {
        InteractionManager.InteractionSourcePressed += RemoveNode;
	}
	
	// Update is called once per frame
	void Update ()
    {
		
	}

    public GameObject CreateNode(Vector3 pos)
    {
        return GameObject.Instantiate(NodePrefab,pos, Quaternion.identity);
    }

    public Action<InteractionSourcePressedEventArgs> RemoveNode =
        (InteractionSourcePressedEventArgs pressed) => {
            Debug.Log(pressed.state.source);
        };
}
