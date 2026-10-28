using DG.Tweening;
using System.Collections.Generic;
using UnityEngine;
using CakeOrder.InGame.Coffee;

namespace AnhPD.FoodOrder
{
	public class FlexibleColdCoffee : FlexibleDragItem, IFlexiblePieceItem
	{
		[SerializeField]
		private FlexiblePieceDisplay display;

		private PieceSet _pieces;

		private bool _redrawPunch;

		public override PieceSet Pieces => _pieces;

		private string PiecesDebug => _pieces.ToString((int kind) => ((CoffeePiece)kind).ToString());

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
			return PieceLookup.PiecesOf(firstIngId).Add(PieceLookup.PiecesOf(secondIngId));
		}

		public override void AddIng(string ingId)
		{
			CoffeePiece piece;
			if (CafePieceTable.TryGetAddon(ingId, out piece))
			{
				_pieces = _pieces.Add((int)piece, 1);
				_redrawPunch = !HasResultMergeAnimFor(ingId);
				MarkVisualDirty();
			}
		}

		protected override void RefreshVisual()
		{
			Redraw(_redrawPunch);
		}

		public override List<string> GetIngIds(string longId)
		{
			return PieceLookup.PreparedIdsOf(FlexiblePieceId.PiecesOf(id, longId));
		}

		protected override void ResetItem()
		{
			_pieces = PieceSet.Empty;
			if ((bool)display)
			{
				display.Display(_pieces);
			}
		}

		public void Display(PieceSet pieces)
		{
			_pieces = pieces;
			Redraw();
		}

		private void Redraw(bool punch = true)
		{
			if ((bool)display)
			{
				display.Display(_pieces);
			}
			if (punch)
			{
				base.transform.DOComplete();
				base.transform.Appear(0.1f);
			}
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return FlexiblePieceId.Build(id, CafePieceTable.Roll((CafeDish)1, maxCount));
		}
	}
}
