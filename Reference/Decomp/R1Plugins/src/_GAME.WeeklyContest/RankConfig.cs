using System;
using System.Collections.Generic;
using _GAME.GameItem;

namespace _GAME.WeeklyContest;

[Serializable]
public class RankConfig
{
	public int rank;

	public List<RwItemModel> listRwItem;
}
