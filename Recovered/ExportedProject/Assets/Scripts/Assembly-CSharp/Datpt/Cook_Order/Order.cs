using System;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class Order : ItemIdleBase
	{
		[SerializeField]
		protected Transform tfToScale;

		[SerializeField]
		protected float showTime;

		[SerializeField]
		protected GameObject completeIconOnOrderObj;

		protected bool isShowing;

		public Action OnCompleteOrder;

		public Action OnWrongOrder;

		public bool IsComplete { get; set; }

		protected override void Editor()
		{
		}

		public virtual void Init()
		{
		}

		public virtual void ShowOrder()
		{
		}

		public void OnChangeOrder()
		{
		}

		public virtual void HideOrder(Action onComplete = null)
		{
		}

		public virtual void ResetOrder()
		{
		}

		public override void OnClickDown()
		{
		}
	}
}
