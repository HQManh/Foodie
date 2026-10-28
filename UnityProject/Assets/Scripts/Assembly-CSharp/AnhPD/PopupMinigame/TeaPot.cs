using System;
using DG.Tweening;
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
			EvtOnMouseDown += OnMouseDown;
			EvtOnMouseUp += OnMouseUp;
		}

		private void Start()
		{
			if (tfPour != null)
			{
				transform.position = tfPour.position;
				transform.eulerAngles = tfPour.eulerAngles;
			}
			Physics2D.SyncTransforms();
		}

		private void OnMouseDown()
		{
			if (!IsBlock)
			{
				transform.DOKill();
				transform.DORotate(new Vector3(0f, 0f, maxPourAngle), 0.5f);
				_isPress = true;
			}
		}

		private void OnMouseUp()
		{
			if (!IsBlock && _isPress)
			{
				StopPouring(() => onFinish?.Invoke());
			}
		}

		public override void OnCancel()
		{
			_isPress = false;
		}

		public override void OnRestart()
		{
			StopPouring();
		}

		private void StopPouring(Action callback = null)
		{
			transform.DOKill();
			_isPouring = false;
			onStopPouring?.Invoke();
			// TODO(unrecovered): rotation target is read from a static Vector3 cache (DAT_0918cbd0+0xb8); Vector3.zero is a placeholder.
			transform.DORotate(Vector3.zero, 0.3f).OnComplete(() => callback?.Invoke());
		}

		private void Update()
		{
			if (spritePour == null)
			{
				return;
			}
			spritePour.enabled = _isPouring;
			if (spriteNotPour == null)
			{
				return;
			}
			spriteNotPour.enabled = !_isPouring;
			if (!_isPress)
			{
				return;
			}
			float angle = transform.localEulerAngles.z;
			_isPouring = validAngle < angle;
			if (validAngle < angle && !IsBlock && onPouring != null)
			{
				onPouring.Invoke((angle - validAngle) / (maxPourAngle - validAngle));
			}
		}
	}
}
