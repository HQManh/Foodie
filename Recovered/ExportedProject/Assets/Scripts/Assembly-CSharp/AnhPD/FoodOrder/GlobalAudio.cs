using System.Collections.Generic;
using UnityEngine;
using Utilities;

namespace AnhPD.FoodOrder
{
	public class GlobalAudio : MonoSingleton<GlobalAudio>
	{
		[SerializeField]
		private GlobalSfxConfig[] sfxConfigs;

		private Dictionary<GlobalSfx, GlobalSfxConfig> _byType;

		public static void Play(GlobalSfx type, float volumeScale = 1f)
		{
		}

		private void PlayConfigured(GlobalSfx type, float volumeScale)
		{
		}

		private bool TryGetConfig(GlobalSfx type, out GlobalSfxConfig config)
		{
			config = null;
			return false;
		}
	}
}
