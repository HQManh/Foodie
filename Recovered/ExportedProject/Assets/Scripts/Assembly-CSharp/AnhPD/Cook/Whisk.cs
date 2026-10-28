using System;
using AnhPD.FoodOrder;
using UnityEngine;

namespace AnhPD.Cook
{
	public class Whisk : MonoBehaviour
	{
		[SerializeField]
		private Transform tfRoot;

		[SerializeField]
		private SpriteRenderer mixed;

		[SerializeField]
		private SpriteRenderer tool;

		[SerializeField]
		private int number;

		[SerializeField]
		private float speed;

		[SerializeField]
		private Transform mask;

		[SerializeField]
		private MixingSauce mixingEffect;

		[SerializeField]
		private AudioSource audioSource;

		[SerializeField]
		private Collider2D coll2D;

		private Action _onComplete;

		public bool isLockRotation;

		public float boostSpeed;

		private int _count;

		private float _deltaAngle;

		private float _rate;

		private bool _isComplete;

		public Action<float> OnValueChange;

		private void OnEnable()
		{
		}

		public void Init(int numMix, Action onComplete)
		{
		}

		private void Update()
		{
		}

		private void OnMouseDown()
		{
		}

		private void OnMouseDrag()
		{
		}

		private void OnMouseUp()
		{
		}

		private float GetAngleABC(Vector2 pointA, Vector2 pointB, Vector2 pointC)
		{
			return 0f;
		}

		public void Restart()
		{
		}
	}
}
