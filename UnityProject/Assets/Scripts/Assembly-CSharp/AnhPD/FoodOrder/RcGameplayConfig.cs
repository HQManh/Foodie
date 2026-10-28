using System;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class RcGameplayConfig
	{
		public DragItem prefab;

		public RcGameplayConfig(DragItem prefab)
		{
			this.prefab = prefab;
		}
	}
}
