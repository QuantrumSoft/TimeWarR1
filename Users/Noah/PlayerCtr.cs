using UnityEngine.UI; 
using System.Collections.Generic;
using UnityEngine;

public class PlayerCtr : MonoBehaviour {
	static Animator anim; 
	public float speed =2.0F; 
	public float rotationSpeed = 75.0f; 
 
	public Text countText; 
	private Rigidbody Rb;
	private int count; 
 	// Use this for initialization
	public Text winText; // Use this for initialization
	void Start () {
		Rb = GetComponent<Rigidbody> (); 
 
		count = 0; 
		SetCountText (); 
		winText.text = ""; 
		anim = GetComponent<Animator> (); 
	}

	// Update is called once per frame
	void Update () {
		float translation = Input.GetAxis ("Vertical")*speed;   
		float rotation = Input.GetAxis ("Mouse X") * rotationSpeed;
	 
		translation *= Time.deltaTime; 

		rotation *= Time.deltaTime; 

		transform.Translate (0, 0, translation); 
		transform.Rotate (0, rotation, 0); 
	  
		
		if (translation != 0) {
			anim.SetBool ("IsWalking", true);  
		}else{
			anim.SetBool ("IsWalking", false);  
		}
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