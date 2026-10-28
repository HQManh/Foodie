using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public sealed class SeafoodRecipeLayer
	{
		public string sourceAsset;

		public int[] requiredPieces;

		public int[] excludedPieces;

		public SpriteRenderer renderer;

		public Sprite sprite;

		public Vector3 position;

		public float rotation;

		public Vector2 size;

		public int sortOrder;
	}
}
