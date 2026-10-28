using System;
using System.Collections.Generic;
using CakeOrder.InGame.Sandwich;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SandwichPieceDisplay : SandwichDisplayBase
	{
		[Serializable]
		public class PieceVisual
		{
			public SandwichPiece piece;

			public GameObject visual;

			[Tooltip("Bật khi KHÔNG có piece — dùng cho biến thể mặc định.")]
			public bool hideWhenPresent;

			public bool WantsActive(PieceSet pieces)
			{
				return false;
			}
		}

		[SerializeField]
		private List<PieceVisual> visuals;

		public override bool CanShow(SandwichPiece piece)
		{
			return false;
		}

		public override void Display(PieceSet pieces)
		{
		}
	}
}
