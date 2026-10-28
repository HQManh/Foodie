using System;
using UnityEngine;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "WeatherAudioProfileSO", menuName = "ScriptableObjects/CakeOrder/WeatherAudioProfileSO", order = 2)]
public class WeatherAudioProfileSO : ScriptableObject
{
	[Serializable]
	public class Entry
	{
		public WeatherEffect weather;

		[Header("Core (every device)")]
		[Tooltip("Cheap biquad filters - these carry the weather on low-end hardware.")]
		[Range(10f, 22000f)]
		public float lowpassFreq;

		[Range(10f, 22000f)]
		public float highpassFreq;

		[Range(-80f, 0f)]
		public float duckThunderThreshold;

		[Range(-80f, 0f)]
		public float duckCustomerThreshold;

		[Header("DSP (high-end only)")]
		[Tooltip("0 = silent, 1 = full wet. Converted to dB before it reaches the mixer.")]
		[Range(0f, 1f)]
		public float distortionAmount;

		[Range(0f, 1f)]
		public float reverbAmount;

		[Range(0f, 1f)]
		public float chorusAmount;
	}

	public const string PARAM_LOWPASS = "Master_Lowpass";

	public const string PARAM_HIGHPASS = "Master_Highpass";

	public const string PARAM_DUCK_THUNDER = "Duck_Thunder_Thresh";

	public const string PARAM_DUCK_CUSTOMER = "Duck_Customer_Thresh";

	public const string PARAM_DISTORTION_MIX = "Master_Distortion_Mix";

	public const string PARAM_REVERB_MIX = "Master_Reverb_Mix";

	public const string PARAM_CHORUS_MIX = "Master_Chorus_Mix";

	public const string SNAPSHOT_LOW_END = "Snapshot_LowEnd";

	public const string SNAPSHOT_HIGH_END = "Snapshot_HighEnd";

	public const float MIX_SILENT_DB = -80f;

	public const float LOWPASS_NEUTRAL_HZ = 22000f;

	public const float HIGHPASS_NEUTRAL_HZ = 10f;

	[SerializeField]
	private Entry[] _entries;

	public Entry[] Entries => null;

	public Entry Get(WeatherEffect weather)
	{
		return null;
	}

	public static float AmountToDb(float amount)
	{
		return 0f;
	}

	public void EnsureAllWeathers()
	{
	}

	private static Entry[] CreateDefaults()
	{
		return null;
	}

	private static Entry DefaultFor(WeatherEffect weather)
	{
		return null;
	}
}
