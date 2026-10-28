using System.Collections.Generic;
using CakeOrder.InGame.Seafood;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public sealed class FlexibleSeafoodItem : FlexibleDragItem, IFlexiblePieceItem
	{
		[SerializeField]
		private SeafoodDish dish;

		[SerializeField]
		private SeafoodPieceDisplay display;

		private PieceSet pieces;

		public SeafoodDish Dish => SeafoodDish.None;

		public SeafoodPieceDisplay DisplayView => null;

		public override PieceSet Pieces => default;

		public bool IsComplete => false;

		public override void InitForDisplay(Transform root, float scaleRation)
		{
		}

		public override void InitForDrag()
		{
		}

		public override string GetId()
		{
			return null;
		}

		public override PieceSet PredictOpenPieces(string ingId)
		{
			return default;
		}

		public override PieceSet PredictCombinePieces(string firstId, string secondId)
		{
			return default;
		}

		public override void OpenInit(string ingId)
		{
		}

		public override void CombineInit(string firstId, string secondId)
		{
		}

		public override void AddIng(string ingId)
		{
		}

		public override void Display(string longId)
		{
		}

		private void Assign(PieceSet state)
		{
		}

		protected override void RefreshVisual()
		{
		}

		protected override void ResetItem()
		{
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return null;
		}

		public override List<string> GetIngIds(string longId)
		{
			return null;
		}

		public override PieceSet IconPiecesOf(string iconId, string longId)
		{
			return default;
		}
	}
}
