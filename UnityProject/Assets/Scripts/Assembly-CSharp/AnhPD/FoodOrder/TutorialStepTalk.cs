using System;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class TutorialStepTalk : TutorialStep
	{
		public TutorialTalkStyle style;

		[Tooltip("English source lines.")]
		[TextArea(2, 4)]
		public string[] lines;

		[Tooltip("UI_Common keys for the lines above, same order. Filled by CookOrder/Localization/Extract.")]
		public string[] lineKeys;

		[Tooltip("Khong tap sau bao nhieu giay thi hien tay chi cua TalkView (<= 0 = tat)")]
		public float idleHandDelay = 3f;

		public string[] LocalizedLines()
		{
			// TODO(unrecovered): lookup goes through CakeOrder.Localization.CakeLocalization.Get, which is not in the project.
			return null;
		}

		public override UniTask Run(TutorialContext ctx)
		{
			TutorialTalkView talk = ctx.Talk;
			if (talk != null)
			{
				return talk.ShowAsync(this, ctx.HasFocus);
			}
			return UniTask.CompletedTask;
		}
	}
}
