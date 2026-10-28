using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;

namespace _GAME.BaseGame;

public static class ABIServerAPI
{
	private struct IdentityResolution
	{
		public string serverId;

		public string linkedSocialAuthId;

		public string conflictReason;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CCheckNetworkConnection_003Ed__46 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public int version;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<bool>.Awaiter _003C_003Eu__2;

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
	private struct _003CInitConnection_003Ed__44 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		private int _003Cversion_003E5__2;

		private UnityEngine.Awaitable<bool>.Awaiter _003C_003Eu__1;

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
	private struct _003CResolveIdentityBeforeConsumers_003Ed__48 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public int version;

		private string _003CstoredServerId_003E5__2;

		private string _003CsocialAuthId_003E5__3;

		private string _003CdeviceAuthId_003E5__4;

		private int _003CretryDelayMs_003E5__5;

		private int _003CconflictRetryDelayMs_003E5__6;

		private int _003Cattempt_003E5__7;

		private IdentityResolution _003Cresolution_003E5__8;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<string>.Awaiter _003C_003Eu__2;

		private UnityEngine.Awaitable<IdentityResolution>.Awaiter _003C_003Eu__3;

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
	private struct _003CResolveServerId_003Ed__53 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<IdentityResolution> _003C_003Et__builder;

		public string deviceAuthId;

		public string socialAuthId;

		public string storedServerId;

		private UnityEngine.Awaitable<IdentityResolution>.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<ABIServerIDCommandResult>.Awaiter _003C_003Eu__2;

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
	private struct _003CResolveWithPlatform_003Ed__54 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<IdentityResolution> _003C_003Et__builder;

		public string socialAuthId;

		public string deviceAuthId;

		public string storedServerId;

		private ABIServerIDCommandResult _003Cdevice_003E5__2;

		private UnityEngine.Awaitable<ABIServerIDCommandResult>.Awaiter _003C_003Eu__1;

		private ABIServerIDCommandResult _003Clink_003E5__3;

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
	private struct _003CSendWebRequest_003Ed__57 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

		public WebRequestModel webReqModel;

		public bool showLoading;

		private int _003Crlc_003E5__2;

		private UnityEngine.Awaitable<bool>.Awaiter _003C_003Eu__1;

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
	private struct _003CWaitForIdentityReady_003Ed__45 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		private int _003Cversion_003E5__2;

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
	private struct _003CWaitForNetwork_003Ed__47 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public int version;

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

	public const int RequestTimeout = 3;

	public const int FetchTimeout = 10;

	private static string _resolvingServerId;

	private static bool _isIdentityReady;

	private static bool _isNetworkActive;

	private static int _requestCounter;

	private static Dictionary<int, bool> _dictRequestLoadingActive;

	private static int _sessionVersion;

	public static string KEY_SAVE_SERVER_ID => null;

	public static string KEY_SAVE_SOCIAL_AUTH_ID => null;

	public static string KEY_SAVE_SERVER_ID_HISTORY => null;

	public static ServerMode ServerMode => ServerMode.Test;

	public static string UrlSvRoom => null;

	public static string UrlSvProfile => null;

	public static int ProjectProfileId => 0;

	public static int ProjectInboxId => 0;

	public static string ServerID { get; private set; }

	public static string AuthKind { get; private set; }

	public static bool IsIdentityReady => false;

	public static string IdentityConflictReason { get; private set; }

	public static long ExpectedTeamId => 0L;

	public static bool IsNetworkActive => false;

	internal static bool IsCanonicalIdentityTarget(string serverId)
	{
		return false;
	}

	private static bool IsSessionAlive(int version)
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CInitConnection_003Ed__44))]
	public static UniTask InitConnection()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CWaitForIdentityReady_003Ed__45))]
	public static UniTask WaitForIdentityReady()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CCheckNetworkConnection_003Ed__46))]
	private static UniTaskVoid CheckNetworkConnection(int version)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	[AsyncStateMachine(typeof(_003CWaitForNetwork_003Ed__47))]
	private static UniTask WaitForNetwork(int version)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CResolveIdentityBeforeConsumers_003Ed__48))]
	private static UniTaskVoid ResolveIdentityBeforeConsumers(int version)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	private static void PublishIdentity(string serverId, string authKind)
	{
	}

	public static string[] GetServerIdHistory()
	{
		return null;
	}

	private static void AddServerIdHistory(string serverId)
	{
	}

	[AsyncStateMachine(typeof(_003CResolveServerId_003Ed__53))]
	private static UniTask<IdentityResolution> ResolveServerId(string storedServerId, string deviceAuthId, string socialAuthId)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<IdentityResolution>);
	}

	[AsyncStateMachine(typeof(_003CResolveWithPlatform_003Ed__54))]
	private static UniTask<IdentityResolution> ResolveWithPlatform(string storedServerId, string deviceAuthId, string socialAuthId)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<IdentityResolution>);
	}

	private static IdentityResolution LinkedTo(string serverId, string socialAuthId)
	{
		return default(IdentityResolution);
	}

	private static void SetIdentityConflict(string reason)
	{
	}

	[AsyncStateMachine(typeof(_003CSendWebRequest_003Ed__57))]
	public static UniTask<bool> SendWebRequest(WebRequestModel webReqModel, bool showLoading = false, bool showLoadingImmediate = false)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<bool>);
	}
}
