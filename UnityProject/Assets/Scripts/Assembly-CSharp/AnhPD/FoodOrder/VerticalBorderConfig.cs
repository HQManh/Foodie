using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class VerticalBorderConfig
	{
		public float scale;

		public List<float> posY;

		public VerticalBorderConfig(float scale, List<float> posY)
		{
			this.scale = scale;
			this.posY = posY;
		}
	}
}
