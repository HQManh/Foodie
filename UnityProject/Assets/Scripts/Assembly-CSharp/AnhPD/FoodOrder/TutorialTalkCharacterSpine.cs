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
		private string idleAnim = "idle"; /* literal recovered by guess */

		[SpineAnimation(null, null, true, true, false)]
		[SerializeField]
		private string talkAnim = "talk"; /* literal recovered by guess */

		[SerializeField]
		private float mixDuration = 0.15f;

		[SerializeField]
		private bool unscaledTime = true;

		[Header("Fallback khi khong co anim talk")]
		[SerializeField]
		private RectTransform punchTarget;

		[SerializeField]
		private Vector2 punchScale = new Vector2(0.1f, 0.1f);

		[SerializeField]
		private float punchDuration = 0.3f;

		private Tween _punchTween;

		private void Reset()
		{
			skeleton = GetComponent<SkeletonGraphic>();
		}

		private void Awake()
		{
			if (skeleton == null)
			{
				skeleton = GetComponent<SkeletonGraphic>();
			}
		}

		private void OnEnable()
		{
			if (!Ready())
			{
				return;
			}
			// TODO(unrecovered): SkeletonGraphic.unscaledTime is protected in the installed Spine version; original write not reproduced.
			skeleton.AnimationState.Data.DefaultMix = mixDuration;
			PlayIdle();
		}

		public override void PlayTalk()
		{
			if (!Ready())
			{
				return;
			}
			if (!Has(talkAnim))
			{
				Punch();
				return;
			}
			skeleton.AnimationState.SetAnimation(0, talkAnim, false);
			if (Has(idleAnim))
			{
				skeleton.AnimationState.AddAnimation(0, idleAnim, true, 0f);
			}
		}

		private void Punch()
		{
			RectTransform target = punchTarget != null ? punchTarget : transform as RectTransform;
			if (target == null)
			{
				return;
			}
			if (_punchTween != null)
			{
				_punchTween.Kill(true);
			}
			_punchTween = target.DOPunchScale(new Vector3(punchScale.x, punchScale.y, 0f), punchDuration, 2, 0.5f).SetUpdate(true);
		}

		private void PlayIdle()
		{
			if (!Has(idleAnim))
			{
				return;
			}
			skeleton.AnimationState.SetAnimation(0, idleAnim, true);
		}

		private bool Ready()
		{
			if (skeleton == null)
			{
				return false;
			}
			if (!skeleton.IsValid)
			{
				skeleton.Initialize(false);
			}
			return skeleton.IsValid;
		}

		private bool Has(string animName)
		{
			if (string.IsNullOrEmpty(animName))
			{
				return false;
			}
			var data = skeleton.SkeletonData;
			return data != null && data.FindAnimation(animName) != null;
		}
	}
}
