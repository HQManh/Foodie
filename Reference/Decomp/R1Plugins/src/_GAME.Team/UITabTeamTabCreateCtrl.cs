using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.Utils;

namespace _GAME.Team;

public class UITabTeamTabCreateCtrl : SingletonX<UITabTeamTabCreateCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CHandleCreateTeam_003Ed__21 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public UITabTeamTabCreateCtrl _003C_003E4__this;

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

	public CanvasGroup objTab;

	public Image imgFlag;

	public Button btnOpenSelectFlag;

	public TMP_InputField inputName;

	public TMP_InputField inputDes;

	public TextMeshProUGUI txtLevelRequired;

	public Button btnAddLvRequired;

	public Button btnMinusLvRequired;

	public Button btnCreate;

	public TextMeshProUGUI txtPriceCreate;

	public Image imgPriceCreate;

	[Header("RUNTIME")]
	private int _flagSelected;

	private int _levelRequired;

	public void Init()
	{
	}

	public void UpdateUIActive()
	{
	}

	private void OnChangeInputName(string value)
	{
	}

	private void OnChangeInputDes(string value)
	{
	}

	public void OpenPopupSelectFlag()
	{
	}

	public int GetFlagSelected()
	{
		return 0;
	}

	public void ChangeFlag(int flagIndex)
	{
	}

	private void ChangeLvRequired(int value)
	{
	}

	[AsyncStateMachine(typeof(_003CHandleCreateTeam_003Ed__21))]
	private void HandleCreateTeam()
	{
	}
}
