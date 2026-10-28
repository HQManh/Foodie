using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using _GAME.Utils;

namespace _GAME.TeamTreasure;

public class TeamTreasureManager : SingletonManager<TeamTreasureManager>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CCheckFirstOpenPopup_003Ed__11 : IAsyncStateMachine
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CFetchNewTreasureData_003Ed__12 : IAsyncStateMachine
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
	private SOTeamTreasureConfig soConfig;

	public static TeamTreasureDbModel Data;

	public static bool IsUnlocked => false;

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

	public static void NormalizeData(bool queueSave = true)
	{
	}

	public static void ResetDataNewSeason()
	{
	}

	public static bool CheckPlayTutorialUnlock()
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CCheckFirstOpenPopup_003Ed__11))]
	public static UniTask CheckFirstOpenPopup()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CFetchNewTreasureData_003Ed__12))]
	public static UniTask FetchNewTreasureData()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public static void ResetPoint()
	{
	}

	public static void ChangePointWinLevel(int level)
	{
	}

	public static void ChangePoint(int point, bool needPushProfile = false)
	{
	}

	public static void SavePointCache()
	{
	}

	public static void SaveTotalPointCache()
	{
	}

	public static void ClaimStepReward(int step)
	{
	}

	public static bool CheckResetEvent(int top)
	{
		return false;
	}
}
