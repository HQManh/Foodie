using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using EssentialSystemR1;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Audio;
using UnityEngine.ResourceManagement.AsyncOperations;
using Utilities;

namespace CakeOrder
{

public class AudioManagerCakeOrder : EssentialSystemR1.MonoSingleton<AudioManagerCakeOrder>
{
	public enum AudioTrack
	{
		Music,
		Ambient,
		Sfx,
		UI,
		SfxInteraction,
		SfxCooking,
		SfxCustomer
	}

	// Inferred from the decompiled WriteWeather and WriteWeatherBlend code, which read two floats at offsets 0x1c and 0x20 and pass them to WriteFilters. Field names are placeholders.
	[Serializable]
	public class Entry
	{
		public float filterParamA;

		public float filterParamB;
	}

	[Serializable]
	public class SfxBus
	{
		public AudioTrack track;

		[Tooltip("Plays untouched at pitch 1. Lives on its own child object of the manager.")]
		public AudioSource source;

		[NonSerialized]
		public AudioSource variantSource;
	}

	public delegate void DelegateSettingToggled(bool isOn);

	public enum DuckLevel
	{
		None,
		Small,
		Significant
	}

	private class PitchedVoice
	{
		public AudioSource source;

		public AudioTrack track;

		public float basePitch;

		public float startTime;
	}

	private class AddressableAudioTrack
	{
		[CompilerGenerated]
		private sealed class _003CReleaseAfter_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public float delay;

			public AddressableAudioTrack _003C_003E4__this;

			public AsyncOperationHandle<AudioClip> handle;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CReleaseAfter_003Ed__19(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		private const float RELEASE_DELAY_PADDING = 0.25f;

		private readonly MonoBehaviour _owner;

		private readonly CrossFadeLoopAudio _track;

		private AsyncOperationHandle<AudioClip> _current;

		private bool _hasCurrent;

		private object _currentKey;

		private AsyncOperationHandle<AudioClip> _loading;

		private bool _isLoading;

		private int _requestId;

		private readonly List<AsyncOperationHandle<AudioClip>> _pendingRelease = new List<AsyncOperationHandle<AudioClip>>();

		public AddressableAudioTrack(MonoBehaviour owner, CrossFadeLoopAudio track)
		{
		}

		public void PlayClip(AudioClip clip, float volume, MusicTransitionType transitionType)
		{
		}

		public void PlayReference(AssetReference clipReference, float volume, MusicTransitionType transitionType)
		{
		}

		private void OnLoaded(AsyncOperationHandle<AudioClip> handle, int requestId, float volume, MusicTransitionType transitionType)
		{
		}

		public void Stop()
		{
		}

		public void ReleaseAll()
		{
		}

		private void CancelLoading()
		{
		}

		private void ScheduleReleaseCurrent(float delay)
		{
		}

		private void ScheduleRelease(AsyncOperationHandle<AudioClip> handle, float delay)
		{
		}

		[IteratorStateMachine(typeof(_003CReleaseAfter_003Ed__19))]
		private IEnumerator ReleaseAfter(AsyncOperationHandle<AudioClip> handle, float delay)
		{
			return null;
		}
	}

	[CompilerGenerated]
	private sealed class _003CIEBlendDuck_003Ed__93 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public AudioManagerCakeOrder _003C_003E4__this;

		public float target;

		private float _003Cfrom_003E5__2;

