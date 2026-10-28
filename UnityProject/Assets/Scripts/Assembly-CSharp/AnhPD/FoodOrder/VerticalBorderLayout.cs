using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class VerticalBorderLayout : OrderLayout
	{
		public VerticalBorderConfig[] _configs = new VerticalBorderConfig[]
		{
			new VerticalBorderConfig(1f, new List<float> { 0f }),
			new VerticalBorderConfig(0.9f, new List<float> { 0.3f, -0.3f }),
			new VerticalBorderConfig(0.8f, new List<float> { 0.47f, 0f, -0.47f })
		};

		public override void DoLayout()
		{
			// TODO(unrecovered): the child-collection loop depends on two unresolved type-info refs (DAT_09185a58 / DAT_09185b10) and IL2CPP generic component lookups, and the element type of the collected list is not in the stubs; the tween/position tail is clear but cannot be attached without those types.
		}
	}
}
