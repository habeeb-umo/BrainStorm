using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//[ExecuteInEditMode]
public class DrawLine : MonoBehaviour {

	private LineRenderer lineRenderer;
	private float counter = 0f;
	private float dist;

    private bool isSet = false;

	public Vector3 origin = Vector3.zero;
	public Vector3 destination = Vector3.zero;

	public float lineDrawSpeed = 6f;

	public void Awake ()
    {
        lineRenderer = GetComponent<LineRenderer>();
        lineRenderer.SetPosition(0, origin);
        lineRenderer.SetPosition(1, destination);
    }
	/*
	void Update () {
        if (origin != null && destination != null)s
        {
            if (!isSet)
            {
                lineRenderer = GetComponent<LineRenderer>();
                lineRenderer.SetPosition(0, origin);

                dist = Vector3.Distance(origin, destination);
                isSet = true;
                Debug.Log("set");
            }
            if (counter < 1)
            {
                Debug.Log("Drawing");
                counter += .1f / lineDrawSpeed;
                Debug.Log(counter);
                float x = Mathf.Lerp(0, dist, counter);

                Vector3 pointA = origin;
                Vector3 pointB = destination;

                Vector3 pointAlongLine = x * Vector3.Normalize(pointB - pointA) + pointA;

               
                
            }
        }
	}*/
}
