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
		}

		public void Tick()
		{
		}

		public void Evaluate()
		{
		}

		private bool IsBeltDrained()
		{
			return false;
		}

		private void Engage()
		{
		}

		public void Dispose()
		{
		}
	}
}
