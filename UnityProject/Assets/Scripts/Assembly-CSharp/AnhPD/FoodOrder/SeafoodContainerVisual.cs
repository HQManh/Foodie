using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public sealed class SeafoodContainerVisual
	{
		public SpriteRenderer back;

		public SpriteRenderer front;

		public Sprite backSprite;

		public Sprite frontSprite;

		public Vector3 backPosition;

		public Vector3 frontPosition;

		public float backRotation;

		public float frontRotation;

		// TODO(unrecovered): backSize/frontSize are both set to twice a static Vector2 constant
		// (static block offset +0xb8 +8) whose owning field/value is not recovered here.
		public Vector2 backSize;

		public Vector2 frontSize;

		public int backOrder = -100;

		public int frontOrder = 100;
	}
}
