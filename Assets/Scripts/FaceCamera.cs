using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceCamera : MonoBehaviour {
    GameObject cmer; 
	// Use this for initialization
	void Start () {
        cmer = Camera.main.gameObject;
	}
	
	// Update is called once per frame
	void Update () {
        this.transform.LookAt(cmer.transform);
	}
}
