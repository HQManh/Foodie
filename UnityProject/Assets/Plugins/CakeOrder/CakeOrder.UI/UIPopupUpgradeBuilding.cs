using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.Home;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using Utilities;

namespace CakeOrder.UI
{

public class UIPopupUpgradeBuilding : UICakePopup
{
	[Serializable]
	private class TabPageLoadData
	{
		public string mapId;

		public UIListUpgradeBuildingOptionCards listUpgrade;

		public UITabItemRestaurant navItem;

		public SingleHomeMapDataCache.SharedPrefabLoader<MapUpgradeConfig> mapConfigLoader;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadTabPage_003Ed__17 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIPopupUpgradeBuilding _003C_003E4__this;

		public string mapId;

		private TabPageLoadData _003CtabPageData_003E5__2;

		private UnityEngine.Awaitable<MapUpgradeConfig>.Awaiter _003C_003Eu__1;

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

	[Header("List Tools")]
	[SerializeField]
	private RectTransform _tabPageContainer;

	[SerializeField]
	private UIListUpgradeBuildingOptionCards _prefabTabPage;

	[SerializeField]
	private UIAnimShowHideControl _sectionLocked;

	[Header("Nav")]
	[SerializeField]
	private RectTransform _navItemContainer;

	[SerializeField]
	private UITabItemRestaurant _prefabNavItem;

	private HomeSelectionControl _selectionControl;

	private Dictionary<string, TabPageLoadData> _tabPagesByMapId = new Dictionary<string, TabPageLoadData>();

	private bool _isDoneSetup;

	private bool _isShownFirstTime;

	public override void HideByBackButton()
	{
	}

	public override void SetUpOnCreate(SceneMainUI mainUI)
	{
	}

	private void OnClickedNavItem(UIElementWithAnimHighlight item)
	{
	}

	public void SetData(HomeSelectionControl homeMapDataLoadController)
	{
	}

	private void OnSelectedMapChanged()
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	[AsyncStateMachine(typeof(_003CLoadTabPage_003Ed__17))]
	private UniTask LoadTabPage(string mapId)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnDestroy()
	{
	}
}
}
