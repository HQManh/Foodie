using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.BaseUI
{

public abstract class UICakePopup : UIElementWithAnim
{
	public enum PopupSize
	{
		Small,
		Fullscreen
	}

	public enum PopupOpenStyle
	{
		Additive,
		Replace
	}

	[Serializable]
	public struct BackdropTintOverride
	{
		public bool overrideBlurTint;

		[Tooltip("Multiplied with the blurred world instead of the weather's blur tint.")]
		public Color blurTint;

		public bool overrideDimTint;

		[Tooltip("Solid dim overlay colour instead of the weather's; alpha is how dark it gets.")]
		public Color dimTint;
	}

	[Header("Backdrop")]
	[Tooltip("Background behind this popup while it is the top one. Auto takes the scene UI's default.")]
	[SerializeField]
	private BlurBackdropMode _blurBackdropMode;

	[Tooltip("Optional tints used instead of the weather's while this popup is the top one.")]
	[SerializeField]
	private BackdropTintOverride _backdropTint;

	[Tooltip("Optional look of the blurred world (exposure, tone map, vignette) while this popup is the top one, instead of the weather's.")]
	[SerializeField]
	private BlurGradingProfileSO _blurGradingOverride;

	[Header("Currency bar")]
	[Tooltip("The scene's currency bar (heart / gem / gold) is on screen while this popup is the top one. It also goes away while the popup is hidden by hold-to-view.")]
	[SerializeField]
	private bool _showCurrency;

	public const bool DeactivateHiddenUI = true;

	[Tooltip("Whole popup content. Faded out while another popup is shown above this one, and by hold-to-view.")]
	[SerializeField]
	private CanvasGroup _visibleCanvasGroup;

	private bool _isCoveredByPopupAbove;

	private bool _isPeekHidden;

	private Tween _tweenVisible;

	[SerializeField]
	private Button[] _btnCloses;

	[Tooltip("Tapping the scene backdrop around this popup (while it is the top one) closes it, like a close button.")]
	[SerializeField]
	private bool _closeOnBackdropTap;

	private bool _isParkingOnCreate;

	protected float _lastTimeClick;

	protected const float CooldownClick = 1f;

	public virtual PopupSize Size => PopupSize.Small;

	public virtual PopupOpenStyle OpenStyle => PopupOpenStyle.Additive;

	public virtual AudioManagerCakeOrder.DuckLevel DuckLevel => AudioManagerCakeOrder.DuckLevel.None;

	public virtual bool IsMuteGameplaySfx => false;

	public virtual BlurBackdropMode BackdropMode => BlurBackdropMode.Auto;

	public Color? BlurTintOverride => null;

	public Color? DimTintOverride => null;

	public BlurGradingProfileSO BlurGradingOverride => null;

	public bool ShowCurrency => false;

	public bool IsPeekHidden => false;

	protected virtual SfxAndHapticTrigger SfxAndHapticOnOpen => null;

	protected virtual SfxAndHapticTrigger SfxAndHapticOnClose => null;

	protected virtual bool PlayOpenCloseSfx => false;

	protected SceneMainUI _mainUI { get; private set; }

	public void SetCoveredByPopupAbove(bool isCovered)
	{
	}

	protected void SetPeekHidden(bool isHidden, bool isImmediate = false)
	{
	}

	private void ApplyVisible(bool isImmediate)
	{
	}

	private void SetContentActive(bool isActive)
	{
	}

	public void HandleBackdropTap()
	{
	}

	protected virtual void Awake()
	{
	}

	protected virtual void OnClickClose()
	{
	}

	public virtual void SetUpOnCreate(SceneMainUI mainUI)
	{
	}

	public abstract void HideByBackButton();

	protected override void OnBeforeShow()
	{
	}

	protected void SetBlurBackdropPeek(bool isPeeking)
	{
	}

	protected override void OnBeforeHide()
	{
	}
}
}
