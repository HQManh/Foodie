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

		public override bool IsCanMove => false;

		public void ShowAnimationDrop()
		{
		}

		public override void OnClickDown()
		{
		}

		public override void OnDrop()
		{
		}
	}
}
