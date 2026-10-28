using System.Collections.Generic;
using CakeOrder.InGame.Coffee;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleDonut : FlexibleDragItem, IFlexiblePieceItem
	{
		[SerializeField]
		private FlexibleDonutDisplay display;

		private PieceSet _pieces;

		private const string DonutDisplayId = "donut_display";

		public override PieceSet Pieces => _pieces;

		private string PiecesDebug => _pieces.ToString((int k) => ((CoffeePiece)k).ToString());

		public override string GetId()
		{
			return FlexiblePieceId.Build(id, _pieces);
		}

		public override void Display(string longId)
		{
			_pieces = FlexiblePieceId.PiecesOf(id, longId);
			Redraw();
		}

		public override string ReferenceIdOf(string longId)
		{
			return CafePieceTable.BareIdOf(id, longId);
		}

		public override void CombineInit(string firstIngId, string secondIngId)
		{
			_pieces = PredictCombinePieces(firstIngId, secondIngId);
			MarkVisualDirty();
		}

		public override PieceSet PredictCombinePieces(string firstIngId, string secondIngId)
		{
			return ShapeOrToppingOf(firstIngId).Add(ShapeOrToppingOf(secondIngId));
		}

		private static PieceSet ShapeOrToppingOf(string ingId)
		{
			PieceSet pieces = PieceLookup.PiecesOf(ingId);
			if (pieces.IsEmpty)
			{
				foreach (var (kind, _) in PieceLookup.PiecesOfAnyRole(ingId))
				{
					if (kind <= 2)
					{
						return PieceSet.One(kind);
					}
				}
				return PieceSet.Empty;
			}
			return pieces;
		}

		public override void AddIng(string ingId)
		{
			if (CafePieceTable.TryGetDonutTopping(ingId, out var piece))
			{
				_pieces = _pieces.Add((int)piece, 1);
				MarkVisualDirty();
			}
		}

		protected override void RefreshVisual()
		{
			Redraw();
		}

		public override PieceSet IconPiecesOf(string iconId, string longId)
		{
			if (iconId != DonutDisplayId)
			{
				return base.IconPiecesOf(iconId, longId);
			}
			foreach (var (kind, _) in FlexiblePieceId.PiecesOf(id, longId))
			{
				if (kind <= 2)
				{
					return PieceSet.One(kind);
				}
			}
			return PieceSet.Empty;
		}

		public override List<string> GetIngIds(string longId)
		{
			List<string> list = PieceLookup.PreparedIdsOf(FlexiblePieceId.PiecesOf(id, longId));
			list.Insert(0, DonutDisplayId);
			return list;
		}

		protected override void ResetItem()
		{
			_pieces = PieceSet.Empty;
			if (display != null)
			{
				display.Display(_pieces);
			}
		}

		public void Display(PieceSet pieces)
		{
			_pieces = pieces;
			Redraw();
		}

		private void Redraw()
		{
			if (display != null)
			{
				display.Display(_pieces);
			}
			base.transform.DOComplete();
			base.transform.Appear(0.1f);
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return FlexiblePieceId.Build(id, CafePieceTable.Roll(CafeDish.Donut, maxCount));
		}
	}
}
