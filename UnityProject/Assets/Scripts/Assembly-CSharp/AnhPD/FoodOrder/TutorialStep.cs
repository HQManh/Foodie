using System;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public abstract class TutorialStep
	{
		public TutorialFocusSetting focus = new TutorialFocusSetting
		{
			enabled = true,
			size = new Vector2(2f, 2f),
			shrinkDuration = 0.35f,
			follow = true
		};

		public TutorialTargetRef target = new TutorialTargetRef();

		public abstract UniTask Run(TutorialContext ctx);
	}
}
