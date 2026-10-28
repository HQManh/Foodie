using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.CreamOnBeach
{
	public class BowlCreamItemIngre : IngredientItem
	{
		[SerializeField]
		private List<CreamOnItemByIngreTypeConfig> lstBowlCreamByIngreTypeConfig;

		private EIngredienType itemOnBowlType;

		public bool IsHaveIngredient => false;

		public override void OnSpawn()
		{
		}

		public override void Despawn()
		{
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			return false;
		}

		public override void OnGenerateResultIngredient()
		{
		}
	}
}
