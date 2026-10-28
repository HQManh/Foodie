using System;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public struct InteractVector
	{
		public int groupIndex;

		public int interactIndex;

		public bool IsValid => false;

		public static InteractVector Invalid => default;

		public InteractVector(int groupIndex, int interactIndex)
		{
			this.groupIndex = 0;
			this.interactIndex = 0;
		}
	}
}
