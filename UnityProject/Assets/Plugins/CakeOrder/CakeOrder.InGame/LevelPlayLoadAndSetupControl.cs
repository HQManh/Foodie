using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using CakeOrder.DataSO;
using CakeOrder.SaveProfile;
using CookingGraph;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using IapAdsSystem;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;
using Utilities;

namespace CakeOrder.InGame
{

public class LevelPlayLoadAndSetupControl : MonoSingleton<LevelPlayLoadAndSetupControl>
{
	[Serializable]
	public class MainLevelPlayConfig
	{
		public CookOrderLevelPlayMode playMode;

		public string mapId;

		public int levelIndex;

		public Dictionary<string, object> customTransitionData;
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass99_0
	{
		public LevelPlayLoadAndSetupControl _003C_003E4__this;

		public WeatherEffect nextWeather;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CGoHomeOnEndGame_003Ed__99 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public LevelPlayLoadAndSetupControl _003C_003E4__this;

		private _003C_003Ec__DisplayClass99_0 _003C_003E8__1;

		private UnityEngine.Awaitable<WeatherEffect>.Awaiter _003C_003Eu__1;

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
	private struct _003CLoadNextLevelWeather_003Ed__92 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<WeatherEffect> _003C_003Et__builder;

		public LevelPlayLoadAndSetupControl _003C_003E4__this;

		private UnityEngine.Awaitable<WeatherEffect>.Awaiter _003C_003Eu__1;

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
	private struct _003CLoadNextLevelWeatherCore_003Ed__93 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<WeatherEffect> _003C_003Et__builder;

		public LevelPlayLoadAndSetupControl _003C_003E4__this;

		private WeatherEffect _003Cresult_003E5__2;

		private int _003CnextLevelIndex_003E5__3;

		private AsyncOperationHandle<GameObject> _003CopLoadLevelPath_003E5__4;

		private UnityEngine.Awaitable<GameObject>.Awaiter _003C_003Eu__1;

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
	private struct _003CLogIfLoadFailed_003Ed__50 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UniTask task;

		public string what;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

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

	[CompilerGenerated]
	private sealed class _003COnBeforeLoadHome_003Ed__100 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public LevelPlayLoadAndSetupControl _003C_003E4__this;

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
		public _003COnBeforeLoadHome_003Ed__100(int _003C_003E1__state)
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayLevel_003Ed__47 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public LevelPlayLoadAndSetupControl _003C_003E4__this;

		public MainLevelPlayConfig config;

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
	private struct _003CSetUpAfterSpawnLevelScene_003Ed__62 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public LevelPlayLoadAndSetupControl _003C_003E4__this;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

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
	private struct _003CSetUpBeforeLoadLevelScene_003Ed__52 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public LevelPlayLoadAndSetupControl _003C_003E4__this;

		private PlayerMapLevelProgressDataAccess _003CproggressDataAccess_003E5__2;

		private string _003CmapId_003E5__3;

		private AsyncOperationHandle<GameObject> _003CopLoadLevelPath_003E5__4;

		private AsyncOperationHandle<GameObject> _003CopLoadUpgradeConfig_003E5__5;

		private AsyncOperationHandle<MapCustomerPackSO> _003CopLoadCustomerPack_003E5__6;

		private AsyncOperationHandle<MapAssetPackSO> _003CopLoadAssetPack_003E5__7;

		private AsyncOperationHandle<GameObject> _003CopLoadToolConfig_003E5__8;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private MapUpgradeConfig _003CupgradeConfig_003E5__9;

		private MapLevelMetadataConfig _003ClevelPath_003E5__10;

		private MapToolConfig _003CtoolConfig_003E5__11;

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
	private struct _003CSetUpOverlayScene_003Ed__63 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIInLevelCakeOrder instanceUIInLevel;

		public LevelPlayLoadAndSetupControl _003C_003E4__this;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

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
	private struct _003CStartPlayNextLevel_003Ed__95 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public LevelPlayLoadAndSetupControl _003C_003E4__this;

		private UnityEngine.Awaitable<WeatherEffect>.Awaiter _003C_003Eu__1;

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

	[Header("Modules")]
	private bool _isSettingUp;

	private LevelSaveMeControl _saveMe;

	private List<AsyncOperationHandle> _ops = new List<AsyncOperationHandle>();

	private List<AsyncOperationHandle<GameObject>> _opInstantiates = new List<AsyncOperationHandle<GameObject>>();

	[Header("Boosters")]
	[SerializeField]
	private BoosterAndSaveMeRemoteConfig _boosterRemoteConfig;

	[SerializeField]
	private StackGameplayConfig _stackGameplayConfig;

	[SerializeField]
	private InGameHeartRemoteConfig _ingameHeartRemoteConfig;

	[SerializeField]
	private ServeSlotConfig _serveSlotConfig;

	[SerializeField]
	private LevelCustomerOrdersConfig _levelCustomerOrdersConfig;

	[SerializeField]
	private LevelGridConfig _levelGridConfig;

	[SerializeField]
	private LevelIngredientQueuesConfig _levelIngredientQueuesConfig;

	[Header("Temp")]
	[SerializeField]
	private float _ingredientUseCostMultiplier;

	private CancellationTokenSource _thisCancellationTokenOnDestroy;

	private static readonly bool IsMinisceneEnabled;

	private Exception _setupFailure;

	private const string LocSetupFailed = "something_wrong_better_retry";

	private InGameComboMechanicControl _comboMechanicController;

	private GameObject _lvDesignObj;

	private bool _levelBaseTutProcessed;

	private bool _isLastLevelEndedWin;

	public LevelBaseCakeOrderAbstract LevelBase { get; private set; }

	public CakeLevelInitData LevelInitData { get; private set; }

	public CakeLevelRuntimeData CurrentLevelRuntimeData { get; private set; }

	public string NextLevelMapId { get; private set; }

	public int NextLevelIndex { get; private set; }

	public int CurrentLevelAccumulated => 0;

	public BoosterAndSaveMeRemoteConfig BoosterRemoteConfig => null;

	private int CurrentLevelNumber => 0;

	public static event Action<CakeLevelEndResultData> onLevelEnded;

	private static string KeyCheckDoneTut(string tutId)
	{
		return null;
	}

	public static bool IsLevelTutDone(string mapId, string tutId)
	{
		return false;
	}

	public static int LevelAccumulatedOf(CakeLevelInitData initData)
	{
		return 0;
	}

	private void FixedUpdate()
	{
	}

	[AsyncStateMachine(typeof(_003CPlayLevel_003Ed__47))]
	// Not in the original: sets a level up from ready-made data and starts it, for running a level scene without the home/map flow.
	public async UniTask SetUpAndStartDirect(LevelBaseCakeOrderAbstract level, CakeLevelInitData initData, CakeLevelRuntimeData runtimeData)
	{
		LevelBase = level;
		LevelInitData = initData;
		CurrentLevelRuntimeData = runtimeData;
		BuildCustomerScheduleAndIngredientQueue();
		if (initData.customerSpawnData != null)
		{
			runtimeData.customerData.SetMaxNumCustomers(initData.customerSpawnData.Length);
		}
		await level.SetUpLevel(initData, runtimeData);
		ProcessStartPlay();
	}

	public UniTask PlayLevel(MainLevelPlayConfig config)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void RecordSetupFailure(string stage, Exception ex)
	{
	}

	private void ReturnHomeAfterSetupFailure()
	{
	}

	[AsyncStateMachine(typeof(_003CLogIfLoadFailed_003Ed__50))]
	private static UniTask LogIfLoadFailed(UniTask task, string what)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private static bool IsLoaded<T>(AsyncOperationHandle<T> op) where T : UnityEngine.Object
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CSetUpBeforeLoadLevelScene_003Ed__52))]
	private UniTask SetUpBeforeLoadLevelScene()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void BuildToolUpgrades(MapToolConfig toolConfig, string mapId, PlayerMapLevelProgressDataAccess progressDataAccess)
	{
	}

