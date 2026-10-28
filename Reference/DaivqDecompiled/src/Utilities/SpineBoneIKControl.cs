using Spine;
using Spine.Unity;
using UnityEngine;

namespace Utilities;

public class SpineBoneIKControl : MonoBehaviour
{
	public SkeletonAnimation skeletonAnimation;

	[SpineBone(null, "skeletonAnimation", true, false)]
	public string boneName;

	private Bone bone;

	public Transform target;

	public Vector3 positionOffset;

	public float scalingX;

	public float scalingY;

	public bool isBoneRotateControlByTarget;

	private void Start()
	{
	}

	private void UpdateIK(ISkeletonAnimation animated)
	{
	}
}
