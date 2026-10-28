using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.CreamOnBeach
{
	public class IceCream : IngredientItem
	{
		[SerializeField]
		private List<CreamOnItemByIngreTypeConfig> lstCreamByIngreTypeConfig;

		[SerializeField]
		private List<CreamOnItemByIngreTypeConfig> lstDecorByIngreTypeConfig;

		[SerializeField]
		private ObjectShaking objectShaking;

		[SerializeField]
		private EIngredienType coneBaseType;

		[SerializeField]
		private EIngredienType creamBaseType;

		private EIngredienType creamType;

		private HashSet<EIngredienType> hstCurrentIngreType;

		public HashSet<EIngredienType> HstCurrentIngreType => null;

		protected override void Editor()
		{
		}

		public void SetUp(EIngredienType eIngredienType)
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

		public override void Despawn()
		{
		}
	}
}
