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
using Entry = CakeOrder.DataSO.WeatherAudioProfileSO.Entry;

namespace CakeOrder
{

// Uses the source MonoSingleton (Utilities): the precompiled EssentialSystemR1 one never registered Instance, and game code
// reads the manager through both AudioManagerCakeOrder.Instance and MonoSingleton<AudioManagerCakeOrder> (Utilities).
public class AudioManagerCakeOrder : Utilities.MonoSingleton<AudioManagerCakeOrder>
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
			_owner = owner;
			_track = track;
		}

		// A plain clip replaces whatever addressable clip was playing.
		public void PlayClip(AudioClip clip, float volume, MusicTransitionType transitionType)
		{
			CancelLoading();
			if (_track == null)
			{
				return;
			}
			_currentKey = null;
			ScheduleReleaseCurrent(_track.GetTransitionDuration(transitionType) + RELEASE_DELAY_PADDING);
			_track.ChangeMusic(clip, volume, transitionType);
		}

		public void PlayReference(AssetReference clipReference, float volume, MusicTransitionType transitionType)
		{
			if (_track == null || clipReference == null || !clipReference.RuntimeKeyIsValid())
			{
				return;
			}
			// Same clip already playing or loading: nothing to do.
			object key = clipReference.RuntimeKey;
			if ((_hasCurrent && Equals(_currentKey, key)) || (_isLoading && Equals(_currentKey, key)))
			{
				return;
			}
			CancelLoading();
			_currentKey = key;
			_isLoading = true;
			int requestId = ++_requestId;
			_loading = Addressables.LoadAssetAsync<AudioClip>(key);
			_loading.Completed += handle => OnLoaded(handle, requestId, volume, transitionType);
		}

		private void OnLoaded(AsyncOperationHandle<AudioClip> handle, int requestId, float volume, MusicTransitionType transitionType)
		{
			if (requestId != _requestId)
			{
				// A newer request superseded this one.
				ScheduleRelease(handle, 0f);
				return;
			}
			_isLoading = false;
			if (handle.Status != AsyncOperationStatus.Succeeded || handle.Result == null || _track == null)
			{
				Addressables.Release(handle);
				return;
			}
			ScheduleReleaseCurrent(_track.GetTransitionDuration(transitionType) + RELEASE_DELAY_PADDING);
			_current = handle;
			_hasCurrent = true;
			_track.ChangeMusic(handle.Result, volume, transitionType);
		}

		public void Stop()
		{
			CancelLoading();
			if (_track != null)
			{
				ScheduleReleaseCurrent(_track.FadeOutDuration + RELEASE_DELAY_PADDING);
				_track.FadeOut();
			}
			_currentKey = null;
		}

		public void ReleaseAll()
		{
			CancelLoading();
			if (_hasCurrent)
			{
				Addressables.Release(_current);
				_hasCurrent = false;
			}
			foreach (AsyncOperationHandle<AudioClip> handle in _pendingRelease)
			{
				if (handle.IsValid())
				{
					Addressables.Release(handle);
				}
			}
			_pendingRelease.Clear();
		}

		private void CancelLoading()
		{
			_requestId++;
			if (_isLoading)
			{
				ScheduleRelease(_loading, 0f);
				_isLoading = false;
			}
		}

		private void ScheduleReleaseCurrent(float delay)
		{
			if (_hasCurrent)
			{
				ScheduleRelease(_current, delay);
				_hasCurrent = false;
			}
		}

		// The old clip keeps playing while it fades out, so it is only released after the transition.
		private void ScheduleRelease(AsyncOperationHandle<AudioClip> handle, float delay)
		{
			if (!handle.IsValid())
			{
				return;
			}
			if (_owner != null && _owner.isActiveAndEnabled && delay > 0f)
			{
				_pendingRelease.Add(handle);
				_owner.StartCoroutine(ReleaseAfter(handle, delay));
			}
			else
			{
				Addressables.Release(handle);
			}
		}

		private IEnumerator ReleaseAfter(AsyncOperationHandle<AudioClip> handle, float delay)
		{
			yield return new WaitForSecondsRealtime(delay);
			if (_pendingRelease.Remove(handle) && handle.IsValid())
			{
				Addressables.Release(handle);
			}
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
	// The exposed parameter names of Mixer.mixer are obfuscated; each one is mapped to what it drives below.
	private const string PARAM_MUSIC_VOLUME = "mposwoH";

	private const string PARAM_MUSIC_PITCH = "lUOokNJ";

	private const string PARAM_AMBIENT_VOLUME = "luHoQMN";

	private const string PARAM_SFX_VOLUME = "tuRmmTJ";

	private const string PARAM_UI_VOLUME = "JlWLTVH";

	private const string PARAM_LOWPASS_HZ = "RTNPpVH";

	private const string PARAM_HIGHPASS_HZ = "pQstuqN";

	private const string PARAM_DISTORTION_MIX = "PwwLIQL";

	private const string PARAM_REVERB_MIX = "WNNVSpL";

	private const string PARAM_CHORUS_MIX = "VKwvKSN";

	// Duck Volume threshold on the Music group (thunder) and on SFX_Cooking (customers).
	private const string PARAM_DUCK_THUNDER = "vONihNH";

	private const string PARAM_DUCK_CUSTOMER = "TtJPHKH";

	private const float SILENT_DB = -80f;

	// Interaction, Cooking, Customer.
	private static readonly string[] GAMEPLAY_SFX_VOLUME_PARAMS = new string[3] { "IlLWtIL", "twRjhwJ", "MwPqTLH" };

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

	private readonly Dictionary<AudioTrack, AudioSource> _fallbackSources = new Dictionary<AudioTrack, AudioSource>();

	public bool IsMusicActive => PlayerPrefs.GetInt(KEY_BGM_ACTIVE, 1) == 1;

	public bool IsSfxActive => PlayerPrefs.GetInt(KEY_SFX_ACTIVE, 1) == 1;

	public bool IsHapticActive => PlayerPrefs.GetInt(KEY_HAPTIC_ACTIVE, 1) == 1;

	private AddressableAudioTrack MusicLoader => _musicLoader ?? (_musicLoader = new AddressableAudioTrack(this, _musicTrack));

	private AddressableAudioTrack AmbientLoader => _ambientLoader ?? (_ambientLoader = new AddressableAudioTrack(this, _ambientTrack));

	public WeatherEffect CurrentWeather { get; private set; }

	public DuckLevel CurrentDuck { get; private set; }

	public bool IsGameplaySfxMuted { get; private set; }

	public event DelegateSettingToggled onBgmToggled;

	public event DelegateSettingToggled onSfxToggled;

	public event DelegateSettingToggled onHapticToggled;

	public void SetSoundTimeScale(float timeScale)
	{
		_soundTimeScale = timeScale;
		ApplySoundTimeScale();
	}

	private void ApplySoundTimeScale()
	{
		float scale = _soundTimeScale > 0f ? _soundTimeScale : 1f;
		_sfxInteractionSpeed = ClampPlaybackSpeed(EvaluateMap(_mapTimeScaleToSfxInteractionSpeed, scale), MAX_SFX_INTERACTION_SPEED);
		_sfxCookingSpeed = _sfxInteractionSpeed;
		_sfxCustomerSpeed = ClampPlaybackSpeed(EvaluateMap(_mapTimeScaleToSfxCustomerSpeed, scale), MAX_SFX_CUSTOMER_SPEED);
		ApplySfxSpeedToSources();
		if (audioMixer != null)
		{
			// Music speed and pitch rise together through the group pitch.
			float musicSpeed = ClampPlaybackSpeed(EvaluateMap(_mapTimeScaleToMusicSpeed, scale), MAX_PLAYBACK_SPEED);
			audioMixer.SetFloat(PARAM_MUSIC_PITCH, musicSpeed);
		}
	}

	public float SpeedFor(AudioTrack track)
	{
		float speed;
		switch (track)
		{
		case AudioTrack.SfxInteraction:
			speed = _sfxInteractionSpeed;
			break;
		case AudioTrack.SfxCooking:
			speed = _sfxCookingSpeed;
			break;
		case AudioTrack.SfxCustomer:
			speed = _sfxCustomerSpeed;
			break;
		default:
			speed = 1f;
			break;
		}
		return speed > 0f ? speed : 1f;
	}

	private void ApplySfxSpeedToSources()
	{
		if (_sfxBuses != null)
		{
			foreach (SfxBus bus in _sfxBuses)
			{
				if (bus != null && bus.source != null)
				{
					bus.source.pitch = SpeedFor(bus.track);
				}
			}
		}
		foreach (KeyValuePair<AudioTrack, AudioSource> pair in _fallbackSources)
		{
			if (pair.Value != null)
			{
				pair.Value.pitch = SpeedFor(pair.Key);
			}
		}
	}

	private AudioMixerGroup FindGroup(string groupName)
	{
		if (audioMixer == null || string.IsNullOrEmpty(groupName))
		{
			return null;
		}
		AudioMixerGroup[] groups = audioMixer.FindMatchingGroups(groupName);
		foreach (AudioMixerGroup group in groups)
		{
			if (group.name == groupName)
			{
				return group;
			}
		}
		return groups.Length > 0 ? groups[0] : null;
	}

	private static float EvaluateMap(AnimationCurve curve, float timeScale)
	{
		if (curve == null || curve.length == 0)
		{
			return 1f;
		}
		return curve.Evaluate(timeScale);
	}

	private static float ClampPlaybackSpeed(float speed, float maxSpeed)
	{
		if (speed <= 0f)
		{
			speed = 1f;
		}
		return Mathf.Clamp(speed, MIN_PLAYBACK_SPEED, maxSpeed);
	}

	private static float VolumeToDb(float volume01)
	{
		if (volume01 <= 0.0001f)
		{
			return SILENT_DB;
		}
		return Mathf.Clamp(20f * Mathf.Log10(volume01), SILENT_DB, 20f);
	}

	private static float Mul(float value)
	{
		return value > 0f ? value : 1f;
	}

	public float GetDuckDb(DuckLevel level)
	{
		switch (level)
		{
		case DuckLevel.Small:
			return -Mathf.Abs(_duckSmallDb);
		case DuckLevel.Significant:
			return -Mathf.Abs(_duckSignificantDb);
		default:
			return 0f;
		}
	}

	public void SetDuck(DuckLevel level, bool immediate = false)
	{
		CurrentDuck = level;
		StartDuckBlend(immediate);
	}

	public void SetDuckSuspended(bool isSuspended)
	{
		_isDuckSuspended = isSuspended;
		ApplyDuckedVolumes();
	}

	private void StartDuckBlend(bool immediate)
	{
		float target = GetDuckDb(CurrentDuck);
		if (_duckRoutine != null)
		{
			StopCoroutine(_duckRoutine);
			_duckRoutine = null;
		}
		if (immediate || _duckBlendSeconds <= 0f || !isActiveAndEnabled)
		{
			_currentDuckDb = target;
			ApplyDuckedVolumes();
			return;
		}
		_duckRoutine = StartCoroutine(IEBlendDuck(target));
	}

	private IEnumerator IEBlendDuck(float target)
	{
		float from = _currentDuckDb;
		float elapsed = 0f;
		while (elapsed < _duckBlendSeconds)
		{
			elapsed += Time.unscaledDeltaTime;
			_currentDuckDb = Mathf.Lerp(from, target, Mathf.Clamp01(elapsed / _duckBlendSeconds));
			ApplyDuckedVolumes();
			yield return null;
		}
		_currentDuckDb = target;
		ApplyDuckedVolumes();
		_duckRoutine = null;
	}

	// Writes every bus volume from the current settings, duck and gameplay mute, so each of them only has to change its own state.
	private void ApplyDuckedVolumes()
	{
		if (audioMixer == null)
		{
			return;
		}
		float duck = _isDuckSuspended ? 0f : _currentDuckDb;
		float musicVolume = IsMusicActive ? PlayerPrefs.GetFloat(KEY_BGM_VOLUME, 1f) * Mul(musicVolumeMul) : 0f;
		float sfxVolume = IsSfxActive ? PlayerPrefs.GetFloat(KEY_SFX_VOLUME, 1f) * Mul(sfxVolumeMul) : 0f;
		float ambientVolume = IsSfxActive ? PlayerPrefs.GetFloat(KEY_AMBIENT_VOLUME, 1f) * Mul(ambientVolumeMul) : 0f;
		SetBusVolume(PARAM_MUSIC_VOLUME, musicVolume, duck);
		SetBusVolume(PARAM_AMBIENT_VOLUME, ambientVolume, duck);
		SetBusVolume(PARAM_SFX_VOLUME, sfxVolume, 0f);
		SetBusVolume(PARAM_UI_VOLUME, PlayerPrefs.GetFloat(KEY_UI_VOLUME, 1f) * (IsSfxActive ? 1f : 0f), 0f);
		ApplyGameplaySfxMute();
	}

	public void SetGameplaySfxMuted(bool isMuted, bool immediate = false)
	{
		IsGameplaySfxMuted = isMuted;
		float target = isMuted ? 1f : 0f;
		if (_gameplaySfxMuteRoutine != null)
		{
			StopCoroutine(_gameplaySfxMuteRoutine);
			_gameplaySfxMuteRoutine = null;
		}
		if (immediate || _gameplaySfxMuteBlendSeconds <= 0f || !isActiveAndEnabled)
		{
			_gameplaySfxMute01 = target;
			ApplyGameplaySfxMute();
			return;
		}
		_gameplaySfxMuteRoutine = StartCoroutine(IEBlendGameplaySfxMute(target));
	}

	private IEnumerator IEBlendGameplaySfxMute(float target)
	{
		float from = _gameplaySfxMute01;
		float duration = _gameplaySfxMuteBlendSeconds;
		float elapsed = 0f;
		while (elapsed < duration)
		{
			elapsed += Time.unscaledDeltaTime;
			_gameplaySfxMute01 = Mathf.Lerp(from, target, Mathf.Clamp01(elapsed / duration));
			ApplyGameplaySfxMute();
			yield return null;
		}
		_gameplaySfxMute01 = target;
		ApplyGameplaySfxMute();
		_gameplaySfxMuteRoutine = null;
	}

	// Gameplay sfx groups sit under SFX, so their own level is only the duck plus the pause mute (0 dB = untouched).
	private void ApplyGameplaySfxMute()
	{
		if (audioMixer == null)
		{
			return;
		}
		if (_gameplaySfxBaseDb == null)
		{
			_gameplaySfxBaseDb = new float[GAMEPLAY_SFX_VOLUME_PARAMS.Length];
		}
		float duck = _isDuckSuspended ? 0f : _currentDuckDb;
		for (int i = 0; i < GAMEPLAY_SFX_VOLUME_PARAMS.Length; i++)
		{
			float db = Mathf.Lerp(_gameplaySfxBaseDb[i] + duck, SILENT_DB, _gameplaySfxMute01);
			if (!audioMixer.SetFloat(GAMEPLAY_SFX_VOLUME_PARAMS[i], db) && !_hasWarnedMissingGameplaySfxParams)
			{
				_hasWarnedMissingGameplaySfxParams = true;
				UnityEngine.Debug.LogWarning("[AudioManagerCakeOrder] Gameplay sfx volume parameters are not exposed in the mixer.");
			}
		}
	}

	private void Start()
	{
		ApplySoundTimeScale();
		ApplyDuckedVolumes();
	}

	public void ToggleMusic()
	{
		SetBgmActive(!IsMusicActive);
	}

	public void ToggleSfx()
	{
		SetSfxActive(!IsSfxActive);
	}

	public void ToggleHaptic()
	{
		SetHapticActive(!IsHapticActive);
	}

	public void SetBgmActive(bool isActive)
	{
		PlayerPrefs.SetInt(KEY_BGM_ACTIVE, isActive ? 1 : 0);
		ApplyMusicConfig();
		this.onBgmToggled?.Invoke(isActive);
	}

	public void SetSfxActive(bool isActive)
	{
		PlayerPrefs.SetInt(KEY_SFX_ACTIVE, isActive ? 1 : 0);
		if (!isActive)
		{
			StopSFX();
		}
		ApplySfxConfig();
		this.onSfxToggled?.Invoke(isActive);
	}

	public void SetHapticActive(bool isActive)
	{
		PlayerPrefs.SetInt(KEY_HAPTIC_ACTIVE, isActive ? 1 : 0);
		ApplyHapticConfig();
		this.onHapticToggled?.Invoke(isActive);
	}

	public void SetMusicVolume(float volume, bool save = true)
	{
		if (save)
		{
			PlayerPrefs.SetFloat(KEY_BGM_VOLUME, Mathf.Clamp01(volume));
		}
		ApplyMusicConfig();
	}

	public void SetSfxVolume(float volume, bool save = true)
	{
		if (save)
		{
			PlayerPrefs.SetFloat(KEY_SFX_VOLUME, Mathf.Clamp01(volume));
		}
		ApplySfxConfig();
	}

	private void ApplySfxConfig()
	{
		ApplyDuckedVolumes();
	}

	private void ApplyMusicConfig()
	{
		ApplyDuckedVolumes();
	}

	// Writes one bus level in dB: the settings volume (0..1) plus the duck offset.
	private void SetBusVolume(string param, float volume01, float duckDb)
	{
		if (audioMixer == null)
		{
			return;
		}
		float db = volume01 <= 0.0001f ? SILENT_DB : Mathf.Max(SILENT_DB, VolumeToDb(volume01) + duckDb);
		if (!audioMixer.SetFloat(param, db) && !_hasWarnedMissingMixerParams)
		{
			_hasWarnedMissingMixerParams = true;
			UnityEngine.Debug.LogWarning("[AudioManagerCakeOrder] Mixer parameter '" + param + "' is not exposed.");
		}
	}

	private void ApplyHapticConfig()
	{
		// Haptics are gated by IsHapticActive where they are triggered; there is no mixer state to write.
	}

	public void PlayMusic(AudioClip clip, float volume = 1f, MusicTransitionType transitionType = MusicTransitionType.FadeOutFadeIn)
	{
		MusicLoader.PlayClip(clip, volume, transitionType);
	}

	public void PlayAmbient(AudioClip clip, float volume = 1f, MusicTransitionType transitionType = MusicTransitionType.FadeOutFadeIn)
	{
		AmbientLoader.PlayClip(clip, volume, transitionType);
	}

	public void PlayMusic(AssetReference clipReference, float volume = 1f, MusicTransitionType transitionType = MusicTransitionType.FadeOutFadeIn)
	{
		MusicLoader.PlayReference(clipReference, volume, transitionType);
	}

	public void PlayAmbient(AssetReference clipReference, float volume = 1f, MusicTransitionType transitionType = MusicTransitionType.FadeOutFadeIn)
	{
		AmbientLoader.PlayReference(clipReference, volume, transitionType);
	}

	public void StopMusic()
	{
		MusicLoader.Stop();
	}

	public void StopAmbient()
	{
		AmbientLoader.Stop();
	}

	private bool PassSameClipGate(AudioClip clip)
	{
		if (clip == null)
		{
			return false;
		}
		float now = Time.unscaledTime;
		if (sameClipMinInterval > 0f && _lastPlayTime.TryGetValue(clip, out float last) && now - last < sameClipMinInterval)
		{
			return false;
		}
		_lastPlayTime[clip] = now;
		return true;
	}

	public void PlaySfx(AudioClip clip, AudioTrack track, float volume = 1f)
	{
		if (clip == null || !IsSfxActive || !PassSameClipGate(clip))
		{
			return;
		}
		AudioSource source = GetSource(track);
		if (source == null)
		{
			return;
		}
		source.pitch = SpeedFor(track);
		source.PlayOneShot(clip, volume);
	}

	public void PlaySfxWithPitchVariant(AudioClip clip, AudioTrack track, float volume = 1f, float pitchVariance = 0.1f)
	{
		if (clip == null || !IsSfxActive || !PassSameClipGate(clip))
		{
			return;
		}
		float pitch = SpeedFor(track) * (1f + UnityEngine.Random.Range(-pitchVariance, pitchVariance));
		PlayPitched(clip, track, volume, pitch);
	}

	public void PlaySfxWithFixedPitch(AudioClip clip, AudioTrack track, float volume = 1f, float pitch = 1f, bool ignoreSameClipGate = false)
	{
		if (clip == null || !IsSfxActive || (!ignoreSameClipGate && !PassSameClipGate(clip)))
		{
			return;
		}
		PlayPitched(clip, track, volume, pitch);
	}

	private void PlayPitched(AudioClip clip, AudioTrack track, float volume, float pitch)
	{
		PitchedVoice voice = AcquirePitchedVoice();
		if (voice == null)
		{
			return;
		}
		voice.track = track;
		voice.basePitch = pitch;
		voice.startTime = Time.unscaledTime;
		voice.source.outputAudioMixerGroup = FindGroup(GetMixerGroup(track));
		voice.source.clip = clip;
		voice.source.volume = volume;
		voice.source.pitch = Mathf.Clamp(pitch, MIN_PLAYBACK_SPEED, MAX_PLAYBACK_SPEED);
		voice.source.loop = false;
		voice.source.Play();
	}

	private PitchedVoice AcquirePitchedVoice()
	{
		foreach (PitchedVoice voice in _pitchedVoices)
		{
			if (voice.source != null && !voice.source.isPlaying)
			{
				return voice;
			}
		}
		if (_maxPitchedVoices > 0 && _pitchedVoices.Count >= _maxPitchedVoices)
		{
			// Past the cap: cut the oldest voice.
			PitchedVoice oldest = null;
			foreach (PitchedVoice voice in _pitchedVoices)
			{
				if (voice.source != null && (oldest == null || voice.startTime < oldest.startTime))
				{
					oldest = voice;
				}
			}
			if (oldest != null)
			{
				oldest.source.Stop();
				return oldest;
			}
		}
		if (_pitchedVoiceRoot == null)
		{
			_pitchedVoiceRoot = new GameObject("PitchedVoices").transform;
			_pitchedVoiceRoot.SetParent(transform, false);
		}
		GameObject host = new GameObject("PitchedVoice");
		host.transform.SetParent(_pitchedVoiceRoot, false);
		AudioSource created = host.AddComponent<AudioSource>();
		created.playOnAwake = false;
		PitchedVoice result = new PitchedVoice { source = created };
		_pitchedVoices.Add(result);
		return result;
	}

	private SfxBus GetBus(AudioTrack track)
	{
		if (_sfxBuses == null)
		{
			return null;
		}
		foreach (SfxBus bus in _sfxBuses)
		{
			if (bus != null && bus.track == track)
			{
				return bus;
			}
		}
		return null;
	}

	private AudioSource GetSource(AudioTrack track)
	{
		SfxBus bus = GetBus(track);
		if (bus != null && bus.source != null)
		{
			return bus.source;
		}
		// No authored bus for this track: create one on demand so the sound is not lost.
		if (_fallbackSources.TryGetValue(track, out AudioSource cached) && cached != null)
		{
			return cached;
		}
		GameObject host = new GameObject("Sfx_" + track);
		host.transform.SetParent(transform, false);
		AudioSource created = host.AddComponent<AudioSource>();
		created.playOnAwake = false;
		created.outputAudioMixerGroup = FindGroup(GetMixerGroup(track));
		_fallbackSources[track] = created;
		return created;
	}

	private AudioSource GetVariantSource(AudioTrack track)
	{
		return GetSource(track);
	}

	public void PlaySfxAndHaptic(SfxAndHapticTrigger trigger, AudioTrack audioTrack = AudioTrack.UI)
	{
		if (trigger == null)
		{
			return;
		}
		if (trigger.clip != null)
		{
			PlaySfx(trigger.clip, audioTrack, trigger.volume > 0f ? trigger.volume : 1f);
		}
		if (IsHapticActive)
		{
			// Devices without advanced haptics get the simpler fallback pattern.
			MoreMountains.NiceVibrations.MMVibrationManager.Haptic(MoreMountains.NiceVibrations.MMVibrationManager.HapticsSupported() ? trigger.haptic : trigger.fallbackHaptic);
		}
	}

	// Common ui sounds are authored in commonSfxTriggerConfigs, indexed by the CommonSfx value.
	public void Play(CommonSfx type)
	{
		int index = (int)type;
		if (commonSfxTriggerConfigs == null || index < 0 || index >= commonSfxTriggerConfigs.Length)
		{
			return;
		}
		PlaySfxAndHaptic(commonSfxTriggerConfigs[index], AudioTrack.UI);
	}

	public void StopSFX()
	{
		if (_sfxBuses != null)
		{
			foreach (SfxBus bus in _sfxBuses)
			{
				if (bus != null && bus.source != null)
				{
					bus.source.Stop();
				}
			}
		}
		foreach (AudioSource source in _fallbackSources.Values)
		{
			if (source != null)
			{
				source.Stop();
			}
		}
		foreach (PitchedVoice voice in _pitchedVoices)
		{
			if (voice.source != null)
			{
				voice.source.Stop();
			}
		}
	}

	protected override void OnDestroy()
	{
		_musicLoader?.ReleaseAll();
		_ambientLoader?.ReleaseAll();
		base.OnDestroy();
	}

	public void ApplyDeviceTierSnapshot()
	{
	}

	public void ApplyWeather(WeatherEffect weather, float blendSeconds = -1f)
	{
		CurrentWeather = weather;
		Entry entry = _weatherProfiles != null ? _weatherProfiles.Get(weather) : null;
		if (entry == null || audioMixer == null)
		{
			return;
		}
		float blend = blendSeconds >= 0f ? blendSeconds : _weatherBlendSeconds;
		if (_weatherBlendRoutine != null)
		{
			StopCoroutine(_weatherBlendRoutine);
			_weatherBlendRoutine = null;
		}
		// The first weather (or a zero blend) is written straight away; later ones blend from the last written state.
		if (!_hasWeatherApplied || blend <= 0f || !isActiveAndEnabled)
		{
			WriteWeather(entry);
			_weatherFrom = entry;
		}
		else
		{
			_weatherBlendRoutine = StartCoroutine(IEBlendWeather(_weatherFrom ?? entry, entry, blend));
		}
		_hasWeatherApplied = true;
	}

	private IEnumerator IEBlendWeather(Entry from, Entry to, float duration)
	{
		float elapsed = 0f;
		while (elapsed < duration)
		{
			elapsed += Time.unscaledDeltaTime;
			WriteWeatherBlend(from, to, Mathf.Clamp01(elapsed / duration));
			yield return null;
		}
		WriteWeather(to);
		_weatherFrom = to;
		_weatherBlendRoutine = null;
	}

	private void WriteWeatherBlend(Entry from, Entry to, float t)
	{
		if (from == null)
		{
			from = to;
		}
		WriteFilters(LerpHz(from.lowpassFreq, to.lowpassFreq, t), LerpHz(from.highpassFreq, to.highpassFreq, t), Mathf.Lerp(from.duckThunderThreshold, to.duckThunderThreshold, t), Mathf.Lerp(from.duckCustomerThreshold, to.duckCustomerThreshold, t));
		WriteDsp(Mathf.Lerp(from.distortionAmount, to.distortionAmount, t), Mathf.Lerp(from.reverbAmount, to.reverbAmount, t), Mathf.Lerp(from.chorusAmount, to.chorusAmount, t));
		_weatherFrom = to;
	}

	private void WriteWeather(Entry entry)
	{
		WriteFilters(entry.lowpassFreq, entry.highpassFreq, entry.duckThunderThreshold, entry.duckCustomerThreshold);
		WriteDsp(entry.distortionAmount, entry.reverbAmount, entry.chorusAmount);
	}

	private void WriteFilters(float lowpassHz, float highpassHz, float duckThunderDb, float duckCustomerDb)
	{
		if (audioMixer == null)
		{
			return;
		}
		audioMixer.SetFloat(PARAM_LOWPASS_HZ, Mathf.Clamp(lowpassHz, 10f, 22000f));
		audioMixer.SetFloat(PARAM_HIGHPASS_HZ, Mathf.Clamp(highpassHz, 10f, 22000f));
		audioMixer.SetFloat(PARAM_DUCK_THUNDER, duckThunderDb);
		audioMixer.SetFloat(PARAM_DUCK_CUSTOMER, duckCustomerDb);
	}

	// An amount of 0 is dry (silent wet mix), 1 is full wet (0 dB).
	private void WriteDsp(float distortionAmount, float reverbAmount, float chorusAmount)
	{
		if (audioMixer == null)
		{
			return;
		}
		if (_silenceHeavyDspOnLowEnd && HeavyAudioEffectsDisabled)
		{
			distortionAmount = 0f;
			reverbAmount = 0f;
			chorusAmount = 0f;
		}
		audioMixer.SetFloat(PARAM_DISTORTION_MIX, VolumeToDb(distortionAmount));
		audioMixer.SetFloat(PARAM_REVERB_MIX, VolumeToDb(reverbAmount));
		audioMixer.SetFloat(PARAM_CHORUS_MIX, VolumeToDb(chorusAmount));
	}

	// Cutoffs are perceived logarithmically, so blend them in log space.
	private static float LerpHz(float fromHz, float toHz, float t)
	{
		if (fromHz <= 0f || toHz <= 0f)
		{
			return Mathf.Lerp(fromHz, toHz, t);
		}
		return Mathf.Exp(Mathf.Lerp(Mathf.Log(fromHz), Mathf.Log(toHz), t));
	}

	private string GetMixerGroup(AudioTrack track)
	{
		switch (track)
		{
		case AudioTrack.Music:
			return MIXER_GROUP_BGM;
		case AudioTrack.Ambient:
			return MIXER_GROUP_AMBIENT;
		case AudioTrack.UI:
			return MIXER_GROUP_UI;
		case AudioTrack.SfxInteraction:
			return MIXER_GROUP_SFX_INTERACTION;
		case AudioTrack.SfxCooking:
			return MIXER_GROUP_SFX_COOKING;
		case AudioTrack.SfxCustomer:
			return MIXER_GROUP_SFX_CUSTOMER;
		default:
			return MIXER_GROUP_SFX;
		}
	}

	public void RegisterAudioSource(AudioSource audioSource, AudioTrack track)
	{
		if (audioSource == null)
		{
			return;
		}
		AudioMixerGroup group = FindGroup(GetMixerGroup(track));
		if (group != null)
		{
			audioSource.outputAudioMixerGroup = group;
		}
		audioSource.pitch = SpeedFor(track);
	}

	public void RegisterAudioSourceObject(Transform gameObject, AudioTrack track)
	{
		if (gameObject == null)
		{
			return;
		}
		foreach (AudioSource source in gameObject.GetComponentsInChildren<AudioSource>(true))
		{
			RegisterAudioSource(source, track);
		}
	}
}
}
