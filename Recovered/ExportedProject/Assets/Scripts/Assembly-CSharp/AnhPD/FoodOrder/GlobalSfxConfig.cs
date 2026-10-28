using System;
using CakeOrder;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class GlobalSfxConfig
	{
		public GlobalSfx type;

		public AudioClip clip;

		public AudioManagerCakeOrder.AudioTrack track;

		[Range(0f, 1f)]
		public float volume;

		[Range(0f, 0.5f)]
		public float pitchVariance;
	}
}
