using System;
using System.Collections.Generic;
using _GAME.GameItem;

namespace _GAME.StageRace;

[Serializable]
public class StageRaceStageCfModel
{
	public int index;

	public int numbLevel;

	public int numbPlayer;

	public List<RwItemModel> winReward;

	public int numbFakePlayer;

	public int timePassLvMin;

	public int timePassLvMax;

	public StageRaceStageCfModel Copy(StageRaceStageCfModel copy = null)
	{
		return null;
	}
}
