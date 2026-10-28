using System;
using System.Collections.Generic;
using UnityEngine;

namespace _GAME.WeeklyContest;

[Serializable]
public class WeeklyContestDbModel
{
	[Serializable]
	public class SaveGameModel
	{
		public int pt;

		public int cw;

		public long et;

		public List<WCDataItem.SaveGameModel> dw;

		public SaveGameModel()
		{
		}

		public SaveGameModel(WeeklyContestDbModel model)
		{
		}
	}

	public bool playTutorial;

	public int currentWeek;

	public long endTime;

	public Dictionary<int, WCDataItem> dataByWeek;

	[NonSerialized]
	[Header("RUNTIME")]
	public int Rank;

	[NonSerialized]
	public List<WeeklyContestPlayerModel> ListPlayer;

	[NonSerialized]
	public List<WeeklyContestPlayerModel> ListPlayerSorted;

	[NonSerialized]
	public long LastTimeFetchRank;

	public static WeeklyContestDbModel Load()
	{
		return null;
	}

	private void Save()
	{
	}

	public void AddSaveAction()
	{
	}

	public WeeklyContestDbModel()
	{
	}

	public WeeklyContestDbModel(SaveGameModel sModel)
	{
	}

	public void FromSaveGameModel(SaveGameModel sModel)
	{
	}
}
