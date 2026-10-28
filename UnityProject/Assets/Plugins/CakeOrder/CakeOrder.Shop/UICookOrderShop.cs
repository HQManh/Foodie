using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using CakeOrder.UI;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Shop
{

public class UICookOrderShop : UICakePopup
{
	[Serializable]
	public class AnimConfig
	{
		[Header("Top")]
		public float durationShowTop;

		public float durationHideTop;

		public float topSectionAnchoredPosYOnShow;

		public float topSectionAnchoredPosYOnHide;

		[Header("Currency Count")]
		public float delayShowCurrencyCount;

		public float delayBetweenCurrencyCount;

		public float durationShowCurrencyCount;

		public float durationHideCurrencyCount;

		[Header("Button Close")]
		public float delayShowButtonClose;

		public float durationShowButtonClose;

		public float durationHideButtonClose;

		[Header("Move")]
		public AnimationCurve mapNormPosYToTopSectionAnchoredPosY;

		public AnimationCurve mapNormPosYToFxAnchoredPosY;

		[Header("Overlay")]
		public float durationShowOverlay;

		public float durationHideOverlay;

		[Header("Items")]
		[Tooltip("Off: every card is simply on screen when the shop opens. On: they fade in one after another, top to bottom, using the two delays below.")]
		public bool isPlayItemsIntro;

		public float delayShowItemShop;

		public float delayBetweenShowItemShop;
	}

	[CompilerGenerated]
	private sealed class _003CIEPlayItemsIntro_003Ed__71 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UICookOrderShop _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CIEPlayItemsIntro_003Ed__71(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CIEScrollToGoldPacks_003Ed__50 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UICookOrderShop _003C_003E4__this;

		public bool animate;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CIEScrollToGoldPacks_003Ed__50(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CIESetUp_003Ed__66 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UICookOrderShop _003C_003E4__this;

		private List<string>.Enumerator _003C_003E7__wrap1;

		private string _003CshopId_003E5__3;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CIESetUp_003Ed__66(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		private void _003C_003Em__Finally1()
		{
		}

		private void _003C_003Em__Finally2()
		{
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[Header("Shop Config")]
	[SerializeField]
	private List<string> chefPackIds;

	[SerializeField]
	private List<string> goldPackIds;

	[Header("Visual")]
	[SerializeField]
	private CanvasGroup _bgrOverlay;

	[SerializeField]
	private RectTransform _topAnchor;

	[SerializeField]
	private TMP_Text _txtTitle;

	private const string LocTitle = "shop_title";

	[SerializeField]
	private RectTransform[] _itemCurrencyCounter;

	[SerializeField]
	private Button _btnClose;

	[SerializeField]
	private RectTransform _chefPackContainer;

	[SerializeField]
	private RectTransform _goldPackContainer;

	[SerializeField]
	private AnimConfig _animConfig;

	private bool _isDoneShow;

	[Header("Divider")]
	[Tooltip("Leave empty for a shop with no top banner: UpdateOffersHeaderVisibility returns early and nothing switches one on. Assigning it hands that object over to the code, which will show it again whatever the prefab authored.")]
	[SerializeField]
	private Image _headerSectionTop;

	[SerializeField]
	private Image _dividerSectionRemoveAds;

	[SerializeField]
	private Image _dividerSectionChefPack;

	[SerializeField]
	private Image _dividerSectionGoldPack;

	[Header("Layout")]
	[SerializeField]
	private ScrollRect _scrollRect;

	[SerializeField]
	private UIShopItemRemoveAdsPackPermanent _itemRemoveAdsPack;

	[SerializeField]
	private UIShopItemPack _itemRemoveAdsPackBundle;

	[SerializeField]
	private UIShopItemPack _prefabItemPack;

	[SerializeField]
	private UIShopItemGoldPack _prefabItemGoldPack;

	[SerializeField]
	private UIShopItemGoldPack.GeneralConfig _itemGoldPackConfig;

	private List<UIShopItemPack> _itemPacks = new List<UIShopItemPack>();

	private List<UIShopItemGoldPack> _itemGoldPacks = new List<UIShopItemGoldPack>();

	[Header("Other")]
	[SerializeField]
	private UIStarCounter _starCounter;

	private bool _isDoneSetUp;

	private CookShopSection _sectionToShow;

	private string _itemIdToFocus;

	private List<Tween> _tweensShowHide = new List<Tween>();

	private bool _isEmbeddedInTab;

	private Action _onCloseRequested;

	[Tooltip("Keep the shop's own close button when it sits in a Home tab. On, the button stays and leaves the shop tab (see UIHomeTabPageShop). Home's settings button is hidden on this tab instead, so the corner holds one button, not two.")]
	[SerializeField]
	private bool _showCloseButtonInTab;

	[Tooltip("The shop's own currency row. It exists for the Home tab, where the shop has to cover Home's row rather than switch it off. Every other host already shows one of its own, so this stays off unless SetEmbeddedInTab turns it on.")]
	[SerializeField]
	private GameObject _ownTopBar;

	private const float ScrollToGoldPacksDuration = 0.45f;

	private Coroutine _corScrollToGoldPacks;

	private Tween _tweenScrollToGoldPacks;

	private readonly List<Behaviour> _frozenLayouts = new List<Behaviour>();

	private const float BannerHideDuration = 0.35f;

	private Coroutine _corItemsIntro;

	private static bool _isItemsIntroPlayedThisRun;

	private ShopOfferRules _offerRules;

	public override PopupOpenStyle OpenStyle => PopupOpenStyle.Additive;

	public override PopupSize Size => PopupSize.Small;

	public ScrollRect ScrollRect => null;

	protected override bool PlayOpenCloseSfx => false;

	private static bool IsRemoveAdsOwned => false;

	private void SetSectionHeadersAlpha(float a)
	{
	}

	public void SetEmbeddedInTab(Action onCloseRequested)
	{
	}

	protected override void Awake()
	{
	}

	public void SetData(string itemIdToFocus)
	{
	}

	public void ScrollToGoldPacks(bool animate = true)
	{
	}

	[IteratorStateMachine(typeof(_003CIEScrollToGoldPacks_003Ed__50))]
	private IEnumerator IEScrollToGoldPacks(bool animate)
	{
		return null;
	}

	private void ApplyScrollToGoldPacks(bool animate)
	{
	}

	private RectTransform GetGoldPackSectionTop()
	{
		return null;
	}

	public override void HideByBackButton()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}

	private void SetColumnLayoutFrozen(bool frozen)
	{
	}

	private void ResetBannerScales()
	{
	}

	private void UpdateOnShow()
	{
	}

	private void OpenOnFocusedSection()
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void HideElementImmediate()
	{
	}

	private void UpdateOnHide()
	{
	}

	public override void SetUpOnCreate(SceneMainUI mainUI)
	{
	}

	[IteratorStateMachine(typeof(_003CIESetUp_003Ed__66))]
	private IEnumerator IESetUp()
	{
		return null;
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetItemsIntroFlag()
	{
	}

	public void PlayItemsIntro()
	{
	}

	[IteratorStateMachine(typeof(_003CIEPlayItemsIntro_003Ed__71))]
	private IEnumerator IEPlayItemsIntro()
	{
		return null;
	}

	private void ShowVisibleCards()
	{
	}

	private List<UIElementWithAnim> GetVisibleCardsTopToBottom()
	{
		return null;
	}

	private static int CompareHierarchyOrder(Transform a, Transform b)
	{
		return 0;
	}

	private static List<int> GetSiblingPath(Transform t)
	{
		return null;
	}

	private void OnBuyPack(string shopId, RewardListData rewardList)
	{
	}

	private static bool IsSoldOut(UIShopItemPack item)
	{
		return false;
	}

	private void UpdateRemoveAdsCardsVisibility()
	{
	}

	private void ApplyOfferRulesVisibility()
	{
	}

	private void ApplyOfferRuleToCard(UIShopItemPack item, bool allowedByOtherRules)
	{
	}

	private bool IsContested(string shopId)
	{
		return false;
	}

	private bool IsHiddenByOfferRules(string shopId)
	{
		return false;
	}

	private void UpdateOffersHeaderVisibility()
	{
	}

	private void RefreshTitle()
	{
	}

	private void OnDestroy()
	{
	}
}
}
