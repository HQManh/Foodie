using System.Collections.Generic;
using CakeOrder.InGame.Sushi;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleGunkan : FlexibleDragItem, IFlexiblePieceItem, ISushiPieceView
	{
		[SerializeField]
		private FlexibleSushiDisplay display;

		private PieceSet _pieces;

		public override PieceSet Pieces => default;

		private string PiecesDebug => null;

		public override string GetId()
		{
			return null;
		}

		public override void Display(string longId)
		{
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

		private void Redraw()
		{
		}

		public bool CanShow(SushiPiece piece)
		{
			return false;
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return null;
		}
	}
}
