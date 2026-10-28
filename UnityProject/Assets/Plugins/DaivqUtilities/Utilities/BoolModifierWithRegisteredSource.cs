using System;
using System.Collections.Generic;
using UnityEngine;

namespace Utilities
{

// Rebuilt from the decompiled code: a set of source ids; Value is true while any source is registered.
[Serializable]
public class BoolModifierWithRegisteredSource
{
	private List<int> _sources;

	private bool _value;

	private Action _onChanged;

	public bool Value => _value;

	public BoolModifierWithRegisteredSource()
	{
		_sources = new List<int>();
	}

	public BoolModifierWithRegisteredSource(Action onChanged)
	{
		_sources = new List<int>();
		_onChanged = onChanged;
	}

	public void AddModifier(UnityEngine.Object @object)
	{
		AddModifier(@object.GetInstanceID());
	}

	public void AddModifier(int id)
	{
		if (_sources.Contains(id))
		{
			return;
		}
		_sources.Add(id);
		_value = _sources.Count > 0;
		_onChanged?.Invoke();
	}

	public void RemoveModifier(UnityEngine.Object @object)
	{
		RemoveModifier(@object.GetInstanceID());
	}

	public void RemoveModifier(int id)
	{
		_sources.Remove(id);
		_value = _sources.Count > 0;
		_onChanged?.Invoke();
	}

	public void ClearAll()
	{
		_value = false;
		_sources.Clear();
		_onChanged?.Invoke();
	}

	public void AppendSources(BoolModifierWithRegisteredSource other)
	{
		if (other == null)
		{
			return;
		}
		bool previous = _value;
		_sources.AddRange(other._sources);
		_value = _sources.Count > 0;
		if (previous != _value)
		{
			_onChanged?.Invoke();
		}
	}
}
}
