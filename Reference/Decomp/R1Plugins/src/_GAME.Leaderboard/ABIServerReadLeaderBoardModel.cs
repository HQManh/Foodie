using System;
using System.Collections.Generic;

namespace _GAME.Leaderboard;

[Serializable]
public class ABIServerReadLeaderBoardModel
{
	[Serializable]
	public class RequestModel
	{
		public string command;

		public int pjId;

		public string id;

		public string cc;

		public int skip;

		public int limit;

		public RequestModel()
		{
		}

		public RequestModel(int pjId, string id, string cc = "", int skip = 0, int limit = 100)
		{
		}

		public string ToJson()
		{
			return null;
		}
	}

	[Serializable]
	public class ResponseModel
	{
		public int status;

		public ResponseDataModel data;
	}

	[Serializable]
	public class ResponseDataModel
	{
		public long rk;

		public List<ABIServerRankPlayerItemModel> arr;
	}
}
