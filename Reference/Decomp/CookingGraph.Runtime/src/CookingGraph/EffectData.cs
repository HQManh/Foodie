using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class EffectData
{
	public int effectId;

	public List<int> parameters;
}
