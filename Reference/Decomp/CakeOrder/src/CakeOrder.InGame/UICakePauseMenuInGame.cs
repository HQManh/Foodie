using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.InGame;

public class UICakePauseMenuInGame : UICakeSettingMenuBase
{
	public enum Command
	{
		QuitToHome,
		Retry,
		SkipDay,
		Cheat_SuperSkip,
		Cheat_LoseOutOfSlot,
		Cheat_LoseOutOfTime,
		Cheat_LoseOutOfMove
	}

	private enum CheatPanelType
	{
		None,
		AutoplayConfig,
		LevelSelect
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUpOnCreated_003Ed__19 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UICakePauseMenuInGame _003C_003E4__this;

		public UIInLevelGeneralReferences generalRefs;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[Header("Settings")]
	[SerializeField]
	private UIAnimShowHideControl[] _animSectionSettings;

	[Header("Buttons")]
	[SerializeField]
	private UIAnimShowHideControl[] _animButtons;

	[SerializeField]
	private Button _btnRetry;

	[SerializeField]
	private Button _btnHome;

	[SerializeField]
	private Button _btnContinue;

	[SerializeField]
	private float _allowEndDayAfterNumCustomerReachedProgress;

	[SerializeField]
	private TextMeshProUGUI _txtVersion;

	private UIInLevelGeneralReferences _generalRefs;

	[SerializeField]
	private GameObject _cheatSection;

	[SerializeField]
	private Button _btnToggleCheat;

	[SerializeField]
	private Button _btnToggleDebug;

	[SerializeField]
	private Button _btnCheatSkip;

	[SerializeField]
	private Button _btnCheatLevelSelect;

	[SerializeField]
	private TMP_Text _txtCheatLevelSelect;

	[SerializeField]
	private Button _btnCheatOnlineTime;

	[SerializeField]
	private TMP_Text _txtCheatOnlineTimeStatus;

	[SerializeField]
	private TMP_Text _txtCheatInterCap;

	[SerializeField]
	private Button _btnCheatResetInterCap;

	[SerializeField]
	private Button _btnCheatResetSpeedUp;

	private int _shownInterCapSeconds;

	[SerializeField]
	private Button _btnCheatLoseOutOfSlot;

	[SerializeField]
	private Button _btnCheatLoseOutOfTime;

	[SerializeField]
	private Button _btnCheatLoseOutOfMove;

	[SerializeField]
	private Button _btnCheatServeFx;

	[SerializeField]
	private TMP_Text _txtCheatServeFx;

	[SerializeField]
	private Button _btnCheatAutoplay;

	[SerializeField]
	private TMP_Text _txtCheatAutoplay;

	[SerializeField]
	private Button _btnAutoplayConfig;

	[SerializeField]
	private TMP_Text _txtAutoplayConfig;

	private CheatPanelType _openCheatPanel;

	private Rect _cheatPanelRect;

	private Vector2 _autoplayPanelScroll;

	private Vector2 _levelPanelScroll;

	private string _levelSelectMapId;

	private bool _levelSelectMapDropdownOpen;

	private EventSystem _suspendedEventSystem;

	private static Texture2D _cheatPanelBackground;

	private static Texture2D _cheatPanelCard;

	private static Texture2D _cheatPanelDim;

	private static IAutoplayCheatTarget _autoplay;

	private const int CheatLevelSelectOtherMapLevelCount = 100;

	public override AudioManagerCakeOrder.DuckLevel DuckLevel => AudioManagerCakeOrder.DuckLevel.None;

	public override bool IsMuteGameplaySfx => false;

	private bool _isShownFirstTime => false;

	public event Action<UICakePauseMenuInGame, Command> onPlayerInteract
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

	protected override void Awake()
	{
	}

	[AsyncStateMachine(typeof(_003CSetUpOnCreated_003Ed__19))]
	public UniTask SetUpOnCreated(CakeLevelInitData initData, CakeLevelRuntimeData runtimeData, UIInLevelGeneralReferences generalRefs)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void ShowAllElementImmediate()
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnBeforeHide()
	{
	}

