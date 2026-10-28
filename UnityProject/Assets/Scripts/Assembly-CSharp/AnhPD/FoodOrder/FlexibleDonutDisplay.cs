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
				return (pieces[(int)piece] > 0) != hideWhenPresent;
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

			public List<GlazeVisual> glazes = new List<GlazeVisual>();

			public List<FruitVisual> fruits = new List<FruitVisual>();

			public GameObject sprinkle;
		}

		[SerializeField]
		private List<ShapeVisual> shapes = new List<ShapeVisual>();

		public void Display(PieceSet pieces)
		{
			for (int i = 0; i < shapes.Count; i++)
			{
				ShapeVisual shape = shapes[i];
				if (shape == null)
				{
					continue;
				}
				int count = pieces[(int)shape.shape];
				if (shape.root != null)
				{
					shape.root.SetActive(count > 0);
				}
				if (count > 0)
				{
					DrawShape(shape, pieces);
				}
			}
		}

		private void DrawShape(ShapeVisual shape, PieceSet pieces)
		{
			if (shape == null)
			{
				return;
			}
			for (int i = 0; i < shape.glazes.Count; i++)
			{
				GlazeVisual glaze = shape.glazes[i];
				if (glaze != null && glaze.visual != null)
				{
					glaze.visual.SetActive(glaze.WantsActive(pieces));
				}
			}
			if (shape.sprinkle != null)
			{
				// piece kind 15 (sprinkle) per recovered code
				shape.sprinkle.SetActive(pieces[15] > 0);
			}
			DrawFruits(shape, pieces);
		}

		private void DrawFruits(ShapeVisual shape, PieceSet pieces)
		{
			int kinds = CountFruitKinds(pieces);
			if (shape == null)
			{
				return;
			}
			for (int i = 0; i < shape.fruits.Count; i++)
			{
				FruitVisual fruit = shape.fruits[i];
				if (fruit == null)
				{
					continue;
				}
				int count = pieces[(int)fruit.piece];
				if (fruit.solo != null)
				{
					fruit.solo.SetActive(kinds == 1 && count > 0);
				}
				if (fruit.shared != null)
				{
					fruit.shared.SetActive(count > 0 && kinds != 1);
				}
			}
		}

		private static int CountFruitKinds(PieceSet pieces)
		{
			int num = 0;
			foreach (var (kind, _) in pieces)
			{
				if (CafePieceTable.IsFruit((CoffeePiece)kind))
				{
					num++;
				}
			}
			return num;
		}
	}
}
