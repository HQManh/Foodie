using Cysharp.Threading.Tasks;
using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CustomerLineController
	{
		private readonly CustomerLineModel _model;

		private readonly CustomerLineView _view;

		public Action<CustomerLeaveData> onCustomerLeave;

		public Action<Vector2, CustomerLeaveData> onSpawnCoin;

		public Action onLoaded;

		public Action onLeaveStarted;

		public Action onOrderShown;

		public Action onOrderCompleted;

		public Action onMysteryRevealed;

		private Action _terminalLeaveAction;

		private CustomerSpawnData _spawnData;

		private readonly Func<int, OrderItemLook> _lookOf;

		private Tween _revealDelay;

		private readonly List<int> _neighbors = new List<int>();

		public CustomerSpawnData SpawnData => _spawnData;

		public bool IsUseTimer => _model.IsUseTimer;

		public int OrderCount => _model.Order.Count;

		public CustomerLineController(CustomerLineModel model, CustomerLineView view)
		{
			_model = model;
			_view = view;
			_lookOf = LookOf;
			_view.Timer.OnTimeout = (Action)Delegate.Combine(_view.Timer.OnTimeout, new Action(OnTimeout));
			_view.Loader.onLeaving += delegate
			{
				onLeaveStarted?.Invoke();
			};
		}

		public void NextCustomer(List<OrderSpec> order, CustomerSpawnData spawnData)
		{
			PrepareCustomer(order, spawnData);
			EnterAndReveal();
		}

		private void EnterAndReveal()
		{
			_view.Loader.NextCustomer(_spawnData.customerType, _spawnData.customerId, delegate
			{
				OnArrivedAtOrderSlot();
				onLoaded?.Invoke();
			}); /* CustomerSpawnData field names guessed */
		}

		private void OnArrivedAtOrderSlot()
		{
			if (_spawnData != null && _spawnData.IsCleanDishStaff)
			{
				CleanDishesThenLeave();
			}
			else
			{
				RevealOrder();
			}
		}

		public void EnterWaitingShell(CustomerSpawnData data, bool atLeavePace = false)
		{
			CancelPendingReveal();
			_spawnData = data;
			_model.SetState(LineState.Loading);
			_view.HideOrder();
			_view.StopShake();
			_view.Loader.ShowWalkIn(data.customerType, data.customerId, delegate
			{
				onLoaded?.Invoke();
			}, atLeavePace); /* CustomerSpawnData field names guessed */
		}

		public void SetWaitingLook(float darken, float scale, float animSpeed, float duration = 0f)
		{
			_view.Loader.SetTint(darken, duration);
			_view.Loader.SetVisualScale(scale, duration);
			_view.Loader.SetAnimSpeed(animSpeed);
		}

		public void AdmitFromWaiting(List<OrderSpec> order, CustomerSpawnData spawnData, Vector3 walkOffset, float walkDuration, float revealDelay = 0f, Action onReveal = null)
		{
			PrepareCustomer(order, spawnData);
			_view.Loader.ReleaseAngry();
			_view.Loader.SetTint(0f, walkDuration);
			_view.Loader.SetVisualScale(1f, walkDuration);
			_view.Loader.SetAnimSpeed(1f);
			_view.Loader.WalkInFrom(walkOffset, walkDuration);
			if (_revealDelay != null)
			{
				_revealDelay.Kill();
			}
			_revealDelay = DOVirtual.DelayedCall(walkDuration + revealDelay, delegate
			{
				_revealDelay = null;
				onReveal?.Invoke();
				OnArrivedAtOrderSlot();
			}).SetUpdate(false);
		}

		public void ChaseAway()
		{
			CancelPendingReveal();
			_model.SetState(LineState.Leaving);
			_view.HideOrder();
			_view.StopShake();
			_view.Loader.ChaseAway(delegate
			{
				_model.SetState(LineState.Empty);
			});
		}

		private void CleanDishesThenLeave()
		{
			_model.SetState(LineState.Processing);
			_view.HideOrder();
			_view.Loader.OnCorrect(leave: false);
			int plateCount = 0;
			if ((bool)MessyController.Ins)
			{
				plateCount = MessyController.Ins.ClearAllDirtyPlatesTo(_view.targetPos.position);
			}
			if (_revealDelay != null)
			{
				_revealDelay.Kill();
			}
			float delay = IngDirtyPlateCleaner.ClearToDuration(plateCount);
			_revealDelay = DOVirtual.DelayedCall(delay, delegate
			{
				_revealDelay = null;
				HandleStaffLeave();
			}).SetUpdate(false);
		}

		private void HandleStaffLeave()
		{
			_model.SetState(LineState.Leaving);
			_view.StopShake();
			_view.HideOrder();
			// TODO(unrecovered): an Action field of CustomerLineView (board-cleared) is invoked here; not accessible from this class
			CustomerLeaveData data = new CustomerLeaveData
			{
				spawnData = _spawnData,
				customerId = _view.Loader.CustomerId,
				isSatisfied = true,
				emotion = (CustomerEmotion)3,
				numDish = 0
			};
			_terminalLeaveAction = delegate
			{
				_model.SetState(LineState.Empty);
				onCustomerLeave?.Invoke(data);
				_terminalLeaveAction = null;
			};
			_view.Loader.OnLeave(delegate
			{
				_view.Loader.HideCurrentCustomer(_terminalLeaveAction, notifyLeaving: true, atWalkPace: true);
			});
		}

		private void CancelPendingReveal()
		{
			if (_revealDelay != null)
			{
				_revealDelay.Kill();
			}
			_revealDelay = null;
		}

		private void PrepareCustomer(List<OrderSpec> order, CustomerSpawnData spawnData)
		{
			_spawnData = spawnData;
			_model.SetState(LineState.Loading);
			_model.InitOrder(order, spawnData.weather /* field name guessed */);
			_view.HideOrder();
			_view.StopShake();
			_view.SetBossLook(spawnData.IsBoss);
		}

		private void RevealOrder()
		{
			_view.ShowOrder(_model.Order.Specs, _lookOf);
			RevealStrandedMysteries();
			_model.SetState(LineState.Revealing);
			if (_revealDelay != null)
			{
				_revealDelay.Kill();
			}
			_revealDelay = DOVirtual.DelayedCall(_view.RevealDuration, delegate
			{
				_revealDelay = null;
				OnOrderRevealed();
			}).SetUpdate(false);
			if (!_model.IsUseTimer)
			{
				_view.Timer.HideTimer();
			}
			_view.SetWeather(_spawnData.weather /* field name guessed */);
		}

		private void OnOrderRevealed()
		{
			if (_model.State == LineState.Revealing)
			{
				_model.SetState(LineState.Ready);
				if (_model.IsUseTimer)
				{
					_view.Timer.StartWaiting();
				}
				if (_spawnData != null && _spawnData.weather != WeatherEffect.Normal)
				{
					ChangeBackgroundWeather(_spawnData.weather);
				}
				onOrderShown?.Invoke();
			}
		}

		public bool CanAccept(DragItem item, ICollection<int> blocked = null)
		{
			if (_model.State != LineState.Ready)
			{
				return false;
			}
			if (!_view.Timer.IsSatisfied)
			{
				return false;
			}
			return _model.Order.CanAccept(item, blocked);
		}

		public List<int> GetMatchingIndices(DragItem item, ICollection<int> blocked = null)
		{
			return _model.Order.GetMatchingIndices(item, blocked);
		}

		public void PunchMatchingOrder(DragItem item)
		{
			List<int> matchingIndices = _model.Order.GetMatchingIndices(item);
			foreach (int item2 in matchingIndices)
			{
				_view.PunchOrder(item2);
			}
			_view.Loader.Cheer();
		}

		public Transform GetOrderTarget(int index)
		{
			Transform orderTarget = _view.GetOrderTarget(index);
			if (!orderTarget)
			{
				orderTarget = _view.targetPos;
			}
			return orderTarget;
		}

		public void SetOrderReady(int index, bool ready)
		{
			if (_model.Order.SetShelfReady(index, ready))
			{
				_view.RefreshItem(index);
			}
		}

		private OrderItemLook LookOf(int index)
		{
			OrderModel order = _model.Order;
			if (order.IsCompletedAt(index))
			{
				return OrderItemLook.Done;
			}
			if (order.IsHidden(index))
			{
				return OrderItemLook.Mystery;
			}
			return order.IsShelfReady(index) ? OrderItemLook.Ready : OrderItemLook.Normal;
		}

		public void SubmitFood(DragItem item, Action onCorrect = null, Action onIncorrect = null, ICollection<int> blocked = null)
		{
			if (_model.State != LineState.Ready)
			{
				return;
			}
			_model.SetState(LineState.Processing);
			List<int> list = ((!_view.Timer.IsSatisfied) ? new List<int>() : _model.Order.TryMatch(item, blocked));
			if (list.Count == 0)
			{
				onIncorrect?.Invoke();
				HandleIncorrect();
			}
			else
			{
				onCorrect?.Invoke();
				foreach (int item2 in list)
				{
					HandleCorrect(item2);
				}
				PlayComboVfx();
				if (_model.Order.IsCompleted)
				{
					onOrderCompleted?.Invoke();
					_view.Timer.StopWaiting();
					_view.RunAfterDoneDelay(delegate
					{
						if (_model.State == LineState.Processing)
						{
							HandleLeave();
						}
					});
					return;
				}
			}
			_model.SetState(LineState.Ready);
		}

		private void PlayComboVfx()
		{
			// TODO(unrecovered): combo-text service lookup and config flag are not identifiable from the pseudocode
		}

		private void RevealStrandedMysteries()
		{
			OrderModel order = _model.Order;
			HashSet<int> hashSet = new HashSet<int>();
			Queue<int> queue = new Queue<int>();
			for (int i = 0; i < order.Count; i++)
			{
				if (!order.IsHidden(i))
				{
					hashSet.Add(i);
					queue.Enqueue(i);
				}
			}
			while (queue.Count > 0)
			{
				int index = queue.Dequeue();
				_view.GetNeighbors(index, _neighbors);
				foreach (int neighbor in _neighbors)
				{
					if (order.IsHidden(neighbor) && hashSet.Add(neighbor))
					{
						queue.Enqueue(neighbor);
					}
				}
			}
			for (int j = 0; j < order.Count; j++)
			{
				if (!hashSet.Contains(j) && order.Reveal(j))
				{
					_view.RefreshItem(j);
				}
			}
		}

		private void RevealNeighbors(int servedIndex)
		{
			_view.GetNeighbors(servedIndex, _neighbors);
			bool flag = false;
			foreach (int neighbor in _neighbors)
			{
				if (_model.Order.Reveal(neighbor))
				{
					flag = true;
					_view.RefreshItem(neighbor, animate: true);
				}
			}
			if (flag)
			{
				onMysteryRevealed?.Invoke();
			}
		}

		private void HandleCorrect(int matchedIndex)
		{
			_view.MarkItemDone(matchedIndex);
			RevealNeighbors(matchedIndex);
			_view.Loader.OnEat(() => _model.Order.IsCompleted, _view.PlayHappyVfx);
		}

		private void HandleIncorrect()
		{
			_view.Loader.OnIncorrect();
		}

		private void OnTimeout()
		{
			if (_model.State == LineState.Timeout)
			{
				return;
			}
			_model.SetState(LineState.Timeout);
			_view.StopShake();
			_view.PlayTimeout();
			if ((bool)MessyController.Ins)
			{
				MessyController.Ins.RegisterCustomerOutOfTime(ReviveFromSaveMe);
			}
			_view.Loader.PlayTimeoutAnim(AskSaveMe);
		}

		private void AskSaveMe()
		{
			if (_model.State == LineState.Timeout && (bool)MessyController.Ins)
			{
				MessyController.Ins.RequestSaveMeOnCustomerOutOfTime();
			}
		}

		private void ReviveFromSaveMe(Action onDone)
		{
			_model.SetState(LineState.Ready);
			_view.OnRefillWaitTime();
			_view.StopShake();
			_view.Timer.StartWaiting();
		}

		// A customer with a weather effect turns the background to that weather while they order; it returns to the level's weather when they leave.
		private static void ChangeBackgroundWeather(WeatherEffect weather)
		{
			CakeOrder.InGame.InGameBackgroundsControl background = MessyController.Ins != null ? MessyController.Ins.BackgroundControl : null;
			if (background != null)
			{
				background.ChangeWeather(weather).Forget();
			}
		}

		private void HandleLeave()
		{
			CancelPendingReveal();
			if (_spawnData != null && _spawnData.weather != WeatherEffect.Normal && MessyController.Ins != null && MessyController.Ins.InitData != null && MessyController.Ins.InitData.levelMetadata != null)
			{
				ChangeBackgroundWeather(MessyController.Ins.InitData.levelMetadata.weatherEffect);
			}
			_model.SetState(LineState.Leaving);
			_view.SetWeather(WeatherEffect.Normal); // original value was WeatherEffect.None, which the installed enum does not define
			_view.StopShake();
			_view.HideOrder();
			// TODO(unrecovered): an Action field of CustomerLineView (board-cleared) is invoked here; not accessible from this class
			CustomerLeaveData data = new CustomerLeaveData
			{
				spawnData = _spawnData,
				customerId = _view.Loader.CustomerId,
				isSatisfied = true,
				emotion = (CustomerEmotion)_view.Timer.GetEmojiState(),
				numDish = _model.Order.Count
			};
			_view.Timer.StopWaiting();
			_terminalLeaveAction = delegate
			{
				_model.SetState(LineState.Empty);
				onCustomerLeave?.Invoke(data);
				_terminalLeaveAction = null;
			};
			_view.Loader.OnLeave(delegate
			{
				_view.Loader.HideCurrentCustomer(_terminalLeaveAction);
			}, delegate
			{
				onSpawnCoin?.Invoke(_view.targetPos.position, data);
			});
		}

		public void ForceComplete()
		{
			if (_model.State == LineState.Ready)
			{
				HandleLeave();
			}
		}

		public List<int> GetOpenOrderIndices()
		{
			return _model.Order.GetOpenOrderIndices();
		}

		public List<int> GetServableOrderIndices()
		{
			return _model.Order.GetServableIndices();
		}

		public string GetOrderRecipe(int i)
		{
			return _model.Order.SpecAt(i).Recipe;
		}

		public OrderSpec GetOrderSpec(int i)
		{
			return _model.Order.SpecAt(i);
		}

		public (string, string) GetOrderIds(int i)
		{
			OrderSpec orderSpec = _model.Order.SpecAt(i);
			return (orderSpec.DisplayId, orderSpec.BaseId);
		}

		public bool CompleteOrderAt(int index)
		{
			if (_model.State != LineState.Ready)
			{
				return false;
			}
			if (!_model.Order.MarkCompleted(index))
			{
				return false;
			}
			HandleCorrect(index);
			PlayComboVfx();
			if (_model.Order.IsCompleted)
			{
				onOrderCompleted?.Invoke();
				HandleLeave();
			}
			return true;
		}

		public void ForceSetWeather(WeatherEffect weather)
		{
			_model.ForceSetWeather(weather);
			_view.SetWeather(weather);
		}
	}
}
