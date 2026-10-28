using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.CreamOnBeach
{
	public class BowlCreamItemIngre : IngredientItem
	{
		[SerializeField]
		private List<CreamOnItemByIngreTypeConfig> lstBowlCreamByIngreTypeConfig;

		private EIngredienType itemOnBowlType;

		public bool IsHaveIngredient => itemOnBowlType != EIngredienType.None;

		public override void OnSpawn()
		{
			base.OnSpawn();
			itemOnBowlType = EIngredienType.None;
		}

		public override void Despawn()
		{
			base.Despawn();
			itemOnBowlType = EIngredienType.None;
			if (lstBowlCreamByIngreTypeConfig != null)
			{
				foreach (CreamOnItemByIngreTypeConfig config in lstBowlCreamByIngreTypeConfig)
				{
					if (config.ingreOnItem != null)
					{
						config.ingreOnItem.SetActive(false);
					}
				}
			}
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): uses DOTween punch/scale tweens, a SoundControl call and vtable calls on the moving item; the pseudocode's tween-target and vtable details are not in the stubs.
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the type-hierarchy checks and the vtable call on the moving item cannot be mapped to stub members.
			return false;
		}

		public override void OnGenerateResultIngredient()
		{
			// TODO(unrecovered): spawns or looks up BowlCreamMixed through an unnamed helper call and LevelCreamOnBeach/LevelControlCookOrder helpers whose signatures are not in the stubs.
		}
	}
}
