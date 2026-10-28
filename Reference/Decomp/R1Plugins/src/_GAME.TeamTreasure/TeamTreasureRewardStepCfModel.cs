using System;
using System.Collections.Generic;
using _GAME.GameItem;

namespace _GAME.TeamTreasure;

[Serializable]
public class TeamTreasureRewardStepCfModel
{
	public int step;

	public int point;

	public List<RwItemModel> rwItems;
}
