using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class Pepper : IngredientItem
	{
		[SerializeField]
		private Animation mainAnimation;

		[SerializeField]
		private AnimationClip dropAnimation;

		public bool IsDropping { get; set; }

		public override bool IsCanMove => true;

		public void ShowAnimationDrop()
		{
			if (dropAnimation != null)
			{
				mainAnimation.Play(dropAnimation.name);
			}
		}

		public override void OnClickDown()
		{
			base.OnClickDown();
			// TODO(unrecovered): SoundControl.Ins.PlayFX(<enum value 0>, false); the generic enum type is not recoverable from the pseudocode.
		}

		public override void OnDrop()
		{
			IsDropping = false;
			// TODO(unrecovered): the drop path scales the item's transform with DOTween, updates the layer from LevelControlCookOrder.GetHighestLayer, moves it out of the camera and then calls an IL2CPP virtual slot (0x378) and DespawnHighlight; the static pose data (DAT_0918cbd0) and the item-base helpers are not all in the stubs.
		}
	}
}
