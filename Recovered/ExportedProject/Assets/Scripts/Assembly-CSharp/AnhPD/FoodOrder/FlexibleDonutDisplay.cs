using System;
using System.Collections.Generic;
using CakeOrder.InGame.Coffee;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleDonutDisplay : MonoBehaviour
	{
		[Serializable]
		public class GlazeVisual
		{
			public CoffeePiece piece;

			public GameObject visual;

			[Tooltip("Bật khi KHÔNG có piece — dùng cho biến thể mặc định (bánh trơn khi chưa phủ gì).")]
			public bool hideWhenPresent;

			public bool WantsActive(PieceSet pieces)
			{
				return false;
			}
		}

		[Serializable]
		public class FruitVisual
		{
			public CoffeePiece piece;

			[Tooltip("Bật khi quả này là loại DUY NHẤT trên bánh — hình rải kín một mình.")]
			public GameObject solo;

			[Tooltip("Bật khi có từ 2 loại quả trở lên — hình chỉ chiếm phần chỗ của nó.")]
			public GameObject shared;
		}

		[Serializable]
		public class ShapeVisual
		{
			public CoffeePiece shape;

			public GameObject root;

			public List<GlazeVisual> glazes;

			public List<FruitVisual> fruits;

			public GameObject sprinkle;
		}

		[SerializeField]
		private List<ShapeVisual> shapes;

		public void Display(PieceSet pieces)
		{
		}

		private void DrawShape(ShapeVisual shape, PieceSet pieces)
		{
		}

		private void DrawFruits(ShapeVisual shape, PieceSet pieces)
		{
		}

		private static int CountFruitKinds(PieceSet pieces)
		{
			return 0;
		}
	}
}
