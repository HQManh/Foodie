using System;
using CakeOrder.InGame.Sandwich;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class SandwichStackLayer
	{
		public SpriteRenderer render;

		public SandwichPiece piece;

		public float height;

		public float bottomOffset;

		public float topOffset;
	}
}