	private void ProcessLevelDesignData(string levelDesignStr)
	{
	}

	private static string DescribeGraphIds(CustomerOrderData data)
	{
		return null;
	}

	private static string DescribeSpawnIds(CustomerSpawnData[] data)
	{
		return null;
	}

	private static string DescribeDatabaseIds()
	{
		return null;
	}

	private static int CountExplicitIds(CustomerSpawnData[] data)
	{
		return 0;
	}

	private void BuildCustomerScheduleAndIngredientQueue()
	{
		if (LevelBase == null || LevelBase.IngredientLookupTable == null)
		{
			UnityEngine.Debug.LogWarning("[LevelSetup] no ingredient lookup table on the level; the customer schedule was not built.");
			return;
		}
		if (TryBuildCustomerScheduleAndIngredientQueue(out var orderData, out var spawnData, out var queues, out var failure))
		{
			ApplyCustomerScheduleAndIngredientQueue(orderData, spawnData, queues);
			return;
		}
		UnityEngine.Debug.LogError("[LevelSetup] building the customer schedule failed: " + failure);
		// The original then retries with remote level-design data; that path is skipped, so fall back to placeholder customers.
		ApplyCustomerScheduleAndIngredientQueue(null, CustomerScheduleBuilder.BuildPlaceholders(LevelInitData), null);
	}

