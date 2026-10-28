using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.Localization;
using UnityEngine.UI;

namespace CakeOrder.Home;

public class UICakeSettingHome : UICakeSettingMenuBase
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnClickCheatToggleLevelList_003Ed__68 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public UICakeSettingHome _003C_003E4__this;

		private string _003CmapId_003E5__2;

		private SingleHomeMapDataCache.SharedPrefabLoader<MapLevelMetadataConfig> _003Cloader_003E5__3;

		private UnityEngine.Awaitable<MapLevelMetadataConfig>.Awaiter _003C_003Eu__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnClickCheatUnlockToLevel_003Ed__72 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public UICakeSettingHome _003C_003E4__this;

		private int _003Clevel_003E5__2;

		private UnityEngine.Awaitable<MapLevelMetadataConfig>.Awaiter _003C_003Eu__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnClickCheatWinSelectedLevel_003Ed__59 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public UICakeSettingHome _003C_003E4__this;

		private string _003CmapId_003E5__2;

		private int _003ClevelIndex_003E5__3;

		private int _003CorderCoin_003E5__4;

		private UnityEngine.Awaitable<int>.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<MapLevelMetadataConfig>.Awaiter _003C_003Eu__2;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnClickCheatWinToLevel_003Ed__47 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public UICakeSettingHome _003C_003E4__this;

		private int _003Clevel_003E5__2;

		private string _003CmapId_003E5__3;

		private UnityEngine.Awaitable<MapLevelMetadataConfig>.Awaiter _003C_003Eu__1;

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

	private HomeSelectionControl _homeSelectionControl;

	[SerializeField]
	private TextMeshProUGUI _txtVersion;

	[Header("Cheat Currency")]
	[SerializeField]
	private GameObject _cheatSection;

	[SerializeField]
	private Button _btnCheatSetSoftCurrency;

	[SerializeField]
	private Button _btnCheatSetHardCurrency;

	[SerializeField]
	private TMP_InputField _inputAmount;

	[SerializeField]
	private TMP_InputField _inputLv;

	[SerializeField]
	private Button _btnCheatLevelList;

	[SerializeField]
	private Button _btnCheatWinToLevel;

	[SerializeField]
	private Button _btnCheatUnlockToLevel;

	[SerializeField]
	private Button _btnCheatUnlockMap;

	[SerializeField]
	private Button _btnCheatToggleAds;

	[SerializeField]
	private TMP_Text _txtCheatToggleAdsStatus;

	[SerializeField]
	private Button _btnCheatToggleIapMode;

	[SerializeField]
	private TMP_Text _txtCheatToggleIapModeStatus;

	[SerializeField]
	private Button _btnCheatOnlineTime;

	[SerializeField]
	private TMP_Text _txtCheatOnlineTimeStatus;

	[SerializeField]
	private Button _btnCheatToggleWholeDish;

	[SerializeField]
	private TMP_Text _txtCheatToggleWholeDishStatus;

	[SerializeField]
	private Button _btnCheatDiscardRemoveAds;

	[SerializeField]
	private TMP_Text _txtCheatDiscardRemoveAdsStatus;

	[SerializeField]
	private Button _btnCheatToggleUpgradeGate;

	[SerializeField]
	private TMP_Text _txtCheatToggleUpgradeGateStatus;

	[SerializeField]
	private Button _btnCheatWinSelectedLevel;

	[SerializeField]
	private TMP_Text _txtCheatWinSelectedLevelStatus;

	[Tooltip("Remote Config level-override author (dataset). Changing it re-applies the override and reloads Home.")]
	[SerializeField]
	private TMP_Dropdown _dropdownOverrideAuthor;

	private string[] _overrideAuthorOptionIds;

	[Header("Language")]
	[Tooltip("Player-facing language picker. Changing it switches the locale and reloads Home.")]
	[SerializeField]
	private TMP_Dropdown _dropdownLanguage;

	private readonly List<Locale> _languageLocales;

	[SerializeField]
	private Button _btnToggleCheat;

	[SerializeField]
	private Button _btnToggleDebug;

	[SerializeField]
	private UIHoldToConfirmButton _clearDataHoldButton;

	[Header("Restore Purchase")]
	[Tooltip("iOS only, and authored inactive for that reason. Google Play hands non-consumables back on its own when the store initialises, so on Android the button restores nothing and only invites support tickets. Apple, by contrast, expects the app to offer it.")]
	[SerializeField]
	private Button _btnRestorePurchase;

	private const int CheatWinStars = 3;

	private bool _isShowLevelList;

	private bool _isLoadingLevelList;

	private string _levelListMapId;

	private string[] _levelListLabels;

	private Vector2 _levelListScroll;

	private GUIStyle _levelListBoxStyle;

	private GUIStyle _levelListButtonStyle;

	private GUIStyle _levelListSelectedButtonStyle;

	private bool _isCheatWinningLevel;

	protected override void Awake()
	{
	}

	public void SetData(HomeSelectionControl homeSelectionControl)
	{
	}

	private void OnClickClearData()
	{
	}

	private void OnClickSetSoftCurrency()
	{
	}

	private void OnClickSetHardCurrency()
	{
	}

	[AsyncStateMachine(typeof(_003COnClickCheatWinToLevel_003Ed__47))]
	private void OnClickCheatWinToLevel()
	{
	}

	private void OnClickCheatToggleAds()
	{
	}

	private void OnClickCheatToggleIapMode()
	{
	}

	private void RefreshCheatIapModeStatus()
	{
	}

	private void RefreshCheatOnlineTimeStatus()
	{
	}

	private void OnClickCheatToggleWholeDish()
	{
	}

	private void RefreshCheatWholeDishStatus()
	{
	}

	private void OnClickCheatDiscardRemoveAds()
	{
	}

	private void RefreshCheatDiscardRemoveAdsStatus()
	{
	}

	private void OnClickCheatToggleUpgradeGate()
	{
	}

	private void RefreshCheatUpgradeGateStatus()
	{
	}

	[AsyncStateMachine(typeof(_003COnClickCheatWinSelectedLevel_003Ed__59))]
	private void OnClickCheatWinSelectedLevel()
	{
	}

	private void RefreshCheatWinSelectedLevelStatus(string status)
	{
	}

	private void RefreshLanguageDropdown()
	{
	}

	private void OnLanguageChanged(int index)
	{
	}

	private static void ReloadHomeAfterLocaleChange()
	{
	}

	private void SetUpOverrideAuthorDropdown()
	{
	}

	private void RefreshOverrideAuthorDropdown()
	{
	}

	private void OnOverrideAuthorChanged(int index)
	{
	}

	private void OnClickCheatUnlockMap()
	{
	}

	[AsyncStateMachine(typeof(_003COnClickCheatToggleLevelList_003Ed__68))]
	private void OnClickCheatToggleLevelList()
	{
	}

	private void OnGUI()
	{
	}

	private void EnsureLevelListStyles()
	{
	}

	private static Texture2D CreateGuiTexture(Color color)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003COnClickCheatUnlockToLevel_003Ed__72))]
	private void OnClickCheatUnlockToLevel()
	{
	}

	private void CheatMoveProgressToLevel(int levelIndex)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnBeforeHide()
	{
	}

	private void OnClickToggleCheat()
	{
	}

	private void OnClickToggleDebug()
	{
	}

	private void SetUpRestorePurchase()
	{
	}

	private void OnClickRestorePurchase()
	{
	}

	protected override void OnDestroy()
	{
	}
}
