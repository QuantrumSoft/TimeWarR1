using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 

public class charactercontrol : MonoBehaviour {
	public float speed = 10.0F; 
	public Text countText; 
	private Rigidbody Rb;
	private int count; 
	public float rotationSpeed = 75.0f; 
	// Use this for initialization
	public Text winText; 
	void Start () {
		Rb = GetComponent<Rigidbody> (); 
		Cursor.lockState = CursorLockMode.Locked; 
		count = 0; 
		SetCountText (); 
		winText.text = ""; 
	}
	
	// Update is called once per frame
	void Update () {
		float translation = Input.GetAxis ("Mouse Y") * speed; 
 
 
		float rotation = Input.GetAxis ("Mouse X")*rotationSpeed;

		rotation *= Time.deltaTime; 

		Vector3 movement = new Vector3 (rotation, 0.0F, translation); 
		Rb.AddForce (movement * speed); 

		transform.Rotate (0, rotation, 0); 
		if (Input.GetKeyDown ("escaps"))
			Cursor.lockState = CursorLockMode.None; 

	}
	void OnTriggerEnter(Collider other)
	{
		if (other.gameObject.CompareTag ("Pickup")) 
		{
			other.gameObject.SetActive (false); 
			count = count + 1; 
			SetCountText (); 
			}
	}

void SetCountText ()
	{
		countText.text = "Count: " + count.ToString (); 
		if (count >=5)
		{
			winText.text="Winner"; 
}
}
}