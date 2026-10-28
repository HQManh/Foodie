using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using EssentialSystemR1;
using Firebase.Analytics;
using IapAdsSystem;
using UnityEngine;

namespace CakeOrder
{

public class CakeOrderDataTracking : MonoBehaviour
{
	public static class EndState
	{
		public const string Win = "win";

		public const string Skip = "skip";

		public const string Lose = "lose";

		public const string Quit = "quit";
	}

	private sealed class DishServeRecord
	{
		public float time;

		public int customerIndex;

		public int dishIndex;
	}

	private sealed class CustomerRunRecord
	{
		public float startTime;

		public bool ended;
	}

	private sealed class ActiveLevelSession
	{
		public CakeLevelInitData initData;

		public string levelName;

		public string hash;

		public int levelAccumulated;

		public List<Parameter> startingInventory;

		public readonly List<DishServeRecord> dishServes = new List<DishServeRecord>();

		public readonly Dictionary<int, CustomerRunRecord> customers = new Dictionary<int, CustomerRunRecord>();

		public int customerCompletedCount;

		public bool terminalEventSent;

		public bool botControlled;
	}

	[CompilerGenerated]
	private sealed class _003CStart_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

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
		public _003CStart_003Ed__16(int _003C_003E1__state)
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

	[Obsolete("level_dish_serve đã được thay bằng customer_start / customer_end. Không bật lại cờ này.")]
	public const bool EnableActionSequenceTracking = false;

	[SerializeField]
	private DataTrackingManager _trackingManager;

	private const string EventLevelStart = "level_start";

	private const string EventLevelEnd = "level_end";

	private const string EventReviveOfferPopup = "REVIVE_offer_popup";

	private const string EventCustomerStart = "customer_start";

	private const string EventCustomerEnd = "customer_end";

	private static readonly List<string> BoosterIds = new List<string>();

	private static ActiveLevelSession _activeLevel;

	public static R1Logger Logger => null;

	public static void SetBoosterIds(IEnumerable<CakeCurrencySO> boosterSOs)
	{
	}

	[IteratorStateMachine(typeof(_003CStart_003Ed__16))]
	private IEnumerator Start()
	{
		return null;
	}

	private static void RefreshCompletedProgress()
	{
	}

	public static void BeginLevel(CakeLevelInitData initData)
	{
	}

	public static void MarkBotControlled()
	{
	}

	public static string LevelIdOf(CakeLevelInitData initData)
	{
		return null;
	}

	[Obsolete("Dùng RecordCustomerStart / RecordCustomerEnd. level_dish_serve không còn được bắn.")]
	public static void RecordDishServe(float time, int customerIndex, int dishIndex)
	{
	}

	public static void RecordCustomerStart(int customerIndex, float time)
	{
	}

	public static void RecordCustomerEnd(int customerIndex, float time, bool win)
	{
	}

	public static void TrackBoosterUsed(string boosterId, string acquireMethod, int cost, CakeLevelRuntimeData runtimeData)
	{
	}

	public static void TrackReviveOffer(SaveMeType reviveType, string result, LevelEndReason loseReason = LevelEndReason.Unknown)
	{
	}

	public static void CompleteLevel(CakeLevelEndResultData resultData)
	{
	}

	public static void QuitLevel(CakeLevelRuntimeData runtimeData, LevelEndReason reason)
	{
	}

	public static void TrackLiveOpsInteraction(string liveOpsId, string action, int milestoneIndex = -1, string rewardId = null, int rewardAmount = 0)
	{
	}

	public static string LoseTypeOf(LevelEndReason reason)
	{
		return null;
	}

	private static Parameter[] CreateLevelContext(CakeLevelInitData initData)
	{
		return null;
	}

	private static Parameter[] CreateLevelEndParameters(string endState, CakeLevelEndResultData resultData, CakeLevelRuntimeData runtimeData, int nextWinStreak, LevelEndReason quitReason = LevelEndReason.Unknown)
	{
		return null;
	}

	private static List<Parameter> CreateInventorySnapshot()
	{
		return null;
	}

	private static string CheckpointKey(string kind, int levelIndex)
	{
		return null;
	}

	private static void TrackCheckpointStart(DataTrackingManager manager, CakeLevelInitData initData)
	{
	}

	private static void TrackCheckpointEnd(DataTrackingManager manager, CakeLevelEndResultData resultData)
	{
	}

	private static void TrackAppsFlyerLevelAchieved(DataTrackingManager manager)
	{
	}

	[Obsolete("level_dish_serve đã ngừng bắn; giữ lại chỉ để đối chiếu schema cũ.")]
	private static void FlushDishServeSequence(DataTrackingManager manager)
	{
	}
}
}
