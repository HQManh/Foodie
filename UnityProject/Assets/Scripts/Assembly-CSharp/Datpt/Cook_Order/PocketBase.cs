using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class PocketBase : ItemMovingBase
	{
		[SerializeField]
		private TextMesh countTmp;

		[SerializeField]
		private float timeToCheckTut = 3f;

		private int clickCount;

		private float holdThreshold = 0.2f;

		private float mouseDownTime;

		private bool isHolding;

		private bool isNeedCheckTut = true;

		[CompilerGenerated]
		private Action m_OnClick;

		[CompilerGenerated]
		private Action m_OnHold;

		[CompilerGenerated]
		private Action m_OnEmpty;

		private float tutCheckTimer;

		private HandTutController handTut;

		[field: SerializeField]
		public int PocketNum { get; set; } = 5;

		private bool isCanShowTut => !isHolding && IsCanMove && isNeedCheckTut;

		public override bool IsCanMove => clickCount < PocketNum;

		public event Action OnClick
		{
			[CompilerGenerated]
			add
			{
				m_OnClick = (Action)Delegate.Combine(m_OnClick, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnClick = (Action)Delegate.Remove(m_OnClick, value);
			}
		}

		public event Action OnHold
		{
			[CompilerGenerated]
			add
			{
				m_OnHold = (Action)Delegate.Combine(m_OnHold, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnHold = (Action)Delegate.Remove(m_OnHold, value);
			}
		}

		public event Action OnEmpty
		{
			[CompilerGenerated]
			add
			{
				m_OnEmpty = (Action)Delegate.Combine(m_OnEmpty, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnEmpty = (Action)Delegate.Remove(m_OnEmpty, value);
			}
		}

		public override void OnSpawn()
		{
			base.OnSpawn();
			// TODO(unrecovered): virtual call at vtable slot 0x428 with argument 0 (and 1 elsewhere) has no matching stub member.
			countTmp.text = string.Format("{0}" /* literal recovered by guess */, PocketNum);
		}

		public void OnAppear(Vector3 targetPos, Action onAppeared = null)
		{
			// TODO(unrecovered): DOScale to the static scale and DOJump to targetPos with a tween callback that invokes onAppeared; DOTween and the static scale owner are not in stubs.
		}

		public override void Despawn()
		{
			// TODO(unrecovered): virtual call at vtable slot 0x428 and DOScale tween; the callback calls PoolingObject.Despawn and LevelControlCookOrder.Ins.DespawnHighlight/RemoveItemMovingToCheckCanTake (not confirmed by stubs).
			clickCount = 0;
		}

		private void OnMouseDown()
		{
			if (handTut != null)
			{
				handTut.Despawn();
			}
			if (IsCanMove)
			{
				tutCheckTimer = 0f;
				isNeedCheckTut = true;
				mouseDownTime = Time.time;
				isHolding = true;
			}
		}

		private void OnMouseUp()
		{
			tutCheckTimer = 0f;
			isNeedCheckTut = true;
			if (isHolding)
			{
				float now = Time.time;
				if (holdThreshold <= now - mouseDownTime)
				{
					m_OnHold?.Invoke();
				}
				else
				{
					m_OnClick?.Invoke();
					clickCount++;
					countTmp.text = string.Format("{0}" /* literal recovered by guess */, PocketNum - clickCount);
					if (PocketNum <= clickCount)
					{
						// TODO(unrecovered): LevelControlCookOrder.SpawnEmojiControl now exists in stubs, but the decompiled argument list (three float components plus two transform values) does not map unambiguously to SpawnEmojiControl(Vector3, Transform); the ShowPositive + DelayedCallScaled(1f) -> m_OnEmpty tail is otherwise clear.
					}
				}
				isHolding = false;
			}
		}

		protected override void Update()
		{
			// TODO(unrecovered): ItemMovingBase.CheckItemMovingMoveOverHightLight and Utilities.CheckShowTutorial now exist in stubs, but the pseudocode passes a copied timer value rather than a ref and reads hold-state fields via offsets that do not map cleanly onto isHolding/tutCheckTimer; the virtual IsCanMove dispatch is also unresolved.
		}

		public override void OnClickDown()
		{
			// TODO(unrecovered): DOTween DOKill/DOScale punch on transform, sets an ItemMovingBase flag, MoreMountains Haptic(4) and LevelControlCookOrder.Ins.CheckCanTakeItemMoving(this); the flag field and MMVibrationManager are not in stubs.
		}

		public override void OnDrop()
		{
			base.OnDrop();
			// TODO(unrecovered): CheckIngredientInSafeArea/GetNearestPosInSafeArea now exist in stubs, but the follow-up virtual tween call at slot 0x3c8 still has no stub member.
		}
	}
}
