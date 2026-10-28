using System;
using Spine.Unity;

namespace Utilities.Spine
{

[Serializable]
public class AnimGroupConfig
{
	public float timeScale;

	[SpineAnimation(null, null, true, false, false)]
	public string[] animations;
}
}
