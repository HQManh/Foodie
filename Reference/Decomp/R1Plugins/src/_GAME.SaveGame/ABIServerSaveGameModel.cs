using System;

namespace _GAME.SaveGame;

[Serializable]
public class ABIServerSaveGameModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public int pl;

		public int aV;

		public long vrs;

		public string d;

		public string au;

		public RequestModel(string id, int pl, int aV, long vrs, string d, string au)
		{
		}
	}

	[Serializable]
	public class ResponseModel
	{
		public int stt;

		public ResponseError d;
	}

	[Serializable]
	public class ResponseError
	{
		public string msg;
	}
}
