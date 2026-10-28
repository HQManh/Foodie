using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.CreamOnBeach
{
	public class IceCream : IngredientItem
	{
		[SerializeField]
		private List<CreamOnItemByIngreTypeConfig> lstCreamByIngreTypeConfig = new List<CreamOnItemByIngreTypeConfig>();

		[SerializeField]
		private List<CreamOnItemByIngreTypeConfig> lstDecorByIngreTypeConfig = new List<CreamOnItemByIngreTypeConfig>();

		[SerializeField]
		private ObjectShaking objectShaking;

		[SerializeField]
		private EIngredienType coneBaseType = (EIngredienType)4;

		[SerializeField]
		private EIngredienType creamBaseType = (EIngredienType)5;

		private EIngredienType creamType;

		private HashSet<EIngredienType> hstCurrentIngreType = new HashSet<EIngredienType>();

		public HashSet<EIngredienType> HstCurrentIngreType => hstCurrentIngreType;

		protected override void Editor()
		{
			base.Editor();
			// TODO(unrecovered): the pseudocode looks up ObjectShaking through two unnamed component lookups (direct, then a child lookup) whose type arguments are not recoverable from the stubs.
		}

		public void SetUp(EIngredienType eIngredienType)
		{
			creamType = eIngredienType;

			if (hstCurrentIngreType != null)
			{
				hstCurrentIngreType.Add(eIngredienType);
				hstCurrentIngreType.Add(coneBaseType);
				hstCurrentIngreType.Add(creamBaseType);
			}

			if (lstCreamByIngreTypeConfig == null)
			{
				return;
			}

			foreach (CreamOnItemByIngreTypeConfig config in lstCreamByIngreTypeConfig)
			{
				if (config.ingredienType == eIngredienType && config.ingreOnItem != null)
				{
					config.ingreOnItem.SetActive(true);
				}
			}
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): uses DOTween scale/callback chains, vtable calls on the moving item and HashSet membership tests through unnamed helpers; the vtable targets are not in the stubs.
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the item type checks are unnamed IL2CPP type-hierarchy tests and the vtable call cannot be mapped to stub members.
			return false;
		}

		public override void Despawn()
		{
			base.Despawn();
			creamType = EIngredienType.None;
			if (hstCurrentIngreType != null)
			{
				hstCurrentIngreType.Clear();
			}

			if (lstDecorByIngreTypeConfig != null)
			{
				foreach (CreamOnItemByIngreTypeConfig config in lstDecorByIngreTypeConfig)
				{
					if (config.ingreOnItem != null)
					{
						config.ingreOnItem.SetActive(false);
					}
				}
			}

			if (lstCreamByIngreTypeConfig != null)
			{
				foreach (CreamOnItemByIngreTypeConfig config in lstCreamByIngreTypeConfig)
				{
					if (config.ingreOnItem != null)
					{
						config.ingreOnItem.SetActive(false);
					}
				}
			}
		}
	}
}
