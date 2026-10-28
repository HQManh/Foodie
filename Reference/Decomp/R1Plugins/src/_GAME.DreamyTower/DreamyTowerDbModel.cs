using System;
using System.Collections.Generic;

namespace _GAME.DreamyTower;

[Serializable]
public class DreamyTowerDbModel
{
	[Serializable]
	public class SaveGameModel
	{
		public bool pt;

		public bool fo;

		public long et;

		public int lv;

		public int la;

		public int lp;

		public List<bool> ls;

		public bool op;

		public SaveGameModel()
		{
		}

		public SaveGameModel(DreamyTowerDbModel model)
		{
		}
	}

	public bool playTutUnlock;

	public bool firstOpen;

	public long endTime;

	public int level;

	public int levelCacheAnim;

	public int levelCachePopup;

	public List<bool> listLevelStatus;

	public bool onPlayingLevel;

	public static DreamyTowerDbModel Load()
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
