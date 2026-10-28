using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.BaseUI;

[RequireComponent(typeof(RawImage))]
public class UIPopupBlurBackdrop : MonoBehaviour, IPointerClickHandler, IEventSystemHandler
{
	[Serializable]
	public class Settings
	{
		public Settings snapshot;

		[Tooltip("Fade when the backdrop comes up or changes mode / tint / grading.")]
		public float fadeInDuration;

		[Tooltip("Fade when the last popup closes.")]
		public float fadeOutDuration;

		[Tooltip("Matches the fade the hold-to-view popups use on their own UI.")]
		public float peekFadeDuration;

		[Tooltip("Seconds between captures in LiveBlur mode.")]
		public float liveRefreshInterval;

		[Tooltip("Also blur the scene UI drawn under this backdrop (HUD, tabs) into the snapshot, re-captured whenever the top popup changes. Everything from this backdrop up (top bar, popups, ...) stays out. Only UI drawn by the world camera (Screen Space - Camera canvas) can be captured.")]
		public bool includeUIInSnapshot;
	}

	[Serializable]
	public struct WeatherTint
	{
		public WeatherEffect weather;

		[FormerlySerializedAs("tint")]
		[Tooltip("Multiplied with the blurred world.")]
		public Color blurTint;

		[Tooltip("Colour of the solid dim overlay; alpha is how dark it gets.")]
		public Color dimTint;

		[Tooltip("Look of the blurred world for this weather (exposure, tone map, vignette). Empty: the default profile.")]
		public BlurGradingProfileSO grading;
	}

	[SerializeField]
	private Settings _settings;

	[Header("Grading")]
	[Tooltip("Grading before a weather is set, and for a weather without its own profile. Empty: no grading.")]
	[SerializeField]
	private BlurGradingProfileSO _defaultGrading;

	[Tooltip("Shows the previous snapshot while it fades out when the grading changes (StaticBlur), so the switch is a cross-fade.")]
	[SerializeField]
	private RawImage _blurPrevImage;

	[Header("Input")]
	[Tooltip("Full-screen raycast target (draws nothing). On while any popup is open, so taps never reach the HUD or world behind a popup; a tap on it is passed to the top popup (see onTap).")]
	[SerializeField]
	private Graphic _inputBlocker;

	[Header("Dim overlay")]
	[Tooltip("Dim mode draws the solid overlay below. Off: Dim mode draws nothing (popups no longer carry their own dim).")]
	[SerializeField]
	private bool _showDimOverlay;

	[SerializeField]
	private Image _dimImage;

	[Header("Tint by weather")]
	[FormerlySerializedAs("_defaultTint")]
	[Tooltip("Blur tint before a weather is set, and for a weather missing below.")]
	[SerializeField]
	private Color _defaultBlurTint;

	[Tooltip("Dim tint before a weather is set, and for a weather missing below.")]
	[SerializeField]
	private Color _defaultDimTint;

	[Tooltip("Dark and desaturated, so the popup reads on top while the backdrop keeps the weather's colour theme.")]
	[SerializeField]
	private WeatherTint[] _weatherTints;

	private RawImage _blurImage;

	private CameraBlurSnapshot _snapshot;

	private bool _hasPopup;

	private BlurBackdropMode _requestedMode;

	private Color? _blurTintOverride;

	private Color? _dimTintOverride;

	private Color _weatherBlurTint;

	private Color _weatherDimTint;

	private BlurGradingProfileSO _weatherGrading;

	private BlurGradingProfileSO _gradingOverride;

	private BlurGradingProfileSO _capturedGrading;

	private Tween _tweenCrossfade;

	[Header("UI in snapshot")]
	[Tooltip("With Include UI In Snapshot: extra UI kept out of the blurred shot, on top of the rule that only UI drawn under this backdrop (its earlier siblings) goes in.")]
	[SerializeField]
	private RectTransform[] _hideDuringCapture;

	[Tooltip("UI drawn under this backdrop that must stay active while the blur covers it (see UICakePopup.DeactivateHiddenUI). Can be nested: its parents stay on, their other children still go off.")]
	[SerializeField]
	private RectTransform[] _keepActiveUnderneath;

	private readonly List<GameObject> _deactivatedUnderneath;

	private readonly List<(CanvasGroup group, float alpha)> _hiddenForCapture;

	private object _requestSource;

	private object _capturedSource;

	private BlurBackdropMode _mode;

	private bool _isBlurActive;

	private bool _isBlurShown;

	private bool _wasPeeking;

	private Color _blurTarget;

	private Color _dimTarget;

	private Tween _tweenFade;

	private float _nextLiveCaptureTime;

	private bool _isRefreshPending;

	private Camera _camera;

	private Camera _culledCamera;

	private int _savedCullingMask;

	private int _appliedCullingMask;

	public BoolModifierWithRegisteredSource PeekRequest { get; private set; }

	private bool DrawsDimOverlay => false;

	public BlurBackdropMode Mode => BlurBackdropMode.Auto;

	private BlurGradingProfileSO EffectiveGrading => null;

	public event Action onTap
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	private void DeactivateUnderneath()
	{
	}

	private void DeactivateChildren(Transform parent, int count)
	{
	}

	private bool ContainsKeptActive(Transform t)
	{
		return false;
	}

	private void ReactivateUnderneath()
	{
	}

	private bool IsKeptActive(Transform t)
	{
		return false;
	}

	private void Awake()
	{
	}

	private void SetInputBlocked(bool isBlocked)
	{
	}

	public void OnPointerClick(PointerEventData eventData)
	{
	}

	public void Apply(BlurBackdropMode mode, Color? blurTint, Color? dimTint, BlurGradingProfileSO grading = null, object source = null)
	{
	}

	public void Clear()
	{
	}

	public void SetWeather(WeatherEffect weather)
	{
	}

	private void Refresh()
	{
	}

	private bool IsAt(Color blurTarget, Color dimTarget)
	{
		return false;
	}

	private void FadeTo(Color blurTarget, Color dimTarget, float duration)
	{
	}

	private static Color WithAlpha(Color color, float alpha)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Color);
	}

	private bool RecaptureWithCrossfade(BlurBackdropMode mode)
	{
		return false;
	}

	private void HidePrevImage()
	{
	}

	private void HideForCapture()
	{
	}

	private void RestoreAfterCapture()
	{
	}

	private bool TryCapture()
	{
		return false;
	}

	private void Update()
	{
	}

	private void OnApplicationPause(bool isPaused)
	{
	}

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	private void OnDestroy()
	{
	}

	private void Shutdown()
	{
	}

	private void ResetVisuals()
	{
	}

	private void ReleaseSnapshot()
	{
	}

	private void CullCamera()
	{
	}

	private void RestoreCamera()
	{
	}

	private int GetUILayerMask(Camera camera)
	{
		return 0;
	}

	private void FitToCanvas()
	{
	}
}
