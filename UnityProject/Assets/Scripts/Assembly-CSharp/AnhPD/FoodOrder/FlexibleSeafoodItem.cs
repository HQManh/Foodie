using System;
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

		public SeafoodDish Dish => dish;

		public SeafoodPieceDisplay DisplayView => display;

		public override PieceSet Pieces => pieces;

		public bool IsComplete => SeafoodPieceTable.IsComplete(dish, pieces);

		public override void InitForDisplay(Transform root, float scaleRation)
		{
			base.InitForDisplay(root, scaleRation);
			if (display != null)
			{
				display.SetShelfPresentation(preview: true);
			}
		}

		public override void InitForDrag()
		{
			base.InitForDrag();
			if (display != null)
			{
				display.SetShelfPresentation(preview: false);
			}
		}

		public override string GetId()
		{
			return FlexiblePieceId.Build(id, pieces);
		}

		public override PieceSet PredictOpenPieces(string ingId)
		{
			return SeafoodPieceTable.PredictOpen(dish, ingId);
		}

		public override PieceSet PredictCombinePieces(string firstId, string secondId)
		{
			return SeafoodPieceTable.PredictCombine(dish, firstId, secondId);
		}

		public override void OpenInit(string ingId)
		{
			pieces = PredictOpenPieces(ingId);
			MarkVisualDirty();
		}

		public override void CombineInit(string firstId, string secondId)
		{
			pieces = PredictCombinePieces(firstId, secondId);
			MarkVisualDirty();
		}

		public override void AddIng(string ingId)
		{
			if (SeafoodPieceTable.CanAdd(dish, pieces, ingId))
			{
				SeafoodPieceTable.TryInput(dish, ingId, out var pieces2);
				pieces = pieces.Add(pieces2);
				MarkVisualDirty();
			}
		}

		public override void Display(string longId)
		{
			if (SeafoodPieceTable.TryDecode(dish, longId, out var pieces2))
			{
				pieces = pieces2;
				MarkVisualDirty();
				return;
			}
			throw new ArgumentException("Invalid seafood id for dish " + dish.ToString() + ": " + longId /* literal recovered by guess */, "longId");
		}

		private void Assign(PieceSet state)
		{
			pieces = state;
			MarkVisualDirty();
		}

		protected override void RefreshVisual()
		{
			if (display != null)
			{
				display.Display(pieces);
			}
		}

		protected override void ResetItem()
		{
			pieces = PieceSet.Empty;
			if (display != null)
			{
				display.Display(pieces);
			}
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return FlexiblePieceId.Build(id, SeafoodPieceTable.Roll(dish, maxCount));
		}

		public override List<string> GetIngIds(string longId)
		{
			if (!SeafoodPieceTable.TryDecode(dish, longId, out var pieces2))
			{
				return new List<string>();
			}
			return SeafoodPieceTable.IngredientIds(pieces2);
		}

		public override PieceSet IconPiecesOf(string iconId, string longId)
		{
			if (!SeafoodPieceTable.TryGetPiece(iconId, out var piece))
			{
				return PieceSet.Empty;
			}
			return PieceSet.One(piece);
		}
	}
}
