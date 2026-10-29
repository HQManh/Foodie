using CakeOrder;
using CakeOrder.InGame;
using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CustomerSpawner
	{
		private class WaitingCustomer
		{
			public FCustomerLine Line;

			public CustomerSpawnData Data;

			public List<OrderSpec> Orders;

			public float ReadyTime = -1f;

			public bool DirectToOrder;

			public bool BehindBoss;
		}

		private readonly List<FCustomerLine> _lines;

		private readonly List<FCustomerLine> _orderLines;

		private readonly FCustomerLine _linePrefab;

		private readonly Transform _root;

		private readonly CustomerLineLayout _layout;

		private readonly Action<FCustomerLine> _registerLine;

		private readonly Func<CustomerSpawnData, List<OrderSpec>> _getOrderIds;

		private readonly Action<CustomerLeaveData> _onCustomerLeave;

		private readonly int _waitingCount;

		private readonly int _maxOrderCustomers;

		private readonly float _waitingDarkenBase;

		private readonly float _waitingDarkenStep;

		private readonly float _waitingScaleBase;

		private readonly float _waitingScaleStep;

		private readonly float _waitingAnimSpeed;

		private readonly float _waitingSpawnInterval;

		private readonly float _admitSettleDelay;

		private readonly float _bossOrderDelay;

		private readonly bool _appendCleanStaff;

		private readonly OrderPreview[] _previews;

		private readonly List<CustomerSpawnData> _sequence = new List<CustomerSpawnData>();

		private int _nextSpawnIndex;

		private int _autoStaffIndex = -1;

		private readonly List<WaitingCustomer> _waiting = new List<WaitingCustomer>();

		private WaitingCustomer _incomingBoss;

		private CustomerSpawnData _pendingBoss;

		private bool _isStarted;

		private FCustomerLine _lastSpawnedLine;

		private float _waitTimeScale = 1f;

		private float _lastWaitingSpawnTime = -999f;

		private Tween _fillDelay;

		private Tween _admitDelay;

		private readonly Dictionary<CustomerSpawnData, int> _trackedStt = new Dictionary<CustomerSpawnData, int>();

		private int _nextTrackedStt;

		public int QueueCount
		{
			get
			{
				int num = Mathf.Max(0, _sequence.Count - _nextSpawnIndex);
				if (_pendingBoss != null)
				{
					num++;
				}
				return num;
			}
		}

		public bool IsAllSpawned => _sequence.Count <= _nextSpawnIndex;

		public bool IsQueueEmpty
		{
			get
			{
				if (IsAllSpawned && _waiting.Count == 0 && _incomingBoss == null)
				{
					return _pendingBoss == null;
				}
				return false;
			}
		}

		private bool HasBossOutside
		{
			get
			{
				if (_incomingBoss != null)
				{
					return true;
				}
				return _pendingBoss != null;
			}
		}

		public bool IsAllCustomersIn
		{
			get
			{
				if (_waiting.Count > 0 || _incomingBoss != null || _pendingBoss != null)
				{
					return false;
				}
				for (int i = _nextSpawnIndex; i < _sequence.Count; i++)
				{
					if (_sequence[i] != null && !_sequence[i].IsCleanDishStaff)
					{
						return false;
					}
				}
				return true;
			}
		}

		public bool HasLastSpawnedLeft
		{
			get
			{
				if (IsAllSpawned && _waiting.Count == 0 && _incomingBoss == null && _pendingBoss == null)
				{
					if (!_lastSpawnedLine)
					{
						return true;
					}
					return !_orderLines.Contains(_lastSpawnedLine);
				}
				return false;
			}
		}

		public bool IsBossNext
		{
			get
			{
				if (_pendingBoss != null)
				{
					if (!HasPreBossWaiting())
					{
						return OrderingCount() < 2;
					}
					return false;
				}
				return false;
			}
		}

		private static CakeLevelRuntimeDataCustomer CustomerData
		{
			get
			{
				// TODO(unrecovered): accessor for the runtime customer data singleton is an unnamed helper call.
				return null;
			}
		}

		private Transform LineParent
		{
			get
			{
				if (_lines.Count > 0 && (bool)_lines[0])
				{
					return _lines[0].transform.parent;
				}
				return _root;
			}
		}

		public CustomerSpawner(List<FCustomerLine> lines, List<FCustomerLine> orderLines, FCustomerLine linePrefab, Transform root, CustomerLineLayout layout, Action<FCustomerLine> registerLine, Func<CustomerSpawnData, List<OrderSpec>> getOrderIds, Action<CustomerLeaveData> onCustomerLeave, int waitingCount, int maxOrderCustomers, float waitingDarkenBase, float waitingDarkenStep, float waitingScaleBase, float waitingScaleStep, float waitingAnimSpeed, float waitingSpawnInterval, float admitSettleDelay, float bossOrderDelay, bool appendCleanStaff, OrderPreview[] previews)
		{
			_lines = lines;
			_orderLines = orderLines;
			_linePrefab = linePrefab;
			_root = root;
			_layout = layout;
			_registerLine = registerLine;
			_getOrderIds = getOrderIds;
			_onCustomerLeave = onCustomerLeave;
			_waitingDarkenBase = waitingDarkenBase;
			_waitingDarkenStep = waitingDarkenStep;
			_waitingScaleBase = waitingScaleBase;
			_waitingScaleStep = waitingScaleStep;
			_previews = previews;
			_appendCleanStaff = appendCleanStaff;
			_waitingCount = Mathf.Max(1, waitingCount);
			_maxOrderCustomers = ((maxOrderCustomers > 0) ? maxOrderCustomers : int.MaxValue);
			_waitingAnimSpeed = Mathf.Max(0f, waitingAnimSpeed);
			_waitingSpawnInterval = Mathf.Max(0f, waitingSpawnInterval);
			_admitSettleDelay = Mathf.Max(0f, admitSettleDelay);
			_bossOrderDelay = Mathf.Max(0f, bossOrderDelay);
			RefreshPreviews();
		}

		public void Begin()
		{
			_isStarted = true;
			CheckSpawnQueue();
		}

		public void Dispose()
		{
			DOTween.Kill(this);
		}

		public void SetWaitTimeScale(float waitTimeScale)
		{
			_waitTimeScale = waitTimeScale;
		}

		private float WaitTimeFor(CustomerSpawnData data)
		{
			return data.waitTime * _waitTimeScale;
		}

		public void SetSpawnSequence(IEnumerable<CustomerSpawnData> data, int alreadySpawned = 0)
		{
			_sequence.Clear();
			_pendingBoss = null;
			_autoStaffIndex = -1;
			if (data != null)
			{
				_sequence.AddRange(data);
			}
			_nextSpawnIndex = ((alreadySpawned < 0) ? 0 : Mathf.Min(alreadySpawned, _sequence.Count));
			foreach (CustomerSpawnData item in _sequence)
			{
				ApplyStaffId(item);
			}
		}

		public void SpawnAheadOfStart(CustomerSpawnData data)
		{
			if (data != null && !_isStarted)
			{
				ApplyStaffId(data);
				_sequence.Add(data);
				CheckSpawnQueue();
			}
		}

		public void SpawnCustomer(CustomerSpawnData data)
		{
			if (data != null)
			{
				ApplyStaffId(data);
				_sequence.Add(data);
				if (_isStarted)
				{
					CheckSpawnQueue();
				}
			}
		}

		private void ApplyStaffId(CustomerSpawnData data)
		{
			// NOTE: CustomerSpawnData stub is not available; member names (customerType, customerId) are inferred from field offsets.
			if (data != null && (bool)_linePrefab && (int)data.customerType != 0 && string.IsNullOrEmpty(data.customerId))
			{
				data.customerId = _linePrefab.StaffIdFor(data.customerType);
			}
		}

		private bool DropAutoStaffIfNothingToClean()
		{
			if (_nextSpawnIndex == _autoStaffIndex && _orderLines.Count < 1 && _waiting.Count < 1 && _incomingBoss == null && _pendingBoss == null)
			{
				if ((bool)MessyController.Ins && MessyController.Ins.HasAnyDirtyPlate())
				{
					return false;
				}
				_nextSpawnIndex++;
				return true;
			}
			return false;
		}

		private bool HasCleanStaff()
		{
			foreach (CustomerSpawnData item in _sequence)
			{
				if (item != null && item.IsCleanDishStaff)
				{
					return true;
				}
			}
			return false;
		}

		private static CustomerSpawnData NewCleanStaffData()
		{
			// TODO(unrecovered): a list field (offset 0x30) of the new data is also initialised; its type/name is unknown.
			CustomerSpawnData customerSpawnData = new CustomerSpawnData();
			customerSpawnData.customerType = (CustomerType)1;
			customerSpawnData.waitTime = -1f;
			return customerSpawnData;
		}

		public void CheckSpawnQueue()
		{
			LiftPendingBoss();
			TryAdmitBoss();
			FillWaiting();
			TryAdmitFront();
			RefreshPreviews();
		}

		private void FillWaiting()
		{
			LiftPendingBoss();
			if (_waiting.Count < _waitingCount && !IsAllSpawned && _incomingBoss == null && !HasBossOnScreen() && !NextIsBoss())
			{
				float num = _waitingSpawnInterval - (Time.time - _lastWaitingSpawnTime);
				if (num > 0f)
				{
					ScheduleFill(num);
				}
				else if (MaterializeWaiting())
				{
					_lastWaitingSpawnTime = Time.time;
					if (_waiting.Count < _waitingCount && !IsAllSpawned)
					{
						ScheduleFill(_waitingSpawnInterval);
					}
				}
			}
		}

		private void ScheduleFill(float delay)
		{
			if (_fillDelay != null && _fillDelay.IsActive())
			{
				return;
			}
			_fillDelay = DOVirtual.DelayedCall(delay, delegate
			{
				_fillDelay = null;
				FillWaiting();
			}).SetTarget(this);
		}

		private bool MaterializeWaiting()
		{
			if (IsAllSpawned || DropAutoStaffIfNothingToClean())
			{
				return false;
			}
			CustomerSpawnData customerSpawnData = _sequence[_nextSpawnIndex];
			if (IsCleanStaffOnHold(customerSpawnData))
			{
				return false;
			}
			FCustomerLine fCustomerLine = AcquireEmptyLine();
			if (!fCustomerLine)
			{
				return false;
			}
			CustomerSpawnData data = _sequence[_nextSpawnIndex++];
			List<OrderSpec> orders = _getOrderIds(data);
			int count = _waiting.Count;
			WaitingCustomer waitingCustomer = new WaitingCustomer
			{
				Line = fCustomerLine,
				Data = data,
				Orders = orders,
				BehindBoss = _pendingBoss != null
			};
			bool directToOrder = false;
			if (count == 0 && _pendingBoss == null)
			{
				directToOrder = CanAdmit(waitingCustomer);
			}
			waitingCustomer.DirectToOrder = directToOrder;
			_waiting.Add(waitingCustomer);
			fCustomerLine.SetEnterFromRight(_layout.StartFromRight);
			fCustomerLine.SetExitTargetX(_layout.ExitTargetWorldX());
			if (!waitingCustomer.DirectToOrder)
			{
				_layout.PlaceWaitingLine(fCustomerLine, count);
			}
			else
			{
				_layout.PlaceNewLineAtOrderSlot(fCustomerLine, orders);
			}
			float darken = 0f;
			float scale = 1f;
			float animSpeed = 1f;
			if (!waitingCustomer.DirectToOrder)
			{
				darken = DarkenFor(count);
				scale = ScaleFor(count);
				animSpeed = _waitingAnimSpeed;
			}
			fCustomerLine.SetWaitingLook(darken, scale, animSpeed);
			fCustomerLine.EnterWaitingShell(data);
			return true;
		}

		private void PromoteWaitingQueue()
		{
			for (int i = 0; i < _waiting.Count; i++)
			{
				_layout.MoveWaitingLine(_waiting[i].Line, i);
				_waiting[i].Line.SetWaitingLook(DarkenFor(i), ScaleFor(i), _waitingAnimSpeed, _layout.RelayoutDuration);
			}
			RefreshPreviews();
		}

		private bool IsCleanStaffOnHold(CustomerSpawnData data)
		{
			if (data != null && data.IsCleanDishStaff)
			{
				if (_orderLines.Count < 1 && _waiting.Count < 1 && _incomingBoss == null)
				{
					return _pendingBoss != null;
				}
				return true;
			}
			return false;
		}

		private void TryAdmitFront()
		{
			if (_waiting.Count == 0 || _incomingBoss != null)
			{
				return;
			}
			WaitingCustomer waitingCustomer = _waiting[0];
			if ((waitingCustomer.BehindBoss && _pendingBoss != null) || !waitingCustomer.Line.IsWaitingReady)
			{
				return;
			}
			if (!waitingCustomer.DirectToOrder)
			{
				if (waitingCustomer.ReadyTime < 0f)
				{
					waitingCustomer.ReadyTime = Time.time;
				}
				float num = _admitSettleDelay - (Time.time - waitingCustomer.ReadyTime);
				if (num > 0f)
				{
					ScheduleAdmitRecheck(num);
					return;
				}
			}
			if (!CanAdmit(waitingCustomer))
			{
				if (waitingCustomer.DirectToOrder)
				{
					waitingCustomer.DirectToOrder = false;
					_layout.MoveWaitingLine(waitingCustomer.Line, 0);
					waitingCustomer.Line.SetWaitingLook(DarkenFor(0), ScaleFor(0), _waitingAnimSpeed, _layout.RelayoutDuration);
					RefreshPreviews();
				}
			}
			else
			{
				_waiting.RemoveAt(0);
				_orderLines.Add(waitingCustomer.Line);
				_lastSpawnedLine = waitingCustomer.Line;
				AdmitToOrderArea(waitingCustomer);
			}
		}

		private void ScheduleAdmitRecheck(float delay)
		{
			if (_admitDelay != null && _admitDelay.IsActive())
			{
				return;
			}
			_admitDelay = DOVirtual.DelayedCall(delay, delegate
			{
				_admitDelay = null;
				TryAdmitFront();
			}).SetTarget(this);
		}

		private void AdmitToOrderArea(WaitingCustomer c)
		{
			c.Line.ClaimOrderBoards(c.Orders);
			Vector3 walkOffset;
			Action onReveal = null;
			bool flag;
			if (c.Data == null || !c.Data.IsBoss)
			{
				if (!c.DirectToOrder)
				{
					walkOffset = _layout.RelayoutSnapping(c.Line);
				}
				else
				{
					_layout.Relayout();
					walkOffset = Vector3.zero;
				}
				flag = true;
			}
			else
			{
				walkOffset = Vector3.zero;
				onReveal = delegate
				{
					_layout.ReleaseCenterPark(c.Line);
					_layout.Relayout();
				};
				flag = false;
			}
			float walkDuration = 0f;
			float revealDelay = 0f;
			if (!c.DirectToOrder)
			{
				walkDuration = _layout.RelayoutDuration;
			}
			if (!flag)
			{
				revealDelay = _bossOrderDelay;
			}
			c.Line.AdmitFromWaiting(c.Data, c.Orders, walkOffset, walkDuration, revealDelay, onReveal);
			c.Line.InitWaitTime(WaitTimeFor(c.Data));
			NotifyCustomerArrived(c.Data);
			PromoteWaitingQueue();
			FillWaiting();
			ScheduleAdmitRecheck(0f);
		}

		private bool CanAdmit(WaitingCustomer c)
		{
			if (!HasOrderingBoss() && OrderingCount() < _maxOrderCustomers)
			{
				return _layout.CanFitNewLine(c.Orders, false, c.Line);
			}
			return false;
		}

		private int OrderingCount()
		{
			int num = 0;
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if ((bool)orderLine && orderLine.State != LineState.Empty && !orderLine.IsFinishingOrder && !orderLine.IsWaiting)
				{
					num++;
				}
			}
			return num;
		}

		private bool NextIsBoss()
		{
			if (_nextSpawnIndex < _sequence.Count && _sequence[_nextSpawnIndex] != null)
			{
				return _sequence[_nextSpawnIndex].IsBoss;
			}
			return false;
		}

		private void LiftPendingBoss()
		{
			if (_pendingBoss == null && NextIsBoss())
			{
				_pendingBoss = _sequence[_nextSpawnIndex++];
			}
		}

		private bool HasPreBossWaiting()
		{
			foreach (WaitingCustomer item in _waiting)
			{
				if (!item.BehindBoss)
				{
					return true;
				}
			}
			return false;
		}

		private bool IsBossPresent()
		{
			if (_incomingBoss != null)
			{
				return true;
			}
			return HasBossOnScreen();
		}

		private bool IsBossTurn()
		{
			if (_incomingBoss != null || HasBossOnScreen())
			{
				return true;
			}
			if (_pendingBoss != null)
			{
				return !HasPreBossWaiting();
			}
			return false;
		}

		private void TryAdmitBoss()
		{
			if (_incomingBoss != null)
			{
				AdmitIncomingBoss();
			}
			else
			{
				if (_pendingBoss == null || HasPreBossWaiting() || HasOrderingBoss() || OrderingCount() > 0)
				{
					return;
				}
				CustomerSpawnData pendingBoss = _pendingBoss;
				List<OrderSpec> list = _getOrderIds(pendingBoss);
				if (!_layout.CanFitNewLine(list, true))
				{
					return;
				}
				FCustomerLine fCustomerLine = AcquireEmptyLine();
				if ((bool)fCustomerLine)
				{
					_pendingBoss = null;
					_incomingBoss = new WaitingCustomer
					{
						Line = fCustomerLine,
						Data = pendingBoss,
						Orders = list,
						DirectToOrder = true
					};
					GameEventBus.Publish(new BossPresenceEvent
					{
						present = true
					});
					fCustomerLine.SetEnterFromRight(!_layout.StartFromRight);
					fCustomerLine.SetExitTargetX(_layout.ExitTargetWorldX());
					_layout.PlaceNewLineAtAreaCenter(fCustomerLine);
					fCustomerLine.SetWaitingLook(0f, 1f, 1f);
					fCustomerLine.EnterWaitingShell(pendingBoss, true);
					ChaseWaitingQueue();
				}
			}
		}

		private void AdmitIncomingBoss()
		{
			WaitingCustomer incomingBoss = _incomingBoss;
			if (incomingBoss != null && (bool)incomingBoss.Line && incomingBoss.Line.IsWaitingReady)
			{
				_incomingBoss = null;
				_orderLines.Add(incomingBoss.Line);
				_lastSpawnedLine = incomingBoss.Line;
				AdmitToOrderArea(incomingBoss);
			}
		}

		private void ChaseWaitingQueue()
		{
			if (_waiting.Count == 0)
			{
				return;
			}
			for (int i = 0; i < _waiting.Count; i++)
			{
				_sequence.Insert(i + _nextSpawnIndex, _waiting[i].Data);
			}
			if (_nextSpawnIndex <= _autoStaffIndex)
			{
				_autoStaffIndex += _waiting.Count;
			}
			foreach (WaitingCustomer item in _waiting)
			{
				item.Line.SetExitTargetX(_layout.EntryTargetWorldX());
				item.Line.ChaseAway();
			}
			_waiting.Clear();
			RefreshPreviews();
		}

		private bool HasBossOnScreen()
		{
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if ((bool)orderLine && orderLine.State != LineState.Empty)
				{
					CustomerSpawnData spawnData = orderLine.SpawnData;
					if (spawnData != null && spawnData.IsBoss)
					{
						return true;
					}
				}
			}
			return false;
		}

		private bool HasOrderingBoss()
		{
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if ((bool)orderLine && orderLine.State != LineState.Empty && !orderLine.IsFinishingOrder && !orderLine.IsWaiting)
				{
					CustomerSpawnData spawnData = orderLine.SpawnData;
					if (spawnData != null && spawnData.IsBoss)
					{
						return true;
					}
				}
			}
			return false;
		}

		private float DarkenFor(int index)
		{
			return Mathf.Clamp01(_waitingDarkenBase + _waitingDarkenStep * (float)index);
		}

		private float ScaleFor(int index)
		{
			return Mathf.Max(0.05f, _waitingScaleBase - _waitingScaleStep * (float)index);
		}

		public void ApplyLeavingLook(FCustomerLine line)
		{
			if ((bool)line)
			{
				line.SetWaitingLook(DarkenFor(0), ScaleFor(0), 1f, _layout.RelayoutDuration);
			}
		}

		public void SetWaitingUpset(bool on)
		{
			foreach (WaitingCustomer item in _waiting)
			{
				SetUpset(item.Line, on);
			}
			if (_incomingBoss != null)
			{
				SetUpset(_incomingBoss.Line, on);
			}
			static void SetUpset(FCustomerLine line, bool upset)
			{
				if ((bool)line)
				{
					if (upset)
					{
						line.HoldAngry(false);
					}
					else
					{
						line.ReleaseAngry();
					}
				}
			}
		}

		private void RefreshPreviews()
		{
			if (_previews == null)
			{
				return;
			}
			bool flag = IsBossTurn();
			for (int i = 0; i < _previews.Length; i++)
			{
				if (!_previews[i])
				{
					continue;
				}
				if (!flag && i < _waiting.Count)
				{
					WaitingCustomer waitingCustomer = _waiting[i];
					if (!waitingCustomer.DirectToOrder && (bool)waitingCustomer.Line && waitingCustomer.Line.IsWaitingReady)
					{
						_previews[i].Show(waitingCustomer.Orders);
						continue;
					}
				}
				_previews[i].Hide();
			}
		}

		public void OnLineLoaded()
		{
			LiftPendingBoss();
			TryAdmitBoss();
			FillWaiting();
			TryAdmitFront();
			RefreshPreviews();
		}

		public void HandleCustomerLeave(FCustomerLine line, CustomerLeaveData customerLeaveData)
		{
			GameEventBus.Publish(default(CustomerLeaveEvent));
			if (customerLeaveData != null && customerLeaveData.spawnData != null && customerLeaveData.spawnData.IsBoss)
			{
				GameEventBus.Publish(new BossPresenceEvent
				{
					present = false
				});
			}
			_orderLines.Remove(line);
			_layout.ReleaseCenterPark(line);
			_layout.Relayout();
			DropAutoStaffIfNothingToClean();
			NotifyCustomerEnded(customerLeaveData);
			_onCustomerLeave?.Invoke(customerLeaveData);
			if (_isStarted)
			{
				CheckSpawnQueue();
			}
		}

		private void NotifyCustomerArrived(CustomerSpawnData data)
		{
			if (data != null && !data.IsCleanDishStaff && !_trackedStt.ContainsKey(data))
			{
				int num = data.customerIndex;
				if (num < 0)
				{
					num = _nextTrackedStt++;
				}
				_trackedStt[data] = num;
				CustomerData?.ReportCustomerArrived(num);
			}
		}

		private void NotifyCustomerEnded(CustomerLeaveData leaveData)
		{
			if (leaveData != null && leaveData.spawnData != null && !leaveData.spawnData.IsCleanDishStaff && _trackedStt.TryGetValue(leaveData.spawnData, out var value))
			{
				CustomerData?.ReportCustomerEnded(value, leaveData.isSatisfied);
			}
		}

		private void SpawnDirect(CustomerSpawnData data, List<OrderSpec> orders)
		{
			FCustomerLine fCustomerLine = AcquireEmptyLine();
			if ((bool)fCustomerLine)
			{
				_orderLines.Add(fCustomerLine);
				_lastSpawnedLine = fCustomerLine;
				fCustomerLine.SetEnterFromRight(_layout.StartFromRight);
				fCustomerLine.SetExitTargetX(_layout.ExitTargetWorldX());
				fCustomerLine.NextCustomer(data, orders);
				fCustomerLine.InitWaitTime(data.waitTime * _waitTimeScale);
				_layout.Relayout();
			}
		}

		public bool SpawnCustomerWithOrders(CustomerSpawnData data, List<OrderSpec> orders)
		{
			bool flag = _layout.CanFitNewLine(orders);
			if (flag)
			{
				SpawnDirect(data, orders);
			}
			return flag;
		}

		public void LoadCustomer(WeatherEffect effect = WeatherEffect.Normal, float waitTime = 60f)
		{
			// NOTE: CustomerSpawnData stub is not available; member names (weatherEffect, waitTime) are inferred from field offsets.
			CustomerSpawnData customerSpawnData = new CustomerSpawnData();
			customerSpawnData.weatherEffect = effect;
			customerSpawnData.waitTime = waitTime;
			List<OrderSpec> orders = _getOrderIds(customerSpawnData);
			SpawnCustomerWithOrders(customerSpawnData, orders);
		}

		private FCustomerLine AcquireEmptyLine()
		{
			foreach (FCustomerLine line in _lines)
			{
				if ((bool)line && line.gameObject.activeSelf && line.State == LineState.Empty && !_orderLines.Contains(line) && !IsWaiting(line))
				{
					return line;
				}
			}
			return AddLine();
		}

		private bool IsWaiting(FCustomerLine line)
		{
			if (_incomingBoss != null && _incomingBoss.Line == line)
			{
				return true;
			}
			foreach (WaitingCustomer item in _waiting)
			{
				if (item.Line == line)
				{
					return true;
				}
			}
			return false;
		}

		private FCustomerLine AddLine()
		{
			foreach (FCustomerLine line in _lines)
			{
				if ((bool)line && !line.gameObject.activeSelf)
				{
					line.gameObject.SetActive(true);
					_layout.Relayout();
					return line;
				}
			}
			if (!_linePrefab)
			{
				return null;
			}
			FCustomerLine fCustomerLine = UnityEngine.Object.Instantiate(_linePrefab, LineParent);
			fCustomerLine.transform.localScale = _linePrefab.transform.localScale;
			Vector3 prefabLocal = _linePrefab.transform.localPosition; fCustomerLine.transform.localPosition = new Vector3(prefabLocal.x, 0f, prefabLocal.z); // y: the prefab sits at the handle height already (handle y + 3.8 put customers off-screen)
			fCustomerLine.gameObject.SetActive(true);
			_lines.Add(fCustomerLine);
			_registerLine(fCustomerLine);
			_layout.Relayout();
			return fCustomerLine;
		}
	}
}
