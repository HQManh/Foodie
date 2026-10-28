using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class BurgerFillingDisplay
	{
		public SpriteRenderer render;

		public FlexibleBurger.FillingType type;

		public float height;

		public float bottomOffset;

		public float topOffset;
	}
}