	protected virtual void OnClickHome()
	{
	}

	protected virtual void OnRetryLevel()
	{
	}

	protected override void OnDoneHide()
	{
	}

	protected override void OnDestroy()
	{
	}

	private void OnAutoplaySettingsRefreshed()
	{
	}

	private void OnClickToggleCheat()
	{
	}

	private void OnClickToggleDebug()
	{
	}

	private void RefreshCheatOnlineTimeStatus()
	{
	}

	private void Update()
	{
	}

	private void RefreshCheatInterCapText()
	{
	}

	private void OnClickCheatResetInterCap()
	{
	}

	private void OnClickCheatResetSpeedUp()
	{
	}

	private void OnClickCheatSkip()
	{
	}

	private void OnClickCheatSuperSkip()
	{
	}

	private void OnClickCheatLoseOutOfSlot()
	{
	}

	private void OnClickCheatLoseOutOfTime()
	{
	}

	private void OnClickCheatLoseOutOfMove()
	{
	}

	private void RaiseLoseCheat(Command command)
	{
	}

	private void OnClickCheatServeFx()
	{
	}

	private void RefreshServeFxLabel()
	{
	}

	public static void RegisterAutoplay(IAutoplayCheatTarget target)
	{
	}

	public static void UnregisterAutoplay(IAutoplayCheatTarget target)
	{
	}

	private void OnClickCheatAutoplay()
	{
	}

	private void OnChangeAutoplayStrategy(int index)
	{
	}

	private void OnChangeAutoplayAdaptive(float value)
	{
	}

	private void OnChangeAutoplayIntelligent(float value)
	{
	}

	private void OnChangeAutoplaySaveMe(float value)
	{
	}

	private void OnChangeAutoplayTimeScale(float value)
	{
	}

	private void OnChangeAutoplayWorkWait(int index)
	{
	}

	private void OnClickAutoplayVerbose()
	{
	}

	private void OnChangeAutoplayPickInterval(float value)
	{
	}

	private void OpenAutoplayConfigPanel()
	{
	}

	private static void ConfigureLauncherLabel(TMP_Text label, string text)
	{
	}

	private void OpenLevelSelectPanel()
	{
	}

	private void OpenCheatPanel(CheatPanelType panelType)
	{
	}

	private void CloseCheatPanel()
	{
	}

	private void OnGUI()
	{
	}

	private void DrawCheatPanelWindow(int windowId)
	{
	}

	private void DrawAutoplayConfigPanel()
	{
	}

	private static void DrawBotSlider(string label, float value, float min, float max, bool wholeNumbers, string valueFormat, Action<float> onChanged)
	{
	}

	private void DrawLevelSelectPanel()
	{
	}

	private bool DrawLevelSelectMapDropdown()
	{
		return false;
	}

	private void JumpToLevel(string mapId, int levelIndex)
	{
	}

	private static void DrawPanelSection(string text)
	{
	}

	private static GUIStyle CheatPanelWindowStyle()
	{
		return null;
	}

	private static GUIStyle CheatPanelButtonStyle()
	{
		return null;
	}

	private static GUIStyle CheatPanelActionButtonStyle()
	{
		return null;
	}

	private static GUIStyle CheatPanelLevelButtonStyle()
	{
		return null;
	}

	private static GUIStyle CheatPanelSectionStyle()
	{
		return null;
	}

	private static GUIStyle CheatPanelBodyStyle()
	{
		return null;
	}

	private static GUIStyle CheatPanelValueStyle()
	{
		return null;
	}

	private static GUIStyle CheatPanelCaptionStyle()
	{
		return null;
	}

	private static GUIStyle CheatPanelCardStyle()
	{
		return null;
	}

	private static Texture2D GetCheatPanelBackgroundTexture()
	{
		return null;
	}

	private static Texture2D GetCheatPanelCardTexture()
	{
		return null;
	}

	private static Texture2D GetCheatPanelDimTexture()
	{
		return null;
	}

	private static Texture2D CreateCheatPanelTexture(Color color)
	{
		return null;
	}

	private void RefreshAutoplayButton()
	{
	}
}
