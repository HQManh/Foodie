using System;
using UnityEngine;

namespace AnhPD.PopupMinigame
{
	public class TeaPot : FaucetHandle
	{
		[SerializeField]
		private Transform tfPour;

		[SerializeField]
		private SpriteRenderer spritePour;

		[SerializeField]
		private SpriteRenderer spriteNotPour;

		[SerializeField]
		private float validAngle;

		[SerializeField]
		private float maxPourAngle;

		private bool _isPress;

		private bool _isPouring;

		private void Awake()
		{
		}

		private void Start()
		{
		}

		private void OnMouseDown()
		{
		}

		private void OnMouseUp()
		{
		}

		public override void OnCancel()
		{
		}

		public override void OnRestart()
		{
		}

		private void StopPouring(Action callback = null)
		{
		}

		private void Update()
		{
		}
	}
}
