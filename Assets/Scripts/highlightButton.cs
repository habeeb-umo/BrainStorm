using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class highlightButton : MonoBehaviour {

	public Sprite[] activeSprites;
	bool Active = false;

	void start()
	{
		this.OnLookedAt();
	}

	void OnLookedAt()
	{
		this.gameObject.GetComponent<Image>().sprite = activeSprites[1];
	}
	void OnUnLookedAt()
	{
		this.gameObject.GetComponent<Image>().sprite = activeSprites[0];
	}
}
