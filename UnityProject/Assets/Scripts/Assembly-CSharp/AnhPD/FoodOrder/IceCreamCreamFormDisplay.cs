using System;
using System.Collections.Generic;
using CakeOrder.InGame.IceCream;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IceCreamCreamFormDisplay : IceCreamPieceDisplay
	{
		[Serializable]
		public class Form
		{
			public GameObject root;

			public List<PieceVisual> visuals = new List<PieceVisual>();

			public IceCreamDecorLayout decor;

			public bool CanShow(IceCreamPiece piece)
			{
				if (decor != null && decor.CanShow(piece))
				{
					return true;
				}
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

			public void Show(bool on, PieceSet pieces)
			{
				if (root != null)
				{
					root.SetActive(on);
				}
				if (!on)
				{
					return;
				}
				for (int i = 0; i < visuals.Count; i++)
				{
					PieceVisual pieceVisual = visuals[i];
					if (pieceVisual != null && pieceVisual.visual != null)
					{
						pieceVisual.visual.SetActive(pieceVisual.WantsActive(pieces));
					}
				}
				if (decor != null)
				{
					decor.Display(pieces);
				}
			}
		}

		[SerializeField]
		private Form plain = new Form();

		[Tooltip("Replaces plain when the milkshake has whipped cream.")]
		[SerializeField]
		private Form cream = new Form();

		public override bool CanShow(IceCreamPiece piece)
		{
			if (base.CanShow(piece))
			{
				return true;
			}
			if (plain.CanShow(piece))
			{
				return true;
			}
			return cream.CanShow(piece);
		}

		public override void Display(PieceSet pieces)
		{
			base.Display(pieces);
			int num = pieces[(int)IceCreamPiece.WhippingCream];
			plain.Show(num < 1, pieces);
			cream.Show(num > 0, pieces);
		}
	}
}
