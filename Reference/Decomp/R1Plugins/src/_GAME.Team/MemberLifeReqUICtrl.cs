using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.Profile;

namespace _GAME.Team;

public class MemberLifeReqUICtrl : TeamChatItemUICtrl
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSendLifeHelp_003Ed__12 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public MemberLifeReqUICtrl _003C_003E4__this;

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
	private struct _003CViewProfile_003Ed__13 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public MemberLifeReqUICtrl _003C_003E4__this;

		private string _003CserverId_003E5__2;

		private UnityEngine.Awaitable<ProfileReadEnvelope>.Awaiter _003C_003Eu__1;

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

	public AvatarStatusUICtrl ueAvatar;

	public FrameStatusUICtrl ueFrame;

	public NameFxStatusUICtrl ueName;

	public GameObject tagLeader;

	public TextMeshProUGUI txtTime;

	public Slider sliderReqLifeFill;

	public TextMeshProUGUI txtReqLifeFill;

	public Button btnAction;

	protected TeamLifeRequestModel _lifeReqModel;

	private bool _isLoadingProfile;

	public virtual void SetLifeRequest(TeamLifeRequestModel model)
	{
	}

	protected virtual void UpdateProfileInfo(string userId)
	{
	}

	[AsyncStateMachine(typeof(_003CSendLifeHelp_003Ed__12))]
	public void SendLifeHelp()
	{
	}

	[AsyncStateMachine(typeof(_003CViewProfile_003Ed__13))]
	public void ViewProfile()
	{
	}

	public override long GetTimeSorting()
	{
		return 0L;
	}
}
