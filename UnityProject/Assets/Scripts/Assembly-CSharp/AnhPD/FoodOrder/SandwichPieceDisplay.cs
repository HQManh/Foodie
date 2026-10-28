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
				return (pieces[(int)piece] > 0) != hideWhenPresent;
			}
		}

		[SerializeField]
		private List<PieceVisual> visuals = new List<PieceVisual>();

		public override bool CanShow(SandwichPiece piece)
		{
			foreach (PieceVisual v in visuals)
			{
				if (v != null && v.piece == piece && v.visual != null && !v.hideWhenPresent)
				{
					return true;
				}
			}
			return false;
		}

		public override void Display(PieceSet pieces)
		{
			foreach (PieceVisual v in visuals)
			{
				if (v == null)
				{
					continue;
				}
				if (v.visual != null)
				{
					v.visual.SetActive(v.WantsActive(pieces));
				}
			}
		}
	}
}
