using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class WaitPocket : ItemIdleBase
	{
		[SerializeField]
		private Transform itemSnapTf;

		[SerializeField]
		private Transform squareTF;

		[SerializeField]
		private TextMesh countItemInPocketTxt;

		private EIngredienType currentTypePocket;

		private int countItemInPocket;

		public Stack<IngredientItem> stackItemInPocket;

		protected override void Editor()
		{
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			return false;
		}

		public override void OnClickDown()
		{
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			return false;
		}
	}
}
