using System;
using Spine.Unity;

namespace Utilities.Spine;

[Serializable]
public class AnimAssetGroupConfig
{
	public float timeScale;

	public AnimationReferenceAsset[] animations;
}
