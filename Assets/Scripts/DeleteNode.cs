using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeleteNode : MonoBehaviour {

	public void DeleteThisNode()
	{
		Destroy(this.gameObject);
	}
}
