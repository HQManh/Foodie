using System;
using System.Collections.Generic;

namespace _GAME.DreamyStreak;

[Serializable]
public class DreamyStreakDbModel
{
	[Serializable]
	public class SaveGameModel
	{
		public bool pt;

		public bool fo;

		public long et;

		public int s;

		public int sc;

		public int p;

		public int pc;

		public List<bool> ls;

		public bool op;

		public int wsup;

		public SaveGameModel()
		{
		}

		public SaveGameModel(DreamyStreakDbModel model)
		{
		}
	}

	public bool playTutUnlock;

	public bool firstOpen;

	public long endTime;

	public int streak;

	public int streakCache;

	public int point;

	public int pointCache;

	public List<bool> listLevelStatus;

	public bool onPlayingLevel;

	public int winStreakUserProperty;

	public static DreamyStreakDbModel Load()
	{
		return null;
	}

	private void Save()
	{
	}

	public void AddSaveAction()
	{
	}

	public void FromSaveGameModel(SaveGameModel sModel)
	{
	}
}
