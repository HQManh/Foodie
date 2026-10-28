using System;
using DG.Tweening;
using MoreMountains.NiceVibrations;
using UnityEngine;
using UnityEngine.Rendering;

namespace Datpt.Cook_Order
{
	[RequireComponent(typeof(SortingGroup))]
	public class ItemMovingBase : PoolingObject, IItem.IItemMoving, IItem.IItemBase
	{
		protected const int INIT_TARGET_ORDER = -1000;

		protected int targetOrder = INIT_TARGET_ORDER;

		[SerializeField]
		protected Collider2D collider;

		[SerializeField]
		protected SortingGroup sprite;

		[SerializeField]
		protected float delaySaveTime;

		[SerializeField]
		protected bool canRemoveByRecycle = true;

		protected Vector2 savePoint;

		protected Quaternion saveRot;

		protected LoopRotateCircle currentHighlight;

		protected bool isOnClick;

		public Transform TF => transform;

		public virtual Transform OnTakeTF => transform;

		public virtual bool IsCanMove => false;

		public int OrderLayer
		{
			get
			{
				return sprite != null ? sprite.sortingOrder : 0;
			}
			set
			{
				if (sprite != null)
				{
					sprite.sortingOrder = value;
				}
			}
		}

		public virtual bool IsDone { get; protected set; }

		public virtual bool CanRemoveByRecycle => canRemoveByRecycle;

		protected virtual void Start()
		{
			OnSave(delaySaveTime);
		}

		public override void OnSpawn()
		{
			base.OnSpawn();
			LevelControlCookOrder.Ins.AddItemMoving(this);
		}

		public override void Despawn()
		{
			base.Despawn();
			isOnClick = false;
			LevelControlCookOrder.Ins.DespawnHighlight();
			LevelControlCookOrder.Ins.RemoveItemMovingToCheckCanTake(this);
		}

		protected virtual void Update()
		{
			// TODO(unrecovered): the highlight check uses Physics2D.OverlapCircle, a LayerMask lookup and a highlight singleton that are not in the stubs.
		}

		protected void CheckItemMovingMoveOverHightLight()
		{
			// TODO(unrecovered): the highlight check uses Physics2D.OverlapCircle, a LayerMask lookup and a highlight singleton that are not in the stubs.
		}

		public void SetDelayTime(float time)
		{
			// TODO(unrecovered): the pseudocode looks up a delay-config entry through unnamed IL2CPP list helpers and a debug log; these are not in the stubs.
		}

		public virtual void OnBack()
		{
			if (sprite != null)
			{
				sprite.sortingOrder = 50;
			}

			// TODO(unrecovered): the rest of OnBack runs DOMove and DORotateQuaternion tweens with a TweenCallback to a virtual slot (0x3b0) whose target is not recoverable from the stubs.
		}

		public virtual void OnClickDown()
		{
			transform.DOKill();
			transform.DOScale(1.2f, 0.1f);
			if (sprite != null)
			{
				sprite.sortingOrder = 50;
				isOnClick = true;
				MMVibrationManager.Haptic(HapticTypes.LightImpact);
				LevelControlCookOrder ins = LevelControlCookOrder.Ins;
				if (ins != null)
				{
					ins.CheckCanTakeItemMoving(this);
				}
			}
		}

		public virtual void OnClickTake()
		{
			transform.DOScale(1f, 0.1f);
			// TODO(unrecovered): the pseudocode then calls a virtual slot (0x3a8) with the 0x3b0 method argument; the slot target is not recoverable from the stubs.
		}

		public virtual void CheckOrderLayer()
		{
			if (targetOrder < -999)
			{
				// TODO(unrecovered): the pseudocode computes the layer with LevelControlCookOrder.GetHighestNoneContactLayer(this, position) and assigns it; the method now exists in the stubs, but the assignment target and the exact arguments are not fully recovered.
				return;
			}

			if (sprite != null)
			{
				sprite.sortingOrder = targetOrder;
				targetOrder = INIT_TARGET_ORDER;
			}
		}

		public virtual void OnDrop()
		{
			isOnClick = false;
			transform.DOScale(1f, 0.1f);
			LevelControlCookOrder ins = LevelControlCookOrder.Ins;
			if (ins != null && sprite != null)
			{
				sprite.sortingOrder = ins.GetHighestLayer(this, transform.position) + 1;
				MMVibrationManager.Haptic(HapticTypes.SoftImpact);
			}
			// TODO(unrecovered): the rest of OnDrop moves an out-of-camera item back with a DOMove tween whose target uses a static Vector3 at DAT_0918cbd0 +0xb8 and a garbled direction normalisation (owner and math not reliable), then calls LevelControlCookOrder.DespawnHighlight, which is private in the stubs. The haptic is now written.
		}

		public virtual void OnMove(Vector3 pos, Quaternion rot, float time)
		{
			isOnClick = false;
			transform.DOMove(pos, time);
			transform.DORotateQuaternion(rot, time);
			LevelControlCookOrder.Ins.DespawnHighlight();
		}

		public virtual void OnSavePoint()
		{
			savePoint = transform.position;
			saveRot = transform.rotation;
		}

		public void OnSavePointAt(Vector3 pos, Quaternion rot)
		{
			savePoint = pos;
			saveRot = rot;
		}

		public void OnSave(float delayTime)
		{
			// The pseudocode schedules a delayed call whose method-name literal is not recoverable; it is inferred to be OnSavePoint.
			Invoke(nameof(OnSavePoint), delayTime);
		}

		public virtual bool OnTake(IItem.IItemMoving item)
		{
			return false;
		}

		public virtual void ChangeState<T>(T t) where T : Enum
		{
		}

		public virtual bool IsState<T>(T t) where T : Enum
		{
			return false;
		}

		public bool IsState<T>(params T[] ts) where T : Enum
		{
			return false;
		}

		public void IfChangeState<T>(T i, T c) where T : Enum
		{
		}

		public virtual void OnDone()
		{
			if (collider != null)
			{
				collider.enabled = false;
			}
		}

		public virtual void SetColliderStateBase(bool state)
		{
			if (collider != null)
			{
				collider.enabled = state;
			}
		}

		protected virtual void Editor()
		{
			sprite = GetComponent<SortingGroup>();
			collider = GetComponent<Collider2D>();
			// TODO(unrecovered): the pseudocode falls back to unnamed child-level component lookups when these are null; their type arguments are not recoverable from the stubs.
		}

		protected bool IsOutCamera()
		{
			// TODO(unrecovered): the viewport test uses Camera.main.WorldToViewportPoint, but the decompiled comparison constants and branch structure are garbled and cannot be reproduced reliably.
			return false;
		}

		protected void OnShake(bool shake)
		{
			if (!shake)
			{
				transform.DOKill();
			}
			// TODO(unrecovered): the shake branch uses a DOShakePosition tween with a config-driven strength; the tween helper and config are not in the stubs.
		}

		public void SetOrder(int order)
		{
			targetOrder = order;
		}

		public virtual void OnSliceVertical()
		{
		}

		public virtual bool CheckCanTake(IItem.IItemMoving item)
		{
			return false;
		}
	}
}
