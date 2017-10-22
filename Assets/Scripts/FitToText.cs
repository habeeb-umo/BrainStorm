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
    public Vector3 a, b;
    // Update is called once per frame
    void Update()
    {
        float height = text.rect.height + addition;
        a = scaleStart * height;
        b = a / 10;
        this.transform.localScale = b;
        this.gameObject.GetComponent<ParticleSystem>().shape.scale.Set((b.x), (b.y), (b.z));
        
    }

}
