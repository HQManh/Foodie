using System;
using System.Collections.Generic;

namespace _GAME.WeeklyContest;

[Serializable]
public class WCDataItem
{
	[Serializable]
	public class SaveGameModel
	{
		public int w;

		public bool f;

		public List<string> p;

		public SaveGameModel()
		{
		}

		public SaveGameModel(WCDataItem model)
		{
		}
	}

	public int weekId;

	public bool finished;

	public List<string> listPlayer;

	public WCDataItem()
	{
	}

	public WCDataItem(SaveGameModel cloudModel)
	{
	}
}
