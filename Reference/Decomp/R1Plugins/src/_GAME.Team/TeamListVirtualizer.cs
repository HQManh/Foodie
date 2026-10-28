using System.Collections.Generic;
using UnityEngine;
using _GAME.Leaderboard;

namespace _GAME.Team;

public class TeamListVirtualizer
{
	private const float ParkX = 20000f;

	private readonly TeamRankItemUICtrl _template;

	private readonly RectTransform _content;

	private readonly RectTransform _viewport;

	private readonly float _rowHeight;

	private readonly float _padTop;

	private readonly float _padBottom;

	private readonly float _buffer;

	private List<TeamInfoModel> _list;

	private readonly Stack<TeamRankItemUICtrl> _pool;

	private readonly Dictionary<int, TeamRankItemUICtrl> _bound;

	private int _activeFrom;

	private int _activeTo;

	private readonly Vector3[] _cornerBuf;

	private int RowCount => 0;

	public TeamListVirtualizer(TeamRankItemUICtrl template, RectTransform content, float rowHeight, float padTop, float padBottom)
	{
	}

	public void Init()
	{
	}

	public void SetData(List<TeamInfoModel> list)
	{
	}

	public void Tick()
	{
	}

	private float RowCenterY(int index)
	{
		return 0f;
	}

	private void UpdateWindow()
	{
	}

	private void Bind(int index)
	{
	}

	private void Unbind(int index)
	{
	}

	private void Park(TeamRankItemUICtrl item)
	{
	}

	private TeamRankItemUICtrl CreateRow()
	{
		return null;
	}

	private static void NormalizeRow(TeamRankItemUICtrl row)
	{
	}
}
