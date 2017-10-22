using UnityEngine;
public class BubbleSpawner : MonoBehaviour
{
    public GameObject BubbleObject;
    public GameObject ParentGO;
    public void InstantiateNewBubble(Transform clickerTrans)
    {
        GameObject.Instantiate(BubbleObject, clickerTrans.position, Quaternion.identity, ParentGO.transform);
        //Debug.Log("BUBBLEESSSSSSSSSS(meow)SSS");
    }
}
