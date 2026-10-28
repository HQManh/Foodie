using System;

namespace _GAME.Profile;

[Serializable]
public class ABIServerReadProfileModel
{
	[Serializable]
	public class RequestModel
	{
		public string command;

		public int pjId;

		public string id;

		public RequestModel(int pjId, string id)
		{
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

		public ProfileReadEnvelope GetPreviewEnvelope(string sourceTag = "ReadProfile")
		{
			return default(ProfileReadEnvelope);
		}
	}
}
