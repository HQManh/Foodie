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
		protected bool isDecreaseScale = true;

		[SerializeField]
		protected float itemTakenNum = 2f;

		protected float itemTakenCount;

		[CompilerGenerated]
		private Action m_OnItemGotten;

		public bool IsCooked { get; set; }

		public bool IsHaveItem { get; set; } = true;

		public event Action OnItemGotten
		{
			[CompilerGenerated]
			add
			{
				m_OnItemGotten = (Action)Delegate.Combine(m_OnItemGotten, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnItemGotten = (Action)Delegate.Remove(m_OnItemGotten, value);
			}
		}

		protected override void Editor()
		{
			base.Editor();
			itemTf = transform;
			tfToScale = transform.Find("Square" /* literal recovered by guess */);
			objectShaking = GetComponent<ObjectShaking>();
		}

		public virtual void OnTakenBySpoon()
		{
			// TODO(unrecovered): the pseudocode kills and rescales tfToScale with DOTween punch/scale tweens and reads a scale config from an unnamed singleton; these are not in the stubs.
		}

		public void OnItemGottenEmit()
		{
			m_OnItemGotten?.Invoke();
		}
	}
}
