using System;
using System.Collections.Generic;

namespace _GAME.StageRace;

[Serializable]
public class StageRaceDbModel
{
	[Serializable]
	public class SaveGameModel
	{
		public int pt;

		public int fo;

		public long et;

		public int eg;

		public long ts;

		public int rs;

		public int rp;

		public int fph;

		public List<StageRaceFakePlayerDbModel> fp;

		public SaveGameModel()
		{
		}

		public SaveGameModel(StageRaceDbModel model)
		{
		}
	}

	public bool playTutUnlock;

	public bool firstOpen;

	public long endTime;

	public int raceStage;

	public long timeStart;

	public int raceStatus;

	public int racePoint;

	public int racePointCacheAnim;

	public int racePointCachePopup;

	public int fakePlayerHighest;

	public List<StageRaceFakePlayerDbModel> listFakePlayer;

	public static StageRaceDbModel Load()
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
