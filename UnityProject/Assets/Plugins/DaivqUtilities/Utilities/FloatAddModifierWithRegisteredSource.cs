using System;

namespace Utilities
{

[Serializable]
public class FloatAddModifierWithRegisteredSource : FloatModifierWithRegisteredSource
{
	protected override float InitValue => 0f;

	public FloatAddModifierWithRegisteredSource()
	{
	}

	public FloatAddModifierWithRegisteredSource(Action onChanged) : base(onChanged)
	{
	}

	protected override void UpdateModifier()
	{
		_value = 0f;
		foreach (float v in _source.Values)
		{
			_value += v;
		}
	}
}
}
