using UnityEngine;
public class BubbleSpawner : MonoBehaviour
{
    public GameObject BubbleObject;
    public void InstantiateNewBubble(Transform clickerTrans)
    {
        GameObject.Instantiate(BubbleObject, clickerTrans.position, Quaternion.identity);
        //Debug.Log("BUBBLEESSSSSSSSSS(meow)SSS");
    }
}
