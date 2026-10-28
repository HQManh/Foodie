using MoreMountains.NiceVibrations;
using UnityEngine;

namespace Utilities
{

public class DraggableDetachModule : MonoBehaviour
{
	public float distanceDragCauseDetach;

	public AnimationCurve distanceReduceRateByDragDistanceRatio;

	private float _realDistanceDragCauseDetach;

	[Header("Drag")]
	public AnimationCurve dragMoveBeforeDetach;

	public float positionLerpSpeed;

	public HapticTypes hapticDrag;

	public float deltaDistanceDragTriggerHaptic;

	[Header("Detach")]
	public AudioClip sfxDetach;

	public Vector2 sfxDetachRandoPitch;

	public HapticTypes hapticDetach;

	public int numTouchCauseDetach;

	public float dragDistanceCauseDetach;

	public Transform shakeTransform;

	public ParticleSystem vfxDetach;

	public SpriteRenderer spriteRenderer;

	private int _numTouched;

	private bool _isDragging;

	private bool _isDetached;

	private Vector3 _startDragPos;

	private Vector3 _startDragLocalPos;

	private float _lastDistanceDragTriggerHaptic;

	public bool IsDetached { get; private set; }
}
}
