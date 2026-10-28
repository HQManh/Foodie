using System;
using System.Collections.Generic;
using UnityEngine;

namespace Utilities;

[Serializable]
public class ObjectStackPoolControl<T> where T : Component
{
	public T prefab;

	public Transform container;

	private PrefabStackPool<T> pool;

	private List<T> objectUsing;

	public bool IsSetUp => false;

	public void SetUp(int capacity = 3)
	{
	}

	public T UseObject()
	{
		return default(T);
	}

	public List<T> UseObjects(int amount)
	{
		return null;
	}

	public void ReturnObject(T obj)
	{
	}

	public void ClearUsingObject()
	{
	}

	public void DestroyPools()
	{
	}
}
