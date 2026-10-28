using System;
using System.Collections.Generic;
using Spine.Unity;
using UnityEngine;

namespace Utilities.Spine;

[RequireComponent(typeof(SkeletonGraphic))]
public class UISpineAnimManager : MonoBehaviour
{
	[Serializable]
	public struct AnimAssetConfig
	{
		public AnimationReferenceAsset animAsset;

		public bool isLoop;
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

	public SkeletonGraphic skeletonGraphic;

	public float defaultMixDuration;

	public TrackAssetGroup[] trackAssetGroups;

	public bool isAutoSetup;

	private Dictionary<string, int> _dictAnimTrackIndex;

	private Dictionary<string, AnimAssetConfig> _dictAnimConfig;

	private Dictionary<AnimationReferenceAsset, int> _dictAnimAssetTrackIndex;

	private Dictionary<AnimationReferenceAsset, AnimAssetConfig> _dictAnimAssetConfig;

	private bool[] _haveAnimInTracks;

	[Header("Common Anim")]
	public AnimAssetGroupConfig animIdle;

	public void DoIdle()
	{
	}

	private void Awake()
	{
	}

	public void SetupAnimDict()
	{
	}

	public void PlayAnimGroup(AnimGroupConfig animGroupConfig, PlayAnimGroupMode playMode = PlayAnimGroupMode.REPLACE)
	{
	}

	public void PlayAnimGroup(AnimAssetGroupConfig animGroupConfig, PlayAnimGroupMode playMode = PlayAnimGroupMode.REPLACE)
	{
	}

	public void AppendAnim(AnimAssetGroupConfig animGroupConfig)
	{
	}

	public void ClearAll()
	{
	}
}
