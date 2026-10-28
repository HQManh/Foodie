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

		private List<SEvent> group = new List<SEvent>();

		public void Add(string eventName, UnityAction callBack)
		{
			group.Add(new SEvent { name = eventName, callBack = callBack });
		}

		public void StartListening()
		{
			foreach (SEvent e in group)
			{
				EventManager.StartListening(e.name, e.callBack);
			}
		}

		public void StopListening(string eventName = "")
		{
			if (eventName != "")
			{
				List<SEvent> kept = new List<SEvent>();
				foreach (SEvent e in group)
				{
					if (e.name != eventName)
					{
						kept.Add(e);
					}
					else
					{
						EventManager.StopListening(e.name, e.callBack);
					}
				}
				group = kept;
			}
			else
			{
				foreach (SEvent e in group)
				{
					EventManager.StopListening(e.name, e.callBack);
				}
			}
		}

		public bool Contains(string eventName)
		{
			foreach (SEvent e in group)
			{
				if (e.name == eventName)
				{
					return true;
				}
			}
			return false;
		}
	}
}
