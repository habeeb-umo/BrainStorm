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
	}
	
	// Update is called once per frame
	void Update ()
    {
		
	}

    public GameObject CreateNode(Vector3 pos)
    {
        return GameObject.Instantiate(NodePrefab,pos, Quaternion.identity);
    }

    public void RemoveNode(GameObject node)
    {
        GameObject.Destroy(node);
        Debug.Log("Object removed!!(MEE-OW(th) That's right!");
    }
}
