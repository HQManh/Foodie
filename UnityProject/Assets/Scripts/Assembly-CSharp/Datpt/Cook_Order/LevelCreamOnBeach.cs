using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class LevelCreamOnBeach : LevelControlCookOrder
	{
		[SerializeField]
		protected List<CreamOnOrderConfig> lstCreamOnOrderConfig = new List<CreamOnOrderConfig>();

		[SerializeField]
		protected EIngredienType coneBaseIngreType;

		[SerializeField]
		protected EIngredienType creamBaseIngreType;

		protected Camera mainCamera;

		private List<EIngredienType> lstMainItemToGet = new List<EIngredienType>();

		private List<EIngredienType> lstDecorItemToGet = new List<EIngredienType>();

		private int indexItemToGet;

		public static LevelCreamOnBeach LevelCreamOnBeachIns => LevelControlCookOrder.Ins as LevelCreamOnBeach;

		public List<CreamOnOrderConfig> LstCreamOnOrderConfig => lstCreamOnOrderConfig;

		protected override void Start()
		{
			LevelConfigStart();
			mainCamera = Camera.main;
			if (!IsHaveListItemHardConfig)
			{
				return;
			}
			// TODO(unrecovered): builds lstMainItemToGet/lstDecorItemToGet from lstCreamOnOrderConfig and calls an IL2CPP virtual slot (0x328) per entry; the slot target and the list helpers are not identified in the stubs.
		}

		public override void RandomeNewIngredient()
		{
			// TODO(unrecovered): the non-target branch calls an unnamed virtual slot (0x308) that is also used by the base class; the slot target is not identified, and the target-item branch walks lstMainItemToGet/lstDecorItemToGet through IL2CPP enumerators.
		}
	}
}
