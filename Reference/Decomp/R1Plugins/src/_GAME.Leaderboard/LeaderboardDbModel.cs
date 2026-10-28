using System;
using System.Collections.Generic;
using _GAME.Team;

namespace _GAME.Leaderboard;

[Serializable]
public class LeaderboardDbModel
{
	[Serializable]
	public class SaveGameModel
	{
		public bool fo;

		public SaveGameModel()
		{
		}

		public SaveGameModel(LeaderboardDbModel model)
		{
		}
	}

	public bool firstOpen;

	[NonSerialized]
	public long LastFetchRankPlayer;

	[NonSerialized]
	public long GlobalRankPlayerSelf;

	[NonSerialized]
	public long CountryRankPlayerSelf;

	[NonSerialized]
	public List<ABIServerRankPlayerItemModel> GlobalRankPlayer;

	[NonSerialized]
	public List<ABIServerRankPlayerItemModel> CountryRankPlayer;

	[NonSerialized]
	public long LastFetchRankTeam;

	[NonSerialized]
	public List<TeamInfoModel> GlobalRankTeam;

	[NonSerialized]
	public List<TeamInfoModel> CountryRankTeam;

	public static LeaderboardDbModel Load()
	{
		return null;
	}

	private void Save()
	{
	}

	public void AddSaveAction()
	{
	}

	public void FromSaveGameModel(SaveGameModel cloudModel)
	{
	}
}
