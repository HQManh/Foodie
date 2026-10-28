using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class BurgerFillingDisplay
	{
		public SpriteRenderer render;

		public FlexibleBurger.FillingType type;

		public float height = 0.2f;

		public float bottomOffset;

		public float topOffset;
	}
}
