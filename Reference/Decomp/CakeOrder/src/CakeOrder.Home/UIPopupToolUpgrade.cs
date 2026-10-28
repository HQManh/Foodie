using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using Utilities;

namespace CakeOrder.Home;

[Obsolete]
public class UIPopupToolUpgrade : UICakePopup
{
	[Serializable]
	private class TabPageLoadData
	{
		public string mapId;

		public UIListToolUpgrade tabPage;

		public UITabItemRestaurant navItem;

		public SingleHomeMapDataCache.SharedPrefabLoader<MapToolConfig> toolConfigLoader;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadTabPage_003Ed__20 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIPopupToolUpgrade _003C_003E4__this;

		public string mapId;

		private TabPageLoadData _003CtabPageData_003E5__2;

		private UnityEngine.Awaitable<MapToolConfig>.Awaiter _003C_003Eu__1;

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
	private UIListToolUpgrade _prefabTabPage;

	[SerializeField]
	private UIItemToolUpgrade _prefabItemTool;

	[SerializeField]
	private UIAnimShowHideControl _sectionLocked;

	[Header("Details")]
	[SerializeField]
	private UIItemToolDetails _detailsSection;

	[Header("Nav")]
	[SerializeField]
	private RectTransform _navItemContainer;

	[SerializeField]
	private UITabItemRestaurant _prefabNavItem;

	private HomeSelectionControl _selectionControl;

	private Dictionary<string, TabPageLoadData> _tabPagesByMapId;

	private bool _isDoneSetup;

	private bool _isShownFirstTime;

	private SingleHomeMapDataCache.SharedPrefabLoader<MapToolConfig> _currentLoader;

	public override void HideByBackButton()
	{
	}

	protected override void Awake()
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

	[AsyncStateMachine(typeof(_003CLoadTabPage_003Ed__20))]
	private UniTask LoadTabPage(string mapId)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public bool IsDoneSetupPageMap(string mapId, string toolId)
	{
		return false;
	}

	public TutorialReferenceGroupUI GetTutRefItemById(string mapId, string toolId)
	{
		return null;
	}

	private void OnItemToolSelected(string mapId, string toolId)
	{
	}

	private void InspectToolDetail(string toolId)
	{
	}

	private void OnDestroy()
	{
	}
}
