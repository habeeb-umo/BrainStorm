using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[System.Serializable]
public class HoloUIPressedEvent : UnityEvent { }
public class HoloButton : MonoBehaviour {
    public HoloUIPressedEvent onSelected;
    void OnSelect()
    {
        onSelected.Invoke();
    }
}
