using System;
using UnityEngine;
using UnityEngine.Rendering;

namespace Datpt.Cook_Order
{
	[RequireComponent(typeof(SortingGroup))]
	public class ItemMovingBase : PoolingObject, IItem.IItemMoving, IItem.IItemBase
	{
		protected const int INIT_TARGET_ORDER = -1000;

		protected int targetOrder;

		[SerializeField]
		protected Collider2D collider;

		[SerializeField]
		protected SortingGroup sprite;

		[SerializeField]
		protected float delaySaveTime;

		[SerializeField]
		protected bool canRemoveByRecycle;

		protected Vector2 savePoint;

		protected Quaternion saveRot;

		protected LoopRotateCircle currentHighlight;

		protected bool isOnClick;

		public Transform TF => null;

		public virtual Transform OnTakeTF => null;

		public virtual bool IsCanMove => false;

		public int OrderLayer
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public virtual bool IsDone { get; protected set; }

		public virtual bool CanRemoveByRecycle => false;

		protected virtual void Start()
		{
		}

		public override void OnSpawn()
		{
		}

		public override void Despawn()
		{
		}

		protected virtual void Update()
		{
		}

		protected void CheckItemMovingMoveOverHightLight()
		{
		}

		public void SetDelayTime(float time)
		{
		}

		public virtual void OnBack()
		{
		}

		public virtual void OnClickDown()
		{
		}

		public virtual void OnClickTake()
		{
		}

		public virtual void CheckOrderLayer()
		{
		}

		public virtual void OnDrop()
		{
		}

		public virtual void OnMove(Vector3 pos, Quaternion rot, float time)
		{
		}

		public virtual void OnSavePoint()
		{
		}

		public void OnSavePointAt(Vector3 pos, Quaternion rot)
		{
		}

		public void OnSave(float delayTime)
		{
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
		}

		public virtual void SetColliderStateBase(bool state)
		{
		}

		protected virtual void Editor()
		{
		}

		protected bool IsOutCamera()
		{
			return false;
		}

		protected void OnShake(bool shake)
		{
		}

		public void SetOrder(int order)
		{
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
