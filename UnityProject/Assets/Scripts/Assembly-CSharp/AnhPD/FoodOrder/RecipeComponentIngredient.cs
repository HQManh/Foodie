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

		protected override bool HasSourceSO => ingSO != null;

		protected override void CreateSourceSO()
		{
			CakeIngredientSO asset = CreateSourceAsset<CakeIngredientSO>();
			if (asset == null)
			{
				return;
			}
			ingSO = asset;
			Sync();
		}

		public override void Sync()
		{
			base.Sync();
			if (!string.IsNullOrWhiteSpace(id))
			{
				DragItem prefab = (gameplayConfig != null) ? gameplayConfig.prefab : null;
				if (prefab == null)
				{
					return;
				}
				prefab.SetId(id);
				return;
			}
			string name = (ingSO != null) ? ingSO.name : "null"; /* literal recovered by guess */
			Debug.LogError("Recipe ingredient has no id: " + name /* literal recovered by guess */, ingSO);
		}
	}
}
