using System;
using System.Collections.Generic;

namespace _GAME.DreamyPass;

[Serializable]
public class DreamyPassDbModel
{
	[Serializable]
	public class SaveGameModel
	{
		public int t;

		public int f;

		public long e;

		public int a;

		public int p;

		public int pc;

		public int xp;

		public List<int> fs;

		public List<int> ps;

		public SaveGameModel()
		{
		}

		public SaveGameModel(DreamyPassDbModel model)
		{
		}
	}

	public bool playTutUnlock;

	public bool tutFirstOpen;

	public long endTime;

	public bool activated;

	public int point;

	public int pointCache;

	public int extraPoint;

	public List<bool> freeRwStatus;

	public List<bool> passRwStatus;

	[NonSerialized]
	public int levelUI;

	[NonSerialized]
	public int pointUI;

	public static DreamyPassDbModel Load()
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
