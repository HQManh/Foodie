using System;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class ProgressDriverContext
	{
		public float duration;

		public Action onComplete;

		public Action onHalfway;
	}
}
