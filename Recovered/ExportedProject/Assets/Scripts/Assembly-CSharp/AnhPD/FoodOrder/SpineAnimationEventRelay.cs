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
		}

		private void Start()
		{
		}

		private void OnEnable()
		{
		}

		private void OnDisable()
		{
		}

		private void Hook()
		{
		}

		private void Unhook()
		{
		}

		private void HandleEvent(TrackEntry track, Spine.Event e)
		{
		}
	}
}
