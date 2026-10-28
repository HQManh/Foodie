using System;
using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.CreamOnBeach
{
	public class BowlCreamMixed : IngredientCutted
	{
		[SerializeField]
		private List<CreamOnItemByIngreTypeConfig> lstBowlCreamByIngreTypeConfig;

		private EIngredienType ingredienTypeOnBowl;

		public EIngredienType IngredienTypeOnBowl => ingredienTypeOnBowl;

		public override void OnAppear(bool isNeedMoveToNeareast = false, Action onSpawned = null)
		{
			// TODO(unrecovered): the pseudocode calls IngredientItem.OnAppear without visible arguments, so the values to forward cannot be recovered.
		}

		public void SetUp(EIngredienType eIngredienType)
		{
			ingredienTypeOnBowl = eIngredienType;
			if (lstBowlCreamByIngreTypeConfig == null)
			{
				return;
			}

			foreach (CreamOnItemByIngreTypeConfig config in lstBowlCreamByIngreTypeConfig)
			{
				if (config.ingredienType == eIngredienType && config.ingreOnItem != null)
				{
					config.ingreOnItem.SetActive(true);
				}
			}
		}

		public override void Despawn()
		{
			base.Despawn();
			ingredienTypeOnBowl = EIngredienType.None;
			if (lstBowlCreamByIngreTypeConfig == null)
			{
				return;
			}

			foreach (CreamOnItemByIngreTypeConfig config in lstBowlCreamByIngreTypeConfig)
			{
				if (config.ingreOnItem != null)
				{
					config.ingreOnItem.SetActive(false);
				}
			}
		}
	}
}
