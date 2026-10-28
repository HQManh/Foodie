using System;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class TutorialTargetRef
	{
		public TutorialTargetKind kind;

		public string id;

		public bool IsNone => false;
	}
}
