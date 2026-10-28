using System.Collections.Generic;
using CakeOrder;
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
			if (MonoSingleton<GlobalAudio>.HasInstance)
			{
				MonoSingleton<GlobalAudio>.Instance.PlayConfigured(type, volumeScale);
			}
		}

		private void PlayConfigured(GlobalSfx type, float volumeScale)
		{
			if (TryGetConfig(type, out var config) && config.clip != null && MonoSingleton<AudioManagerCakeOrder>.HasInstance)
			{
				MonoSingleton<AudioManagerCakeOrder>.Instance.PlaySfxWithPitchVariant(config.clip, config.track, config.volume * volumeScale, config.pitchVariance);
			}
		}

		private bool TryGetConfig(GlobalSfx type, out GlobalSfxConfig config)
		{
			if (_byType == null)
			{
				_byType = new Dictionary<GlobalSfx, GlobalSfxConfig>();
				for (int i = 0; i < sfxConfigs.Length; i++)
				{
					if (sfxConfigs[i] != null)
					{
						_byType[sfxConfigs[i].type] = sfxConfigs[i];
					}
				}
			}
			return _byType.TryGetValue(type, out config);
		}
	}
}
