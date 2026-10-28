using System;
using System.Collections.Generic;
using CakeOrder.InGame.Sushi;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleSashimiDisplay : MonoBehaviour
	{
		[Serializable]
		public class FishSprite
		{
			public SushiPiece piece;

			public Sprite sprite;
		}

		[Serializable]
		public class Layout
		{
			public GameObject root;

			public List<SpriteRenderer> fish;

			public List<GameObject> leaves;
		}

		[Tooltip("Index 0 = 1 loại cá, 1 = 2 loại, 2 = 3 loại. Thứ tự fish = thứ tự loại cá.")]
		[SerializeField]
		private List<Layout> layouts;

		[SerializeField]
		private List<FishSprite> fishSprites;

		[SerializeField]
		private SushiPiece leafPiece;

		[Tooltip("Topping: bật/tắt theo piece, không chiếm slot cá.")]
		[SerializeField]
		private List<FlexibleSushiDisplay.PieceVisual> toppings;

		private readonly List<int> _kinds;

		public bool CanShow(SushiPiece piece)
		{
			return false;
		}

		public void Display(PieceSet pieces)
		{
		}

		private static void Show(SpriteRenderer renderer, Sprite sprite)
		{
		}

		private Sprite SpriteOf(int kind)
		{
			return null;
		}
	}
}
