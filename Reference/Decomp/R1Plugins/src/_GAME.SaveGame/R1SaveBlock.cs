using System;
using _GAME.EventSale;
using _GAME.Leaderboard;
using _GAME.Profile;
using _GAME.Team;
using _GAME.WeeklyContest;

namespace _GAME.SaveGame;

[Serializable]
public class R1SaveBlock
{
	public const int SchemaVersion = 1;

	public int sv;

	public long t;

	public ProfileDbModel.SaveGameModel pr;

	public TeamDbModel.SaveGameModel tm;

	public LeaderboardDbModel.SaveGameModel lb;

	public WeeklyContestDbModel.SaveGameModel wc;

	public EventSaleDbModel.SaveGameModel es;
}
