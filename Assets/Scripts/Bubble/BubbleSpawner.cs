using UnityEngine;
public class BubbleSpawner : MonoBehaviour
{
    public GameObject BubbleObject;
    public GameObject soundGO;
    public void InstantiateNewBubble(Transform clickerTrans)
    {
        soundGO.GetComponent<AudioSource>().Play();
        GameObject.Instantiate(BubbleObject, clickerTrans.position, Quaternion.identity);
        //Debug.Log("BUBBLEESSSSSSSSSS(meow)SSS");
    }
}
