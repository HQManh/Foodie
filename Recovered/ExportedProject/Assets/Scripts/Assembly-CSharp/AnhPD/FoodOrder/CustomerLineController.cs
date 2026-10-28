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

		private readonly List<int> _neighbors;

		public CustomerSpawnData SpawnData => null;

		public bool IsUseTimer => false;

		public int OrderCount => 0;

		public CustomerLineController(CustomerLineModel model, CustomerLineView view)
		{
		}

		public void NextCustomer(List<OrderSpec> order, CustomerSpawnData spawnData)
		{
		}

		private void EnterAndReveal()
		{
		}

		private void OnArrivedAtOrderSlot()
		{
		}

		public void EnterWaitingShell(CustomerSpawnData data, bool atLeavePace = false)
		{
		}

		public void SetWaitingLook(float darken, float scale, float animSpeed, float duration = 0f)
		{
		}

		public void AdmitFromWaiting(List<OrderSpec> order, CustomerSpawnData spawnData, Vector3 walkOffset, float walkDuration, float revealDelay = 0f, Action onReveal = null)
		{
		}

		public void ChaseAway()
		{
		}

		private void CleanDishesThenLeave()
		{
		}

		private void HandleStaffLeave()
		{
		}

		private void CancelPendingReveal()
		{
		}

		private void PrepareCustomer(List<OrderSpec> order, CustomerSpawnData spawnData)
		{
		}

		private void RevealOrder()
		{
		}

		private void OnOrderRevealed()
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

		private OrderItemLook LookOf(int index)
		{
			return OrderItemLook.Normal;
		}

		public void SubmitFood(DragItem item, Action onCorrect = null, Action onIncorrect = null, ICollection<int> blocked = null)
		{
		}

		private void PlayComboVfx()
		{
		}

		private void RevealStrandedMysteries()
		{
		}

		private void RevealNeighbors(int servedIndex)
		{
		}

		private void HandleCorrect(int matchedIndex)
		{
		}

		private void HandleIncorrect()
		{
		}

		private void OnTimeout()
		{
		}

		private void AskSaveMe()
		{
		}

		private void ReviveFromSaveMe(Action onDone)
		{
		}

		private void HandleLeave()
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

		public (string, string) GetOrderIds(int i)
		{
			return default;
		}

		public bool CompleteOrderAt(int index)
		{
			return false;
		}

		public void ForceSetWeather(WeatherEffect weather)
		{
		}
	}
}
