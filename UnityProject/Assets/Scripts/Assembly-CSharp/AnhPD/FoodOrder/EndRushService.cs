using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class EndRushService
	{
		private const int TimeScaleSourceId = 1010;

		private readonly FCustomerLineHandle _lineHandle;

		private readonly IngredientSpawnerController _spawner;

		private const float TimeScale = 1.75f;

		private const float ScanInterval = 0.3f;

		private float _nextScan;

		private bool IsEngaged { get; set; }

		public EndRushService(FCustomerLineHandle lineHandle, IngredientSpawnerController spawner)
		{
			_lineHandle = lineHandle;
			_spawner = spawner;
		}

		public void Tick()
		{
			if (!(Time.time < _nextScan))
			{
				_nextScan = Time.time + 0.3f;
				Evaluate();
			}
		}

		public void Evaluate()
		{
			if (!_lineHandle)
			{
				return;
			}
			MessyController level = MessyController.Ins;
			if ((bool)level && level.LevelIndex /* field recovered by guess (int at +0x50) */ < 4)
			{
				return;
			}
			if (!IsEngaged)
			{
				if (_lineHandle.HasOrderingCustomer && IsBeltDrained())
				{
					Engage();
				}
			}
			else if (!_lineHandle.HasOrderingCustomer)
			{
				Dispose();
			}
		}

		private bool IsBeltDrained()
		{
			if (!_spawner)
			{
				return false;
			}
			return _spawner.IsDrained;
		}

		private void Engage()
		{
			IsEngaged = true;
			_lineHandle.FreezeWaitTime();
			MessyController level = MessyController.Ins;
			if ((bool)level)
			{
				level.RaiseFastForwardEndgame(TimeScale);
			}
			// TODO(unrecovered): time-scale manager singleton (HasInstance check + FloatModifier.AddModifier(1.75f, TimeScaleSourceId)) is not identifiable from the pseudocode
		}

		public void Dispose()
		{
			if (IsEngaged)
			{
				IsEngaged = false;
				// TODO(unrecovered): time-scale manager singleton (FloatModifier.RemoveModifier(TimeScaleSourceId)) is not identifiable from the pseudocode
				MessyController level = MessyController.Ins;
				if ((bool)level)
				{
					level.RaiseFastForwardEndgameEnded();
				}
			}
		}
	}
}
