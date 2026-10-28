namespace AnhPD.FoodOrder
{
	public class CookingStationFlexibleResult : CookingStation
	{
		protected override void SpawnResult(int groupIndex, int num)
		{
		}

		protected override int ShelfGainOfResult(int groupIndex)
		{
			return 0;
		}
	}
}
