using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using _GAME.Profile;

namespace _GAME.Team;

public class TeamMemberItemUICtrl : MonoBehaviour
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CViewProfile_003Ed__13 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public TeamMemberItemUICtrl _003C_003E4__this;

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

	public GameObject objItem;

	public TextMeshProUGUI txtRank;

	public AvatarStatusUICtrl avatarStatus;

	public FrameStatusUICtrl frameStatus;

	public NameFxStatusUICtrl nameFxStatus;

	public GameObject tagLeader;

	public TextMeshProUGUI txtTotalHelp;

	public TextMeshProUGUI txtScore;

	public int rank;

	public TeamMemberModel model;

	private bool _isLoadingProfile;

	public void UpdateUIData(int newRank, TeamMemberModel newModel)
	{
	}

	public void OnSelectItem()
	{
	}

	[AsyncStateMachine(typeof(_003CViewProfile_003Ed__13))]
	public void ViewProfile()
	{
	}
}
