using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.UI;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.Serialization;
using Utilities;

namespace CakeOrder.Home
{

public class UIHomeTabPageMainDetailsMode : UIHomeTabPageMainSubModeBase
{
	public enum Mode
	{
		Building,
		ToolRecipe,
		Customer
	}

	[Serializable]
	public class ConfigByMode
	{
		public UIElementWithAnimHighlight btnNav;

		public UIElementWithAnim header;

		public UIElementWithAnim listContainer;

		public GameObject noti;

		public void Show()
		{
		}

		public void ShowImmediate()
		{
		}

		public void Hide()
		{
		}

		public void HideImmediate()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass54_0
	{
		public UIHomeTabPageMainDetailsMode _003C_003E4__this;

		public Action onDone;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnSetUp_003Ed__37 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIHomeTabPageMainDetailsMode _003C_003E4__this;

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
	private struct _003CShowToolUpgradedPopup_003Ed__54 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public UIHomeTabPageMainDetailsMode _003C_003E4__this;

		public Action onDone;

		public BuildingUpgradePartSO part;

		private _003C_003Ec__DisplayClass54_0 _003C_003E8__1;

		private TaskAwaiter<bool> _003C_003Eu__1;

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
	private struct _003CWaitLoadMapAndUpdateButtons_003Ed__57 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIHomeTabPageMainDetailsMode _003C_003E4__this;

		private SingleHomeMapDataCache _003CmapData_003E5__2;

		private string _003CcurrentId_003E5__3;

		private UnityEngine.Awaitable<(MapUpgradeConfig, MapToolConfig)>.Awaiter _003C_003Eu__1;

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

	private Mode _mode;

	[Header("Config")]
	[SerializeField]
	private ConfigByMode _configsModeBuilding;

	[FormerlySerializedAs("_configsModeTool")]
	[SerializeField]
	private ConfigByMode _configsModeToolRecipe;

	[FormerlySerializedAs("_configsModePetStaff")]
	[SerializeField]
	private ConfigByMode _configsModeCustomer;

	[SerializeField]
	private UIElementWithAnim _mainDetailsSection;

	[SerializeField]
	private SwipeDetectUI _swipeDetectUI;

	[Header("Prefab")]
	[SerializeField]
	private UIListUpgradeBuildingOptionCards _prefabListBuildingOption;

	private Dictionary<string, UIListUpgradeBuildingOptionCards> _spawnedlistBuildingOptions = new Dictionary<string, UIListUpgradeBuildingOptionCards>();

	[SerializeField]
	private UIListToolRecipeCard _prefabListToolRecipeCard;

	private Dictionary<string, UIListToolRecipeCard> _spawnedListToolRecipeCards = new Dictionary<string, UIListToolRecipeCard>();

	[SerializeField]
	private UIListCustomerInMap _prefabListCustomerInMap;

	private Dictionary<string, UIListCustomerInMap> _spawnedListCustomers = new Dictionary<string, UIListCustomerInMap>();

	[Header("Tutorial")]
	[FormerlySerializedAs("_tutRefBtnNavChangeTabUpgradeTool")]
	[SerializeField]
	private TutorialReferenceGroupUI _tutRefBtnNavChangeTabToolRecipe;

	[SerializeField]
	private TutorialReferenceGroupUI _tutRefBtnReturnNormalMode;

	private bool _isDataReady;

	private bool _isToolUpgradedPopupOpen;

	public TutorialReferenceGroupUI TutRefBtnNavChangeTabUpgradeTool => null;

	public TutorialReferenceGroupUI TutRefBtnReturnNormalMode => null;

	public TutorialReferenceGroupUI TutRefBtnUpgradeTool { get; private set; }

	public List<TutorialReferenceGroupUI> TutRefBtnUpgradeBuilding { get; private set; }

	public event Action onClickGoToNormalMode;

	public event Action onFullUpgradeCelebrationRequested;

	public bool IsUpgradePresentationRunning(string mapId)
	{
		return false;
	}

	private void Awake()
	{
	}

	[AsyncStateMachine(typeof(_003COnSetUp_003Ed__37))]
	protected override UniTask OnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnDestroy()
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneHide()
	{
	}

	protected override void OnDoneShow()
	{
	}

	private void ChangeTab(Mode mode)
	{
	}

	private void SetTabImmediate(Mode mode)
	{
	}

	private void HideListsOfOtherMaps(string mapId, bool immediate)
	{
	}

	private UIListUpgradeBuildingOptionCards GetOrSpawnListBuildingOption(string mapId)
	{
		return null;
	}

	private UIListToolRecipeCard GetOrSpawnListToolRecipeCard(string mapId)
	{
		return null;
	}

	private UIListCustomerInMap GetOrSpawnListCustomer(string mapId)
	{
		return null;
	}

	private void OnSelectedMapOrLevelChanged()
	{
	}

	private void OnHomeBuildingItemBought(string mapId, string itemId)
	{
	}

	private void OnUpgradePresentationCompleted(string mapId)
	{
	}

	private void OnToolPartUpgradePresented(BuildingUpgradePartSO part, Action onDone)
	{
	}

	[AsyncStateMachine(typeof(_003CShowToolUpgradedPopup_003Ed__54))]
	private UniTaskVoid ShowToolUpgradedPopup(BuildingUpgradePartSO part, Action onDone)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	private void TryRequestFullUpgradeCelebration(string mapId)
	{
	}

	private void OnClickTransitionZone()
	{
	}

	[AsyncStateMachine(typeof(_003CWaitLoadMapAndUpdateButtons_003Ed__57))]
	private UniTask WaitLoadMapAndUpdateButtons()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnMapBuildingUnlocked(string mapId)
	{
	}

	private void UpdateAndShowElements()
	{
	}

	public bool IsDoneLoadElementForTutUpgradeTool(string mapId, string toolId)
	{
		return false;
	}

	public TutorialReferenceGroupUI GetTutorialRefsUpgradeTool(string mapId, string toolId)
	{
		return null;
	}
}
}
