using System;

namespace Utilities
{

[Serializable]
public class FloatMulModifierWithRegisteredSource : FloatModifierWithRegisteredSource
{
	protected override float InitValue => 1f;

	public FloatMulModifierWithRegisteredSource()
	{
	}

	public FloatMulModifierWithRegisteredSource(Action onChanged) : base(onChanged)
	{
	}

	protected override void UpdateModifier()
	{
		_value = 1f;
		foreach (float v in _source.Values) _value *= v;
	}
}
}
