using System;
using Cysharp.Threading.Tasks;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public abstract class TutorialStep
	{
		public TutorialFocusSetting focus;

		public TutorialTargetRef target;

		public abstract UniTask Run(TutorialContext ctx);
	}
}
