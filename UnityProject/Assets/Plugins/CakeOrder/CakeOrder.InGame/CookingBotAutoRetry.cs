using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CookingGraph;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;

namespace CakeOrder.InGame
{

public static class CookingBotAutoRetry
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CAdvanceAfterDelay_003Ed__121 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

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
	private struct _003CAnswerNextFrame_003Ed__117 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public UIPopupBoosterSaveMeBase popup;

		public Action action;

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
	private struct _003CRetryAfterDelay_003Ed__122 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

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

	private const float RetryDelaySeconds = 1.25f;

	private const int MaxAttempts = 50;

	private static string _key;

	private static bool _subscribed;

	public const int MaxSaveMeBudget = 5;

	private static int _saveMeBudget;

	private static int _saveMeRefilledForAttempt;

	public const int TimeScaleSourceId = 1900;

	public const float MinTimeScale = 1f;

	public const float MaxTimeScale = 5f;

	private static float _timeScale;

	private static bool _timeScaleApplied;

	private static int _timeScaleOwnerId;

	public const float MinPickInterval = 1f;

	public const float MaxPickInterval = 10f;

	private static float _pickIntervalBase;

	private static float _pickIntervalBump;

	public const int MinAdaptiveStrategyInterval = 1;

	public const int MaxAdaptiveStrategyInterval = 10;

	private static int _adaptiveStrategyInterval;

	private static int _adaptiveStrategyLearned;

	private static CookingBotWorkWaitStrategy _workWaitStrategy;

	private static bool _verboseLogging;

	public static bool IsLooping { get; private set; }

	public static int AttemptCount { get; private set; }

	public static CookingBotFailureKnowledge Knowledge { get; private set; }

	public static string LastStopReason { get; private set; }

	public static int SaveMeBudget
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public static int SaveMeRemaining { get; private set; }

	public static float TimeScale
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public static float PickIntervalSeconds
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public static float PickIntervalBase => 0f;

	public static float PickIntervalLearned => 0f;

	public static CookingBotWorkWaitStrategy EffectiveWorkWaitStrategy { get; private set; }

	public static int AdaptiveStrategyPickInterval
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public static int AdaptiveStrategyIntervalLearned => 0;

	public static CookingBotPickingStrategy PickingStrategyMode { get; private set; }

	public static CookingBotPickingStrategy EffectivePickingStrategy { get; private set; }

	public static bool StrategySearchExhausted => false;

	public static CookingBotWorkWaitStrategy WorkWaitStrategy
	{
		get
		{
			return (CookingBotWorkWaitStrategy)0;
		}
		set
		{
		}
	}

	public static bool VerboseLogging
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static bool AutoNextOnWin { get; set; }

	public static int WinCount { get; private set; }

	public static event Action onSettingsRefreshed;

	public static event Action<int> onAdaptiveStrategyIntervalChanged;

	public static event Action<float> onPickIntervalChanged;

	public static event Action<CookingBotWorkWaitStrategy> onWorkWaitStrategyChanged;

	public static event Action<bool> onVerboseLoggingChanged;

	public static void ApplyTimeScale()
	{
	}

	public static void EnsureTimeScale()
	{
	}

	public static void ClearTimeScale()
	{
	}

	public static void ReportEffectivePickInterval(float effectiveSeconds)
	{
	}

	public static void ReportEffectiveSettings(float effectivePickIntervalSeconds, CookingBotWorkWaitStrategy effectiveWorkWait, CookingBotPickingStrategy strategyMode, CookingBotPickingStrategy effectiveStrategy, int adaptiveStrategyPickInterval)
	{
	}

	public static void Begin(string mapId, int levelIndex)
	{
	}

	public static void Stop(string reason)
	{
	}

	public static void Reset(string reason)
	{
	}

	public static bool ShouldAutoResume(string mapId, int levelIndex)
	{
		return false;
	}

	private static string KeyOf(string mapId, int levelIndex)
	{
		return null;
	}

	private static void EnsureSubscribed()
	{
	}

	private static void OnSaveMeOffered(UIPopupBoosterSaveMeBase popup)
	{
	}

	private static void Answer(UIPopupBoosterSaveMeBase popup, Action action)
	{
	}

	[AsyncStateMachine(typeof(_003CAnswerNextFrame_003Ed__117))]
	private static UniTaskVoid AnswerNextFrame(UIPopupBoosterSaveMeBase popup, Action action)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	public static CookingBotFailureReason ReasonOf(LevelEndReason reason)
	{
		return (CookingBotFailureReason)0;
	}

	private static void OnLevelEnded(CakeLevelEndResultData result)
	{
	}

	private static void AdvanceToNextLevel()
	{
	}

	[AsyncStateMachine(typeof(_003CAdvanceAfterDelay_003Ed__121))]
	private static UniTaskVoid AdvanceAfterDelay()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	[AsyncStateMachine(typeof(_003CRetryAfterDelay_003Ed__122))]
	private static UniTaskVoid RetryAfterDelay()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}
}
}
