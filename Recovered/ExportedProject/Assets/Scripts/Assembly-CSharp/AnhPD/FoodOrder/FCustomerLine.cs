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
		private bool isUseTimer;

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

		public bool isShowingCustomer => false;

		public bool IsWaiting { get; private set; }

		public bool IsWaitingReady { get; private set; }

		public bool HasVacatedCell => false;

		public bool IsCustomerReady => false;

		public LineState State => LineState.Empty;

		public bool IsTimerSatisfied => false;

		public bool IsUseTimer => false;

		public bool IsFinishingOrder => false;

		public int CustomerSession { get; private set; }

		public CustomerSpawnData SpawnData => null;

		public Transform targetPos => null;

		public Transform orderRoot => null;

		public int OrderBoardCount { get; private set; }

		public string CustomerId => null;

		public float? SlotCells => null;

		public WeatherEffect weatherEffect => WeatherEffect.Normal;

		public float TimerRate => 0f;

		public int OrderCount => 0;

		public event Action<CustomerLeaveData> onCustomerLeave
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

		public event Action<Vector2, CustomerLeaveData> onSpawnCoin
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

		public event Action onLoaded
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

		public event Action onLeaveStarted
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

		public event Action onOrderShown
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

		public event Action onBoardFreed
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

		public event Action onMysteryRevealed
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

		public string StaffIdFor(CustomerType customerType)
		{
			return null;
		}

		public string DebugRevealState()
		{
			return null;
		}

		public int GetBoardCount(List<OrderSpec> orders)
		{
			return 0;
		}

		public void ClaimOrderBoards(List<OrderSpec> orders)
		{
		}

		private void Awake()
		{
		}

		private void OnBoardCleared()
		{
		}

		public void NextCustomer(CustomerSpawnData data, List<OrderSpec> list)
		{
		}

		public void EnterWaitingShell(CustomerSpawnData data, bool atLeavePace = false)
		{
		}

		public void SetWaitingLook(float darken, float scale, float animSpeed, float duration = 0f)
		{
		}

		public void ChaseAway()
		{
		}

		public void AdmitFromWaiting(CustomerSpawnData data, List<OrderSpec> list, Vector3 walkOffset, float walkDuration, float revealDelay = 0f, Action onReveal = null)
		{
		}

		public void SetEmotionThresholds(int[] percents)
		{
		}

		public void SetExitTargetX(float worldX)
		{
		}

		public void SetEnterFromRight(bool fromRight)
		{
		}

		public void HoldAngry(bool playSfx = true)
		{
		}

		public void ReleaseAngry()
		{
		}

		public void SetSaveMeUpset(bool on)
		{
		}

		public void InitWaitTime(float waitTime)
		{
		}

		public void CompareData(DragItem item, Action onCorrect = null, Action onIncorrect = null, ICollection<int> blocked = null)
		{
		}

		public bool CanAccept(DragItem item, ICollection<int> blocked = null)
		{
			return false;
		}

		public List<int> GetMatchingIndices(DragItem item, ICollection<int> blocked = null)
		{
			return null;
		}

		public void PunchMatchingOrder(DragItem item)
		{
		}

		public Transform GetOrderTarget(int index)
		{
			return null;
		}

		public void SetOrderReady(int index, bool ready)
		{
		}

		public void ForceComplete()
		{
		}

		public List<int> GetOpenOrderIndices()
		{
			return null;
		}

		public List<int> GetServableOrderIndices()
		{
			return null;
		}

		public string GetOrderRecipe(int i)
		{
			return null;
		}

		public OrderSpec GetOrderSpec(int i)
		{
			return default;
		}

		public bool CompleteOrderAt(int i)
		{
			return false;
		}

		public (string, string) GetOrderIds(int i)
		{
			return default;
		}

		public void RefillWaitTime()
		{
		}

		public void FreezeWaitTime()
		{
		}

		public void SetTimerHoldSource(Func<bool> isHeld)
		{
		}

		public void SetTimerWaiting(bool waiting)
		{
		}

		public void ForceSetWeather(WeatherEffect effect)
		{
		}

		private void ShowHint(OrderBoard board, string focusId)
		{
		}
	}
}
