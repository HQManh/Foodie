using System;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class KeyManager : MonoBehaviour
	{
		[SerializeField]
		private KeyObject keyPrefab;

		[SerializeField]
		private Sprite[] keySprites;

		[SerializeField]
		private Transform poolRoot;

		private readonly Queue<KeyObject> _pool;

		private static Action _onReady;

		public static KeyManager Instance { get; private set; }

		public static bool IsReady => false;

		public static void WhenReady(Action callback)
		{
		}

		private void Awake()
		{
		}

		private void OnDestroy()
		{
		}

		public Sprite SpriteFor(int colorIndex)
		{
			return null;
		}

		public static KeyObject Spawn(int colorIndex)
		{
			return null;
		}

		private KeyObject SpawnInternal(int colorIndex)
		{
			return null;
		}

		public static void Release(KeyObject key)
		{
		}

		private void ReleaseInternal(KeyObject key)
		{
		}
	}
}
