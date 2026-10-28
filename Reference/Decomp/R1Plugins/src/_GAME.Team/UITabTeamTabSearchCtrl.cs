using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.Leaderboard;
using _GAME.Utils;

namespace _GAME.Team;

public class UITabTeamTabSearchCtrl : SingletonX<UITabTeamTabSearchCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSearchTeamByName_003Ed__12 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public UITabTeamTabSearchCtrl _003C_003E4__this;

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

	public CanvasGroup objTab;

	public TMP_InputField inputName;

	public Button btnSearch;

	public TeamRankItemUICtrl uiRowTemplate;

	public RectTransform listTeamUILayout;

	private const float RowHeight = 182f;

	private const float PadTop = 50f;

	private const float PadBottom = 300f;

	private TeamListVirtualizer _vlist;

	public void Init()
	{
	}

	public void UpdateUIActive()
	{
	}

	private void OnChangeInputName(string value)
	{
	}

	[AsyncStateMachine(typeof(_003CSearchTeamByName_003Ed__12))]
	public void SearchTeamByName()
	{
	}

	private void Update()
	{
	}
}
