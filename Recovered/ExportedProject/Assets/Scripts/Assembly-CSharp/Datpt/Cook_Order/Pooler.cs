using System;
using UnityEngine;
using Utilities;

namespace Datpt.Cook_Order
{
	public class Pooler : MonoSingleton<Pooler>
	{
		[SerializeField]
		private ProgressBar progressBarPrefab;

		[SerializeField]
		private KitchenTimer kitchenTimerPrefab;

		[SerializeField]
		private LoopRotateCircle loopRotateCirclePrefab;

		[SerializeField]
		private EmojiControl emojiControlPrefab;

		[SerializeField]
		private HandTutController handTutController;

		public ProgressBar SpawnProgressBar(Vector3 pos, Action onAppeared = null)
		{
			return null;
		}

		public KitchenTimer SpawnTimer(Vector3 pos)
		{
			return null;
		}

		public LoopRotateCircle SpawnLoopRotateCircle(Vector3 pos, Transform parent = null)
		{
			return null;
		}

		public EmojiControl SpawnEmojiControl(Vector3 pos, Transform parent = null)
		{
			return null;
		}

		public HandTutController SpawnHandTutController(Vector3 pos, Transform parent = null)
		{
			return null;
		}
	}
}
