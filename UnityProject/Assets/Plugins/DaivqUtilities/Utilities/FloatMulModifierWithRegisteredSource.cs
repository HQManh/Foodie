using System;

namespace Utilities
{

[Serializable]
public class FloatMulModifierWithRegisteredSource : FloatModifierWithRegisteredSource
{
	protected override float InitValue => 1f;

	public FloatMulModifierWithRegisteredSource()
	{
		_value = 1f;
	}

	public FloatMulModifierWithRegisteredSource(Action onChanged) : base(onChanged)
	{
		_value = 1f;
	}

	protected override void UpdateModifier()
	{
		_value = 1f;
		foreach (float v in _source.Values)
		{
			_value *= v;
		}
	}
}
}
