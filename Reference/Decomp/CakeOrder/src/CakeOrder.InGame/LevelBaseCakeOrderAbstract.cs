using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.DataSO;
using CookingGraph;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using Utilities;

namespace CakeOrder.InGame;

public abstract class LevelBaseCakeOrderAbstract : MonoSingleton<LevelBaseCakeOrderAbstract>
{
	public delegate void OnPlayStateChangedDelegate(LevelPlayState oldState, LevelPlayState newState);

	public class BoosterData
	{
		public const string KEY_PARAM_DURATION = "dur";

		public const string KEY_PARAM_SPEED = "spd";

		public const string KEY_PARAM_NUM = "num";

		public bool? appliedSuccessfully;

		public BoosterType boosterEffect;

		public Dictionary<string, int> paramsInt;

		public int GetDuration()
		{
			return 0;
		}

		public int GetSpeed()
		{
			return 0;
		}

		public int GetNum()
		{
			return 0;
		}
	}

	private class BoosterRuntimeData
	{
		public BoosterData boosterData;

		public Action<BoosterData> onEnd;
	}

	public class ConfigSaveMeOnOutOfServeSlots
	{
		public int numMaxServeSlotsToRemove;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUpLevel_003Ed__75 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public LevelBaseCakeOrderAbstract _003C_003E4__this;

		public CakeLevelInitData initData;

		public CakeLevelRuntimeData runtimeData;

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
	private struct _003CStartTutorial_003Ed__82 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public LevelBaseCakeOrderAbstract _003C_003E4__this;

		public string tutorialId;

		public Action onDone;

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

	[Header("Cooking Process Graph")]
	[SerializeField]
	private CookingGraphAsset _cookingGraphSO;

	[SerializeField]
	private MapIngredientLookupTable _ingredientLookupTable;

	[Header("Background")]
	[SerializeField]
	private InGameBackgroundsControl _backgroundControl;

	public Func<bool> onCustomerOutOfTime;

	private Queue<BoosterRuntimeData> _pendingBoosters;

	private readonly Dictionary<BoosterType, bool> _boosterUsable;

	private static readonly BoosterType[] AllBoosterTypes;

	public CookingGraphAsset CookingProcessGraphSO => null;

	public MapIngredientLookupTable IngredientLookupTable => null;

	public InGameBackgroundsControl BackgroundControl => null;

	public abstract ISpawnControl SpawnControl { get; }

	public CakeLevelInitData InitData { get; private set; }

	public CakeLevelRuntimeData RuntimeData { get; private set; }

	public OrderPricingCalculator OrderPricingCalculator { get; private set; }

	public LevelPlayState PlayState { get; private set; }

	public bool IsLevelSetupComplete => false;

	public BoolModifierWithRegisteredSource BlockPlayerInteractModifiers { get; private set; }

	public bool IsAllowInteract => false;

	public virtual bool HasLevelTutorial => false;

	public virtual bool LastSaveMeApplied { get; protected set; }

	public event OnPlayStateChangedDelegate onPlayStateChanged
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

	public event Action onBlockPlayerInteractChanged
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

	public event Action<float> onFastForwardEndgame
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

	public event Action onFastForwardEndgameEnded
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

	public event Action<BoosterData> onBoosterEffectApplied
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

	public event Action<BoosterData> onBoosterEffectExpired
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

	public event Action<BoosterType, bool> onBoosterUsableChanged
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

	public event Action onOutOfServeSlot
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

	public event Action onUseMoreServeSlot
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

	public event Action onBeltDeadlock
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

	protected virtual void Update()
	{
	}

	protected override void OnDestroy()
	{
	}

	private void PreSetUp()
	{
	}

	private void OnBlockPlayerInteractModifiersChanged()
	{
	}

	[AsyncStateMachine(typeof(_003CSetUpLevel_003Ed__75))]
	public UniTask SetUpLevel(CakeLevelInitData initData, CakeLevelRuntimeData runtimeData)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public virtual UniTask SetUpUI(UIInLevelCakeOrder mainUI)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public virtual bool TryGetBeltBottomWorldY(out float worldY)
	{
		worldY = default(float);
		return false;
	}

	public virtual bool TryGetBoosterPanelWorldY(out float worldY)
	{
		worldY = default(float);
		return false;
	}

	public void NotiStartUITutorial()
	{
	}

	[AsyncStateMachine(typeof(_003CStartTutorial_003Ed__82))]
	public UniTask StartTutorial(string tutorialId, Action onDone)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public void StartPlay()
	{
	}

	public void EndGame()
	{
	}

	public void SimulateCompleteAllRemainOrdersAndEndGame()
	{
	}

	private OrderPricingOutput SimulatePricingOutput(int startCustomerIndex, int endCustomerIndex)
	{
		return null;
	}

	public void RaiseFastForwardEndgame(float timeScale)
	{
	}

	public void RaiseFastForwardEndgameEnded()
	{
	}

	private void SetPlayState(LevelPlayState next)
	{
	}

	protected abstract UniTask OnSetUpLevel();

	protected abstract void OnStartPlay();

	protected virtual void OnEndGame()
	{
	}

	protected virtual UniTask OnStartTutorial(string tutorialId, Action onDone)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public virtual bool CanUseBooster(BoosterType boosterType)
	{
		return false;
	}

	public virtual void PrepareBoosterTutorial(BoosterType boosterType)
	{
	}

	public void ActivateBooster(BoosterData boosterData, Action<BoosterData> onEnd = null)
	{
	}

	private void RefreshBoosterUsable()
	{
	}

	private void ProcessBoosterEffect()
	{
	}

	protected abstract void OnApplyBoosterEffect(BoosterData boosterData, Action<BoosterData> onEnd);

	protected abstract void OnBoosterEffectExpired(BoosterData boosterData);

	public void LostHeart(LostHeartReason reason)
	{
	}

	public void TriggerOutOfServeSlot()
	{
	}

	public void TriggerBeltDeadlock()
	{
	}

	public void TriggerUseMoreServeSlot()
	{
	}

	public bool TriggerCustomerOutOfTime()
	{
		return false;
	}

	public virtual void ApplySaveMeOnOutOfServeSlots(ConfigSaveMeOnOutOfServeSlots config)
	{
	}

	public virtual void ApplySaveMeOnCustomerOutOfTime()
	{
	}

	public virtual void ApplySaveMeOnBeltDeadlock()
	{
	}

	public abstract (List<IRewardItemInfo>, List<GridEffectType>, List<IngredientSlotStatus>) GetMechanicsUsedInLevel();
}
