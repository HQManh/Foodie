using Utilities;
using AnhPD.FoodOrder;
using CakeOrder;
using CookOrder.Cooking.Implement;
using MoreMountains.NiceVibrations;
using UnityEngine;

internal sealed class CookingGraphLegacyFeedbackBridge : ICookingFeedback
{
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
	private static void Register()
	{
		// TODO(unrecovered): pseudocode allocates this bridge and stores it in a static slot on another feedback holder (DAT_09182d78 + 0xb8); that holder type is not identified in the batch.
	}

	public void Particle(string type, Vector3 position, float scale, float volume, Color[] colors)
	{
		// TODO(unrecovered): ParticleRequest/PoolingParticle now exist in the stubs, but the pooled-spawn holder (DAT_091b4cc8 -> +0x20 -> +0xc0 -> +0x10 -> +0xb8) and the type-name dictionary (DAT_091c8fa8) are not identified, and the type-name literal is unrecovered.
	}

	public void Land(AudioClip clip)
	{
		if (clip != null && MonoSingleton<AudioManagerCakeOrder>.HasInstance)
		{
			MonoSingleton<AudioManagerCakeOrder>.Instance.PlaySfxWithPitchVariant(clip, (AudioManagerCakeOrder.AudioTrack)4, 1f, 0.1f);
			return;
		}
		GlobalAudio.Play((GlobalSfx)0, 1f);
	}

	public void Jump()
	{
		GlobalAudio.Play((GlobalSfx)1, 1f);
	}

	public void Tap()
	{
		MMVibrationManager.Haptic(HapticTypes.LightImpact);
	}

	public void Served(Vector3 at)
	{
		MMVibrationManager.Haptic(HapticTypes.LightImpact);
		if (!MonoSingleton<ComboTextService>.HasInstance)
		{
			return;
		}
		// TODO(unrecovered): pseudocode only plays the combo text when a bool at offset 0xd of another singleton (DAT_091824f0) is set; that singleton is not identified, so the gate is omitted.
		ComboTextService.Instance.Play(at, 1f);
	}
}
