using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class RcDisplayConfig
	{
		public Sprite sprite;

		public string id;

		public CombinationComponentType type;

		[Range(0.01f, 1f)]
		public float scale;

		[Tooltip("Belt item only: shifts the sprite inside its slot (slot local units).")]
		public Vector2 offset;

		[Tooltip("Orderable flexible dish only: the hint capture fits what lies above item-local Y = hintCropY, so the toppings fill the frame (smoothie, milkshake).")]
		public bool hintCrop;

		public float hintCropY;

		public RcDisplayConfig()
		{
		}

		public RcDisplayConfig(Sprite sprite, CombinationComponentType type, float scale = 1f)
		{
		}
	}
}
