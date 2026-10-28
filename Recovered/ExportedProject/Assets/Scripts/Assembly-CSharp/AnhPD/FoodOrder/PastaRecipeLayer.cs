using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public sealed class PastaRecipeLayer
	{
		public string sourceAsset;

		public int[] requiredPieces;

		public int[] excludedPieces;

		public SpriteRenderer renderer;

		public Sprite sprite;

		[HideInInspector]
		public Vector3 position;

		[HideInInspector]
		public float rotation;

		[HideInInspector]
		public Vector2 size;

		[HideInInspector]
		public int sortOrder;
	}
}
