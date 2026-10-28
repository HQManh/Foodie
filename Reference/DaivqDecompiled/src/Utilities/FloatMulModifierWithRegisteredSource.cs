using System;

namespace Utilities;

[Serializable]
public class FloatMulModifierWithRegisteredSource : FloatModifierWithRegisteredSource
{
	protected override float InitValue => 0f;

	public FloatMulModifierWithRegisteredSource()
	{
	}

	public FloatMulModifierWithRegisteredSource(Action onChanged)
	{
	}

	protected override void UpdateModifier()
	{
	}
}
