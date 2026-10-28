using System;
using UnityEngine;
using UnityEngine.Rendering;

namespace CakeOrder.InGame
{

public class BackgroundColorGradingControl : MonoBehaviour
{
	[Serializable]
	public class SkinPreset
	{
		[Tooltip("Skin id from the remote skin_config, e.g. hlw.")]
		public string skinId;

		public BackgroundColorGradingPresetSO preset;
	}

	private const string KeywordName = "_BG_COLOR_GRADING";

	private const float StrengthEpsilon = 0.001f;

	// The ids are Shader.PropertyToID of string literals read from the static constructor (metadata).
	private static readonly int IdShadowColor = Shader.PropertyToID("_BgGradeShadowColor");

	private static readonly int IdMidColor = Shader.PropertyToID("_BgGradeMidColor");

	private static readonly int IdHighlightColor = Shader.PropertyToID("_BgGradeHighlightColor");

	private static readonly int IdToneRange = Shader.PropertyToID("_BgGradeToneRange");

	private static readonly int IdParams = Shader.PropertyToID("_BgGradeParams");

	private static GlobalKeyword _keyword;

	private static bool _keywordCreated;

	[SerializeField]
	private BackgroundColorGradingPresetSO _initialPreset;

	[SerializeField]
	[Min(0f)]
	private float _defaultTransitionDuration;

	[Header("Skin presets (picked on scene enter from remote skin_config)")]
	[Tooltip("Used for \"normal\" and for any skin id without its own preset.")]
	[SerializeField]
	private BackgroundColorGradingPresetSO _normalPreset;

	[SerializeField]
	private SkinPreset[] _skinPresets;

	private BackgroundColorGradingPresetSO _shownPreset;

	private BackgroundColorGradingPresetSO _targetPreset;

	private float _strength;

	private float _fromStrength;

	private float _toStrength;

	private float _elapsed;

	private float _phaseDuration;

	private bool _isFadingOutBeforeSwap;

	private bool _isTransitioning;

	public static BackgroundColorGradingControl Instance { get; private set; }

	public BackgroundColorGradingPresetSO CurrentPreset => null;

	public float CurrentStrength => 0f;

	public bool IsTransitioning => false;

	private float TargetStrength => 0f;

	public static BackgroundColorGradingControl GetOrCreate()
	{
		return null;
	}

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public static void ApplySkinPresetOnHomeEnter()
	{
	}

	public static void ApplySkinPresetOnGameplayEnter()
	{
	}

	public BackgroundColorGradingPresetSO GetPresetForSkin(string skinId)
	{
		return null;
	}

	public void SetPreset(BackgroundColorGradingPresetSO preset, float duration = -1f)
	{
	}

	public void SetPresetImmediate(BackgroundColorGradingPresetSO preset)
	{
	}

	private void StartPhase(float toStrength, float duration)
	{
	}

	private void Update()
	{
	}

	private static void Push(BackgroundColorGradingPresetSO preset, float strength)
	{
	}
}
}
