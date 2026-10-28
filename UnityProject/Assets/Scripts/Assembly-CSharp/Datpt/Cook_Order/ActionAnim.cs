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
			gameObject.SetActive(startActive);
			Datpt.Utilities.DelayedCallScaled(delay, () =>
			{
				gameObject.SetActive(true);
				if (animation != null && animName != null)
				{
					animation.Play(animName.name);
					float length = animName.length;
					Datpt.Utilities.DelayedCallScaled(length, OnDone);
					PlayFx();
				}
			});
		}

		private void OnValidate()
		{
			animation = GetComponent<Animation>();
			if (animName == null)
			{
				return;
			}
			AnimationClip clip = animation.GetClip(animName.name);
			if (clip == null)
			{
				return;
			}
			animation.AddClip(animName, animName.name);
		}

		protected override void Setup()
		{
			OnValidate();
			if (animation == null)
			{
				gameObject.AddComponent<Animation>();
			}
			animation.playAutomatically = false;
		}

		public ActionMove.State GetState()
		{
			// The literals are "IdleItemAppear" and "IdleItemHide" (DAT_09204640 / DAT_09204648, decoded from the metadata).
			string clipName = animName.name;
			if (clipName == "IdleItemAppear")
			{
				return ActionMove.State.MoveIn;
			}
			return (clipName == "IdleItemHide") ? ActionMove.State.MoveOut : ActionMove.State.MoveIn;
		}
	}
}
