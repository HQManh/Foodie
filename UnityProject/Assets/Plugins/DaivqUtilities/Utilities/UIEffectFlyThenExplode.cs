using System;
using UnityEngine;

namespace Utilities
{

[RequireComponent(typeof(RectTransform))]
public class UIEffectFlyThenExplode : MonoBehaviour
{
	[Header("VFX")]
	public GameObject objVfxlFly;

	public GameObject objVfxExplode;

	private IParticleUI _vfxlFly;

	private IParticleUI _vfxExplode;

	private RectTransform _rectTransform;

	[Header("Fly")]
	public bool isUseTimeScale;

	public float delayFly;

	public bool useFlySpeed;

	public float durationFly;

	[Tooltip("Speed use screen unit")]
	public float flySpeed;

	public AnimationCurve flyCurve;

	[Header("Rotation")]
	public bool isUseRotation;

	public bool isAddtitiveRotation;

	[ValueCurve(true, true)]
	public AnimationCurve curveRotation;

	[Header("Scale")]
	public bool isUseScale;

	public bool isMultiplyScale;

	[ValueCurve(true, true)]
	public AnimationCurve curveScale;

	[Header("Special move")]
	public bool isUseSpecialMoveCurve;

	public bool addPerpendicularRelativeToDistance;

	public bool addXRelativeToDistance;

	public bool addYRelativeToDistance;

	[ValueCurve(true, true)]
	public AnimationCurve curveAddPerpendicular;

	[ValueCurve(true, true)]
	public AnimationCurve curveAddX;

	[ValueCurve(true, true)]
	public AnimationCurve curveAddY;

	[Header("Explode")]
	public float delayExplode;

	public float durationExplode;

	private Coroutine _corFly;

	private float TimeNow => 0f;

	private void SetUpBeforeFly()
	{
	}

	public void StartFlyAnchoredCoord(Vector2 anchoredDestination, float duration = -1f, bool isExplode = true, Action onDone = null)
	{
	}

	public void StartFlyWorldCoord(Vector3 destination, float duration = -1f, bool isExplode = true, Action onDone = null)
	{
	}

	public void StartFlyToTarget(Transform target, float duration = -1f, bool isExplode = true, Action onDone = null)
	{
	}
}
}
