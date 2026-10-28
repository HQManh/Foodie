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

		public EIngredienType IngredienTypeOnBowl => EIngredienType.None;

		public override void OnAppear(bool isNeedMoveToNeareast = false, Action onSpawned = null)
		{
		}

		public void SetUp(EIngredienType eIngredienType)
		{
		}

		public override void Despawn()
		{
		}
	}
}
