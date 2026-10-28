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

		public AudioManagerCakeOrder.AudioTrack track = (AudioManagerCakeOrder.AudioTrack)4;

		[Range(0f, 1f)]
		public float volume = 1f;

		[Range(0f, 0.5f)]
		public float pitchVariance = 0.1f;
	}
}
