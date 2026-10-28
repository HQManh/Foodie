using System;
using System.Collections.Generic;
using Spine.Unity;
using UnityEngine;

namespace Utilities.Spine
{

[RequireComponent(typeof(SkeletonAnimation))]
public class SpineAnimManager : MonoBehaviour
{
	[Serializable]
	public struct AnimAssetConfig
	{
		public AnimationReferenceAsset animAsset;

		public bool isLoop;

		public bool isFreezeAfterEnd;
	}

	[Serializable]
	public struct TrackAssetGroup
	{
		public string name;

		public AnimAssetConfig[] animConfigs;
	}

	public enum PlayAnimGroupMode
	{
		REPLACE,
		ADDITIVE
	}

	public SkeletonAnimation skeletonAnimation;

	public float defaultMixDuration;

	public TrackAssetGroup[] trackAssetGroups;

	private Dictionary<string, int> _dictAnimTrackIndex = new Dictionary<string, int>();

	private Dictionary<string, AnimAssetConfig> _dictAnimConfig = new Dictionary<string, AnimAssetConfig>();

	private Dictionary<AnimationReferenceAsset, int> _dictAnimAssetTrackIndex = new Dictionary<AnimationReferenceAsset, int>();

	private Dictionary<AnimationReferenceAsset, AnimAssetConfig> _dictAnimAssetConfig = new Dictionary<AnimationReferenceAsset, AnimAssetConfig>();

	private bool[] _haveAnimInTracks;

	[Header("Common Anim")]
	public AnimAssetGroupConfig animIdle;

	public void DoIdle()
	{
	}

	public void AppendIdle()
	{
	}

	private void Awake()
	{
	}

	private void SetupAnimDict()
	{
	}

	public void PlayAnimGroup(AnimGroupConfig animGroupConfig, PlayAnimGroupMode playMode = PlayAnimGroupMode.REPLACE)
	{
	}

	public void PlayAnimGroup(AnimAssetGroupConfig animGroupConfig, float speed)
	{
	}

	public void PlayAnimGroup(AnimAssetGroupConfig animGroupConfig, PlayAnimGroupMode playMode = PlayAnimGroupMode.REPLACE, float speed = 1f)
	{
	}

	public void AppendAnim(AnimAssetGroupConfig animGroupConfig)
	{
	}

	public void ClearAll()
	{
	}
}
}
