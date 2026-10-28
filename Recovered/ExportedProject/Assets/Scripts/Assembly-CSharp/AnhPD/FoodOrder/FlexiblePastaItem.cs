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
		private float ingredientPunchScale;

		[SerializeField]
		[Min(0f)]
		private float ingredientPunchDuration;

		[SerializeField]
		[Range(1f, 10f)]
		private int ingredientPunchVibrato;

		[SerializeField]
		[Range(0f, 1f)]
		private float ingredientPunchElasticity;

		private PieceSet pieces;

		private Tween ingredientPunch;

		private Vector3 ingredientPunchBaseScale;

		public PastaDish Dish => PastaDish.None;

		public PastaPieceDisplay DisplayView => null;

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

		public override string ReferenceIdOf(string longId)
		{
			return null;
		}

		protected override void RefreshVisual()
		{
		}

		protected override void ResetItem()
		{
		}

		private void PlayIngredientPunch()
		{
		}

		private void StopIngredientPunch()
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
