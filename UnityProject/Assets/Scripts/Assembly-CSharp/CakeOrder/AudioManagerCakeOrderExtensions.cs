using UnityEngine;

namespace CakeOrder
{
	// Call sites in the game pass (clip, volume, track); the CakeOrder stub only provides (clip, track, volume).
	public static class AudioManagerCakeOrderExtensions
	{
		public static void PlaySfx(this AudioManagerCakeOrder manager, AudioClip clip, float volume, AudioManagerCakeOrder.AudioTrack track)
		{
			// Null-safe: the audio manager is not present when a level scene runs without the home scenes.
			if (manager != null)
			{
				manager.PlaySfx(clip, track, volume);
			}
		}
	}
}
