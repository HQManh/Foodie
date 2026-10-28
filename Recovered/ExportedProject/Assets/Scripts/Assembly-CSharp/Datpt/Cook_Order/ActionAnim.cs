using UnityEngine;

namespace Datpt.Cook_Order
{
	[RequireComponent(typeof(Animation))]
	public class ActionAnim : ActionBase
	{
		[SerializeField]
		private Animation animation;

		[SerializeField]
		private AnimationClip animName;

		public override void OnActive()
		{
		}

		private void OnValidate()
		{
		}

		protected override void Setup()
		{
		}

		public ActionMove.State GetState()
		{
			return ActionMove.State.MoveIn;
		}
	}
}
