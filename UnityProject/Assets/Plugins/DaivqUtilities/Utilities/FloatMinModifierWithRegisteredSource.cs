using System;

namespace Utilities
{

[Serializable]
public class FloatMinModifierWithRegisteredSource : FloatModifierWithRegisteredSource
{
	private float _init;

	protected override float InitValue => _init;

	protected override void UpdateModifier()
	{
		_value = _init;
		foreach (float v in _source.Values)
		{
			if (v < _value)
			{
				_value = v;
			}
		}
	}

	public FloatMinModifierWithRegisteredSource(float init = float.MaxValue, Action onChanged = null) : base(onChanged)
	{
		_init = init;
		_value = init;
	}
}
}
