using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FCustomerLine : MonoBehaviour
	{
		[SerializeField]
		private CustomerLineView view;

		[SerializeField]
		private bool isUseTimer = true;

		[SerializeField]
		private bool openHintOnTap;

		private CustomerLineController _controller;

		private CustomerLineModel _model;

		private bool _hasVacatedCell;

		[CompilerGenerated]
		private Action<CustomerLeaveData> m_onCustomerLeave;

		[CompilerGenerated]
		private Action<Vector2, CustomerLeaveData> m_onSpawnCoin;

		[CompilerGenerated]
		private Action m_onLoaded;

		[CompilerGenerated]
		private Action m_onLeaveStarted;

		[CompilerGenerated]
		private Action m_onOrderShown;

		[CompilerGenerated]
		private Action m_onBoardFreed;

		[CompilerGenerated]
		private Action m_onMysteryRevealed;

		public bool isShowingCustomer => _model.State != LineState.Empty;

		public bool IsWaiting { get; private set; }

		public bool IsWaitingReady { get; private set; }

		public bool HasVacatedCell => _hasVacatedCell;

		public bool IsCustomerReady => _model.State == LineState.Ready;

		public LineState State => _model.State;

		public bool IsTimerSatisfied
		{
			get
			{
				if (!view)
				{
					return false;
				}
				if (!view.Timer)
				{
					return false;
				}
				return view.Timer.IsSatisfied;
			}
		}

		public bool IsUseTimer => _controller.IsUseTimer;

		public bool IsFinishingOrder
		{
			get
			{
				if (_model.State == LineState.Empty)
				{
					return false;
				}
				if (_model.Order.Count < 1)
				{
					return false;
				}
				return _model.Order.IsCompleted;
			}
		}

		public int CustomerSession { get; private set; }

		public CustomerSpawnData SpawnData => _controller.SpawnData;

		public Transform targetPos => view.targetPos;

		public Transform orderRoot => view.orderRoot;

		public int OrderBoardCount { get; private set; } = 1;

		public string CustomerId => view.Loader.CustomerId;

		public float? SlotCells
		{
			get
			{
				if (!view)
				{
					return null;
				}
				if (!view.Loader)
				{
					return null;
				}
				return view.Loader.CurrentSlotSize;
			}
		}

		public WeatherEffect weatherEffect => _model.Weather;

		public float TimerRate => view.Timer.Rate;

		public int OrderCount => _controller.OrderCount;

		public event Action<CustomerLeaveData> onCustomerLeave
		{
			[CompilerGenerated]
			add
			{
				m_onCustomerLeave = (Action<CustomerLeaveData>)Delegate.Combine(m_onCustomerLeave, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onCustomerLeave = (Action<CustomerLeaveData>)Delegate.Remove(m_onCustomerLeave, value);
			}
		}

		public event Action<Vector2, CustomerLeaveData> onSpawnCoin
		{
			[CompilerGenerated]
			add
			{
				m_onSpawnCoin = (Action<Vector2, CustomerLeaveData>)Delegate.Combine(m_onSpawnCoin, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onSpawnCoin = (Action<Vector2, CustomerLeaveData>)Delegate.Remove(m_onSpawnCoin, value);
			}
		}

		public event Action onLoaded
		{
			[CompilerGenerated]
			add
			{
				m_onLoaded = (Action)Delegate.Combine(m_onLoaded, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onLoaded = (Action)Delegate.Remove(m_onLoaded, value);
			}
		}

		public event Action onLeaveStarted
		{
			[CompilerGenerated]
			add
			{
				m_onLeaveStarted = (Action)Delegate.Combine(m_onLeaveStarted, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onLeaveStarted = (Action)Delegate.Remove(m_onLeaveStarted, value);
			}
		}

		public event Action onOrderShown
		{
			[CompilerGenerated]
			add
			{
				m_onOrderShown = (Action)Delegate.Combine(m_onOrderShown, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onOrderShown = (Action)Delegate.Remove(m_onOrderShown, value);
			}
		}

		public event Action onBoardFreed
		{
			[CompilerGenerated]
			add
			{
				m_onBoardFreed = (Action)Delegate.Combine(m_onBoardFreed, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onBoardFreed = (Action)Delegate.Remove(m_onBoardFreed, value);
			}
		}

		public event Action onMysteryRevealed
		{
			[CompilerGenerated]
			add
			{
				m_onMysteryRevealed = (Action)Delegate.Combine(m_onMysteryRevealed, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onMysteryRevealed = (Action)Delegate.Remove(m_onMysteryRevealed, value);
			}
		}

		public string StaffIdFor(CustomerType customerType)
		{
			if (!view)
			{
				return null;
			}
			if (!view.Loader)
			{
				return null;
			}
			return view.Loader.StaffIdFor(customerType);
		}

		public string DebugRevealState()
		{
			if ((bool)view)
			{
				return view.DebugRevealState();
			}
			return "no view" /* literal recovered by guess */;
		}

		public int GetBoardCount(List<OrderSpec> orders)
		{
			return view.GetBoardCount(orders);
		}

		public void ClaimOrderBoards(List<OrderSpec> orders)
		{
			OrderBoardCount = view.GetBoardCount(orders);
		}

		private void Awake()
		{
			_model = new CustomerLineModel(isUseTimer);
			_controller = new CustomerLineController(_model, view);
			_controller.onCustomerLeave = (Action<CustomerLeaveData>)Delegate.Combine(_controller.onCustomerLeave, (Action<CustomerLeaveData>)delegate(CustomerLeaveData data)
			{
				if (m_onCustomerLeave != null)
				{
					m_onCustomerLeave(data);
				}
			});
			_controller.onSpawnCoin = (Action<Vector2, CustomerLeaveData>)Delegate.Combine(_controller.onSpawnCoin, (Action<Vector2, CustomerLeaveData>)delegate(Vector2 pos, CustomerLeaveData data)
			{
				if (m_onSpawnCoin != null)
				{
					m_onSpawnCoin(pos, data);
				}
			});
			_controller.onLoaded = (Action)Delegate.Combine(_controller.onLoaded, (Action)delegate
			{
				if (IsWaiting)
				{
					IsWaitingReady = true;
				}
				if (m_onLoaded != null)
				{
					m_onLoaded();
				}
			});
			_controller.onOrderShown = (Action)Delegate.Combine(_controller.onOrderShown, (Action)delegate
			{
				if (m_onOrderShown != null)
				{
					m_onOrderShown();
				}
				GameEventBus.Publish(new OrderShownEvent
				{
					line = this
				});
			});
			_controller.onOrderCompleted = (Action)Delegate.Combine(_controller.onOrderCompleted, (Action)delegate
			{
				GameEventBus.Publish(new OrderCompletedEvent
				{
					line = this
				});
			});
			_controller.onMysteryRevealed = (Action)Delegate.Combine(_controller.onMysteryRevealed, (Action)delegate
			{
				if (m_onMysteryRevealed != null)
				{
					m_onMysteryRevealed();
				}
			});
			_controller.onLeaveStarted = (Action)Delegate.Combine(_controller.onLeaveStarted, (Action)delegate
			{
				_hasVacatedCell = true;
				if (m_onLeaveStarted != null)
				{
					m_onLeaveStarted();
				}
			});
			view.onBoardCleared += OnBoardCleared;
			view.onBoardTapped += ShowHint;
		}

		private void OnBoardCleared()
		{
			OrderBoardCount = 0;
			_hasVacatedCell = true;
			if (m_onBoardFreed != null)
			{
				m_onBoardFreed();
			}
		}

		public void NextCustomer(CustomerSpawnData data, List<OrderSpec> list)
		{
			_hasVacatedCell = false;
			IsWaiting = false;
			IsWaitingReady = false;
			CustomerSession++;
			OrderBoardCount = view.GetBoardCount(list);
			_controller.NextCustomer(list, data);
		}

		public void EnterWaitingShell(CustomerSpawnData data, bool atLeavePace = false)
		{
			_hasVacatedCell = false;
			IsWaiting = true;
			IsWaitingReady = false;
			CustomerSession++;
			_controller.EnterWaitingShell(data, atLeavePace);
		}

		public void SetWaitingLook(float darken, float scale, float animSpeed, float duration = 0f)
		{
			_controller.SetWaitingLook(darken, scale, animSpeed, duration);
		}

		public void ChaseAway()
		{
			IsWaiting = false;
			IsWaitingReady = false;
			_hasVacatedCell = true;
			CustomerSession++;
			OrderBoardCount = 0;
			_controller.ChaseAway();
		}

		public void AdmitFromWaiting(CustomerSpawnData data, List<OrderSpec> list, Vector3 walkOffset, float walkDuration, float revealDelay = 0f, Action onReveal = null)
		{
			CustomerSession++;
			IsWaiting = false;
			IsWaitingReady = false;
			ClaimOrderBoards(list);
			_controller.AdmitFromWaiting(list, data, walkOffset, walkDuration, revealDelay, onReveal);
		}

		public void SetEmotionThresholds(int[] percents)
		{
			view.Timer.SetEmotionThresholds(percents);
		}

		public void SetExitTargetX(float worldX)
		{
			view.Loader.SetExitWorldX(worldX);
		}

		public void SetEnterFromRight(bool fromRight)
		{
			view.Loader.SetEnterFromRight(fromRight);
		}

		public void HoldAngry(bool playSfx = true)
		{
			view.Loader.HoldAngry(playSfx);
		}

		public void ReleaseAngry()
		{
			view.Loader.ReleaseAngry();
		}

		public void SetSaveMeUpset(bool on)
		{
			if (_model.State == LineState.Empty || IsFinishingOrder)
			{
				return;
			}
			if (on)
			{
				view.Loader.HoldAngry(false);
				return;
			}
			if (isUseTimer && view.Timer.GetEmojiState() < 3)
			{
				return;
			}
			view.Loader.ReleaseAngry();
		}

		public void InitWaitTime(float waitTime)
		{
			isUseTimer = waitTime > 0f;
			_model.SetUseTimer(waitTime > 0f);
			view.Timer.Init(waitTime);
		}

		public void CompareData(DragItem item, Action onCorrect = null, Action onIncorrect = null, ICollection<int> blocked = null)
		{
			_controller.SubmitFood(item, onCorrect, onIncorrect, blocked);
		}

		public bool CanAccept(DragItem item, ICollection<int> blocked = null)
		{
			return _controller.CanAccept(item, blocked);
		}

		public List<int> GetMatchingIndices(DragItem item, ICollection<int> blocked = null)
		{
			return _controller.GetMatchingIndices(item, blocked);
		}

		public void PunchMatchingOrder(DragItem item)
		{
			_controller.PunchMatchingOrder(item);
		}

		public Transform GetOrderTarget(int index)
		{
			return _controller.GetOrderTarget(index);
		}

		public void SetOrderReady(int index, bool ready)
		{
			_controller.SetOrderReady(index, ready);
		}

		public void ForceComplete()
		{
			_controller.ForceComplete();
		}

		public List<int> GetOpenOrderIndices()
		{
			return _controller.GetOpenOrderIndices();
		}

		public List<int> GetServableOrderIndices()
		{
			return _controller.GetServableOrderIndices();
		}

		public string GetOrderRecipe(int i)
		{
			return _controller.GetOrderRecipe(i);
		}

		public OrderSpec GetOrderSpec(int i)
		{
			return _controller.GetOrderSpec(i);
		}

		public bool CompleteOrderAt(int i)
		{
			return _controller.CompleteOrderAt(i);
		}

		public (string, string) GetOrderIds(int i)
		{
			return _controller.GetOrderIds(i);
		}

		public void RefillWaitTime()
		{
			view.OnRefillWaitTime();
			view.StopShake();
		}

		public void FreezeWaitTime()
		{
			SetTimerWaiting(false);
			view.Timer.HideTimer();
		}

		public void SetTimerHoldSource(Func<bool> isHeld)
		{
			view.Timer.SetHoldSource(isHeld);
		}

		public void SetTimerWaiting(bool waiting)
		{
			if (!waiting)
			{
				view.Timer.StopWaiting();
			}
			else
			{
				view.Timer.StartWaiting();
			}
		}

		public void ForceSetWeather(WeatherEffect effect)
		{
			_controller.ForceSetWeather(effect);
		}

		private void ShowHint(OrderBoard board, string focusId)
		{
			List<string> list = _model.Order.OpenDisplayIds();
			if (list.Count == 0)
			{
				return;
			}
			if (!openHintOnTap || GameplayUI.Ins == null)
			{
				view.PeekIngredients(board);
			}
			else
			{
				GameplayUI.Ins.ShowHint(list, focusId, board.PreviewIngredients /* bound virtual method recovered by guess */);
			}
		}
	}
}
