using System;
using DG.Tweening;
using TrungKienPack.Particle;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class EndGameService
	{
		private const int SaveMeTintBlockId = 1006;

		private readonly MessyController _level;

		private readonly AreaRefs _areaRefs;

		private readonly ManagerRefs _managerRefs;

		private readonly ItemRefs _itemRefs;

		private readonly Action<bool> _setSaveMeDim;

		private readonly EndRushService _endRush;

		private bool _isAllCustomerLeave;

		private bool _endGameStarted;

		private bool _saveMeTimerHeld;

		private FCustomerLineHandle LineHandle => _managerRefs.lineHandle;

		public EndGameService(MessyController level, AreaRefs areaRefs, ManagerRefs managerRefs, ItemRefs itemRefs, Action<bool> setSaveMeDim)
		{
			_level = level;
			_areaRefs = areaRefs;
			_managerRefs = managerRefs;
			_itemRefs = itemRefs;
			_setSaveMeDim = setSaveMeDim;
			_endRush = new EndRushService(managerRefs.lineHandle, managerRefs.spawnerController);
			if ((bool)LineHandle)
			{
				LineHandle.onAnyOrderShown += _endRush.Evaluate;
			}
			level.onOutOfServeSlot += OnSaveMeShown;
			level.onBeltDeadlock += OnSaveMeShown;
		}

		public void Dispose()
		{
			ReleaseSaveMeTimerHold();
			if ((bool)LineHandle)
			{
				LineHandle.onAnyOrderShown -= _endRush.Evaluate;
			}
			_level.onOutOfServeSlot -= OnSaveMeShown;
			_level.onBeltDeadlock -= OnSaveMeShown;
			_endRush.Dispose();
		}

		public void EvaluateRush()
		{
			_endRush.Evaluate();
		}

		public void OnCustomerLeft()
		{
			_endRush.Evaluate();
			if ((bool)LineHandle && LineHandle.IsAllSpawned)
			{
				_isAllCustomerLeave = true;
				CheckEndGame();
			}
		}

		public void Tick()
		{
			if (!_endGameStarted)
			{
				if (_isAllCustomerLeave)
				{
					CheckEndGame();
					if (_endGameStarted)
					{
						return;
					}
				}
				_endRush.Tick();
			}
		}

		public void CheckEndGame()
		{
			if (_endGameStarted || !_isAllCustomerLeave)
			{
				return;
			}
			if ((bool)LineHandle && !LineHandle.IsDoneAllCustomer)
			{
				return;
			}
			_endGameStarted = true;
			PoolingParticle.Instance.Spawn(ParticleType.EndGame).Play();
			_level.EndGame();
		}

		public void OnEndGame()
		{
			if (_level.endGameInfo /* field recovered by guess (object at +0x40) */.reason == 1)
			{
				SetSaveMeUpset(true);
			}
			ReleaseSaveMeTimerHold();
			_endRush.Dispose();
			_managerRefs.spawnerController.Stop();
			foreach (CookingStation station in _itemRefs.cookingStations)
			{
				if ((bool)station)
				{
					station.SetPaused(true);
				}
			}
		}

		public void RequestSaveMeOnCustomerOutOfTime()
		{
			if ((bool)LineHandle && LineHandle.TryRequestSaveMeOnCustomerOutOfTime())
			{
				OnSaveMeShown();
				return;
			}
			_level.endGameInfo /* field recovered by guess (object at +0x40) */.reason = 1;
			_level.EndGame();
		}

		public void ApplySaveMeOnOutOfServeSlots()
		{
			SetSaveMeUpset(false);
			ReleaseSaveMeTimerHold();
			RunUnderSaveMeTint(delegate(Action onDone)
			{
				if ((bool)_areaRefs.serveShelf && (bool)_areaRefs.ingGrid)
				{
					_areaRefs.ingGrid.ApplySaveMeClearAndCollect(onDone);
				}
				else
				{
					onDone();
				}
			});
			if ((bool)GameplayUI.Ins)
			{
				GameplayUI.Ins.HideAlert((AlertType)2);
			}
		}

		public void ApplySaveMeOnCustomerOutOfTime()
		{
			SetSaveMeUpset(false);
			ReleaseSaveMeTimerHold();
			RunUnderSaveMeTint(delegate(Action onDone)
			{
				if (!LineHandle)
				{
					onDone();
				}
				else
				{
					LineHandle.ApplySaveMeOnCustomerOutOfTime(onDone);
				}
			});
		}

		public void ApplySaveMeOnBeltDeadlock()
		{
			SetSaveMeUpset(false);
			ReleaseSaveMeTimerHold();
			RunUnderSaveMeTint(delegate(Action onDone)
			{
				if ((bool)_managerRefs.spawnerController)
				{
					_managerRefs.spawnerController.ApplySaveMeUnstickBelt();
				}
				if ((bool)_areaRefs.ingGrid)
				{
					_areaRefs.ingGrid.SetBeltDeadlocked(false);
				}
				onDone();
			});
		}

		private void OnSaveMeShown()
		{
			SetSaveMeUpset(true);
			if (!_saveMeTimerHeld && (bool)LineHandle)
			{
				_saveMeTimerHeld = true;
				LineHandle.HoldTimers();
			}
		}

		private void OnSaveMeApplied()
		{
			SetSaveMeUpset(false);
			ReleaseSaveMeTimerHold();
		}

		private void ReleaseSaveMeTimerHold()
		{
			if (_saveMeTimerHeld)
			{
				_saveMeTimerHeld = false;
				if ((bool)LineHandle)
				{
					LineHandle.ReleaseTimers();
				}
			}
		}

		private void SetSaveMeUpset(bool on)
		{
			if ((bool)LineHandle)
			{
				LineHandle.SetSaveMeUpset(on);
			}
		}

		private void RunUnderSaveMeTint(Action<Action> effect)
		{
			_level.inputBlockers /* field recovered by guess (BoolModifier at +0x58) */.AddModifier(SaveMeTintBlockId);
			_setSaveMeDim(true);
			DOVirtual.DelayedCall(0.5f, delegate
			{
				effect(OnEffectDone);
			}).SetTarget(_level);

			void OnEffectDone()
			{
				_setSaveMeDim(false);
				DOVirtual.DelayedCall(0.5f, delegate
				{
					_level.inputBlockers.RemoveModifier(SaveMeTintBlockId);
				}).SetTarget(_level);
			}
		}
	}
}
