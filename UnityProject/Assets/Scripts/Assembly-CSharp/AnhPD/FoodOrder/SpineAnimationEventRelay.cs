using System;
using System.Collections.Generic;
using Spine;
using Spine.Unity;
using UnityEngine;
using UnityEngine.Events;

namespace AnhPD.FoodOrder
{
	public class SpineAnimationEventRelay : MonoBehaviour
	{
		[Serializable]
		public class Entry
		{
			[SpineEvent(null, null, true, false, false, dataField = "skeletonAnimation")]
			public string eventName;

			public UnityEvent onEvent;
		}

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private List<Entry> events;

		private Spine.AnimationState _hooked;

		private bool _started;

		private void Reset()
		{
			skeletonAnimation = GetComponent<SkeletonAnimation>();
		}

		private void Start()
		{
			_started = true;
			Hook();
		}

		private void OnEnable()
		{
			if (_started)
			{
				Hook();
			}
		}

		private void OnDisable()
		{
			Unhook();
		}

		private void Hook()
		{
			Unhook();
			if (skeletonAnimation != null)
			{
				_hooked = skeletonAnimation.AnimationState;
				if (_hooked != null)
				{
					_hooked.Event += HandleEvent;
				}
			}
		}

		private void Unhook()
		{
			if (_hooked != null)
			{
				_hooked.Event -= HandleEvent;
			}
			_hooked = null;
		}

		private void HandleEvent(TrackEntry track, Spine.Event e)
		{
			if (e == null || e.Data == null || events == null)
			{
				return;
			}
			string name = e.Data.Name;
			for (int i = 0; i < events.Count; i++)
			{
				Entry entry = events[i];
				if (entry == null)
				{
					break;
				}
				if (entry.eventName == name && entry.onEvent != null)
				{
					entry.onEvent.Invoke();
				}
			}
		}
	}
}
