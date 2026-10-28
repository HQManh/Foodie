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

			public float ReadyTime;

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

		private readonly List<CustomerSpawnData> _sequence;

		private int _nextSpawnIndex;

		private int _autoStaffIndex;

		private readonly List<WaitingCustomer> _waiting;

		private WaitingCustomer _incomingBoss;

		private CustomerSpawnData _pendingBoss;

		private bool _isStarted;

		private FCustomerLine _lastSpawnedLine;

		private float _waitTimeScale;

		private float _lastWaitingSpawnTime;

		private Tween _fillDelay;

		private Tween _admitDelay;

		private readonly Dictionary<CustomerSpawnData, int> _trackedStt;

		private int _nextTrackedStt;

		public int QueueCount => 0;

		public bool IsAllSpawned => false;

		public bool IsQueueEmpty => false;

		private bool HasBossOutside => false;

		public bool IsAllCustomersIn => false;

		public bool HasLastSpawnedLeft => false;

		public bool IsBossNext => false;

		private static CakeLevelRuntimeDataCustomer CustomerData => null;

		private Transform LineParent => null;

		public CustomerSpawner(List<FCustomerLine> lines, List<FCustomerLine> orderLines, FCustomerLine linePrefab, Transform root, CustomerLineLayout layout, Action<FCustomerLine> registerLine, Func<CustomerSpawnData, List<OrderSpec>> getOrderIds, Action<CustomerLeaveData> onCustomerLeave, int waitingCount, int maxOrderCustomers, float waitingDarkenBase, float waitingDarkenStep, float waitingScaleBase, float waitingScaleStep, float waitingAnimSpeed, float waitingSpawnInterval, float admitSettleDelay, float bossOrderDelay, bool appendCleanStaff, OrderPreview[] previews)
		{
		}

		public void Begin()
		{
		}

		public void Dispose()
		{
		}

		public void SetWaitTimeScale(float waitTimeScale)
		{
		}

		private float WaitTimeFor(CustomerSpawnData data)
		{
			return 0f;
		}

		public void SetSpawnSequence(IEnumerable<CustomerSpawnData> data, int alreadySpawned = 0)
		{
		}

		public void SpawnAheadOfStart(CustomerSpawnData data)
		{
		}

		public void SpawnCustomer(CustomerSpawnData data)
		{
		}

		private void ApplyStaffId(CustomerSpawnData data)
		{
		}

		private bool DropAutoStaffIfNothingToClean()
		{
			return false;
		}

		private bool HasCleanStaff()
		{
			return false;
		}

		private static CustomerSpawnData NewCleanStaffData()
		{
			return null;
		}

		public void CheckSpawnQueue()
		{
		}

		private void FillWaiting()
		{
		}

		private void ScheduleFill(float delay)
		{
		}

		private bool MaterializeWaiting()
		{
			return false;
		}

		private void PromoteWaitingQueue()
		{
		}

		private bool IsCleanStaffOnHold(CustomerSpawnData data)
		{
			return false;
		}

		private void TryAdmitFront()
		{
		}

		private void ScheduleAdmitRecheck(float delay)
		{
		}

		private void AdmitToOrderArea(WaitingCustomer c)
		{
		}

		private bool CanAdmit(WaitingCustomer c)
		{
			return false;
		}

		private int OrderingCount()
		{
			return 0;
		}

		private bool NextIsBoss()
		{
			return false;
		}

		private void LiftPendingBoss()
		{
		}

		private bool HasPreBossWaiting()
		{
			return false;
		}

		private bool IsBossPresent()
		{
			return false;
		}

		private bool IsBossTurn()
		{
			return false;
		}

		private void TryAdmitBoss()
		{
		}

		private void AdmitIncomingBoss()
		{
		}

		private void ChaseWaitingQueue()
		{
		}

		private bool HasBossOnScreen()
		{
			return false;
		}

		private bool HasOrderingBoss()
		{
			return false;
		}

		private float DarkenFor(int index)
		{
			return 0f;
		}

		private float ScaleFor(int index)
		{
			return 0f;
		}

		public void ApplyLeavingLook(FCustomerLine line)
		{
		}

		public void SetWaitingUpset(bool on)
		{
		}

		private void RefreshPreviews()
		{
		}

		public void OnLineLoaded()
		{
		}

		public void HandleCustomerLeave(FCustomerLine line, CustomerLeaveData customerLeaveData)
		{
		}

		private void NotifyCustomerArrived(CustomerSpawnData data)
		{
		}

		private void NotifyCustomerEnded(CustomerLeaveData leaveData)
		{
		}

		private void SpawnDirect(CustomerSpawnData data, List<OrderSpec> orders)
		{
		}

		public bool SpawnCustomerWithOrders(CustomerSpawnData data, List<OrderSpec> orders)
		{
			return false;
		}

		public void LoadCustomer(WeatherEffect effect = WeatherEffect.Normal, float waitTime = 60f)
		{
		}

		private FCustomerLine AcquireEmptyLine()
		{
			return null;
		}

		private bool IsWaiting(FCustomerLine line)
		{
			return false;
		}

		private FCustomerLine AddLine()
		{
			return null;
		}
	}
}
