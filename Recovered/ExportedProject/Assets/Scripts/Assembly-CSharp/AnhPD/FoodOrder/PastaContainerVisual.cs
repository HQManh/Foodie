using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public sealed class PastaContainerVisual
	{
		public SpriteRenderer back;

		public SpriteRenderer front;

		public Sprite backSprite;

		public Sprite frontSprite;

		public Vector3 backPosition;

		public Vector3 frontPosition;

		public float backRotation;

		public float frontRotation;

		public Vector2 backSize;

		public Vector2 frontSize;

		public int backOrder;

		public int frontOrder;
	}
}
