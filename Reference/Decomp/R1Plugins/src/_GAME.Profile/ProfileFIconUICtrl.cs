using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using UnityEngine.UI;
using _GAME.Utils;

namespace _GAME.Profile;

public class ProfileFIconUICtrl : SingletonX<ProfileFIconUICtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CStart_003Ed__5 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public ProfileFIconUICtrl _003C_003E4__this;

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

	public Button btnProfile;

	public AvatarStatusUICtrl avatarStatus;

	public FrameStatusUICtrl frameStatus;

	private bool _isSetup;

	private int _callbackId;

	[AsyncStateMachine(typeof(_003CStart_003Ed__5))]
	private void Start()
	{
	}

	public void Setup()
	{
	}

	private void UpdateUIData()
	{
	}

	private void OpenPopupProfile()
	{
	}

	protected override void OnDestroy()
	{
	}
}
