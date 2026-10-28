using System;
using System.Collections.Generic;
using UnityEngine;
using _GAME.Team;

namespace _GAME.TeamTreasure;

[Serializable]
public class TeamTreasureDbModel
{
	[Serializable]
	public class SaveGameModel
	{
		public int t;

		public int f;

		public int w;

		public long e;

		public List<int> rw;

		public int p;

		public int pc;

		public int tp;

		public SaveGameModel()
		{
		}

		public SaveGameModel(TeamTreasureDbModel model)
		{
		}
	}

	public bool playTutUnlock;

	public bool firstOpen;

	public int weekId;

	public long endTime;

	public List<bool> rwStep;

	public int point;

	public int pointCache;

	public int totalPointCache;

	[NonSerialized]
	[Header("RUNTIME")]
	public int TotalPoint;

	[NonSerialized]
	public List<TeamMemberModel> ListMemberSorted;

	public static TeamTreasureDbModel Load()
	{
		return null;
	}

	private void Save()
	{
	}

	public void AddSaveAction()
	{
	}

	public bool NormalizeData()
	{
		return false;
	}

	public void FromSaveGameModel(SaveGameModel sModel)
	{
	}
}
