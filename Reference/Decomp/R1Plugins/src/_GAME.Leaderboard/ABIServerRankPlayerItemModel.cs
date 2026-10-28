using System;
using _GAME.Profile;

namespace _GAME.Leaderboard;

[Serializable]
public class ABIServerRankPlayerItemModel
{
	public string id;

	public string name;

	public string cc;

	public int ava;

	public int sc;

	public string info;

	public long time;

	public ProfileDbModel.PreviewModel GetPreviewModel()
	{
		return null;
	}

	public ProfileReadEnvelope GetPreviewEnvelope()
	{
		return default(ProfileReadEnvelope);
	}
}
