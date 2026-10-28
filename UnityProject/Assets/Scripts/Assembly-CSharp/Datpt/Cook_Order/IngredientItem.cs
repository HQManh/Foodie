using System;
using System.Runtime.CompilerServices;
using DG.Tweening;
using MoreMountains.NiceVibrations;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class IngredientItem : ItemToSell
	{
		[SerializeField]
		protected bool isCanInterract = true;

		[SerializeField]
		protected float timeInterract;

		[SerializeField]
		protected bool isHaveResultItem = true;

		[SerializeField]
		protected IngredientItem resultIngredient;

		[SerializeField]
		protected int resultNum = 2;

		protected ProgressBar progressBar;

		protected bool isInterrating;

		[CompilerGenerated]
		private Action m_OnInterractEvent;

		[CompilerGenerated]
		private Action m_OnCancelInterractEvent;

		[CompilerGenerated]
		private Action m_OnInterractDoneEvent;

		[field: SerializeField]
		public EIngredienType IngredienType { get; set; }

		protected bool isHaveResultItemAndCanInterract => isHaveResultItem && isCanInterract;

		public float TimeInterract
		{
			get
			{
				return timeInterract;
			}
			set
			{
				timeInterract = value;
			}
		}

		public bool IsCanInterract
		{
			get
			{
				return isCanInterract;
			}
			set
			{
				isCanInterract = value;
			}
		}

		public override bool IsCanMove => true;

		public int ResultNum => resultNum;

		public event Action OnInterractEvent
		{
			[CompilerGenerated]
			add
			{
				m_OnInterractEvent = (Action)Delegate.Combine(m_OnInterractEvent, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnInterractEvent = (Action)Delegate.Remove(m_OnInterractEvent, value);
			}
		}

		public event Action OnCancelInterractEvent
		{
			[CompilerGenerated]
			add
			{
				m_OnCancelInterractEvent = (Action)Delegate.Combine(m_OnCancelInterractEvent, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnCancelInterractEvent = (Action)Delegate.Remove(m_OnCancelInterractEvent, value);
			}
		}

		public event Action OnInterractDoneEvent
		{
			[CompilerGenerated]
			add
			{
				m_OnInterractDoneEvent = (Action)Delegate.Combine(m_OnInterractDoneEvent, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnInterractDoneEvent = (Action)Delegate.Remove(m_OnInterractDoneEvent, value);
			}
		}

		protected override void Editor()
		{
			// TODO(unrecovered): the pseudocode performs several unnamed component lookups (sorting group, progress bar and child objects) whose type arguments are not recoverable from the stubs.
		}

		public virtual void OnAppear(bool isNeedMoveToNeareast = false, Action onSpawned = null)
		{
			// TODO(unrecovered): the pseudocode sets a sorting order, scales the item, and runs DOTween jump tweens with random positions from CookOrderHelper2D; the sorting-group field and tween helpers are not in the stubs.
		}

		public override void OnSpawn()
		{
			base.OnSpawn();
			// TODO(unrecovered): the rest of OnSpawn calls LevelControlCookOrder helpers through unnamed virtual slots; these are not in the stubs.
		}

		public override void Despawn()
		{
			base.Despawn();
			// TODO(unrecovered): the rest of Despawn calls LevelControlCookOrder helpers through an unnamed virtual slot; that helper is not in the stubs.
		}

		public void OnDespawn()
		{
			// The pseudocode's tween callback calls virtual slot 0x188, which is inferred to be the pooled Despawn().
			transform.DOScale(0f, 0.1f).OnComplete(() => { Despawn(); });
			m_OnInterractEvent = null;
			m_OnCancelInterractEvent = null;
			m_OnInterractDoneEvent = null;
		}

		public virtual void OnInterract(Action onInterractDone = null)
		{
			// TODO(unrecovered): the pseudocode spawns a progress bar through LevelControlCookOrder.SpawnProgressBar (now in the stubs) and starts it with ProgressBar.StartIncrease (now in the stubs), but the spawn position is offset by a static Vector3 at DAT_0918cbd0 +0xb8 whose owner is not identified, so the body is not written.
		}

		public virtual void OnInterractDone()
		{
			MMVibrationManager.Haptic(HapticTypes.MediumImpact);
			// TODO(unrecovered): the pseudocode then calls an unnamed virtual slot (0x4b8, arg 0x4c0) before OnDespawn; the slot target is not identified in the stubs.
			isInterrating = false;
			m_OnInterractDoneEvent?.Invoke();
			if (progressBar != null)
			{
				// The pseudocode's progress-bar release is virtual slot 0x188, inferred to be Despawn().
				progressBar.Despawn();
			}

			progressBar = null;
			OnDespawn();
		}

		public virtual void OnGenerateResultIngredient()
		{
			for (int i = 0; i < resultNum; i++)
			{
				if (resultIngredient == null)
				{
					LevelControlCookOrder ins = LevelControlCookOrder.Ins;
					if (ins == null)
					{
						return;
					}

					ins.GenerateNewIngredientCutted(IngredienType, transform.position);
				}
				else
				{
					// TODO(unrecovered): the pseudocode instantiates resultIngredient through an unnamed helper whose position/rotation/parent argument layout is not recoverable from the stubs, then calls OnAppear(true, null) on the copy.
				}
			}
		}

		public override void OnClickDown()
		{
			// TODO(unrecovered): the pseudocode calls a virtual interact-check slot, then ItemMovingBase.OnClickDown, SoundControl and a virtual interact slot; the slot targets are not in the stubs.
		}

		public virtual void OnCancelInterract()
		{
			// TODO(unrecovered): the pseudocode moves the item to a nearest safe-area point through OnMove with a rotation read from an unnamed config singleton that is not in the stubs.
		}

		public override void OnDrop()
		{
			base.OnDrop();
			// TODO(unrecovered): when the item is outside the safe area the pseudocode moves it to the nearest point through OnMove with a rotation read from an unnamed config singleton that is not in the stubs.
		}
	}
}
