using UnityEngine;
using HoloToolkit.Unity.InputModule;

public class Bubble : MonoBehaviour, IDictationHandler
{
    public string Name;
    public string Contents;

    private enum BubbleTextField { Name, Contents }
    private BubbleTextField textToChange;
	// Use this for initialization
	void Start ()
    {
    }
	
	// Update is called once per frame
	void Update ()
    {
		
	}

    // Called by GazeGestureManager when the user performs a Select gesture
    void OnSelect()
    {
        Debug.Log("MEOW! (also you clicked on things)");
    }

    public void EditBubbleName()
    {
        textToChange = BubbleTextField.Name;
        StartRecording();
    }

    public void EditBubbleContents()
    {
        Debug.Log("Editing Contents...");
        textToChange = BubbleTextField.Contents;
        StartRecording();
    }
    [SerializeField]
    [Range(0.1f, 5f)]
    [Tooltip("The time length in seconds before dictation recognizer session ends due to lack of audio input in case there was no audio heard in the current session.")]
    private float initialSilenceTimeout = 5f;

    [SerializeField]
    [Range(5f, 60f)]
    [Tooltip("The time length in seconds before dictation recognizer session ends due to lack of audio input.")]
    private float autoSilenceTimeout = 9f;

    [SerializeField]
    [Range(1, 60)]
    [Tooltip("Length in seconds for the manager to listen.")]
    private int recordingTime = 10;

    [SerializeField]
    private TextMesh speechToTextOutput;

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
        if (textToChange == BubbleTextField.Name)
        {
            this.Name = eventData.DictationResult;
        }
        else this.Contents = eventData.DictationResult;
        
    }

    public void OnDictationResult(DictationEventData eventData)
    {
        if (textToChange == BubbleTextField.Name)
        {
            this.Name = eventData.DictationResult;
        }
        else this.Contents = eventData.DictationResult;
    }

    public void OnDictationComplete(DictationEventData eventData)
    {
        if (textToChange == BubbleTextField.Name)
        {
            this.Name = eventData.DictationResult;
        }
        else this.Contents = eventData.DictationResult;
    }

    public void OnDictationError(DictationEventData eventData)
    {
        isRecording = false;
        Debug.LogError(eventData.DictationResult);
        StartCoroutine(DictationInputManager.StopRecording());
    }
}
