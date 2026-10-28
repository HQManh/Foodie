using System;
using CakeOrder.PopupMinigame;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Rendering;

namespace AnhPD.PopupMinigame
{
	public class MinigameDragItem : CakeMinigameRaycastReceiver
	{
		[SerializeField]
		protected Collider2D coll2D;

		[SerializeField]
		protected SortingGroup sortingGroup;

		[SerializeField]
		protected Transform center;

		[SerializeField]
		protected AudioClip sfxPick;

		[SerializeField]
		protected AudioClip sfxPlace;

		[SerializeField]
		protected Vector3 sizeInit;

		[SerializeField]
		protected Vector3 sizeInCrease;

		[SerializeField]
		protected Vector2 startPos;

		[SerializeField]
		protected Vector3 startRotation;

		[SerializeField]
		protected float minY;

		[SerializeField]
		protected float rewindDuration;

		[SerializeField]
		protected float pickupAngle;

		[SerializeField]
		protected float offsetY;

		public bool isReady;

		public bool isBlock;

		[SerializeField]
		protected bool isGetMouseOffset;

		[SerializeField]
		protected bool isRotateWhenPickUp;

		public UnityEvent onMouseDown;

		public UnityEvent onMouseUp;

		public UnityEvent onRewind;

		public UnityEvent onLanded;

		private Vector3 _mOffset;

		protected bool isDragging;

		protected static int _minLayer;

		protected static int _maxLayer;

		private Transform _tf;

		public Transform Tf => null;

		protected virtual void Awake()
		{
		}

		public virtual void InitProperties()
		{
		}

		private Vector3 GetMouseWorldPos()
		{
			return default;
		}

		protected new void MouseDown()
		{
		}

		protected new virtual void MouseUp()
		{
		}

		protected virtual void MouseDrag()
		{
		}

		private void ClampPosition()
		{
		}

		public void Rewind(Action completeAction = null)
		{
		}

		public virtual void OnComplete()
		{
		}

		public void EnableCollider(bool isEnable = true)
		{
		}

		public void ReturnToStartPos(Action callback = null)
		{
		}
	}
}
