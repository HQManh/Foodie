using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.Shop;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.Localization.Components;
using Utilities;

namespace CakeOrder.InGame;

public abstract class UIEndGameBase : UICakePopup
{
	public enum Command
	{
		Home,
		Retry,
		Next
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUpOnCreated_003Ed__30 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIEndGameBase _003C_003E4__this;

		public UIInLevelCakeOrder mainUI;

		public UIInLevelGeneralReferences generalRefs;

		public CakeLevelInitData initData;

		public CakeLevelEndResultData resultData;

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

	private const string LocDayN = "day_n";

	[Header("Header")]
	[SerializeField]
	private bool _pauseTimeScaleOnShow;

	[SerializeField]
	private TextMeshProUGUI[] _txtLvCount;

	[Tooltip("LocalizeStringEvent of the title. Its prefab key is the Normal text; Hard / Super Hard swap it for HeaderKeyFor().")]
	[SerializeField]
	private LocalizeStringEvent _locHeader;

	[Header("Reveal Elements")]
	[SerializeField]
	private List<UIAnimShowHideControl> _animElements;

	[SerializeField]
	private float _delayAnimShowFirstElement;

	[Header("Offer Packs")]
	[Tooltip("Optional. Leave unassigned on prefabs that carry no offer at all.")]
	[SerializeField]
	private UIOfferIapStrip _offerStrip;

	[Tooltip("Shop ids offered on this end state, in the order they are swiped through. Empty = no offer.")]
	[SerializeField]
	private string[] _offerShopIds;

	[Tooltip("Extra wait after the last button has animated in, before the offer slides up.")]
	[SerializeField]
	private float _delayShowOfferAfterButtons;

	private List<UIAnimShowHideControl> _activeAnimButtonsList;

	protected CakeLevelInitData _initData;

	protected CakeLevelEndResultData _resultData;

	protected float _lastTimeClickShowAds;

	protected const float DurationDisableClickAfterClickShowAds = 3f;

	private bool _isShownFirstTime;

	protected UIInLevelCakeOrder _mainUIInLevel;

	protected UIInLevelGeneralReferences _generalRefs;

	public override PopupSize Size => PopupSize.Small;

	public override PopupOpenStyle OpenStyle => PopupOpenStyle.Additive;

	public override AudioManagerCakeOrder.DuckLevel DuckLevel => AudioManagerCakeOrder.DuckLevel.None;

	protected float DelayShowOfferAfterButtons => 0f;

	public event Action<UIEndGameBase, Command, Dictionary<string, object>> onPlayerInteract
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

	[AsyncStateMachine(typeof(_003CSetUpOnCreated_003Ed__30))]
	public UniTask SetUpOnCreated(UIInLevelCakeOrder mainUI, UIInLevelGeneralReferences generalRefs, CakeLevelInitData initData, CakeLevelEndResultData resultData)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	protected virtual string HeaderKeyFor(LevelDifficultyTag difficulty)
	{
		return null;
	}

	protected abstract void OnSetUpOnCreated();

	protected abstract void CollectAnimButtons(List<UIAnimShowHideControl> buttons);

	protected void CollectAnimHeaderElements(List<UIAnimShowHideControl> buttons)
	{
	}

	protected virtual void OnButtonsRevealed(float delay)
	{
	}

	protected virtual void OnShowAllElementImmediate()
	{
	}

	protected void SetUIVisible(bool isVisible)
	{
	}

	private void ShowAllElementImmediate()
	{
	}

	protected void ShowOfferStrip(float delay)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}

	protected void RaisePlayerInteract(Command command, Dictionary<string, object> data = null)
	{
	}

	protected override void OnBeforeHide()
	{
	}

	protected virtual void OnDestroy()
	{
	}
}
