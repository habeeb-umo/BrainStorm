using UnityEngine;

public class NodeManager : MonoBehaviour
{
    public GameObject NodePrefab;

	// Use this for initialization
	void Start ()
    {
		
	}
	
	// Update is called once per frame
	void Update ()
    {
		
	}

    public GameObject CreateNode(Vector3 pos)
    {
        return GameObject.Instantiate(NodePrefab,pos, Quaternion.identity);
    }
}
