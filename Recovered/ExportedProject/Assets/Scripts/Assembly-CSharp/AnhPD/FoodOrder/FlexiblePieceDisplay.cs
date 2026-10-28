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
				return false;
			}
		}

		[SerializeField]
		private List<PieceVisual> visuals;

		public void Display(PieceSet pieces)
		{
		}

		private static int CountFruitKinds(PieceSet pieces)
		{
			return 0;
		}
	}
}