		private float _003Celapsed_003E5__3;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CIEBlendDuck_003Ed__93(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CIEBlendGameplaySfxMute_003Ed__106 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public AudioManagerCakeOrder _003C_003E4__this;

		public float target;

		private float _003Cfrom_003E5__2;

		private float _003Cduration_003E5__3;

		private float _003Celapsed_003E5__4;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CIEBlendGameplaySfxMute_003Ed__106(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CIEBlendWeather_003Ed__147 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public AudioManagerCakeOrder _003C_003E4__this;

		public Entry from;

		public Entry to;

		public float duration;

		private float _003Celapsed_003E5__2;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CIEBlendWeather_003Ed__147(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	public const string MIXER_GROUP_BGM = "Music";

	public const string MIXER_GROUP_SFX = "SFX";

	public const string MIXER_GROUP_AMBIENT = "Ambient";

	public const string MIXER_GROUP_UI = "UI";

	public const string MIXER_GROUP_SFX_INTERACTION = "SFX_Interaction";

	public const string MIXER_GROUP_SFX_COOKING = "SFX_Cooking";

	public const string MIXER_GROUP_SFX_CUSTOMER = "SFX_Customers";

	private const string KEY_BGM_VOLUME = "MusicVolume";

	private const string KEY_SFX_VOLUME = "SFXVolume";

	private const string KEY_AMBIENT_VOLUME = "AmbientVolume";

	private const string KEY_UI_VOLUME = "UIVolume";

	private const string KEY_BGM_ACTIVE = "MusicActive";

	private const string KEY_SFX_ACTIVE = "SFXActive";

	private const string KEY_HAPTIC_ACTIVE = "HapticActive";

	private const string KEY_MUSIC_SPEED = "MusicSpeed";

	public AudioMixer audioMixer;

	[SerializeField]
	private CrossFadeLoopAudio _musicTrack;

	[SerializeField]
	private CrossFadeLoopAudio _ambientTrack;

	[Header("Sfx buses - one child object per mixer group")]
	[SerializeField]
	private SfxBus[] _sfxBuses;

	[SerializeField]
	private float musicVolumeMul;

	[SerializeField]
	private float sfxVolumeMul;

	[SerializeField]
	private float ambientVolumeMul;

	[SerializeField]
	private CommonSfx[] commonSfxConfigs;

	[SerializeField]
	private SfxAndHapticTrigger[] commonSfxTriggerConfigs;

	private AddressableAudioTrack _musicLoader;

	private AddressableAudioTrack _ambientLoader;

	private float _soundTimeScale;

	[Tooltip("Interaction and generic SFX only rise to 1.1x at gameplay speed 2x, limiting pitch distortion.")]
	[ValueCurve(false, true)]
	[SerializeField]
	private AnimationCurve _mapTimeScaleToSfxInteractionSpeed;

	[Tooltip("Customer SFX only rise to 1.2x at gameplay speed 2x, limiting voice distortion.")]
	[ValueCurve(false, true)]
	[SerializeField]
	private AnimationCurve _mapTimeScaleToSfxCustomerSpeed;

	private float _sfxInteractionSpeed;

	private float _sfxCookingSpeed;

	private float _sfxCustomerSpeed;

	[Tooltip("Music playback speed and pitch rise together: 1x normally, 1.2x at gameplay speed 2x.")]
	[ValueCurve(false, true)]
	[SerializeField]
	private AnimationCurve _mapTimeScaleToMusicSpeed;

	private const float MIN_PLAYBACK_SPEED = 0.01f;

	private const float MAX_PLAYBACK_SPEED = 10f;

	private const float MAX_SFX_INTERACTION_SPEED = 1.1f;

	private const float MAX_SFX_CUSTOMER_SPEED = 1.2f;

	private bool _hasWarnedMissingMixerParams;

	[Header("Weather")]
	[Tooltip("Authored via Tools/Audio/Advanced Weather Controller.")]
	[SerializeField]
	private WeatherAudioProfileSO _weatherProfiles;

	[Tooltip("Seconds to blend between two weathers. Level start passes its own shorter time.")]
	[SerializeField]
	private float _weatherBlendSeconds;

	private Coroutine _weatherBlendRoutine;

	private Entry _weatherFrom;

	private bool _hasWeatherApplied;

	[Header("Duck - popup over gameplay")]
	[SerializeField]
	private float _duckSmallDb;

	[SerializeField]
	private float _duckSignificantDb;

	[SerializeField]
	private float _duckBlendSeconds;

	private float _currentDuckDb;

	private Coroutine _duckRoutine;

	private bool _isDuckSuspended;

	// Values read from the static constructor (string literals decoded from the metadata).
	private static readonly string[] GAMEPLAY_SFX_VOLUME_PARAMS = new string[3] { "SFXInteractionVolume", "SFXCookingVolume", "SFXCustomerVolume" };

	[Header("Gameplay sfx mute - pause over gameplay")]
	[SerializeField]
	private float _gameplaySfxMuteBlendSeconds;

	private float _gameplaySfxMute01;

	private Coroutine _gameplaySfxMuteRoutine;

	private float[] _gameplaySfxBaseDb;

	private bool _hasWarnedMissingGameplaySfxParams;

	[SerializeField]
	private float sameClipMinInterval;

	private readonly Dictionary<AudioClip, float> _lastPlayTime = new Dictionary<AudioClip, float>();

	[Tooltip("Max fixed-pitch sfx sounding at once; past it the oldest one is cut.")]
	[SerializeField]
	private int _maxPitchedVoices;

	private readonly List<PitchedVoice> _pitchedVoices = new List<PitchedVoice>();

	private Transform _pitchedVoiceRoot;

	[Tooltip("Hold Distortion / Reverb / Chorus silent on low-end devices.\n\nOFF by default, and deliberately so: the wet level only silences an effect, it does not stop it running, so low-end paid the full CPU cost and lost the atmosphere for nothing. Only worth turning on once the effects are genuinely removed from the low-end path (bypass in a second mixer asset, or a dry/wet routing split).")]
	[SerializeField]
	private bool _silenceHeavyDspOnLowEnd;

	public static bool HeavyAudioEffectsDisabled => false;

	public bool IsMusicActive => false;

	public bool IsSfxActive => false;

	public bool IsHapticActive => false;

	private AddressableAudioTrack MusicLoader => null;

	private AddressableAudioTrack AmbientLoader => null;

	public WeatherEffect CurrentWeather { get; private set; }

	public DuckLevel CurrentDuck { get; private set; }

	public bool IsGameplaySfxMuted { get; private set; }

	public event DelegateSettingToggled onBgmToggled;

	public event DelegateSettingToggled onSfxToggled;

	public event DelegateSettingToggled onHapticToggled;

	public void SetSoundTimeScale(float timeScale)
	{
	}

	private void ApplySoundTimeScale()
	{
	}

	public float SpeedFor(AudioTrack track)
	{
		return 0f;
	}

	private void ApplySfxSpeedToSources()
	{
	}

	private AudioMixerGroup FindGroup(string groupName)
	{
		return null;
	}

	private static float EvaluateMap(AnimationCurve curve, float timeScale)
	{
		return 0f;
	}

	private static float ClampPlaybackSpeed(float speed, float maxSpeed)
	{
		return 0f;
	}

	public float GetDuckDb(DuckLevel level)
	{
		return 0f;
	}

	public void SetDuck(DuckLevel level, bool immediate = false)
	{
	}

	public void SetDuckSuspended(bool isSuspended)
	{
	}

	private void StartDuckBlend(bool immediate)
	{
	}

	[IteratorStateMachine(typeof(_003CIEBlendDuck_003Ed__93))]
	private IEnumerator IEBlendDuck(float target)
	{
		return null;
	}

	private void ApplyDuckedVolumes()
	{
	}

	public void SetGameplaySfxMuted(bool isMuted, bool immediate = false)
	{
	}

	[IteratorStateMachine(typeof(_003CIEBlendGameplaySfxMute_003Ed__106))]
	private IEnumerator IEBlendGameplaySfxMute(float target)
	{
		return null;
	}

	private void ApplyGameplaySfxMute()
	{
	}

	private void Start()
	{
	}

	public void ToggleMusic()
	{
	}

	public void ToggleSfx()
	{
	}

	public void ToggleHaptic()
	{
	}

	public void SetBgmActive(bool isActive)
	{
	}

	public void SetSfxActive(bool isActive)
	{
	}

	public void SetHapticActive(bool isActive)
	{
	}

	public void SetMusicVolume(float volume, bool save = true)
	{
	}

	public void SetSfxVolume(float volume, bool save = true)
	{
	}

	private void ApplySfxConfig()
	{
	}

	private void ApplyMusicConfig()
	{
	}

	private void SetBusVolume(string param, float volume01, float duckDb)
	{
	}

	private void ApplyHapticConfig()
	{
	}

	public void PlayMusic(AudioClip clip, float volume = 1f, MusicTransitionType transitionType = MusicTransitionType.FadeOutFadeIn)
	{
	}

	public void PlayAmbient(AudioClip clip, float volume = 1f, MusicTransitionType transitionType = MusicTransitionType.FadeOutFadeIn)
	{
	}

	public void PlayMusic(AssetReference clipReference, float volume = 1f, MusicTransitionType transitionType = MusicTransitionType.FadeOutFadeIn)
	{
	}

	public void PlayAmbient(AssetReference clipReference, float volume = 1f, MusicTransitionType transitionType = MusicTransitionType.FadeOutFadeIn)
	{
	}

	public void StopMusic()
	{
	}

	public void StopAmbient()
	{
	}

	private bool PassSameClipGate(AudioClip clip)
	{
		return false;
	}

	public void PlaySfx(AudioClip clip, AudioTrack track, float volume = 1f)
	{
	}

	public void PlaySfxWithPitchVariant(AudioClip clip, AudioTrack track, float volume = 1f, float pitchVariance = 0.1f)
	{
	}

	public void PlaySfxWithFixedPitch(AudioClip clip, AudioTrack track, float volume = 1f, float pitch = 1f, bool ignoreSameClipGate = false)
	{
	}

	private PitchedVoice AcquirePitchedVoice()
	{
		return null;
	}

	private SfxBus GetBus(AudioTrack track)
	{
		return null;
	}

	private AudioSource GetSource(AudioTrack track)
	{
		return null;
	}

	private AudioSource GetVariantSource(AudioTrack track)
	{
		return null;
	}

	public void PlaySfxAndHaptic(SfxAndHapticTrigger trigger, AudioTrack audioTrack = AudioTrack.UI)
	{
	}

	public void Play(CommonSfx type)
	{
	}

	public void StopSFX()
	{
	}

	protected override void OnDestroy()
	{
	}

	public void ApplyDeviceTierSnapshot()
	{
	}

	public void ApplyWeather(WeatherEffect weather, float blendSeconds = -1f)
	{
	}

	[IteratorStateMachine(typeof(_003CIEBlendWeather_003Ed__147))]
	private IEnumerator IEBlendWeather(Entry from, Entry to, float duration)
	{
		return null;
	}

	private void WriteWeatherBlend(Entry from, Entry to, float t)
	{
	}

	private void WriteWeather(Entry entry)
	{
	}

	private void WriteFilters(float lowpassHz, float highpassHz, float duckThunderDb, float duckCustomerDb)
	{
	}

	private void WriteDsp(float distortionAmount, float reverbAmount, float chorusAmount)
	{
	}

	private static float LerpHz(float fromHz, float toHz, float t)
	{
		return 0f;
	}

	private string GetMixerGroup(AudioTrack track)
	{
		return null;
	}

	public void RegisterAudioSource(AudioSource audioSource, AudioTrack track)
	{
	}

	public void RegisterAudioSourceObject(Transform gameObject, AudioTrack track)
	{
	}
}
}
