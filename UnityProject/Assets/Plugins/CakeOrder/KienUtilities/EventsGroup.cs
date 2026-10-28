using System.Collections.Generic;
using UnityEngine.Events;

namespace KienUtilities
{

public class EventsGroup
{
	private struct SEvent
	{
		public string name;

		public UnityAction callBack;
	}

	private List<SEvent> group = new List<SEvent>();

	public void Add(string eventName, UnityAction callBack)
	{
	}

	public void StartListening()
	{
	}

	public void StopListening(string eventName = "")
	{
	}

	public bool Contains(string eventName)
	{
		return false;
	}
}
}
