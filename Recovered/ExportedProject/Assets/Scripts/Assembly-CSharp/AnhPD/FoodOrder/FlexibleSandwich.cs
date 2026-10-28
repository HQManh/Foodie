using System.Collections.Generic;
using CakeOrder.InGame.Sandwich;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleSandwich : FlexibleDragItem, IFlexiblePieceItem, ISandwichPieceView
	{
		[SerializeField]
		private SandwichDish dish;

		[SerializeField]
		private SandwichDisplayBase display;

		private PieceSet _pieces;

		public override PieceSet Pieces => default;

		public override float AssembleAnimDuration => 0f;

		private string PiecesDebug => null;

		public override void PlayAssembleAnim()
		{
		}

		public override bool TryGetVisualBounds(out Bounds bounds)
		{
			bounds = default;
			return false;
		}

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

		public override void OpenInit(string ingId)
		{
		}

		public override PieceSet PredictCombinePieces(string firstIngId, string secondIngId)
		{
			return default;
		}

		public override PieceSet PredictOpenPieces(string ingId)
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

		private void Redraw(bool playAssemble = false)
		{
		}

		public bool CanShow(SandwichPiece piece)
		{
			return false;
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return null;
		}
	}
}
