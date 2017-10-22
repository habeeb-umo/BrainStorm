﻿using UnityEngine;
using UnityEngine.XR.WSA.Input;

public class GazeGestureManager : MonoBehaviour
{
    public static GazeGestureManager Instance { get; private set; }

    // Represents the hologram that is currently being gazed at.
    public GameObject FocusedObject { get; private set; }

    GestureRecognizer recognizer;

    // Use this for initialization
    void Start()
    {
        Instance = this;

        // Set up a GestureRecognizer to detect Select gestures.
        recognizer = new GestureRecognizer();
        
        recognizer.TappedEvent += (source, tapCount, ray) =>
        {
            // Send an OnSelect message to the focused object and its ancestors.
            if (FocusedObject != null)
            {
                FocusedObject.SendMessageUpwards("OnSelect");
            }
        };

        recognizer.StartCapturingGestures();
    }

    // Update is called once per frame
    void Update()
    {
        // Figure out which hologram is focused this frame.
        GameObject oldFocusObject = FocusedObject;

        // Do a raycast into the world based on the user's
        // head position and orientation.
        var headPosition = Camera.main.transform.position;
        var gazeDirection = Camera.main.transform.forward;

        RaycastHit hitInfo;
        if (Physics.Raycast(headPosition, gazeDirection, out hitInfo))
        {
            // If the raycast hit a hologram, use that as the focused object.
            FocusedObject = hitInfo.collider.gameObject;
            if (FocusedObject == oldFocusObject)
            {
                FocusedObject.SendMessageUpwards("OnLookedAt");
            }
        }
        else
        {
            // If the raycast did not hit a hologram, clear the focused object.
            FocusedObject = null;
        }

        // If the focused object changed this frame,
        // start detecting fresh gestures again.
        if (FocusedObject != oldFocusObject)
        {
            if (oldFocusObject != null)
            {
                oldFocusObject.SendMessageUpwards("OnUnLookedAt");
            }
            recognizer.CancelGestures();
            recognizer.StartCapturingGestures();
        }
    }
    public void CallEditNode()
    {
        if (FocusedObject != null)
        {
            FocusedObject.SendMessageUpwards("EditBubbleContents");
        }
    }
    public void MoveNodeStart()
    {
        if (FocusedObject != null)
        {
            FocusedObject.SendMessageUpwards("StartMovment");
        }
    }
    public void DeleteNode()
    {
        if (FocusedObject != null)
        {
            FocusedObject.SendMessageUpwards("DeleteThisNode");
        }
    }
}