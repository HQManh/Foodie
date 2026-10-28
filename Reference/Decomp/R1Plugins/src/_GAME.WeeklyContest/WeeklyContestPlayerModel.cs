using System;
using _GAME.Profile;

namespace _GAME.WeeklyContest;

[Serializable]
public class WeeklyContestPlayerModel
{
	public string id;

	[NonSerialized]
	public int Rank;

	[NonSerialized]
	public int Score;

	[NonSerialized]
	public ProfileDbModel Profile;

	[NonSerialized]
	public ProfileReadEnvelope Envelope;
}
