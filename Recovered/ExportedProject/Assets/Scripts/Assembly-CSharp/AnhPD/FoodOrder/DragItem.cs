using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Rendering;

namespace AnhPD.FoodOrder
{
	public class DragItem : DragItemBase
	{
		public const float FlyDuration = 0.5f;

		private const float QuickScaleTime = 0.1f;

		[SerializeField]
		protected string id;

		[SerializeField]
		private Color[] vfxColors;

		[SerializeField]
		private ItemResultMergeAnim resultMergeAnim;

		public bool autoForwardFromStationToStation;

		public bool isNeedCellDish;

		public bool isDirtyPlate;

		public int maxStack;

		public StackLayout stackLayout;

		private IngCell _cell;

		private ParticleSystem.MinMaxGradient? _vfxGradient;

		private bool _vfxGradientBuilt;

		private const float ArcPerDistance = 0.35f;

		private const float MinArc = 0.8f;

		private const float MaxArc = 3f;

		private const float WindUpDuration = 0.1f;

		private const float WindUpSquash = 0.18f;

		private const float WindUpLift = 0.3f;

		private const float WindUpLiftTime = 0.14f;

		private const Ease WindUpEase = Ease.OutQuad;

		private const float WindUpBob = 0.06f;

		private const float WindUpBobPeriod = 0.6f;

		private Tween _windUp;

		public SortingGroup SortingGroup => null;

		public ItemResultMergeAnim ResultMergeAnim => null;

		public IngCell Cell => null;

		public bool IsLandedInCell => false;

		public bool IsOnDishRow { get; private set; }

		public bool DishControlled { get; set; }

		public DragOrigin DragOrigin { get; set; }

		public virtual float AssembleAnimDuration => 0f;

		public virtual int PlateContainerIndex => 0;

		public virtual void InitForDisplay(Transform root, float scaleRation)
		{
		}

		public virtual void InitForDrag()
		{
		}

		public void ReInitStartPos()
		{
		}

		public void ReInitStartPos(Vector2 pos)
		{
		}

		public void SetId(string strId)
		{
		}

		public string GetBaseId()
		{
			return null;
		}

		public virtual string GetId()
		{
			return null;
		}

		public void MarkOnDishRow()
		{
		}

		public virtual void PlayAssembleAnim()
		{
		}

		public virtual bool TryGetVisualBounds(out Bounds bounds)
		{
			bounds = default;
			return false;
		}

		public bool HasResultMergeAnimFor(string ingBaseId)
		{
			return false;
		}

		public bool TryGetVfxGradient(out ParticleSystem.MinMaxGradient gradient)
		{
			gradient = default;
			return false;
		}

		public void RegisterCell(IngCell cell, bool jump = true)
		{
		}

		public void UnregisterCell()
		{
		}

		public Vector2 GetLandPos()
		{
			return default;
		}

		public Tween JumpToTargetTween(Vector3 target, bool scaleDown = false, float landScale = 1f)
		{
			return null;
		}

		public Tween JumpToMovingTargetTween(Transform target, bool scaleDown = false, float duration = 0.5f, bool placeSfx = true, bool matchTargetPose = false)
		{
			return null;
		}

		private Vector3 GetTargetLocalScale(Transform target)
		{
			return default;
		}

		private Sequence BeginJump()
		{
			return null;
		}

		private void JoinLandingScale(Sequence seq, bool scaleDown, float landScale, float flyDuration)
		{
		}

		private Tween FinishJump(Sequence seq, Func<Vector3> landPosition)
		{
			return null;
		}

		private static float ArcForce(Vector3 start, Vector3 target)
		{
			return 0f;
		}

		private void AppendPlaceSfx(Sequence seq)
		{
		}

		private void AppendLandHaptic(Sequence seq)
		{
		}

		public Tween PlayWindUp()
		{
			return null;
		}

		public void StartParkedFloat()
		{
		}

		public void StopParkedFloat()
		{
		}

		public void ResetWindUp()
		{
		}

		private void KillWindUp()
		{
		}

		public void ClampSortingLayer()
		{
		}

		public void PlayUseSfx()
		{
		}

		public virtual void Despawn()
		{
		}
	}
}
