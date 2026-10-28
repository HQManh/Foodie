using System;
using UnityEngine;

namespace TrungKienPack.Particle
{
	[Serializable]
	public class LevelConfig
	{
		public Texture sp;

		public Color color = Color.white;

		public Color colorText = Color.white;

		public float multiScaleText = 1f;

		public string desc;

		private void SetSameColor()
		{
			colorText = color;
		}
	}
}
