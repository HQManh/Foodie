using System;
using System.Collections.Generic;
using UnityEngine;

namespace Utilities;

[Serializable]
public class Vector2AddModifierWithRegisteredSource
{
	protected Dictionary<int, Vector2> _source;

	protected Vector2 _value;

	private Action _onChanged;

	public Vector2 Value => default(Vector2);

	public Vector2AddModifierWithRegisteredSource()
	{
	}

	public Vector2AddModifierWithRegisteredSource(Action onChanged)
	{
	}

	public void AddModifier(Object @object, Vector2 value)
	{
	}

	public void AddModifier(int id, Vector2 value)
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
