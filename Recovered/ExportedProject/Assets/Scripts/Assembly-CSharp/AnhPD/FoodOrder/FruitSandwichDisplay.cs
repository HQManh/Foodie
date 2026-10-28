using System;
using System.Collections.Generic;
using CakeOrder.InGame.Sandwich;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FruitSandwichDisplay : SandwichDisplayBase
	{
		[Serializable]
		public class PieceSprite
		{
			public SandwichPiece piece;

			public Sprite sprite;
		}

		[SerializeField]
		private List<GameObject> creams;

		[SerializeField]
		[Min(1f)]
		private int slotsPerGroup;

		[SerializeField]
		private List<SpriteRenderer> slots;

		[SerializeField]
		private List<PieceSprite> sprites;

		private readonly List<Sprite> _present;

		public override bool CanShow(SandwichPiece piece)
		{
			return false;
		}

		public override void Display(PieceSet pieces)
		{
		}

		private bool TryGetSprite(int kind, out Sprite sprite)
		{
			sprite = null;
			return false;
		}
	}
}
