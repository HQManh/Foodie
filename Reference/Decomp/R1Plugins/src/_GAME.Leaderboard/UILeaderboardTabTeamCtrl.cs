using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using _GAME.Team;
using _GAME.Utils;

namespace _GAME.Leaderboard;

public class UILeaderboardTabTeamCtrl : SingletonX<UILeaderboardTabTeamCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CUpdateUIActive_003Ed__18 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public UILeaderboardTabTeamCtrl _003C_003E4__this;

		private bool _003Cshown_003E5__2;

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

	public CanvasGroup objNetworkErr;

	[Header("MENU_BTN")]
	public Button btnTabWorld;

	public Button btnTabCountry;

	public GameObject btnTabWorldActive;

	public GameObject btnTabCountryActive;

	[Header("LIST_TEAM")]
	public TeamRankItemUICtrl uiRowTop1;

	public TeamRankItemUICtrl uiRowTop2;

	public TeamRankItemUICtrl uiRowTop3;

	public TeamRankItemUICtrl uiRowNormal;

	public RectTransform teamRankLayout;

	public RectTransform hideTopPos;

	public RectTransform hideBotPos;

	[Header("RUNTIME")]
	private int _tabActive;

	private bool _isFetching;

	private const float ParkX = 20000f;

	private const float RowHeight = 182f;

	private const float PadTop = 30f;

	private const float PadBottom = 500f;

	private List<TeamInfoModel> _list;

	private readonly Stack<TeamRankItemUICtrl> _poolNormal;

	private readonly Dictionary<int, TeamRankItemUICtrl> _bound;

	private int _activeFrom;

	private int _activeTo;

	public bool IsActive => false;

	private int RowCount => 0;

	public void Init()
	{
	}

	[AsyncStateMachine(typeof(_003CUpdateUIActive_003Ed__18))]
	public void UpdateUIActive()
	{
	}

	private void ShowCurrentTab()
	{
	}

	public void OpenTabWorld()
	{
	}

	public void OpenTabCountry()
	{
	}

	public void ShowListTeamWorldRank()
	{
	}

	public void ShowListTeamCountryRank()
	{
	}

	private void ShowList(List<TeamInfoModel> list)
	{
	}

	private void Update()
	{
	}

	private void InitVirtualList()
	{
	}

	private float RowCenterY(int index)
	{
		return 0f;
	}

	private TeamRankItemUICtrl Take(int index)
	{
		return null;
	}

	private TeamRankItemUICtrl CreateRow()
	{
		return null;
	}

	private static void NormalizeRow(TeamRankItemUICtrl row)
	{
	}

	private void Bind(int index)
	{
	}

	private void Unbind(int index)
	{
	}

	private void Park(int index, TeamRankItemUICtrl item)
	{
	}

	private void RebindAll()
	{
	}

	private void UpdateRowWindow()
	{
	}
}
