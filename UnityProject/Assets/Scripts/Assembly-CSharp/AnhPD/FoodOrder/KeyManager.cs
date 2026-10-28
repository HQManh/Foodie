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

		private readonly Queue<KeyObject> _pool = new Queue<KeyObject>();

		private static Action _onReady;

		public static KeyManager Instance { get; private set; }

		public static bool IsReady => (bool)Instance && (bool)Instance.keyPrefab;

		public static void WhenReady(Action callback)
		{
			if (callback != null)
			{
				if (IsReady)
				{
					callback();
				}
				else
				{
					_onReady = (Action)Delegate.Combine(_onReady, callback);
				}
			}
		}

		private void Awake()
		{
			if ((bool)Instance && Instance != this)
			{
				UnityEngine.Object.Destroy(base.gameObject);
				return;
			}
			Instance = this;
			if (!poolRoot)
			{
				poolRoot = base.transform;
			}
			Action onReady = _onReady;
			_onReady = null;
			onReady?.Invoke();
		}

		private void OnDestroy()
		{
			if (Instance == this)
			{
				Instance = null;
			}
		}

		public Sprite SpriteFor(int colorIndex)
		{
			if (keySprites == null || keySprites.Length == 0)
			{
				return null;
			}
			return keySprites[Mathf.Clamp(colorIndex - 1, 0, keySprites.Length - 1)];
		}

		public static KeyObject Spawn(int colorIndex)
		{
			if (!Instance || !Instance.keyPrefab)
			{
				return null;
			}
			return Instance.SpawnInternal(colorIndex);
		}

		private KeyObject SpawnInternal(int colorIndex)
		{
			KeyObject keyObject = ((_pool.Count > 0) ? _pool.Dequeue() : UnityEngine.Object.Instantiate(keyPrefab, poolRoot));
			keyObject.gameObject.SetActive(value: true);
			keyObject.Init(colorIndex, SpriteFor(colorIndex));
			return keyObject;
		}

		public static void Release(KeyObject key)
		{
			if ((bool)key)
			{
				if (!Instance)
				{
					UnityEngine.Object.Destroy(key.gameObject);
				}
				else
				{
					Instance.ReleaseInternal(key);
				}
			}
		}

		private void ReleaseInternal(KeyObject key)
		{
			key.transform.SetParent(poolRoot, worldPositionStays: false);
			key.gameObject.SetActive(value: false);
			_pool.Enqueue(key);
		}
	}
}
