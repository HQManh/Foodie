using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleColdCoffee : FlexibleDragItem, IFlexiblePieceItem
	{
		[SerializeField]
		private FlexiblePieceDisplay display;

		private PieceSet _pieces;

		private bool _redrawPunch;

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

		public override void AddIng(string ingId)
		{
		}

		protected override void RefreshVisual()
		{
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

		private void Redraw(bool punch = true)
		{
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return null;
		}
	}
}
