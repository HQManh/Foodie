using UnityEngine;
using Utilities;

namespace CakeOrder;

public class SceneAudioController : MonoSingleton<SceneAudioController>
{
	[SerializeField]
	private CrossFadeLoopAudio _bgmPlayer;

	[SerializeField]
	private CrossFadeLoopAudio _ambientPlayer;

	[SerializeField]
	private AudioSource _sfxPlayer;

	public void PlayBgm(AudioClip bgm, AudioClip ambient = null)
	{
	}

	public void StopBgm()
	{
	}

	public void PlaySfx(AudioClip sfx, float volume = 1f, float pitchVariant = 0f)
	{
	}
}
