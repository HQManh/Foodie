using DG.Tweening;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class IngredientCutted : IngredientItem
	{
		public override void OnMove(Vector3 pos, Quaternion rot, float time)
		{
			// TODO(unrecovered): the pseudocode clears an unnamed bool field of the base class and calls LevelControlCookOrder.DespawnHighlight, which is private in the stubs.
			TF.DOJump(pos, 0.75f, 1, time * 2f);
			TF.DORotateQuaternion(rot, time * 2f);
		}
	}
}
