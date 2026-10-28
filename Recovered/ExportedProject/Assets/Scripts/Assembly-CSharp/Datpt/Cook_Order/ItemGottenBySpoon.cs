using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class ItemGottenBySpoon : ItemIdleBase
	{
		[SerializeField]
		protected Transform itemTf;

		[SerializeField]
		protected Transform tfToScale;

		[SerializeField]
		protected ObjectShaking objectShaking;

		[SerializeField]
		protected bool isDecreaseScale;

		[SerializeField]
		protected float itemTakenNum;

		protected float itemTakenCount;

		[CompilerGenerated]
		private Action m_OnItemGotten;

		public bool IsCooked { get; set; }

		public bool IsHaveItem { get; set; }

		public event Action OnItemGotten
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		protected override void Editor()
		{
		}

		public virtual void OnTakenBySpoon()
		{
		}

		public void OnItemGottenEmit()
		{
		}
	}
}
