using System;
using System.Collections.Generic;
using _GAME.GameItem;

namespace _GAME.DreamyPass;

[Serializable]
public class DreamyPassLevelCfModel
{
	public int level;

	public int point;

	public List<RwItemModel> freeRw;

	public List<RwItemModel> passRw;
}