	private bool TryBuildCustomerScheduleAndIngredientQueue(out CustomerOrderData customerOrderData, out CustomerSpawnData[] customerSpawnData, out IngredientQueueInLevel ingredientQueuesConfig, out Exception failure)
	{
		// Rebuilt from the decompiled code: parse the level's customer and ingredient-queue strings through the cooking graph, then build the schedule.
		customerOrderData = null;
		customerSpawnData = null;
		ingredientQueuesConfig = null;
		failure = null;
		try
		{
			if (LevelBase == null || LevelInitData == null)
			{
				throw new InvalidOperationException("No level base or level init data to build the customer schedule for.");
			}
			CookingGraph.CookingGraphAsset graph = LevelBase.CookingProcessGraphSO;
			if (graph == null)
			{
				throw new InvalidOperationException("The level has no cooking graph asset.");
			}
			if (LevelBase.IngredientLookupTable == null)
			{
				throw new InvalidOperationException("The level has no ingredient lookup table.");
			}
			CustomerScheduleBuilder builder = new CustomerScheduleBuilder(LevelBase.IngredientLookupTable);
			LevelInitData.orderPricer = builder;
			CakeOrderDatabaseSO database = DatabaseApi.Find();
			IReadOnlyList<string> characterIds = database != null ? DatabaseApi.GetAllCharacterIds(database) : null;
			if (!LevelDataParser.TryParseCustomerOrder(LevelInitData.customerOrderDataString, graph, characterIds, out customerOrderData, out var orderError))
			{
				throw new InvalidOperationException("Customer order data could not be parsed: " + orderError);
			}
			if (!LevelDataParser.TryParseIngredientQueue(LevelInitData.ingredientQueueDataString, graph, out var queueData, out var queueError))
			{
				throw new InvalidOperationException("Ingredient queue data could not be parsed: " + queueError);
			}
			CustomerRandomizer.Assign(customerOrderData.customers, LevelInitData.mapId, LevelInitData.levelIndex + customerOrderData.customers.Count);
			customerSpawnData = builder.BuildAll(LevelInitData, customerOrderData);
			if (customerSpawnData == null)
			{
				throw new InvalidOperationException("The customer schedule came back empty.");
			}
			ingredientQueuesConfig = builder.BuildIngredientQueue(LevelInitData, queueData);
			if (ingredientQueuesConfig == null)
			{
				throw new InvalidOperationException("The ingredient queue came back empty.");
			}
			return true;
		}
		catch (Exception ex)
		{
			failure = ex;
			return false;
		}
	}

