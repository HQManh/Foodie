using System;
using CakeOrder.DataSO;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class RecipeComponentIngredient : RecipeComponent
	{
		public CakeIngredientSO ingSO;

		public int dishKind;

		[Header("Gameplay")]
		public RcGameplayConfig gameplayConfig;

		[Header("Piece")]
		public RcPieceConfig pieceConfig;

		protected override bool HasSourceSO => false;

		protected override void CreateSourceSO()
		{
		}

		public override void Sync()
		{
		}
	}
}
