using System.Collections.Generic;
using UnityEngine;

namespace Utilities;

public class PrefabStackPoolGroup<TBase> where TBase : Component
{
	private struct PrePoolJob
	{
		public int maxNumber;

		public Coroutine coroutine;

		public PrefabStackPool<TBase> stackPool;
	}

	public Transform container;

	private Dictionary<TBase, PrefabStackPool<TBase>> _pooledBulletDict;

	private Dictionary<TBase, PrePoolJob> _corPrePoolMaxDict;

	public PrefabStackPool<TBase> AddPool(TBase prefab, int capacity)
	{
		return null;
	}

	public PrefabStackPool<TBase> GetPool(TBase prefab)
	{
		return null;
	}

	public TBase GetObject(TBase prefab)
	{
		return default(TBase);
	}

	public void ReturnObject(TBase prefab, TBase obj)
	{
	}

	public void PrePoolMaxIterate(MonoBehaviour coroutineContainer, TBase bullet, int maxNum)
	{
	}
}
