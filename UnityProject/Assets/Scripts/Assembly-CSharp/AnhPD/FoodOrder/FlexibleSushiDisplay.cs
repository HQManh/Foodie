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
				return (pieces[(int)piece] > 0) != hideWhenPresent;
			}
		}

		[SerializeField]
		private List<PieceVisual> visuals = new List<PieceVisual>();

		[Tooltip("Chỉ bật khi mới có nori + cơm (cuộn/đế trơn). Có nhân hoặc top nào là tắt.")]
		[SerializeField]
		private GameObject[] plainOnly;

		public bool CanShow(SushiPiece piece)
		{
			for (int i = 0; i < visuals.Count; i++)
			{
				PieceVisual pieceVisual = visuals[i];
				if (pieceVisual != null && pieceVisual.piece == piece && pieceVisual.visual != null && !pieceVisual.hideWhenPresent)
				{
					return true;
				}
			}
			return false;
		}

		public void Display(PieceSet pieces)
		{
			for (int i = 0; i < visuals.Count; i++)
			{
				PieceVisual pieceVisual = visuals[i];
				if (pieceVisual != null && pieceVisual.visual != null)
				{
					pieceVisual.visual.SetActive(pieceVisual.WantsActive(pieces));
				}
			}
			bool active = SushiPieceTable.IsPlainBase(pieces);
			for (int j = 0; j < plainOnly.Length; j++)
			{
				if (plainOnly[j] != null)
				{
					plainOnly[j].SetActive(active);
				}
			}
		}
	}
}