	private void ApplyCustomerScheduleAndIngredientQueue(CustomerOrderData customerOrderData, CustomerSpawnData[] customerSpawnData, IngredientQueueInLevel ingredientQueuesConfig)
	{
		LevelInitData.customerSpawnData = customerSpawnData;
		LevelInitData.ingredientQueuesConfig = ingredientQueuesConfig;
		UnityEngine.Debug.Log("[LevelSetup] " + LevelInitData.mapId + " level " + (LevelInitData.levelIndex + 1) + ": " + (customerSpawnData != null ? customerSpawnData.Length : 0) + " customers scheduled.");
	}

	[AsyncStateMachine(typeof(_003CSetUpAfterSpawnLevelScene_003Ed__62))]
	private UniTask SetUpAfterSpawnLevelScene()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CSetUpOverlayScene_003Ed__63))]
	private UniTask SetUpOverlayScene(UIInLevelCakeOrder instanceUIInLevel)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void ShowUITutorialThenLevelTut()
	{
	}

	private void ProcessLevelBaseTut()
	{
	}

	private bool HasPendingLevelTut()
	{
		return false;
	}

	private void ProcessStartPlay()
	{
		// The original also reports the level start to CakeOrderDataTracking; analytics are not wired here.
		if (LevelBase != null)
		{
			LevelBase.StartPlay();
		}
	}

	private void BindCustomerTracking(CakeLevelRuntimeData runtimeData)
	{
	}

	private float CustomerTrackingTime()
	{
		return 0f;
	}

	private void OnCustomerArrivedForTracking(int customerIndex)
	{
	}

	private void OnCustomerEndedForTracking(int customerIndex, bool win)
	{
	}

	private void OnPlayerStateChanged(LevelPlayState oldState, LevelPlayState newState)
	{
	}

	private void Update()
	{
	}

	private void ProcessEndGame()
	{
	}

	public void UpdateAdsProgressCounters(bool isCountNewLevelPlay)
	{
	}

	public static int CountLevelsWonAccumulated()
	{
		return 0;
	}

	private void ShowInterOnLeaveEndGame(AdsPosition adsPos, Action onDone)
	{
	}

	private void ShowInterOnQuitMidGame(AdsPosition adsPos, Action onDone)
	{
	}

	private void ShowInterOnLeaveLevel(AdsPosition adsPos, bool isAllowed, Action onDone)
	{
	}

	public void RetryDayInMidGame()
	{
	}

	public void CheatSuperSkip()
	{
	}

	public void SkipEndDayOnMidGame()
	{
	}

	public bool CheckLiveAndRetryOnEndGame()
	{
		return false;
	}

	public void StartPlayRetry()
	{
	}

	[AsyncStateMachine(typeof(_003CLoadNextLevelWeather_003Ed__92))]
	private UniTask<WeatherEffect> LoadNextLevelWeather()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<WeatherEffect>);
	}

	[AsyncStateMachine(typeof(_003CLoadNextLevelWeatherCore_003Ed__93))]
	private UniTask<WeatherEffect> LoadNextLevelWeatherCore()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<WeatherEffect>);
	}

	public bool CheckLiveAndPlayNextLevel()
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CStartPlayNextLevel_003Ed__95))]
	public void StartPlayNextLevel()
	{
	}

	public void GoHomeOnMidGame()
	{
	}

	private void TrackQuit(LevelEndReason reason)
	{
	}

	private void OnApplicationQuit()
	{
	}

	[AsyncStateMachine(typeof(_003CGoHomeOnEndGame_003Ed__99))]
	public void GoHomeOnEndGame()
	{
	}

	[IteratorStateMachine(typeof(_003COnBeforeLoadHome_003Ed__100))]
	private IEnumerator OnBeforeLoadHome()
	{
		return null;
	}

	private void ReleaseLiveHolder()
	{
	}

	private void OnDoneLoadHome()
	{
	}

	protected override void OnDestroy()
	{
	}

	private void ReleaseAllLoadedAsset()
	{
	}
}
}
