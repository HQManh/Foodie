using System;
using System.Collections.Generic;
using CakeOrder.InGame.IceCream;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IceCreamPieceDisplay : MonoBehaviour
	{
		[Serializable]
		public class PieceVisual
		{
			public IceCreamPiece piece;

			public GameObject visual;

			[Tooltip("Bật khi KHÔNG có piece — dùng cho biến thể mặc định.")]
			public bool hideWhenPresent;

			public bool WantsActive(PieceSet pieces)
			{
				return (pieces[(int)piece] > 0) != hideWhenPresent;
			}
		}

		[SerializeField]
		private List<PieceVisual> visuals;

		[SerializeField]
		private IceCreamDecorLayout decor;

		public virtual bool CanShow(IceCreamPiece piece)
		{
			if (decor != null && decor.CanShow(piece))
			{
				return true;
			}
			if (visuals == null)
			{
				return false;
			}
			foreach (PieceVisual visual in visuals)
			{
				if (visual.piece == piece && visual.visual != null && !visual.hideWhenPresent)
				{
					return true;
				}
			}
			return false;
		}

		public virtual void Display(PieceSet pieces, IReadOnlyList<int> scoopOrder)
		{
			if (visuals != null)
			{
				foreach (PieceVisual visual in visuals)
				{
					if (visual.visual != null)
					{
						visual.visual.SetActive(visual.WantsActive(pieces));
					}
				}
			}
			if (decor != null)
			{
				decor.Display(pieces);
			}
		}

		public virtual void Display(PieceSet pieces)
		{
			Display(pieces, null);
		}
	}
}
