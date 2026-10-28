using System;
using System.Collections.Generic;
using UnityEngine;

namespace Utilities;

[Serializable]
public class ComponentOverrideWithRegisteredSource<T> where T : Component
{
	[Serializable]
	public struct Data
	{
		public T component;

		public float priority;
	}

	protected Dictionary<int, Data> _source;

	private T _componentHighestPriority;

	private Action _onChangedValueHighestPriority;

	public T ValueHighestPriority => default(T);

	public ComponentOverrideWithRegisteredSource()
	{
	}

	public ComponentOverrideWithRegisteredSource(Action onChanged)
	{
	}

	public void AddModifier(Object @object, T component, float priority)
	{
	}

	public void AddModifier(int id, T component, float priority)
	{
	}

	public void RemoveModifier(Object @object)
	{
	}

	public void RemoveModifier(int id)
	{
	}

	private void UpdateModifier()
	{
	}
}
