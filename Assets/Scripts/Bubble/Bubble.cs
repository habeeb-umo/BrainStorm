using UnityEngine;
using HoloToolkit.Unity.InputModule;
using UnityEngine.UI;
using System.Collections.Generic;

public class Bubble : MonoBehaviour, IDictationHandler
{
    public string Contents;
    public Text textRenderer;
    public List<Bubble> LinkedBubbles;
    private static NodeConnector connector;
    [SerializeField]
    public static LineRenderer ConnectionLine;

    void OnStart()
    {
        this.textRenderer = this.gameObject.transform.Find("Text").GetComponent<Text>();
    }

    public void EditBubbleContents()
    {
        Debug.Log("Editing Contents...");
        StartRecording();
    }
    [SerializeField]
    [Range(0.1f, 5f)]
    [Tooltip("The time length in seconds before dictation recognizer session ends due to lack of audio input in case there was no audio heard in the current session.")]
    private float initialSilenceTimeout = 3f;

    [SerializeField]
    [Range(1f, 60f)]
    [Tooltip("The time length in seconds before dictation recognizer session ends due to lack of audio input.")]
    private float autoSilenceTimeout = 1f;

    [SerializeField]
    [Range(1, 60)]
    [Tooltip("Length in seconds for the manager to listen.")]
    private int recordingTime = 2;

    [SerializeField]
    private GameObject recordLight;

    private bool isRecording;

    private void ToggleRecording()
    {
        if (isRecording)
        {
            StopRecording();
        }
        else
        {
            StartRecording();
        }
    }

    public void StartRecording()
    {
        isRecording = true;
        StartCoroutine(DictationInputManager.StartRecording(initialSilenceTimeout, autoSilenceTimeout, recordingTime));
    }

    public void StopRecording()
    {
        isRecording = false;
        StartCoroutine(DictationInputManager.StopRecording());
    }

    public void OnDictationHypothesis(DictationEventData eventData)
    {
        this.Contents = eventData.DictationResult;
        this.textRenderer.text = Contents;
    }

    public void OnDictationResult(DictationEventData eventData)
    {
        this.Contents = eventData.DictationResult;
        this.textRenderer.text = Contents;
    }

    public void OnDictationComplete(DictationEventData eventData)
    {
         this.Contents = eventData.DictationResult;
         this.textRenderer.text = Contents;
    }

    public void OnDictationError(DictationEventData eventData)
    {
        isRecording = false;
        Debug.LogError(eventData.DictationResult);
        this.Contents = eventData.DictationResult;
        this.textRenderer.text = Contents;
        StartCoroutine(DictationInputManager.StopRecording());
    }

    public void LinkStart()
    {
        connector = new NodeConnector();
        connector.Node1 = this;
        connector.isLinkInProgress = true;
        Debug.Log("Start node called on " + this.Contents);
    }

    public void LinkEnd()
    {
        if (null == connector) return;

        connector.Node2 = this;
        connector.ConnectNodes();
        Debug.Log("Nodes " + connector.Node1.Contents + " and " + connector.Node2.Contents + " CONNECTED!");
        connector = null;
        
    }

    public void OnSelect()
    {
        if(connector.isLinkInProgress)
        {
            this.LinkEnd();
        }
    }
}
