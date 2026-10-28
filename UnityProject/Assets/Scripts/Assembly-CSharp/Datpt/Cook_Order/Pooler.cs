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
			ProgressBar bar = ObjectPooler.Spawn(progressBarPrefab, pos);
			if (bar != null)
			{
				bar.OnAppear(onAppeared);
				return bar;
			}
			return null;
		}

		public KitchenTimer SpawnTimer(Vector3 pos)
		{
			return ObjectPooler.Spawn(kitchenTimerPrefab, pos);
		}

		public LoopRotateCircle SpawnLoopRotateCircle(Vector3 pos, Transform parent = null)
		{
			return ObjectPooler.Spawn(loopRotateCirclePrefab, pos, parent);
		}

		public EmojiControl SpawnEmojiControl(Vector3 pos, Transform parent = null)
		{
			return ObjectPooler.Spawn(emojiControlPrefab, pos, parent);
		}

		public HandTutController SpawnHandTutController(Vector3 pos, Transform parent = null)
		{
			return ObjectPooler.Spawn(handTutController, pos, parent);
		}
	}
}
