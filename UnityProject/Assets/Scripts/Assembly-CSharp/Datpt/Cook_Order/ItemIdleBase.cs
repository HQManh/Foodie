using System;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class ItemIdleBase : MonoBehaviour, IItem.IItemIdle, IItem.IItemBase
	{
		public virtual int OrderLayer
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public Transform TF => transform;

		public virtual bool IsDone => false;

		public virtual Transform OnTakeTF => transform;

		public virtual void OnClickDown()
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

		protected virtual void Editor()
		{
			// TODO(unrecovered): the pseudocode performs two unnamed component lookups (direct, then on the GameObject) with type arguments that are not recoverable from the stubs.
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
