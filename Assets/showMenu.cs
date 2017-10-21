using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class showMenu : MonoBehaviour {
    public GameObject menu;
	void OnSelect()
    {
        menu.SetActive(true);
    }
    public void hideMenu()
    {
        menu.SetActive(false);
    }
}
