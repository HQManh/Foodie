using System;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class PocketRandomItem : ItemIdleBase
	{
		[SerializeField]
		protected TextMesh countTmp;

		[SerializeField]
		protected GameObject itemOnPocketVisualObj;

		[SerializeField]
		protected bool isRandomItemCutted;

		[SerializeField]
		protected Transform tfToShowAnimFilled;

		[field: SerializeField]
		public int PocketNum { get; set; }

		protected virtual void Start()
		{
		}

		public void AddPocketNum(int value)
		{
		}

		public void UpdateVisualCount()
		{
		}

		public override void OnClickDown()
		{
		}

		public void ShowAnimFilled(Action onComplete = null)
		{
		}
	}
}
