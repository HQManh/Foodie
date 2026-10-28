using System;
using CakeOrder;
using DG.Tweening;
using TrungKienPack.Particle;
using UnityEngine;
using UnityEngine.Rendering;
using Utilities;

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

		public bool autoForwardFromStationToStation = true;

		public bool isNeedCellDish;

		public bool isDirtyPlate;

		public int maxStack = 1;

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

		public bool IsWindingUp => _windUp != null && _windUp.IsActive();

		public SortingGroup SortingGroup => sortingGroup;

		public ItemResultMergeAnim ResultMergeAnim => resultMergeAnim;

		public IngCell Cell => _cell;

		public bool IsLandedInCell
		{
			get
			{
				if (_cell != null)
				{
					return _cell.IsLanded(this);
				}
				return false;
			}
		}

		public bool IsOnDishRow { get; private set; }

		public bool DishControlled { get; set; }

		public DragOrigin DragOrigin { get; set; }

		public virtual float AssembleAnimDuration => 0f;

		public virtual int PlateContainerIndex => 0;

		public virtual void InitForDisplay(Transform root, float scaleRation)
		{
			sortingGroup.sortingOrder = 1;
			base.transform.SetParent(root);
			base.transform.eulerAngles = Vector3.zero;
			base.transform.localPosition = Vector3.zero;
			base.transform.localScale = sizeInit * scaleRation;
		}

		public virtual void InitForDrag()
		{
			Tf.DOKill();
			IsOnDishRow = false;
			DishControlled = false;
			DragOrigin = DragOrigin.None;
			ClampSortingLayer(Tf.position);
			Vector3 position = Tf.position;
			position.z = position.y * 0.01f;
			Tf.position = position;
			base.transform.localScale = sizeInit;
		}

		public void ReInitStartPos()
		{
			startPos = Tf.position;
			startRotation = Tf.eulerAngles;
		}

		public void ReInitStartPos(Vector2 pos)
		{
			startPos = pos;
		}

		public void SetId(string strId)
		{
			id = strId;
		}

		public string GetBaseId()
		{
			return id;
		}

		public virtual string GetId()
		{
			return id;
		}

		public void MarkOnDishRow()
		{
			IsOnDishRow = true;
		}

		public virtual void PlayAssembleAnim()
		{
		}

		public virtual bool TryGetVisualBounds(out Bounds bounds)
		{
			bounds = default(Bounds);
			return false;
		}

		public bool HasResultMergeAnimFor(string ingBaseId)
		{
			if (!resultMergeAnim)
			{
				return false;
			}
			return resultMergeAnim.Handles(ingBaseId);
		}

		public bool TryGetVfxGradient(out ParticleSystem.MinMaxGradient gradient)
		{
			if (!_vfxGradientBuilt)
			{
				_vfxGradientBuilt = true;
				if (vfxColors != null && vfxColors.Length != 0)
				{
					_vfxGradient = ParticleColor.BuildRandomColorGradient(vfxColors);
				}
			}
			gradient = _vfxGradient.GetValueOrDefault();
			return _vfxGradient.HasValue;
		}

		public void RegisterCell(IngCell cell, bool jump = true)
		{
			PieceLedger.Step(this, string.Format("RegisterCell {0}", cell.Coord));
			if (!DishControlled)
			{
				Vector2 slot;
				if (maxStack < 2)
				{
					slot = cell.GetCellPosition();
				}
				else
				{
					slot = cell.GetNextSlotPosition();
				}
				cell.Add(this);
				_cell = cell;
				if (!jump)
				{
					DragOrigin = DragOrigin.Grid;
					startPos = slot;
					Rewind(delegate
					{
						DragOrigin = DragOrigin.Grid;
						if (_cell != null)
						{
							_cell.OnItemLanded(this);
							if (_cell != null)
							{
								_cell.Arrange();
							}
						}
					});
				}
				else
				{
					JumpToTargetTween(new Vector3(slot.x, slot.y, 0f)).OnComplete(delegate
					{
						if (_cell != null)
						{
							_cell.OnItemLanded(this);
							if (_cell != null)
							{
								_cell.Arrange();
							}
						}
					});
				}
			}
			else
			{
				cell.Add(this);
				_cell = cell;
				DragOrigin = DragOrigin.Grid;
				ClampSortingLayer(Tf.position);
				_cell.OnItemLanded(this);
			}
		}

		public void UnregisterCell()
		{
			IngCell cell = _cell;
			if (cell != null)
			{
				_cell = null;
				bool wasLanded = cell.IsLanded(this);
				cell.Remove(this);
				if (wasLanded)
				{
					cell.Arrange();
				}
			}
		}

		public Vector2 GetLandPos()
		{
			return startPos;
		}

		public Tween JumpToTargetTween(Vector3 target, bool scaleDown = false, float landScale = 1f)
		{
			target.z = target.y * 0.01f;
			startPos = new Vector2(target.x, target.y);
			Sequence sequence = BeginJump();
			float arc = ArcForce(Tf.position, target);
			sequence.Append(Tf.DOJump(target, arc, 1, 0.5f));
			JoinLandingScale(sequence, scaleDown, landScale, 0.5f);
			AppendPlaceSfx(sequence);
			AppendLandHaptic(sequence);
			return FinishJump(sequence, () => target);
		}

		public Tween JumpToMovingTargetTween(Transform target, bool scaleDown = false, float duration = 0.5f, bool placeSfx = true, bool matchTargetPose = false)
		{
			float t = 0f;
			Vector3 startPosition = Tf.position;
			Quaternion startRotation = Tf.rotation;
			Vector3 startScale = Tf.localScale;
			float arc = ArcForce(startPosition, target.position);
			this.startPos = target.position;
			Sequence sequence = BeginJump().SetAutoKill(true);
			Tween tween = DOTween.To(() => t, delegate(float v)
			{
				t = v;
			}, 1f, duration).OnUpdate(delegate
			{
				Vector3 position = target.position;
				float num = Mathf.Clamp01(t);
				float num2 = Mathf.Sin(t * (float)Math.PI);
				float x = startPosition.x + (position.x - startPosition.x) * num;
				float y = arc * num2 + startPosition.y + (position.y - startPosition.y) * num;
				Tf.position = new Vector3(x, y, y * 0.01f);
				if (matchTargetPose)
				{
					Tf.rotation = Quaternion.Slerp(startRotation, target.rotation, t);
					Tf.localScale = Vector3.Lerp(startScale, GetTargetLocalScale(target), num);
				}
			});
			sequence.Append(tween);
			if (!matchTargetPose)
			{
				JoinLandingScale(sequence, scaleDown, 1f, duration);
			}
			else
			{
				sequence.AppendCallback(delegate
				{
					Tf.rotation = target.rotation;
					Tf.localScale = GetTargetLocalScale(target);
				});
			}
			if (placeSfx)
			{
				AppendPlaceSfx(sequence);
			}
			AppendLandHaptic(sequence);
			return FinishJump(sequence, () => target.position);
		}

		private Vector3 GetTargetLocalScale(Transform target)
		{
			Transform parent = Tf.parent;
			Matrix4x4 matrix;
			if (!parent)
			{
				matrix = target.localToWorldMatrix;
			}
			else
			{
				matrix = parent.worldToLocalMatrix * target.localToWorldMatrix;
			}
			Quaternion rotation;
			if (!parent)
			{
				rotation = target.rotation;
			}
			else
			{
				rotation = Quaternion.Inverse(parent.rotation) * target.rotation;
			}
			Quaternion inverse = Quaternion.Inverse(rotation);
			return new Vector3((inverse * (Vector3)matrix.GetColumn(0)).x, (inverse * (Vector3)matrix.GetColumn(1)).y, (inverse * (Vector3)matrix.GetColumn(2)).z);
		}

		private Sequence BeginJump()
		{
			KillWindUp();
			if (DragOrigin != DragOrigin.Conveyor)
			{
				GlobalAudio.Play(GlobalSfx.Jump);
			}
			sortingGroup.sortingOrder = DragItemBase._maxLayer + 1;
			return DOTween.Sequence().SetTarget(Tf);
		}

		private void JoinLandingScale(Sequence seq, bool scaleDown, float landScale, float flyDuration)
		{
			float duration = flyDuration;
			if (scaleDown || Mathf.Approximately(landScale, 1f))
			{
				duration = 0.1f;
			}
			float scale = (scaleDown ? 0.5f : landScale);
			seq.Join(Tf.DOScale(sizeInit * scale, duration));
		}

		private Tween FinishJump(Sequence seq, Func<Vector3> landPosition)
		{
			return seq.AppendCallback(delegate
			{
				Vector3 position = landPosition();
				Tf.position = new Vector3(position.x, position.y, position.y * 0.01f);
				ClampSortingLayer(Tf.position);
				ReInitStartPos();
			});
		}

		private static float ArcForce(Vector3 start, Vector3 target)
		{
			float num = Mathf.Abs(target.y - start.y);
			float num2 = Mathf.Max(Mathf.Abs(target.x - start.x), num);
			float num3 = Mathf.Clamp(num2 * 0.35f, 0.8f, 3f);
			if (target.y - start.y < 0f)
			{
				return Mathf.Max(num3, num + 0.5f);
			}
			return num3;
		}

		private void AppendPlaceSfx(Sequence seq)
		{
			seq.AppendCallback(delegate
			{
				PlayPlaceSfx((AudioManagerCakeOrder.AudioTrack)4);
			});
		}

		private void AppendLandHaptic(Sequence seq)
		{
			seq.AppendCallback(PlayHaptic);
		}

		public Tween PlayWindUp()
		{
			if (DragOrigin != DragOrigin.Grid)
			{
				return null;
			}
			KillWindUp();
			Vector3 size = sizeInit;
			float baseY = Tf.position.y + 0.3f;
			Sequence windUp = DOTween.Sequence().SetTarget(Tf);
			windUp.Append(Tf.DOScale(new Vector3(size.x * 1.18f, size.y * 0.82f, size.z), 0.1f).SetEase(Ease.OutQuad));
			windUp.Append(Tf.DOScale(sizeInit, 0.14f).SetEase(Ease.OutQuad));
			windUp.Join(Tf.DOMoveY(baseY, 0.14f).SetEase(Ease.OutQuad));
			windUp.AppendCallback(delegate
			{
				if (_windUp == windUp)
				{
					_windUp = Tf.DOMoveY(baseY + 0.06f, 0.3f).SetEase(Ease.InOutSine).SetLoops(-1, LoopType.Yoyo).SetTarget(Tf);
				}
			});
			_windUp = windUp;
			return windUp;
		}

		public void StartParkedFloat()
		{
			Tf.DOKill();
			Tf.localScale = sizeInit;
			_windUp = Tf.DOMoveY(Tf.position.y + 0.06f, 0.3f).SetEase(Ease.InOutSine).SetLoops(-1, LoopType.Yoyo).SetTarget(Tf);
		}

		public void StopParkedFloat()
		{
			KillWindUp();
		}

		public void ResetWindUp()
		{
			KillWindUp();
			if ((bool)Tf)
			{
				Tf.localScale = sizeInit;
				Tf.DOMoveY(startPos.y, 0.14f).SetEase(Ease.OutQuad).SetTarget(Tf);
			}
		}

		private void KillWindUp()
		{
			if (_windUp != null)
			{
				if (_windUp.IsActive())
				{
					_windUp.Kill();
				}
				_windUp = null;
			}
		}

		public void ClampSortingLayer()
		{
			ClampSortingLayer(Tf.position);
		}

		public void PlayUseSfx()
		{
			if ((bool)sfxUse)
			{
				AudioManagerCakeOrder.Instance.PlaySfx(sfxUse, (AudioManagerCakeOrder.AudioTrack)4);
			}
		}

		public virtual void Despawn()
		{
			if (_cell != null)
			{
				UnregisterCell();
			}
			Tf.DOKill();
			ObjectPoolDictArray.Instance.ReleaseGameObject(base.gameObject);
		}
	}
}
