using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder;
using CakeOrder.InGame;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using EssentialSystemR1;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class TutorialManager : MonoSingleton<TutorialManager>
	{
		// shipperTutId / bossTutId / pickUpTutId default to short ids in the original ctor; the shipped values live in the serialized scene data
		public static bool Enabled = true;

		[SerializeField]
		private TutorialSequenceSO[] sequences;

		[Header("Tut theo khach (lan dau loai khach do hien order)")]
		[SerializeField]
		private string shipperTutId;

		[SerializeField]
		private string bossTutId;

		[Header("Tut booster PickUp (lan dau camera ha xuong)")]
		[SerializeField]
		private string pickUpTutId;

		[Header("View")]
		[SerializeField]
		private TutorialFocusCanvasView focusView;

		[SerializeField]
		private TutorialTalkView talkView;

		[SerializeField]
		private TutorialHandleTap handTap;

		private TutorialContext _context;

		private bool _isRunning;

		private TutorialPause _pause;

		private const int TutBlockId = 1009;

		private FCustomerLineHandle _timerHoldHandle;

		public bool IsRunning => _isRunning;

		private bool HoldsNewActions => _pause != TutorialPause.None;

		protected override void Awake()
		{
			base.Awake();
			_context = new TutorialContext(focusView, talkView, handTap);
		}

		private void OnEnable()
		{
			GameEventBus.Subscribe<OrderShownEvent>(OnOrderShown);
			GameEventBus.Subscribe<PickAnyReadyEvent>(OnPickAnyReady);
		}

		private void OnDisable()
		{
			GameEventBus.Unsubscribe<OrderShownEvent>(OnOrderShown);
			GameEventBus.Unsubscribe<PickAnyReadyEvent>(OnPickAnyReady);
		}

		public bool HasLevelTutorial(string tutId)
		{
			if (!Enabled || string.IsNullOrEmpty(tutId))
			{
				return false;
			}
			TutorialSequenceSO seq = FindSequence(tutId);
			if (seq == null)
			{
				return false;
			}
			return seq.steps != null && seq.steps.Count > 0;
		}

		public bool TryPlayLevelTutorial(string tutId, Action onDone)
		{
			if (_isRunning || !HasLevelTutorial(tutId))
			{
				return false;
			}
			TutorialSequenceSO seq = FindSequence(tutId);
			Play(seq, () => onDone?.Invoke(), TutorialPause.None).Forget();
			return true;
		}

		private void OnOrderShown(OrderShownEvent evt)
		{
			if (!Enabled || _isRunning || !evt.line)
			{
				return;
			}
			CustomerSpawnData data = evt.line.SpawnData;
			if (data == null)
			{
				return;
			}
			if (data.IsShipper)
			{
				TryPlayCustomerTut(evt.line, CakeOrderTutorialStateControl.TutType.Shipper, shipperTutId);
			}
			else if (data.IsBoss)
			{
				TryPlayCustomerTut(evt.line, CakeOrderTutorialStateControl.TutType.Boss, bossTutId);
			}
		}

		private void TryPlayCustomerTut(FCustomerLine line, CakeOrderTutorialStateControl.TutType type, string tutId)
		{
			_context.TriggerLine = line;
			if (!TryPlayEventTut(type, tutId, TutorialPause.HoldTimers))
			{
				_context.TriggerLine = null;
			}
		}

		private void OnPickAnyReady(PickAnyReadyEvent _)
		{
			if (!Enabled || _isRunning)
			{
				return;
			}
			TutorialSequenceSO sequence = FindSequence(pickUpTutId);
			TutorialTargetRef target = FindFirstTarget(sequence, (TutorialTargetKind)6);
			if (target != null)
			{
				IngredientConveyorItem belt = TutorialTargetResolver.FindBeltItemBehindFront(target.id);
				if (belt != null)
				{
					TryPlayEventTut((CakeOrderTutorialStateControl.TutType)3, pickUpTutId, TutorialPause.StopTime);
				}
			}
		}

		private static TutorialTargetRef FindFirstTarget(TutorialSequenceSO sequence, TutorialTargetKind kind)
		{
			if (sequence == null)
			{
				return null;
			}
			foreach (TutorialStep step in sequence.steps)
			{
				if (step != null && step.target != null && step.target.kind == kind)
				{
					return step.target;
				}
			}
			return null;
		}

		private bool TryPlayEventTut(CakeOrderTutorialStateControl.TutType type, string tutId, TutorialPause pause)
		{
			if (CakeOrderTutorialStateControl.IsShownTut(type))
			{
				return false;
			}
			TutorialSequenceSO sequence = FindSequence(tutId);
			if (!sequence || sequence.steps == null || sequence.steps.Count == 0)
			{
				return false;
			}
			Play(sequence, () => CakeOrderTutorialStateControl.SetDoneTut(type), pause).Forget();
			return true;
		}

		private TutorialSequenceSO FindSequence(string tutId)
		{
			if (sequences == null)
			{
				return null;
			}
			foreach (TutorialSequenceSO s in sequences)
			{
				if (s == null)
				{
					continue;
				}
				if (string.IsNullOrEmpty(tutId))
				{
					return s;
				}
				if (s.tutId == tutId)
				{
					return s;
				}
			}
			return null;
		}

		public async UniTask Play(TutorialSequenceSO sequence, Action onDone, TutorialPause pause = TutorialPause.None)
		{
			if (!_isRunning && sequence != null && sequence.steps != null && sequence.steps.Count != 0)
			{
				_isRunning = true;
				_pause = pause;
				Begin();
				try
				{
					foreach (TutorialStep step in sequence.steps)
					{
						if (step == null)
						{
							continue;
						}
						await _context.PrepareTarget(step.target);
						_context.BeginStep(step);
						ApplyStep(step);
						await step.Run(_context);
					}
				}
				finally
				{
					End();
					_isRunning = false;
				}
			}
			onDone?.Invoke();
		}

		private void Begin()
		{
			TutorialGate.Begin();
			if (_pause == TutorialPause.StopTime)
			{
				TimeControlCakeOrder.StopTime(this);
			}
			else if (_pause == TutorialPause.HoldTimers)
			{
				HoldCustomerTimers();
			}
			if (_pause != TutorialPause.None)
			{
				SetNewActionsHeld(true);
			}
			gameObject.SetActive(true);
		}

		private void ReleasePause()
		{
			if (_pause != TutorialPause.None)
			{
				SetNewActionsHeld(false);
				if (_pause == TutorialPause.StopTime)
				{
					TimeControlCakeOrder.ResumeTime(this);
				}
				else if (_pause == TutorialPause.HoldTimers)
				{
					ReleaseCustomerTimers();
				}
			}
			_pause = TutorialPause.None;
		}

		private void HoldCustomerTimers()
		{
			if (!_timerHoldHandle)
			{
				_timerHoldHandle = MessyController.Ins != null ? MessyController.Ins.LineHandle : null;
			}
			if (_timerHoldHandle)
			{
				_timerHoldHandle.HoldTimers();
			}
		}

		private void ReleaseCustomerTimers()
		{
			if (_timerHoldHandle)
			{
				_timerHoldHandle.ReleaseTimers();
			}
			_timerHoldHandle = null;
		}

		private void SetNewActionsHeld(bool held)
		{
			LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
			if (level != null)
			{
				if (held)
				{
					level.inputBlockers.AddModifier(TutBlockId);
				}
				else
				{
					level.inputBlockers.RemoveModifier(TutBlockId);
				}
			}
			if (MessyController.Ins)
			{
				MessyController.Ins.SetStationsPaused(held);
			}
		}

		private void End()
		{
			TutorialGate.Free();
			ReleasePause();
			if (handTap)
			{
				handTap.Hide();
			}
			if (talkView)
			{
				talkView.HideImmediate();
			}
			if (focusView)
			{
				focusView.Clear(0.2f, true);
			}
			if (_context != null)
			{
				_context.TriggerLine = null;
			}
		}

		private void ApplyStep(TutorialStep step)
		{
			TutorialGate.AllowOnly(step.target, _context.NeededIngredientItem);
			if (!focusView)
			{
				return;
			}
			Transform resolved = TutorialTargetResolver.Resolve(step.target, _context.TriggerLine, _context.NeededIngredientItem);
			TutorialFocusSetting setting = step.focus;
			if (setting != null && setting.enabled && resolved)
			{
				if (setting.follow)
				{
					focusView.Focus(resolved, setting.size, setting.offset, setting.shrinkDuration);
				}
				else
				{
					Vector3 p = resolved.position;
					focusView.Focus(new Vector2(p.x + setting.offset.x, p.y + setting.offset.y), setting.size, setting.shrinkDuration);
				}
				return;
			}
			focusView.Clear(0.2f);
		}

		protected override void OnDestroy()
		{
			if (_isRunning)
			{
				TutorialGate.Free();
				ReleasePause();
			}
			base.OnDestroy();
		}
	}
}
