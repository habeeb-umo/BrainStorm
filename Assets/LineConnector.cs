using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineConnector : MonoBehaviour {
    public GameObject LinePrefab;
	// Use this for initialization
	
    public void Connect(GameObject a, GameObject b)
    {
        var AtoB = (b.transform.position - a.transform.position);
        var distAB = AtoB.magnitude;
        Vector3 posA = a.transform.position + ((AtoB / distAB) * (a.transform.Find("Text").GetComponent<RectTransform>().rect.width / 2));

        var BtoA = (a.transform.position - b.transform.position);
        var distBA = BtoA.magnitude;
        Vector3 posB = a.transform.position + ((BtoA / distBA) * (b.transform.Find("Text").GetComponent<RectTransform>().rect.width / 2));
        GameObject go = Instantiate(LinePrefab, this.transform);
        go.GetComponent<DrawLine>().origin = posA;
        go.GetComponent<DrawLine>().destination = posB;
    }
    // Update is called once per frame
    void Update () {
		
	}
}
