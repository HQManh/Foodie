using System;
using System.Collections.Generic;
using _GAME.GameItem;

namespace _GAME.DreamyTower;

[Serializable]
public class DreamyTowerLevelCfModel
{
	public int level;

	public List<RwItemModel> listRwItem;

	public bool IsCheckPoint => false;
}
