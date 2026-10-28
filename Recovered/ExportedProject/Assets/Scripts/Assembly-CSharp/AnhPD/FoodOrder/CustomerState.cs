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

		public Customer.State State => Customer.State.Idle;

		public string StateLabel => null;

		public AudioClip Sfx => null;

		public string StrAnim => null;

		public bool HasLoop => false;

		public bool IsEmpty => false;

		public void Enter(SkeletonAnimation skeletonAnimation, Action onDoneOnce, bool loop, string animOverride = null)
		{
		}

		private void Hook(TrackEntry track)
		{
		}

		private void OnComplete()
		{
		}
	}
}
