using System;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class ChangeColorImage
	{
		public Image image;

		public Color baseColor = Color.white;

		public Color tintColor;

		public void ChangeColor()
		{
			image.color = tintColor;
		}

		public void RestoreColor()
		{
			image.color = baseColor;
		}
	}
}
