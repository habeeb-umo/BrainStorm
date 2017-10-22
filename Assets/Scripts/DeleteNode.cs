using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeleteNode : MonoBehaviour {
	public GameObject partgo;
	public void DeleteThisNode()
	{
		var exp = partgo.GetComponent<ParticleSystem>();
		
        exp.Play();
		partgo.GetComponent<MeshRenderer>().enabled = false;
		this.gameObject.transform.Find("Menu").gameObject.SetActive(false);
		this.gameObject.transform.Find("Text").gameObject.SetActive(false);
        Destroy(gameObject, exp.duration);
	}
}
