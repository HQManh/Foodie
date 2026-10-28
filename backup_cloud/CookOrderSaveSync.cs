using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using LiveOpsR1;

namespace CakeOrder.SaveProfile
{

public static class CookOrderSaveSync
{
	public class Snapshot
	{
		public PlayerProfileDataManager.RawData profile;

		public PlayerMapLevelProgressDataManager.RawData progress;

		public RawData liveOps;

		public Dictionary<string, int> prefs;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSet_003Ed__10 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

		public Snapshot snapshot;

		private PlayerProfileDataManager _003Cprofile_003E5__2;

		private PlayerMapLevelProgressDataManager _003Cprogress_003E5__3;

		private LiveOpsDataManager _003CliveOps_003E5__4;

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

	private static readonly string[] FixedPrefKeys;

	private const int MaxInGameTutIndex = 10;

	private const int ExtraNpcDays = 2;

	private static PlayerProfileDataManager ProfileManager => null;

	private static PlayerMapLevelProgressDataManager ProgressManager => null;

	private static LiveOpsDataManager LiveOpsManagerData => null;

	public static bool IsReady => false;

	public static Snapshot Get()
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CSet_003Ed__10))]
	public static UniTask<bool> Set(Snapshot snapshot)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<bool>);
	}

	private static HashSet<string> GetPrefKeys(PlayerMapLevelProgressDataManager.RawData progress)
	{
		return null;
	}
}
}
