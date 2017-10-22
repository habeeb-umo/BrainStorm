using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//[ExecuteInEditMode]
public class DrawLine : MonoBehaviour {

	private LineRenderer lineRenderer;
	private float counter;
	private float dist;

	public Vector3 origin;
	public Vector3 destination;

	public float lineDrawSpeed = 6f;

	void Start () {

		
		
	}
	

	void Update () {
        if (origin != null && destination != null )
        {
            lineRenderer = GetComponent<LineRenderer>();
            lineRenderer.SetPosition(0, origin);

            dist = Vector3.Distance(origin, destination);
        }
		if (counter < dist) {
			counter += .1f / lineDrawSpeed;
			float x = Mathf.Lerp (0, dist, counter);

			Vector3 pointA = origin;
			Vector3 pointB = destination;

			Vector3 pointAlongLine = x * Vector3.Normalize (pointB - pointA) + pointA;

			lineRenderer.SetPosition (1, pointAlongLine);

		}
		
	}
}
