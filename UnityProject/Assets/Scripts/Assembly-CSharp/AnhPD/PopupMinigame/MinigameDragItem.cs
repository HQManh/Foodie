using CakeOrder;
using System;
using CakeOrder.PopupMinigame;
using DG.Tweening;
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
		protected float minY = -4f;

		[SerializeField]
		protected float rewindDuration = 0.5f;

		[SerializeField]
		protected float pickupAngle;

		[SerializeField]
		protected float offsetY;

		public bool isReady;

		public bool isBlock;

		[SerializeField]
		protected bool isGetMouseOffset = true;

		[SerializeField]
		protected bool isRotateWhenPickUp;

		public UnityEvent onMouseDown;

		public UnityEvent onMouseUp;

		public UnityEvent onRewind;

		public UnityEvent onLanded;

		private Vector3 _mOffset;

		protected bool isDragging;

		protected static int _minLayer;

		protected static int _maxLayer = 30;

		private Transform _tf;

		public Transform Tf
		{
			get
			{
				if (_tf == null)
				{
					_tf = transform;
				}
				return _tf;
			}
		}

		protected virtual void Awake()
		{
			if (center == null)
			{
				center = Tf;
			}
			// TODO(unrecovered): Awake also subscribes MouseDown / MouseUp / MouseDrag to the base CakeMinigameRaycastReceiver events (EvtOnMouseDown/Up/Drag, CakeOrder.PopupMinigame, not in stubs).
		}

		public virtual void InitProperties()
		{
			coll2D = GetComponent<Collider2D>();
			sortingGroup = GetComponent<SortingGroup>();
			if (sortingGroup != null)
			{
				sortingGroup.sortingOrder = _minLayer;
				// TODO(unrecovered): sizeInit / sizeInCrease / startPos / startRotation are set from two float arguments of the compiled InitProperties(float, float) that the stub signature does not carry.
			}
		}

		private Vector3 GetMouseWorldPos()
		{
			// TODO(unrecovered): callee FUN_089db038 (mouse-to-world conversion) is an unnamed helper; not recovered.
			return default;
		}

		protected new void MouseDown()
		{
			if (isBlock)
			{
				return;
			}
			if (onMouseDown != null)
			{
				onMouseDown.Invoke();
			}
			AudioManagerCakeOrder.Instance.PlaySfxWithFixedPitch(sfxPick, (AudioManagerCakeOrder.AudioTrack)4, 1f, 1f); // pitch recovered by guess (pseudocode passes 0)
			// TODO(unrecovered): the isGetMouseOffset branch needs GetMouseWorldPos (now in this stub) and the arguments of the compiled MouseDown, which the stub signature does not carry.
			Transform tf = Tf;
			tf.DOKill();
			tf.DOScale(sizeInCrease, 0.15f).SetEase(Ease.Linear);
			if (isRotateWhenPickUp)
			{
				// TODO(unrecovered): DOLocalRotate on pickup uses the pickupAngle/localEulerAngles path whose arguments are not recovered.
			}
			if (sortingGroup != null)
			{
				sortingGroup.sortingOrder = _maxLayer;
			}
			isDragging = true;
		}

		protected new virtual void MouseUp()
		{
			if (!isBlock && isDragging)
			{
				isDragging = false;
				if (onMouseUp != null)
				{
					onMouseUp.Invoke();
				}
				Rewind();
			}
		}

		protected virtual void MouseDrag()
		{
			if (!isBlock && isDragging)
			{
				ClampPosition();
			}
		}

		private void ClampPosition()
		{
			// TODO(unrecovered): depends on GetMouseWorldPos (now in this stub) and on a float argument of the compiled ClampPosition that the stub does not carry.
		}

		public void Rewind(Action completeAction = null)
		{
			if (onRewind != null)
			{
				onRewind.Invoke();
			}
			isDragging = false;
			// TODO(unrecovered): the rewind tweens (DOLocalMove to startPos, DOScale to sizeInit, DOLocalRotate to startRotation, then completeAction) depend on a float argument of the compiled Rewind that the stub does not carry.
		}

		public virtual void OnComplete()
		{
			if (gameObject == null)
			{
				return;
			}
			gameObject.SetActive(true);
			isDragging = false;
			isReady = false;
			Rewind();
		}

		public void EnableCollider(bool isEnable = true)
		{
			if (coll2D != null)
			{
				coll2D.enabled = isEnable;
			}
		}

		public void ReturnToStartPos(Action callback = null)
		{
			if (gameObject == null)
			{
				return;
			}
			gameObject.SetActive(true);
			Rewind(callback);
		}
	}
}
