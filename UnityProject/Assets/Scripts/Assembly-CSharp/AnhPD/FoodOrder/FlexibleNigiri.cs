using System.Collections.Generic;
using CakeOrder.InGame.Sushi;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleNigiri : FlexibleDragItem, IFlexiblePieceItem, ISushiPieceView
	{
		[SerializeField]
		private FlexibleNigiriDisplay display;

		private PieceSet _pieces;

		public override PieceSet Pieces => _pieces;

		private string PiecesDebug => _pieces.ToString((int k) => ((SushiPiece)k).ToString());

		public override string GetId()
		{
			return FlexiblePieceId.Build(id, _pieces);
		}

		public override void Display(string longId)
		{
			_pieces = FlexiblePieceId.PiecesOf(id, longId);
			Redraw();
		}

		public override void CombineInit(string firstIngId, string secondIngId)
		{
			_pieces = PredictCombinePieces(firstIngId, secondIngId);
			MarkVisualDirty();
		}

		public override PieceSet PredictCombinePieces(string firstIngId, string secondIngId)
		{
			return SushiPieceTable.PredictStart(SushiDish.Nigiri, firstIngId, secondIngId);
		}

		public override void AddIng(string ingId)
		{
			if (SushiPieceTable.TryGetPiece(ingId, out var piece))
			{
				_pieces = _pieces.Add((int)piece, 1);
				MarkVisualDirty();
			}
		}

		protected override void RefreshVisual()
		{
			Redraw();
		}

		public override List<string> GetIngIds(string longId)
		{
			return PieceLookup.PreparedIdsOf(FlexiblePieceId.PiecesOf(id, longId), SushiPieceTable.LayerOf);
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

		public bool CanShow(SushiPiece piece)
		{
			if (display != null)
			{
				return display.CanShow(piece);
			}
			return false;
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return FlexiblePieceId.Build(id, SushiPieceTable.RollNigiri(maxCount, CanShow));
		}
	}
}
