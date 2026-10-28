using System;

namespace Utilities
{

[Serializable]
public class FloatMaxModifierWithRegisteredSource : FloatModifierWithRegisteredSource
{
	private float _init;

	protected override float InitValue => _init;

	protected override void UpdateModifier()
	{
		_value = _init;
		foreach (float v in _source.Values)
		{
			if (_value < v)
			{
				_value = v;
			}
		}
	}

	public FloatMaxModifierWithRegisteredSource(float init = float.MinValue, Action onChanged = null) : base(onChanged)
	{
		_init = init;
		_value = init;
	}
}
}
