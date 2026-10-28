using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;

namespace _GAME.BaseGame;

public static class SocialAuth
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSignInGooglePlayGames_003Ed__12 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<string> _003C_003Et__builder;

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
	private struct _003CSignInPlatformAuthID_003Ed__10 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<string> _003C_003Et__builder;

		private UnityEngine.Awaitable<string>.Awaiter _003C_003Eu__1;

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
	private struct _003CWaitSignIn_003Ed__11 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

		public UniTaskCompletionSource<bool> tcs;

		public string platform;

		private UnityEngine.Awaitable<(bool hasResultLeft, bool result)>.Awaiter _003C_003Eu__1;

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

	public const string PrefixDevice = "DEI";

	public const string PrefixGooglePlayGames = "GPG";

	public const string PrefixGameCenter = "AGC";

	private const float SignInTimeoutSeconds = 10f;

	public static string PlatformDisplayName { get; private set; }

	public static string GetDeviceAuthID()
	{
		return null;
	}

	public static string GetAuthKind(string authId)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CSignInPlatformAuthID_003Ed__10))]
	public static UniTask<string> SignInPlatformAuthID()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<string>);
	}

	[AsyncStateMachine(typeof(_003CWaitSignIn_003Ed__11))]
	private static UniTask<bool> WaitSignIn(UniTaskCompletionSource<bool> tcs, string platform)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<bool>);
	}

	[AsyncStateMachine(typeof(_003CSignInGooglePlayGames_003Ed__12))]
	private static UniTask<string> SignInGooglePlayGames()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<string>);
	}
}
