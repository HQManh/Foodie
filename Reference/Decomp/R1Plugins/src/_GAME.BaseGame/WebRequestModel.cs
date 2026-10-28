using System;
using System.Collections.Generic;
using UnityEngine.Networking;

namespace _GAME.BaseGame;

[Serializable]
public class WebRequestModel
{
	public string url;

	public WebRequestMethod method;

	public int timeout;

	public string reqData;

	public Result result;

	public long rspCode;

	public Dictionary<string, string> rspHeader;

	public string rspData;

	public WebRequestModel(string url, WebRequestMethod method, int timeout = 3, string reqData = "")
	{
	}
}
