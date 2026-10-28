using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleDonut : FlexibleDragItem, IFlexiblePieceItem
	{
		[SerializeField]
		private FlexibleDonutDisplay display;

		private PieceSet _pieces;

		private const string DonutDisplayId = "donut_display";

		public override PieceSet Pieces => default;

		private string PiecesDebug => null;

		public override string GetId()
		{
			return null;
		}

		public override void Display(string longId)
		{
		}

		public override string ReferenceIdOf(string longId)
		{
			return null;
		}

		public override void CombineInit(string firstIngId, string secondIngId)
		{
		}

		public override PieceSet PredictCombinePieces(string firstIngId, string secondIngId)
		{
			return default;
		}

		private static PieceSet ShapeOrToppingOf(string ingId)
		{
			return default;
		}

		public override void AddIng(string ingId)
		{
		}

		protected override void RefreshVisual()
		{
		}

		public override PieceSet IconPiecesOf(string iconId, string longId)
		{
			return default;
		}

		public override List<string> GetIngIds(string longId)
		{
			return null;
		}

		protected override void ResetItem()
		{
		}

		public void Display(PieceSet pieces)
		{
		}

		private void Redraw()
		{
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return null;
		}
	}
}
