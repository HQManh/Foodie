namespace AnhPD.FoodOrder
{
	public class ConveyorFreeze
	{
		private readonly float _chance;

		private readonly int _turns;

		public ConveyorFreeze(float chance, int turns)
		{
			_chance = chance;
			_turns = turns;
		}

		public void TryFreezeOnSpawn(IngredientConveyorItem item)
		{
			if (_chance > 0f && UnityEngine.Random.value < _chance)
			{
				item.Freeze(_turns);
			}
		}

		public void ApplyFreeze(IngredientConveyorItem item, int turns)
		{
			if (turns < 1)
			{
				turns = _turns;
			}
			item.Freeze(turns);
		}
	}
}
