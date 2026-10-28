using System;

namespace _GAME.StageRace;

[Serializable]
public class StageRaceFakePlayerDbModel
{
	[Serializable]
	public class CloudModel
	{
		public int i;

		public int a;

		public int f;

		public int x;

		public string n;

		public int b;

		public int p;

		public int c;

		public CloudModel()
		{
		}

		public CloudModel(StageRaceFakePlayerDbModel model)
		{
		}
	}

	public int index;

	public int avatar;

	public int frame;

	public int nameFx;

	public string name;

	public int badge;

	public int point;

	public int pointCache;

	public void FromCloudModel(CloudModel cloudModel)
	{
	}
}
