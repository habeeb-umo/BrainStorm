using UnityEngine;
using HoloToolkit.Unity.InputModule;

public class  Bubble : MonoBehaviour
{
    public string Name;
    public string Contents;

	// Use this for initialization
	void Start ()
    {}
	
	// Update is called once per frame
	void Update ()
    {
		
	}

    // Called by GazeGestureManager when the user performs a Select gesture
    void OnSelect()
    {
        Debug.Log("MEOW! (also you clicked on things)");
    }

    void Remove()
    {
        Debug.Log("And now we are removing things!! MEOW MUTHATRUCKAS");
    }
}
