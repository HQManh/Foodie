using DG.Tweening;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[RequireComponent(typeof(SkeletonGraphic))]
	public class TutorialTalkCharacterSpine : TutorialTalkCharacterView
	{
		[SerializeField]
		private SkeletonGraphic skeleton;

		[SpineAnimation(null, null, true, true, false)]
		[SerializeField]
		private string idleAnim;

		[SpineAnimation(null, null, true, true, false)]
		[SerializeField]
		private string talkAnim;

		[SerializeField]
		private float mixDuration;

		[SerializeField]
		private bool unscaledTime;

		[Header("Fallback khi khong co anim talk")]
		[SerializeField]
		private RectTransform punchTarget;

		[SerializeField]
		private Vector2 punchScale;

		[SerializeField]
		private float punchDuration;

		private Tween _punchTween;

		private void Reset()
		{
		}

		private void Awake()
		{
		}

		private void OnEnable()
		{
		}

		public override void PlayTalk()
		{
		}

		private void Punch()
		{
		}

		private void PlayIdle()
		{
		}

		private bool Ready()
		{
			return false;
		}

		private bool Has(string animName)
		{
			return false;
		}
	}
}
