using System;
using System.Collections.Generic;
using UnityEngine;

namespace CakeOrder.Home;

[Serializable]
public class NewVersionCheatConfig
{
	[Tooltip("Show the popup on every Home load, as if this save updated from Update From Version. It is a preview: nothing is granted, saved or marked as seen.")]
	public bool trigger;

	[Tooltip("The app version the save updates from: only notices of a later version show. Empty = every notice.")]
	public string updateFromVersion;

	private IEnumerable<string> GetVersions()
	{
		return null;
	}

	public bool IsNoticePending(NewVersionNotice notice)
	{
		return false;
	}

	private static int CompareVersions(string a, string b)
	{
		return 0;
	}
}
