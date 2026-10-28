using System;
using System.Collections.Generic;
using CakeOrder.InGame.Pasta;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public sealed class FlexiblePastaItem : FlexibleDragItem, IFlexiblePieceItem
	{
		[SerializeField]
		private PastaDish dish;

		[SerializeField]
		private PastaPieceDisplay display;

		[Header("Ingredient Add Feedback")]
		[SerializeField]
		[Min(0f)]
		private float ingredientPunchScale = 0.08f;

		[SerializeField]
		[Min(0f)]
		private float ingredientPunchDuration = 0.2f;

		[SerializeField]
		[Range(1f, 10f)]
		private int ingredientPunchVibrato = 2;

		[SerializeField]
		[Range(0f, 1f)]
		private float ingredientPunchElasticity = 0.5f;

		private PieceSet pieces;

		private Tween ingredientPunch;

		private Vector3 ingredientPunchBaseScale;

		public PastaDish Dish => dish;

		public PastaPieceDisplay DisplayView => display;

		public override PieceSet Pieces => pieces;

		public bool IsComplete => PastaPieceTable.IsComplete(dish, pieces);

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
			return PastaPieceTable.PredictOpen(dish, ingId);
		}

		public override PieceSet PredictCombinePieces(string firstId, string secondId)
		{
			return PastaPieceTable.PredictCombine(dish, firstId, secondId);
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
			if (PastaPieceTable.CanAdd(dish, pieces, ingId))
			{
				PastaPieceTable.TryInput(dish, ingId, out var pieces2);
				pieces = pieces.Add(pieces2);
				MarkVisualDirty();
				PlayIngredientPunch();
			}
		}

		public override void Display(string longId)
		{
			if (PastaPieceTable.TryDecode(dish, longId, out var pieces2))
			{
				pieces = pieces2;
				MarkVisualDirty();
				return;
			}
			throw new ArgumentException("Invalid pasta id for dish " + dish.ToString() + ": " + longId /* literal recovered by guess */, "longId");
		}

		private void Assign(PieceSet state)
		{
			pieces = state;
			MarkVisualDirty();
		}

		public override string ReferenceIdOf(string longId)
		{
			if (PastaPieceTable.TryDecode(dish, longId, out var pieces2))
			{
				PieceSet keep = PieceSet.Empty;
				foreach (var (kind, count) in pieces2)
				{
					if (PastaPieceTable.IsBaseForm(dish, kind))
					{
						keep = keep.Add(kind, count);
					}
				}
				return FlexiblePieceId.Build(id, keep);
			}
			return longId;
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
			StopIngredientPunch();
			pieces = PieceSet.Empty;
			if (display != null)
			{
				display.Display(pieces);
			}
		}

		private void PlayIngredientPunch()
		{
			if (display == null || ingredientPunchScale <= 0f || ingredientPunchDuration <= 0f)
			{
				return;
			}
			Transform transform = display.transform;
			if (ingredientPunch == null || !ingredientPunch.IsActive())
			{
				ingredientPunchBaseScale = transform.localScale;
			}
			else
			{
				ingredientPunch.Kill();
				transform.localScale = ingredientPunchBaseScale;
			}
			ingredientPunch = transform.DOPunchScale(ingredientPunchBaseScale * ingredientPunchScale, ingredientPunchDuration, ingredientPunchVibrato, ingredientPunchElasticity);
		}

		private void StopIngredientPunch()
		{
			if (ingredientPunch == null || !ingredientPunch.IsActive())
			{
				ingredientPunch = null;
				return;
			}
			ingredientPunch.Kill();
			ingredientPunch = null;
			if (display != null)
			{
				display.transform.localScale = ingredientPunchBaseScale;
			}
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return FlexiblePieceId.Build(id, PastaPieceTable.Roll(dish, maxCount));
		}

		public override List<string> GetIngIds(string longId)
		{
			if (!PastaPieceTable.TryDecode(dish, longId, out var pieces2))
			{
				return new List<string>();
			}
			return PastaPieceTable.IngredientIds(pieces2);
		}

		public override PieceSet IconPiecesOf(string iconId, string longId)
		{
			if (!PastaPieceTable.TryGetPiece(iconId, out var piece))
			{
				return PieceSet.Empty;
			}
			return PieceSet.One(piece);
		}
	}
}
