using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class TutorialFocusSetting
	{
		public bool enabled = true;

		public Vector2 size = new Vector2(2f, 2f);

		public Vector2 offset;

		public float shrinkDuration = 0.35f;

		public bool follow = true;
	}
}
