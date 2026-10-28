using System;

namespace Utilities;

[Serializable]
public class FloatMaxModifierWithRegisteredSource : FloatModifierWithRegisteredSource
{
	private float _init;

	protected override float InitValue => 0f;

	protected override void UpdateModifier()
	{
	}

	public FloatMaxModifierWithRegisteredSource(float init = float.MinValue, Action onChanged = null)
	{
	}
}
