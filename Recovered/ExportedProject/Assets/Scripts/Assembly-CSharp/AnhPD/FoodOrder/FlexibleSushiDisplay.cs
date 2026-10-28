using System;
using System.Collections.Generic;
using CakeOrder.InGame.Sushi;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleSushiDisplay : MonoBehaviour
	{
		[Serializable]
		public class PieceVisual
		{
			public SushiPiece piece;

			public GameObject visual;

			[Tooltip("Bật khi KHÔNG có piece — dùng cho biến thể mặc định (món trơn khi chưa có nhân).")]
			public bool hideWhenPresent;

			public bool WantsActive(PieceSet pieces)
			{
				return false;
			}
		}

		[SerializeField]
		private List<PieceVisual> visuals;

		[Tooltip("Chỉ bật khi mới có nori + cơm (cuộn/đế trơn). Có nhân hoặc top nào là tắt.")]
		[SerializeField]
		private GameObject[] plainOnly;

		public bool CanShow(SushiPiece piece)
		{
			return false;
		}

		public void Display(PieceSet pieces)
		{
		}
	}
}
