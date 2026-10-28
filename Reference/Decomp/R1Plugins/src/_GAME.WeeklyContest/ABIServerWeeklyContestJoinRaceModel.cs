using System;
using System.Collections.Generic;

namespace _GAME.WeeklyContest;

[Serializable]
public class ABIServerWeeklyContestJoinRaceModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public string n;

		public int a;

		public string cc;

		public int lg;

		public string i;

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

		public List<WeeklyContestPlayerModel> arr;

		public int pRk;

		public List<WeeklyContestPlayerModel> pArr;
	}
}
