using System;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public struct InteractVector
	{
		public int groupIndex;

		public int interactIndex;

		public bool IsValid => groupIndex >= 0 && interactIndex >= 0;

		public static InteractVector Invalid => new InteractVector(-1, -1);

		public InteractVector(int groupIndex, int interactIndex)
		{
			this.groupIndex = groupIndex;
			this.interactIndex = interactIndex;
		}
	}
}
