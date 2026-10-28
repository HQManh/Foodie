using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using _GAME.GameItem;
using _GAME.Utils;

namespace _GAME.DreamyPass;

public class DreamyPassManager : SingletonManager<DreamyPassManager>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CCheckShowTutFirstOpen_003Ed__17 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

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

	[SerializeField]
	private SODreamyPassConfig soConfig;

	public static DreamyPassDbModel Data;

	public static bool IsUnlocked => false;

	private static bool IsStarted => false;

	private static bool IsEnded => false;

	public static bool IsPassBonusActive => false;

	protected override void Awake()
	{
	}

	[ContextMenu("EditorResetData")]
	public void EditorResetData()
	{
	}

	private static void ResetData()
	{
	}

	public static void ReloadData()
	{
	}

	public static void ResetDataNewSeason()
	{
	}

	public static void StartNewSeason()
	{
	}

	public static bool CheckPlayTutorialUnlock()
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CCheckShowTutFirstOpen_003Ed__17))]
	public static UniTask CheckShowTutFirstOpen()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public static void ChangePointWinLevel(int level)
	{
	}

	public static void ChangePoint(int point, int exPoint = 0)
	{
	}

	public static void SavePointCache()
	{
	}

	public static void ResetExtraPoint()
	{
	}

	public static void ActivatePass()
	{
	}

	public static bool ClaimFreeReward(int level)
	{
		return false;
	}

	public static bool ClaimPassReward(int level)
	{
		return false;
	}

	public static List<RwItemModel> ClaimAllReward()
	{
		return null;
	}

	private static void LogEventActivatePass()
	{
	}

	private static void LogEventClaimReward(int stage, bool isPass)
	{
	}

	private static void LogEventPassStage(int stage)
	{
	}
}
