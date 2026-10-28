using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder;
using CakeOrder.DataSO;
using CakeOrder.InGame;
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
		private int numCells;

		[SerializeField]
		private float cellSize;

		[SerializeField]
		[Range(0.1f, 1f)]
		private float petCellRatio;

		[SerializeField]
		[Range(0.1f, 1f)]
		private float eatingCellRatio;

		[SerializeField]
		private float orderOffsetCells;

		[SerializeField]
		private float height;

		[SerializeField]
		private float relayoutDuration;

		[SerializeField]
		private float exitMargin;

		[SerializeField]
		private bool startFromRight;

		[SerializeField]
		private int maxOrderCustomers;

		[Header("Waiting queue")]
		[SerializeField]
		private int waitingCount;

		[SerializeField]
		private float waitingSpacing;

		[SerializeField]
		private float waitingBaseZ;

		[SerializeField]
		private float waitingDepthZ;

		[SerializeField]
		[Range(0f, 1f)]
		private float waitingDarkenBase;

		[SerializeField]
		[Range(0f, 1f)]
		private float waitingDarkenStep;

		[SerializeField]
		[Range(0.1f, 1f)]
		private float waitingScaleBase;

		[SerializeField]
		[Range(0f, 0.5f)]
		private float waitingScaleStep;

		[SerializeField]
		[Range(0.1f, 1f)]
		private float waitingAnimSpeed;

		[SerializeField]
		private float waitingSpawnInterval;

		[SerializeField]
		private float admitSettleDelay;

		[Header("Boss")]
		[SerializeField]
		private float bossOrderDelay;

		[SerializeField]
		private Image bossAlert;

		[SerializeField]
		private float bossAlertBlinkDuration;

		[SerializeField]
		[Range(0f, 1f)]
		private float bossAlertMinAlpha;

		[SerializeField]
		private bool appendCleanStaffAtEnd;

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

		private readonly List<FCustomerLine> _orderLines;

		private bool _bossAlertOn;

		private readonly List<Action<Action>> _pendingSaveMeRevives;

		private bool _saveMeRequested;

		private int NumLinesOccupied => 0;

		public bool IsDoneAllCustomer => false;

		public bool IsAllSpawned => false;

		public float RegionTopWorldY => 0f;

		public bool HasOrderingCustomer => false;

		public bool IsClearingForNextCustomer => false;

		public IReadOnlyList<FCustomerLine> OrderLines => null;

		public bool AreTimersHeld => false;

		private CakeLevelInitData InitData => null;

		public bool HasAutoCompletableOrder => false;

		public event Action onAnyOrderShown
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action onAnyMysteryRevealed
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		private CustomerLineLayout GizmoLayout()
		{
			return null;
		}

		private void OnDrawGizmosSelected()
		{
		}

		private void DrawWaitingGizmos(CustomerLineLayout layout)
		{
		}

		private void DrawOrderCursorGizmo(CustomerLineLayout layout)
		{
		}

		private void OnDrawGizmos()
		{
		}

		public List<string> GetActiveUnservedRecipes()
		{
			return null;
		}

		public List<OrderSpec> GetActiveOpenOrderSpecs()
		{
			return null;
		}

		public List<OrderSpec> GetActiveServableOrderSpecs()
		{
			return null;
		}

		public void FreezeWaitTime()
		{
		}

		public void HoldTimers()
		{
		}

		public void ReleaseTimers()
		{
		}

		public void Setup(Action<CustomerLeaveData> onCustomerLeave)
		{
		}

		public bool SpawnFirstCustomerAhead()
		{
			return false;
		}

		public void Begin()
		{
		}

		private void OnDestroy()
		{
		}

		private void Update()
		{
		}

		private void SetBossAlert(bool on)
		{
		}

		public void SpawnCustomer(CustomerSpawnData data)
		{
		}

		public void SetTimerScale(float scale)
		{
		}

		public void SetSaveMeUpset(bool on)
		{
		}

		private void RegisterLine(FCustomerLine line)
		{
		}

		private void OnLineBoardFreed()
		{
		}

		public bool TryGetServableLine(DragItem item, out FCustomerLine line)
		{
			line = null;
			return false;
		}

		public void RefillWaitTime()
		{
		}

		public OrderPricingInput SimulatePricing(CustomerSpawnData data)
		{
			return null;
		}

		public List<OrderSpec> GetOrderSpecs(CustomerSpawnData data)
		{
			return null;
		}

		public void RegisterCustomerOutOfTime(Action<Action> onRevive)
		{
		}

		public bool TryRequestSaveMeOnCustomerOutOfTime()
		{
			return false;
		}

		public void ApplySaveMeOnCustomerOutOfTime(Action onDone)
		{
		}

		private void NextCustomer(WeatherEffect effect = WeatherEffect.Normal)
		{
		}

		public Vector2 GetActiveCustomerPosition()
		{
			return default;
		}

		public Transform GetActiveCustomerTransform()
		{
			return null;
		}

		public Transform GetActiveOrderTransform()
		{
			return null;
		}

		public Vector2 GetWeatherCustomerPosition()
		{
			return default;
		}

		public FCustomerLine GetWeatherCustomerLine()
		{
			return null;
		}

		public FCustomerLine PickAutoCompleteLine()
		{
			return null;
		}

		private static bool CanAutoComplete(FCustomerLine line)
		{
			return false;
		}
	}
}
