using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[ExecuteInEditMode]
public class FitToText : MonoBehaviour {
    public RectTransform text;
    public int addition;
    public  Vector3 scaleStart;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        float height = text.rect.height + addition;
        this.transform.localScale = scaleStart * height;
    }
}
