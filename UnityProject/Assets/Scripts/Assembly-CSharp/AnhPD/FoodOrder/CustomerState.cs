using System;
using Spine;
using Spine.Unity;
using UnityEngine;
using UnityEngine.Serialization;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class CustomerState
	{
		[SerializeField]
		private Customer.State state;

		[SerializeField]
		[FormerlySerializedAs("anim")]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string onceAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string loopAnim;

		[SerializeField]
		private AudioClip sfx;

		public Action OnAnimationDone;

		public Action<string> OnSpineEvent;

		private Action _onDoneOnce;

		public Customer.State State => state;

		public string StateLabel => state.ToString();

		public AudioClip Sfx => sfx;

		public string StrAnim => onceAnim;

		public bool HasLoop => !string.IsNullOrEmpty(loopAnim);

		public bool IsEmpty
		{
			get
			{
				if (string.IsNullOrEmpty(onceAnim))
				{
					return string.IsNullOrEmpty(loopAnim);
				}
				return false;
			}
		}

		public void Enter(SkeletonAnimation skeletonAnimation, Action onDoneOnce, bool loop, string animOverride = null)
		{
			_onDoneOnce = onDoneOnce;
			string text = (string.IsNullOrEmpty(animOverride) ? onceAnim : animOverride);
			Spine.AnimationState animationState = skeletonAnimation.AnimationState;
			TrackEntry track;
			if (loop && !string.IsNullOrEmpty(loopAnim) && string.IsNullOrEmpty(animOverride))
			{
				if (!string.IsNullOrEmpty(text))
				{
					track = animationState.SetAnimation(0, text, false);
					Hook(track);
					track = animationState.AddAnimation(0, loopAnim, true, 0f);
				}
				else
				{
					track = animationState.SetAnimation(0, loopAnim, true);
				}
			}
			else
			{
				if (string.IsNullOrEmpty(text))
				{
					text = loopAnim;
				}
				if (string.IsNullOrEmpty(text))
				{
					OnComplete();
					return;
				}
				track = animationState.SetAnimation(0, text, loop);
			}
			Hook(track);
		}

		private void Hook(TrackEntry track)
		{
			track.Complete += delegate
			{
				OnComplete();
			};
			if (OnSpineEvent != null)
			{
				track.Event += delegate(TrackEntry entry, Spine.Event e)
				{
					if (e != null && e.Data != null && OnSpineEvent != null)
					{
						OnSpineEvent(e.Data.Name);
					}
				};
			}
		}

		private void OnComplete()
		{
			Action onDoneOnce = _onDoneOnce;
			_onDoneOnce = null;
			OnAnimationDone?.Invoke();
			onDoneOnce?.Invoke();
		}
	}
}
