using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public sealed class PastaRecipeLayer
	{
		public string sourceAsset;

		public int[] requiredPieces = Array.Empty<int>();

		public int[] excludedPieces = Array.Empty<int>();

		public SpriteRenderer renderer;

		public Sprite sprite;

		[HideInInspector]
		public Vector3 position;

		[HideInInspector]
		public float rotation;

		[HideInInspector]
		public Vector2 size = Vector2.one;

		[HideInInspector]
		public int sortOrder;
	}
}
