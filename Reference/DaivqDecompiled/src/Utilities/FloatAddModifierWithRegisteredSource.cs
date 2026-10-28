using System;

namespace Utilities;

[Serializable]
public class FloatAddModifierWithRegisteredSource : FloatModifierWithRegisteredSource
{
	protected override float InitValue => 0f;

	public FloatAddModifierWithRegisteredSource()
	{
	}

	public FloatAddModifierWithRegisteredSource(Action onChanged)
	{
	}

	protected override void UpdateModifier()
	{
	}
}
