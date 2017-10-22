using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class showMenu : MonoBehaviour {
    public GameObject menu;
    public bool active = false;
	void OnSelect()
    {
        menu.SetActive(!active);
        active = !active;
    }
}
