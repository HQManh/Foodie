using System;
using System.Collections.Generic;
using CakeOrder.InGame.Coffee;
using UnityEngine;
using UnityEngine.Serialization;

namespace AnhPD.FoodOrder
{
	public class FlexiblePieceDisplay : MonoBehaviour
	{
		[Serializable]
		public class PieceVisual
		{
			public CoffeePiece piece;

			[Tooltip("Hình dùng chung — mọi trường hợp, trừ khi quả này đứng một mình VÀ có gán solo.")]
			[FormerlySerializedAs("visual")]
			public GameObject shared;

			[Tooltip("CHỈ áp dụng cho quả: bật khi nó là loại quả DUY NHẤT trên món. Bỏ trống → dùng shared.")]
			public GameObject solo;

			[Tooltip("Bật khi KHÔNG có piece — dùng cho biến thể mặc định (nước cà phê trơn khi chưa có sữa).")]
			public bool hideWhenPresent;

			public bool WantsActive(PieceSet pieces)
			{
				return (pieces[(int)piece] > 0) != hideWhenPresent;
			}
		}

		[SerializeField]
		private List<PieceVisual> visuals = new List<PieceVisual>();

		public void Display(PieceSet pieces)
		{
			int num = CountFruitKinds(pieces);
			for (int i = 0; i < visuals.Count; i++)
			{
				PieceVisual pieceVisual = visuals[i];
				if (pieceVisual != null)
				{
					bool flag = pieceVisual.WantsActive(pieces);
					bool flag2 = num == 1 && pieceVisual.solo != null && CafePieceTable.IsFruit(pieceVisual.piece);
					if (pieceVisual.solo != null)
					{
						pieceVisual.solo.SetActive(flag && flag2);
					}
					if (pieceVisual.shared != null)
					{
						pieceVisual.shared.SetActive(flag && !flag2);
					}
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
