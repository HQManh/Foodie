using System;

namespace Utilities;

[Serializable]
public class FloatMinModifierWithRegisteredSource : FloatModifierWithRegisteredSource
{
	private float _init;

	protected override float InitValue => 0f;

	protected override void UpdateModifier()
	{
	}

	public FloatMinModifierWithRegisteredSource(float init = float.MaxValue, Action onChanged = null)
	{
	}
}
