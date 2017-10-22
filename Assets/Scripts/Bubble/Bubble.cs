using UnityEngine;
using HoloToolkit.Unity.InputModule;
using UnityEngine.UI;
public class Bubble : MonoBehaviour, IDictationHandler
{
    public string Contents;

    private enum BubbleTextField { Name, Contents }
	// Use this for initialization
	void Start ()
    {
    }
	
	// Update is called once per frame
	void Update ()
    {
		
	}

    public void EditBubbleContents()
    {
        Debug.Log("Editing Contents...");
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
        this.Contents = " ... ";
        this.gameObject.transform.Find("Text").GetComponent<Text>().text = Contents;
      //  Debug.Log("Recording Started");
        StartCoroutine(DictationInputManager.StartRecording(initialSilenceTimeout, autoSilenceTimeout, recordingTime));
    }

    public void StopRecording()
    {
        isRecording = false;
       // Debug.Log("Recording Ended");
        StartCoroutine(DictationInputManager.StopRecording());
    }

    public void OnDictationHypothesis(DictationEventData eventData)
    {
         this.Contents = eventData.DictationResult;
        this.gameObject.transform.Find("Text").GetComponent<Text>().text = Contents;
    }

    public void OnDictationResult(DictationEventData eventData)
    {

         this.Contents = eventData.DictationResult;
        this.gameObject.transform.Find("Text").GetComponent<Text>().text = Contents;
    }

    public void OnDictationComplete(DictationEventData eventData)
    {
         this.Contents = eventData.DictationResult;
        this.gameObject.transform.Find("Text").GetComponent<Text>().text = Contents;
    }

    public void OnDictationError(DictationEventData eventData)
    {
        isRecording = false;
        Debug.LogError(eventData.DictationResult);
        StartCoroutine(DictationInputManager.StopRecording());
    }
}
