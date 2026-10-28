using System;

namespace _GAME.WeeklyContest;

[Serializable]
public class ABIServerWeeklyContestClaimRankModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public RequestModel()
		{
		}

		public RequestModel(string id)
		{
		}
	}

	[Serializable]
	public class ResponseModel
	{
		public int stt;

		public ResponseDataModel d;
	}

	[Serializable]
	public class ResponseDataModel
	{
		public int rk;
	}
}
