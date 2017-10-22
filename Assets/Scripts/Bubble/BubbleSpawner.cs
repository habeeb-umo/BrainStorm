using UnityEngine;
public class BubbleSpawner : MonoBehaviour
{
    public GameObject BubbleObject;
    public GameObject parentGO;
    public void InstantiateNewBubble(Transform clickerTrans)
    {
        GameObject.Instantiate(BubbleObject, clickerTrans.position, Quaternion.identity, parentGO.transform);
        //Debug.Log("BUBBLEESSSSSSSSSS(meow)SSS");
    }
}
