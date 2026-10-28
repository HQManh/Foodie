using System;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.PopupMinigame;

public class UIPopupMinigameCookOrder : UICakePopup
{
	public enum ViewCoverMode
	{
		Loading,
		Replaying
	}

	[Serializable]
	public class AnimConfig
	{
		public float durationShowHideCover;

		[Header("Show Result")]
		public Color contentColorOnShowResult;

		public float durationTransitionColor;
	}

	private UIPopupMinigameConfig _config;

	[SerializeField]
	private RectTransform _visibleViewRectTransform;

	[SerializeField]
	private RectTransform _viewRectTransform;

	[SerializeField]
	private Vector2 _padding;

	[SerializeField]
	private RawImage _view;

	[SerializeField]
	private UIZoneMinigameInputSimulator _inputSimulator;

	[SerializeField]
	private Image _cover;

	[SerializeField]
	private AnimConfig _animConfig;

	private Tween _tweenShowHideCover;

	[Header("Result")]
	[SerializeField]
	private UIElementWithAnim _uiResultWin;

	[SerializeField]
	private UIElementWithAnim _uiResultLose;

	[SerializeField]
	private Button[] _btnCloseMinigame;

	private CookOrderPopupMinigameLoader _minigameLoader;

	private Action _onClickEndButton;

	private Tween _tweenShowResult;

	private bool _isShowingResult;

	public RawImage View => null;

	public Vector2Int ViewSize => default(Vector2Int);

	public event Action onForceExit
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

	public override void HideByBackButton()
	{
	}

	protected override void Awake()
	{
	}

	public override void SetUpOnCreate(SceneMainUI mainUI)
	{
	}

	public void SetUpOnCreated(CookOrderPopupMinigameLoader minigameLoader, Camera miniSceneCamera, InputMiniScene inputMiniScene)
	{
	}

	public void SetData(UIPopupMinigameConfig config)
	{
	}

	public void BindTexture(RenderTexture renderTexture)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	protected override void OnBeforeHide()
	{
	}

	private void ShowViewCoverImmediate()
	{
	}

	public void HideViewCover()
	{
	}

	public void ShowViewCoverForRetry(Action onDone)
	{
	}

	public void ShowResult(MinigameRuntimeData result, bool isWin, Action onClose)
	{
	}

	private void OnDoneAnim(UIElementAbstract element)
	{
	}

	protected override void OnClickClose()
	{
	}

	private void OnClickCloseOnEnd()
	{
	}
}
