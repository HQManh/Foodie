using System;

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

		private FCustomerLineHandle LineHandle => null;

		public EndGameService(MessyController level, AreaRefs areaRefs, ManagerRefs managerRefs, ItemRefs itemRefs, Action<bool> setSaveMeDim)
		{
		}

		public void Dispose()
		{
		}

		public void EvaluateRush()
		{
		}

		public void OnCustomerLeft()
		{
		}

		public void Tick()
		{
		}

		public void CheckEndGame()
		{
		}

		public void OnEndGame()
		{
		}

		public void RequestSaveMeOnCustomerOutOfTime()
		{
		}

		public void ApplySaveMeOnOutOfServeSlots()
		{
		}

		public void ApplySaveMeOnCustomerOutOfTime()
		{
		}

		public void ApplySaveMeOnBeltDeadlock()
		{
		}

		private void OnSaveMeShown()
		{
		}

		private void OnSaveMeApplied()
		{
		}

		private void ReleaseSaveMeTimerHold()
		{
		}

		private void SetSaveMeUpset(bool on)
		{
		}

		private void RunUnderSaveMeTint(Action<Action> effect)
		{
		}
	}
}
