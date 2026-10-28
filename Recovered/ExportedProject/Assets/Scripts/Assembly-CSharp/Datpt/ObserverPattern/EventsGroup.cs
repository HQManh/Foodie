using System.Collections.Generic;
using UnityEngine.Events;

namespace Datpt.ObserverPattern
{
	public class EventsGroup
	{
		private struct SEvent
		{
			public string name;

			public UnityAction callBack;
		}

		private List<SEvent> group;

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
