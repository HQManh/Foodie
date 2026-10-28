using Coffee.UIExtensions;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.Home;
using CakeOrder.SaveProfile;
using Coffee.UIExtensions;
using UnityEngine;
using UnityEngine.UI;
using Utilities;
using Utilities.UI;

namespace CakeOrder.UI
{

public class UIListUpgradeBuildingOptionCards : UIElementWithAnim
{
	private class CoinFlightHost : MonoBehaviour
	{
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass64_0
	{
		public UIListUpgradeBuildingOptionCards _003C_003E4__this;

		public int remaining;

		public Transform destination;
	}

	[CompilerGenerated]
	private sealed class _003CIECoinExplodeThenFly_003Ed__65 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIListUpgradeBuildingOptionCards _003C_003E4__this;

		public RectTransform coinTransform;

		public int index;

		public Transform destination;

		public Action<RectTransform, Vector2, bool> onCompleted;

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
		public _003CIECoinExplodeThenFly_003Ed__65(int _003C_003E1__state)
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
	private sealed class _003CIECoinFly_003Ed__66 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIListUpgradeBuildingOptionCards _003C_003E4__this;

		public Transform destination;

		public Vector2 startPosition;

		public RectTransform coinTransform;

		public Action<RectTransform, Vector2, bool> onCompleted;

		public int index;

		private Vector2 _003CinitialEndPosition_003E5__2;

		private Vector2 _003CperpendicularDirection_003E5__3;

		private float _003CrandomDistance_003E5__4;

		private float _003Ctime_003E5__5;

		private Vector2 _003CendPosition_003E5__6;

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
		public _003CIECoinFly_003Ed__66(int _003C_003E1__state)
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
	private sealed class _003CIESpawnCoinFlight_003Ed__64 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIListUpgradeBuildingOptionCards _003C_003E4__this;

		public Transform destination;

		public Vector2 startPosition;

		private _003C_003Ec__DisplayClass64_0 _003C_003E8__1;

		private int _003CcoinCount_003E5__2;

		private int _003CperFrame_003E5__3;

		private Vector3 _003CstartLocal_003E5__4;

		private int _003Ci_003E5__5;

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
		public _003CIESpawnCoinFlight_003Ed__64(int _003C_003E1__state)
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

	[Header("Progress")]
	[SerializeField]
	private UIMapBuildingProgress _buildingProgress;

	[Header("Items")]
	[SerializeField]
	private UICardFlowLayoutControl _cardFlowLayoutControl;

	[SerializeField]
	private RectTransform _itemContainer;

	[SerializeField]
	private UIItemUpgradeBuildingOptionCard _prefabCard;

	[SerializeField]
	private UIItemUpgradeBuildingOptionCard _prefabCardLong;

	[SerializeField]
	private UIItemUpgradeBuildingOptionCard.GeneralConfig _itemGeneralConfig;

	[SerializeField]
	private ScrollRect _scrollRect;

	[Tooltip("Space kept below the card list inside the scroll content, so the last card can be scrolled fully into view.")]
	[SerializeField]
	[Min(0f)]
	private float _contentBottomPadding;

	[SerializeField]
	private SfxAndHapticTrigger _sfxUpgrade;

	[SerializeField]
	private UIParticle _vfxUpgrade;

	[Header("Upgrade Coin Flight")]
	[SerializeField]
	private RectTransform _prefabCoinFly;

	[SerializeField]
	[Min(1f)]
	private int _coinFlyCount;

	[SerializeField]
	[Min(0f)]
	private float _delayBetweenSpawnGoldFly;

	[SerializeField]
	[Min(0.01f)]
	private float _durationGoldFly;

	[SerializeField]
	private AnimationCurve _easeGoldPositionFly;

	[SerializeField]
	private AnimationCurve _easeGoldPependicularPositionFly;

	[SerializeField]
	private AnimationCurve _easeGoldScaleFly;

	[Tooltip("Played as each coin lands on the building.")]
	[SerializeField]
	private AudioClip _sfxCoinLanding;

	[Header("Upgrade Coin Explode")]
	[SerializeField]
	private UIFlyExplodeConfig _explode;

	private PlayerMapLevelProgressDataAccess _dataAccess;

	private readonly Dictionary<string, UIItemUpgradeBuildingOptionCard> _items = new Dictionary<string, UIItemUpgradeBuildingOptionCard>();

	private readonly List<UIItemUpgradeBuildingOptionCard> _itemsList = new List<UIItemUpgradeBuildingOptionCard>();

	private List<string> _upgradableIds = new List<string>();

	private int _numItemsToShow;

	private const float DELAY_BETWEEN_SHOW_ITEM = 0.05f;

	private SceneMainUI _sceneMainUI;

	private MapUpgradeConfig _upgradeConfig;

	private HomeRestaurantsBuildingControl _buildingViewControl;

	private RectTransform _objectFlyContainer;

	private readonly List<RectTransform> _upgradeCoins = new List<RectTransform>();

	private readonly List<Coroutine> _upgradeCoinRoutines = new List<Coroutine>();

	private MonoBehaviour _coinFlightHost;

	private bool _isUpgradeAnimating;

	private bool _isUpgradeInputBlocked;

	private bool _eventSystemWasEnabled;

	private string _pendingRevealItemId;

	private BuildingUpgradePartSO _pendingPart;

	public string MapId { get; private set; }

	public bool IsUpgradeAnimating => false;

	public RectTransform ItemContainer => null;

	public event Action<string> onUpgradePresentationCompleted;

	public event Action<BuildingUpgradePartSO, Action> onToolPartUpgradePresented;

	public void SetUp(SceneMainUI sceneMainUI, PlayerMapLevelProgressDataAccess dataAccess, string mapId, MapUpgradeConfig upgradeConfig)
	{
	}

	private void OnCardListHeightChanged(float _)
	{
	}

	private void FitScrollContentToCardList()
	{
	}

	private void OnDestroy()
	{
	}

	private void OnHomeBuildingItemBought(string mapId, string itemId)
	{
	}

	private void UpdateAndShowItems()
	{
	}

	private void OnClickUpgrade(UIItemUpgradeBuildingOptionCard option)
	{
	}

	private Transform ResolvePartDestination(BuildingUpgradePartSO part)
	{
		return null;
	}

	private Vector2 ResolvePartDestinationInUi(Transform destination, Vector2 fallback)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	private void SetUpgradeInputBlocked(bool blocked)
	{
	}

	private void PlayCoinFlight(Vector2 startPosition, Transform destination)
	{
	}

	private void StartCoinRoutine(IEnumerator routine)
	{
	}

	[IteratorStateMachine(typeof(_003CIESpawnCoinFlight_003Ed__64))]
	private IEnumerator IESpawnCoinFlight(Vector2 startPosition, Transform destination)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIECoinExplodeThenFly_003Ed__65))]
	private IEnumerator IECoinExplodeThenFly(RectTransform coinTransform, int index, Transform destination, Action<RectTransform, Vector2, bool> onCompleted)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIECoinFly_003Ed__66))]
	private IEnumerator IECoinFly(RectTransform coinTransform, int index, Vector2 startPosition, Transform destination, Action<RectTransform, Vector2, bool> onCompleted)
	{
		return null;
	}

	private void FinishUpgradeAnimation(Transform destination, Vector2 fallbackPosition)
	{
	}

	private void RevealAndComplete()
	{
	}

	private void CompletePendingReveal()
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	public List<UIItemUpgradeBuildingOptionCard> GetUpgradableItems()
	{
		return null;
	}
}
}
