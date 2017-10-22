using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class collapseNodes : MonoBehaviour
{
    public GameObject nodes, lines;
    public bool collpaseActive = false, collapseDone = false;
    public Dictionary<GameObject, Vector3> stPos;
    void OnSelect()
    {
        if (collapseDone) return;
        foreach (GameObject g in lines.transform)
            Destroy(g);
        foreach (GameObject g in nodes.transform)
        {
            stPos.Add(g, g.transform.position);
        }
        startTime = Time.time;
        collpaseActive = true;
    }
    float startTime;
    
    public float runtime;
    void Update()
    {
        if (!collapseDone && collpaseActive )
        {
            float precent = (Time.time - startTime) / runtime;

            if (precent < 1)
            {
                foreach (GameObject g in stPos.Keys)
                {
                    transform.position = Vector3.Lerp(stPos[g], this.gameObject.transform.position, precent);
                }
            }
            else { collapseDone = true;  }
        }
    }

}
