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
		this.gameObject.transform.Find("Text").gameObject.SetActive(false);
		this.GetComponent<AudioSource>().Play();
        Destroy(gameObject, exp.duration);
	}
}
