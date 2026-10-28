using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using _GAME.Profile;
using _GAME.Utils;

namespace _GAME.Leaderboard;

public class UILeaderboardTabPlayerCtrl : SingletonX<UILeaderboardTabPlayerCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CUpdateUIActive_003Ed__22 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public UILeaderboardTabPlayerCtrl _003C_003E4__this;

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

	[Header("LIST_PLAYER")]
	public PlayerRankItemUICtrl uiRowTop1;

	public PlayerRankItemUICtrl uiRowTop2;

	public PlayerRankItemUICtrl uiRowTop3;

	public PlayerRankItemUICtrl uiRowNormal;

	public RectTransform rankContentLayout;

	public RectTransform playerRankLayout;

	public RectTransform hideTopPos;

	public RectTransform hideBotPos;

	public PlayerRankItemUICtrl playerSelfRankItem;

	public Transform refTopPos;

	public Transform refBotPos;

	[Header("RUNTIME")]
	private int _tabActive;

	private bool _isFetching;

	private const float ParkX = 20000f;

	private const float RowHeight = 225f;

	private const float PadTop = 30f;

	private const float PadBottom = 300f;

	private List<ABIServerRankPlayerItemModel> _list;

	private long _selfRank;

	private readonly Stack<PlayerRankItemUICtrl> _poolNormal;

	private readonly Dictionary<int, PlayerRankItemUICtrl> _bound;

	private readonly Dictionary<int, ProfileReadEnvelope> _modelCache;

	private int _activeFrom;

	private int _activeTo;

	public bool IsActive => false;

	private int RowCount => 0;

	private int SelfIndex => 0;

	public void Init()
	{
	}

	[AsyncStateMachine(typeof(_003CUpdateUIActive_003Ed__22))]
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

	public void ShowListPlayerWorldRank()
	{
	}

	public void ShowListPlayerCountryRank()
	{
	}

	private void ShowList(List<ABIServerRankPlayerItemModel> list, long selfRank)
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

	private PlayerRankItemUICtrl Take(int index)
	{
		return null;
	}

	private PlayerRankItemUICtrl CreateRow()
	{
		return null;
	}

	private static void CleanItemPos(Transform itemPos, GameObject keep)
	{
	}

	private static void NormalizeRow(PlayerRankItemUICtrl row)
	{
	}

	private void Bind(int index)
	{
	}

	private void Unbind(int index)
	{
	}

	private void Park(int index, PlayerRankItemUICtrl item)
	{
	}

	private void RebindAll()
	{
	}

	private void UpdateRowWindow()
	{
	}

	private void UpdateSelfRankPos()
	{
	}
}
