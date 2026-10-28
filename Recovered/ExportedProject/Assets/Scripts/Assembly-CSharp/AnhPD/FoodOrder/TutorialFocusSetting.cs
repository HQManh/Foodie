using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class TutorialFocusSetting
	{
		public bool enabled;

		public Vector2 size;

		public Vector2 offset;

		public float shrinkDuration;

		public bool follow;
	}
}
