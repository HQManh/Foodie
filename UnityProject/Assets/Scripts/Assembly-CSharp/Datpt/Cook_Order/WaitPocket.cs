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
			base.Editor();
			squareTF = transform.Find("Square"); /* literal recovered by guess */
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the body type-checks the item against two unnamed IL2CPP classes (DAT_09186bf0/DAT_09186bf8), pushes it on stackItemInPocket, then runs virtual move/scale calls (slots 0x3c8, 0x428) and DOTween callbacks; the target classes and virtual members are not identified in stubs.
			return false;
		}

		public override void OnClickDown()
		{
			// TODO(unrecovered): pops from stackItemInPocket, decrements countItemInPocket, updates countItemInPocketTxt, clears currentTypePocket when empty; the DOTween punch/scale feedback, SoundControl PlayFX(3) and the virtual calls on the popped item (slots 0x428/0x488) are not confirmed by stubs.
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): compares the item against two unnamed IL2CPP classes (DAT_09186bf0/bf8) and the item's ingredient type against currentTypePocket; the class identities and the item's type property are not in stubs.
			return false;
		}
	}
}
