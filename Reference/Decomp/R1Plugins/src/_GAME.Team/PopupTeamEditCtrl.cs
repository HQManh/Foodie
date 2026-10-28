using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.Team;

public class PopupTeamEditCtrl : PopupSingleton<PopupTeamEditCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CHandleSaveTeamInfo_003Ed__24 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupTeamEditCtrl _003C_003E4__this;

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

	[Header("CONTENT")]
	public Image imgFlag;

	public Button btnOpenSelectFlag;

	public TMP_InputField inputName;

	public TMP_InputField inputDes;

	public TextMeshProUGUI txtLevelRequired;

	public Button btnAddLvRequired;

	public Button btnMinusLvRequired;

	public TextMeshProUGUI txtPriceEdit;

	public Button btnSaveEdit;

	private int _flagSelected;

	private int _levelRequired;

	private string _desOriginal;

	private bool _saving;

	public override void Open()
	{
	}

	private void SetUpDataFirstOpen()
	{
	}

	private void OpenPopupSelectFlag()
	{
	}

	public int GetFlagSelected()
	{
		return 0;
	}

	public void ChangeFlag(int flagIndex)
	{
	}

	private void OnChangeInputName(string value)
	{
	}

	private void OnChangeInputDes(string value)
	{
	}

	private void AddLvRequired()
	{
	}

	private void MinusLvRequired()
	{
	}

	private void ChangeLvRequired(int value)
	{
	}

	private void UpdateBtnSaveStatus(bool refreshVisual = false)
	{
	}

	[AsyncStateMachine(typeof(_003CHandleSaveTeamInfo_003Ed__24))]
	private void HandleSaveTeamInfo()
	{
	}
}
