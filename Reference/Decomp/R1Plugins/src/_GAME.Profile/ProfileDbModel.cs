using System;
using System.Collections.Generic;
using UnityEngine;

namespace _GAME.Profile;

[Serializable]
public class ProfileDbModel
{
	[Serializable]
	public class EditModel
	{
		public string name;

		public int avatar;

		public int frame;

		public int nameFx;

		public EditModel()
		{
		}

		public EditModel(ProfileDbModel model)
		{
		}
	}

	[Serializable]
	public class PreviewModel
	{
		[Header("BASE")]
		public string id;

		public string un;

		public int av;

		public int af;

		public int an;

		public int pf;

		public int pn;

		public string cc;

		public long ti;

		public int ta;

		public string tn;

		public long ct;

		public long pe;

		[Header("STATUS")]
		public int lm;

		public int rs;

		public int fw;

		public int ls;

		public int lr;

		public int srw;

		public int dtm;

		public int wc1;

		public int nrb;

		[Header("SPECIAL")]
		public Dictionary<int, int> ttp;

		public Dictionary<int, int> wcs;

		[Header("ACCOUNT")]
		public string au;

		public List<string> pid;

		public PreviewModel()
		{
		}

		public PreviewModel(ProfileDbModel model)
		{
		}

		public PreviewModel Copy(PreviewModel copy = null)
		{
			return null;
		}

		public static PreviewModel ParseServerInfo(string info, string id, string name, int ava, string cc, int sc)
		{
			return null;
		}

		public static ProfileReadEnvelope ParseServerInfoEnvelope(string info, string id, string name, int ava, string cc, int sc, string sourceTag)
		{
			return default(ProfileReadEnvelope);
		}

		private static PreviewModel CreateWireFallback(string id, string name, int ava, string cc, int sc)
		{
			return null;
		}
	}

	[Serializable]
	public class SaveGameModel
	{
		[Header("BASE")]
		public int os;

		public string id;

		public string un;

		public int av;

		public int af;

		public int an;

		public int pf;

		public int pn;

		public List<int> afu;

		public List<int> anu;

		public string cc;

		public long ti;

		public int ta;

		public string tn;

		public long ct;

		public long pe;

		[Header("STATS")]
		public int lm;

		public int rs;

		public int fw;

		public int ls;

		public int lr;

		public int srw;

		public int dtm;

		public int wc1;

		public int nrb;

		[Header("SPECIAL")]
		public Dictionary<int, int> ttp;

		public Dictionary<int, int> wcs;

		public int fo;

		[Header("ACCOUNT")]
		public string au;

		public List<string> pid;

		public int cpc;

		public SaveGameModel()
		{
		}

		public SaveGameModel(ProfileDbModel model)
		{
		}
	}

	[Header("BASE")]
	public string serverId;

	public string name;

	public int avatar;

	public int frame;

	public int nameFx;

	public int prevFrame;

	public int prevNameFx;

	public List<int> listFrameUnlocked;

	public List<int> listNameFxUnlocked;

	public string countryCode;

	public long teamId;

	public int teamFlag;

	public string teamName;

	public long createdTime;

	public long packingPassEndTime;

	[Header("STATS")]
	public int levelMain;

	public int rankScore;

	public int numbFirstTryWin;

	public int liveSendCount;

	public int liveRecvCount;

	public int stageRaceWin;

	public int dreamyTowerMax;

	public int weeklyContestTop1;

	public int numbRestaurantBuilt;

	[Header("SPECIAL")]
	public Dictionary<int, int> teamTreasurePoint;

	public Dictionary<int, int> weeklyContestScore;

	[Header("ACCOUNT (to check data)")]
	public string authKind;

	public List<string> prevServerIds;

	[Header("LOCAL")]
	public bool firstOpen;

	public bool needPushProfile;

	public bool coreProfileCopied;

	public static ProfileDbModel Load()
	{
		return null;
	}

	private void Save()
	{
	}

	public void AddSaveAction()
	{
	}

	public ProfileDbModel()
	{
	}

	public ProfileDbModel(PreviewModel previewModel)
	{
	}

	public void FromSaveGameModel(SaveGameModel saveGameModel)
	{
	}

	public int GetDisplayFrame()
	{
		return 0;
	}
}
