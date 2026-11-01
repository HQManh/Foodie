using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class FCustomerLineHandle : MonoBehaviour, ISpawnControl
	{
		[SerializeField]
		private List<FCustomerLine> lines;

		[SerializeField]
		private FCustomerLine linePrefab;

		[SerializeField]
		private OrderPreview[] previews;

		[Header("Layout")]
		[SerializeField]
		[Min(1f)]
		private int numCells = 6;

		[SerializeField]
		private float cellSize = 1f;

		[SerializeField]
		[Range(0.1f, 1f)]
		private float petCellRatio = 0.5f;

		[SerializeField]
		[Range(0.1f, 1f)]
		private float eatingCellRatio = 0.25f;

		[SerializeField]
		private float orderOffsetCells = 0.25f;

		[SerializeField]
		private float height = 2f;

		[SerializeField]
		private float relayoutDuration = 0.3f;

		[SerializeField]
		private float exitMargin = 1f;

		[SerializeField]
		private bool startFromRight;

		[SerializeField]
		private int maxOrderCustomers = 2;

		[Header("Waiting queue")]
		[SerializeField]
		private int waitingCount = 3;

		[SerializeField]
		private float waitingSpacing = 0.2f;

		[SerializeField]
		private float waitingBaseZ = 0.1f;

		[SerializeField]
		private float waitingDepthZ = 0.1f;

		[SerializeField]
		[Range(0f, 1f)]
		private float waitingDarkenBase = 0.25f;

		[SerializeField]
		[Range(0f, 1f)]
		private float waitingDarkenStep = 0.15f;

		[SerializeField]
		[Range(0.1f, 1f)]
		private float waitingScaleBase = 0.9f;

		[SerializeField]
		[Range(0f, 0.5f)]
		private float waitingScaleStep = 0.08f;

		[SerializeField]
		[Range(0.1f, 1f)]
		private float waitingAnimSpeed = 0.6f;

		[SerializeField]
		private float waitingSpawnInterval = 0.2f;

		[SerializeField]
		private float admitSettleDelay = 0.25f;

		[Header("Boss")]
		[SerializeField]
		private float bossOrderDelay = 0.6f;

		[SerializeField]
		private Image bossAlert;

		[SerializeField]
		private float bossAlertBlinkDuration = 0.8f;

		[SerializeField]
		[Range(0f, 1f)]
		private float bossAlertMinAlpha = 0.2f;

		[SerializeField]
		private bool appendCleanStaffAtEnd = true;

		[CompilerGenerated]
		private Action m_onAnyOrderShown;

		[CompilerGenerated]
		private Action m_onAnyMysteryRevealed;

		private int _timerHolds;

		private CustomerLineLayout _layout;

		private CustomerSpawner _spawner;

		private bool _isBegun;

		private int _preSpawnedCount;

		private CustomerLineQuery _query;

		private OrderPricingService _pricing;

		private readonly List<FCustomerLine> _orderLines = new List<FCustomerLine>();

		private bool _bossAlertOn;

		private readonly List<Action<Action>> _pendingSaveMeRevives = new List<Action<Action>>();

		private bool _saveMeRequested;

		private int NumLinesOccupied => _orderLines.Count;

		public bool IsDoneAllCustomer
		{
			get
			{
				if (_spawner == null || _spawner.IsQueueEmpty)
				{
					return NumLinesOccupied == 0;
				}
				return false;
			}
		}

		public bool IsAllSpawned
		{
			get
			{
				if (_spawner != null)
				{
					return _spawner.IsAllSpawned;
				}
				return true;
			}
		}

		public float RegionTopWorldY => base.transform.TransformPoint(0f, height * 0.5f, 0f).y;

		public bool HasOrderingCustomer
		{
			get
			{
				foreach (FCustomerLine orderLine in _orderLines)
				{
					if ((bool)orderLine && orderLine.State != LineState.Empty)
					{
						CustomerSpawnData spawnData = orderLine.SpawnData;
						if (spawnData == null || !spawnData.IsCleanDishStaff)
						{
							return true;
						}
					}
				}
				if (_spawner != null)
				{
					return !_spawner.IsAllCustomersIn;
				}
				return false;
			}
		}

		public bool IsClearingForNextCustomer
		{
			get
			{
				bool pendingWork = _spawner != null && !_spawner.IsQueueEmpty;
				bool anyFinishing = false;
				foreach (FCustomerLine orderLine in _orderLines)
				{
					if ((bool)orderLine && orderLine.State != LineState.Empty)
					{
						bool isFinishing = orderLine.IsFinishingOrder;
						anyFinishing |= isFinishing;
						pendingWork |= !isFinishing;
					}
				}
				return pendingWork && anyFinishing;
			}
		}

		public IReadOnlyList<FCustomerLine> OrderLines => _orderLines;

		public bool AreTimersHeld => _timerHolds > 0;

		private CakeLevelInitData InitData => MessyController.Ins.InitData /* member recovered by guess */;

		public bool HasAutoCompletableOrder => (bool)PickAutoCompleteLine();

		public event Action onAnyOrderShown
		{
			[CompilerGenerated]
			add
			{
				m_onAnyOrderShown = (Action)Delegate.Combine(m_onAnyOrderShown, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onAnyOrderShown = (Action)Delegate.Remove(m_onAnyOrderShown, value);
			}
		}

		public event Action onAnyMysteryRevealed
		{
			[CompilerGenerated]
			add
			{
				m_onAnyMysteryRevealed = (Action)Delegate.Combine(m_onAnyMysteryRevealed, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onAnyMysteryRevealed = (Action)Delegate.Remove(m_onAnyMysteryRevealed, value);
			}
		}

		private CustomerLineLayout GizmoLayout()
		{
			if (_layout == null)
			{
				return new CustomerLineLayout(base.transform, _orderLines, numCells, cellSize, height, relayoutDuration, exitMargin, waitingSpacing, waitingBaseZ, waitingDepthZ, linePrefab, startFromRight, petCellRatio, eatingCellRatio, orderOffsetCells);
			}
			return _layout;
		}

		private void OnDrawGizmosSelected()
		{
			if (lines == null)
			{
				return;
			}
			CustomerLineLayout customerLineLayout = GizmoLayout();
			Gizmos.matrix = base.transform.localToWorldMatrix;
			foreach (FCustomerLine line in lines)
			{
				if ((bool)line)
				{
					Rect lineLocalRect = customerLineLayout.GetLineLocalRect(line);
					Vector3 center = new Vector3(lineLocalRect.x + lineLocalRect.width * 0.5f, lineLocalRect.y + lineLocalRect.height * 0.5f, 0f);
					Vector3 size = new Vector3(lineLocalRect.width, lineLocalRect.height, 0.01f);
					Gizmos.color = new Color(0f, 1f, 1f, 0.18f);
					Gizmos.DrawCube(center, size);
					Gizmos.color = new Color(0f, 1f, 1f, 0.8f);
					Gizmos.DrawWireCube(center, size);
				}
			}
			DrawWaitingGizmos(customerLineLayout);
			DrawOrderCursorGizmo(customerLineLayout);
			Gizmos.matrix = Matrix4x4.identity;
		}

		private void DrawWaitingGizmos(CustomerLineLayout layout)
		{
			for (int i = 0; i < waitingCount; i++)
			{
				float num = Mathf.Max(0.1f, waitingScaleBase - waitingScaleStep * (float)i);
				Vector3 vector = layout.WaitingSlotLocal(i);
				Vector3 center = new Vector3(vector.x, 0f, vector.z);
				Vector3 size = new Vector3(num * cellSize, num * height, 0.01f);
				Gizmos.color = new Color(1f, 0.45f, 0.1f, 0.15f);
				Gizmos.DrawCube(center, size);
				Gizmos.color = new Color(1f, 0.45f, 0.1f, 0.8f);
				Gizmos.DrawWireCube(center, size);
			}
		}

		private void DrawOrderCursorGizmo(CustomerLineLayout layout)
		{
			float x = layout.OrderCursorStartLocalX();
			Gizmos.color = new Color(0.2f, 1f, 0.35f, 0.9f);
			Gizmos.DrawLine(new Vector3(x, 0f - height * 0.5f, 0f), new Vector3(x, height * 0.5f, 0f));
			Gizmos.DrawSphere(new Vector3(x, 0f, 0f), cellSize * 0.07f);
		}

		private void OnDrawGizmos()
		{
			int num = Mathf.Max(1, numCells);
			float num2 = height * 0.5f;
			float num3 = cellSize * (float)num * 0.5f;
			Gizmos.color = new Color(1f, 0.85f, 0f, 0.7f);
			for (int i = 0; i <= num; i++)
			{
				float x = cellSize * (float)i - num3;
				Gizmos.DrawLine(base.transform.TransformPoint(x, num2, 0f), base.transform.TransformPoint(x, 0f - num2, 0f));
			}
			Gizmos.DrawLine(base.transform.TransformPoint(0f - num3, 0f, 0f), base.transform.TransformPoint(num3, 0f, 0f));
		}

		public List<string> GetActiveUnservedRecipes()
		{
			return _query.GetActiveUnservedRecipes();
		}

		public List<OrderSpec> GetActiveOpenOrderSpecs()
		{
			return _query.GetActiveOpenOrderSpecs();
		}

		public List<OrderSpec> GetActiveServableOrderSpecs()
		{
			return _query.GetActiveOpenOrderSpecs(true);
		}

		public void FreezeWaitTime()
		{
			if (_query != null)
			{
				_query.FreezeWaitTime();
			}
		}

		public void HoldTimers()
		{
			_timerHolds++;
		}

		public void ReleaseTimers()
		{
			_timerHolds = Mathf.Max(0, _timerHolds - 1);
		}

		public void Setup(Action<CustomerLeaveData> onCustomerLeave)
		{
			_pricing = new OrderPricingService();
			_layout = new CustomerLineLayout(base.transform, _orderLines, numCells, cellSize, height, relayoutDuration, exitMargin, waitingSpacing, waitingBaseZ, waitingDepthZ, linePrefab, startFromRight, petCellRatio, eatingCellRatio, orderOffsetCells);
			_query = new CustomerLineQuery(_orderLines, _layout);
			_spawner = new CustomerSpawner(lines, _orderLines, linePrefab, base.transform, _layout, RegisterLine, _pricing.GetOrderSpecs, onCustomerLeave, waitingCount, maxOrderCustomers, waitingDarkenBase, waitingDarkenStep, waitingScaleBase, waitingScaleStep, waitingAnimSpeed, waitingSpawnInterval, admitSettleDelay, bossOrderDelay, appendCleanStaffAtEnd, previews);
			foreach (FCustomerLine line in lines)
			{
				RegisterLine(line);
			}
			SetBossAlert(false);
		}

		public bool SpawnFirstCustomerAhead()
		{
			CakeLevelInitData initData = InitData;
			CustomerSpawnData[] spawns = ((initData == null) ? null : initData.customerSpawnData);
			if (!_isBegun)
			{
				if (_preSpawnedCount > 0)
				{
					return false;
				}
				if (spawns == null)
				{
					return false;
				}
				if (spawns.Length != 0)
				{
					_spawner.SpawnAheadOfStart(spawns[0]);
					_preSpawnedCount = 1;
					return true;
				}
			}
			return false;
		}

		public void Begin()
		{
			if (!_isBegun)
			{
				CustomerSpawner spawner = _spawner;
				_isBegun = true;
				CakeLevelInitData initData = InitData;
				CustomerSpawnData[] sequence = ((initData == null) ? null : initData.customerSpawnData);
				spawner.SetSpawnSequence(sequence, _preSpawnedCount);
				// CustomerSpawner.Begin() marks the spawner as started (so customers leaving trigger the next admission) and checks the queue.
				_spawner.Begin();
			}
		}

		private void OnDestroy()
		{
			if (_spawner != null)
			{
				_spawner.Dispose();
			}
			if ((bool)bossAlert)
			{
				bossAlert.DOKill();
			}
		}

		private void Update()
		{
			bool flag = _spawner != null && _spawner.IsBossNext;
			if (_bossAlertOn != flag)
			{
				SetBossAlert(flag);
			}
		}

		private void SetBossAlert(bool on)
		{
			_bossAlertOn = on;
			if (!bossAlert)
			{
				return;
			}
			bossAlert.DOKill();
			bossAlert.gameObject.SetActive(on);
			if (on)
			{
				// TODO(unrecovered): two virtual calls on bossAlert (Graphic dirty/refresh) before the fade could not be mapped
				bossAlert.DOFade(bossAlertMinAlpha, bossAlertBlinkDuration).SetEase(Ease.InOutSine).SetLoops(-1, LoopType.Yoyo);
			}
		}

		public void SpawnCustomer(CustomerSpawnData data)
		{
			_spawner.SpawnCustomer(data);
		}

		public void SetTimerScale(float scale)
		{
			if (_spawner != null)
			{
				_spawner.SetWaitTimeScale(scale);
			}
		}

		public void SetSaveMeUpset(bool on)
		{
			if (_spawner != null)
			{
				_spawner.SetWaitingUpset(on);
			}
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if ((bool)orderLine)
				{
					orderLine.SetSaveMeUpset(on);
				}
			}
		}

		private void RegisterLine(FCustomerLine line)
		{
			if (!line)
			{
				return;
			}
			line.SetEnterFromRight(startFromRight);
			line.onSpawnCoin += _pricing.SpawnCoin;
			line.onCustomerLeave += delegate(CustomerLeaveData data)
			{
				_spawner.HandleCustomerLeave(line, data);
			};
			line.onLoaded += _spawner.OnLineLoaded;
			line.onLeaveStarted += delegate
			{
				_layout.Relayout();
				_spawner.ApplyLeavingLook(line);
			};
			line.onBoardFreed += OnLineBoardFreed;
			line.onOrderShown += delegate
			{
				if (m_onAnyOrderShown != null)
				{
					m_onAnyOrderShown();
				}
			};
			line.onMysteryRevealed += delegate
			{
				if (m_onAnyMysteryRevealed != null)
				{
					m_onAnyMysteryRevealed();
				}
			};
			line.SetTimerHoldSource(() => _timerHolds > 0);
			CakeLevelInitData initData = InitData;
			if (initData != null && initData.emotion /* member recovered by guess */ != null)
			{
				line.SetEmotionThresholds(initData.emotion.percents /* member recovered by guess */);
			}
		}

		private void OnLineBoardFreed()
		{
			_layout.Relayout();
			_spawner.CheckSpawnQueue();
		}

		public bool TryGetServableLine(DragItem item, out FCustomerLine line)
		{
			return _query.TryGetServableLine(item, out line);
		}

		public void RefillWaitTime()
		{
			_query.RefillWaitTime();
		}

		public OrderPricingInput SimulatePricing(CustomerSpawnData data)
		{
			return _pricing.SimulatePricing(data);
		}

		public List<OrderSpec> GetOrderSpecs(CustomerSpawnData data)
		{
			return _pricing.GetOrderSpecs(data);
		}

		public void RegisterCustomerOutOfTime(Action<Action> onRevive)
		{
			_pendingSaveMeRevives.Add(onRevive);
		}

		public bool TryRequestSaveMeOnCustomerOutOfTime()
		{
			if (_saveMeRequested)
			{
				return true;
			}
			if (_pendingSaveMeRevives.Count != 0)
			{
				_saveMeRequested = true;
				if (MessyController.Ins.TriggerCustomerOutOfTime())
				{
					return true;
				}
				_saveMeRequested = false;
				_pendingSaveMeRevives.Clear();
			}
			return false;
		}

		public void ApplySaveMeOnCustomerOutOfTime(Action onDone)
		{
			int remaining = 0;
			Action<Action>[] revives = _pendingSaveMeRevives.ToArray();
			_pendingSaveMeRevives.Clear();
			_saveMeRequested = false;
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if ((bool)orderLine && orderLine.State == LineState.Ready && orderLine.IsUseTimer)
				{
					orderLine.RefillWaitTime();
				}
			}
			remaining = revives.Length;
			if (remaining == 0)
			{
				if (onDone != null)
				{
					onDone();
				}
				return;
			}
			Action oneDone = delegate
			{
				remaining--;
				if (remaining == 0 && onDone != null)
				{
					onDone();
				}
			};
			for (int i = 0; i < revives.Length; i++)
			{
				revives[i](oneDone);
			}
		}

		private void NextCustomer(WeatherEffect effect = WeatherEffect.Normal)
		{
			if (_spawner != null)
			{
				_spawner.LoadCustomer(effect, 60f);
			}
		}

		public Vector2 GetActiveCustomerPosition()
		{
			return _query.GetActiveCustomerPosition();
		}

		public Transform GetActiveCustomerTransform()
		{
			return _query.GetActiveCustomerTransform();
		}

		public Transform GetActiveOrderTransform()
		{
			return _query.GetActiveOrderTransform();
		}

		public Vector2 GetWeatherCustomerPosition()
		{
			return _query.GetWeatherCustomerPosition();
		}

		public FCustomerLine GetWeatherCustomerLine()
		{
			return _query.GetWeatherCustomerLine();
		}

		public FCustomerLine PickAutoCompleteLine()
		{
			return _query.PickWorstTimerLine(CanAutoComplete);
		}

		private static bool CanAutoComplete(FCustomerLine line)
		{
			if ((bool)MessyController.Ins)
			{
				return MessyController.Ins.CanAutoCompleteOrderFx(line);
			}
			return false;
		}
	}
}
