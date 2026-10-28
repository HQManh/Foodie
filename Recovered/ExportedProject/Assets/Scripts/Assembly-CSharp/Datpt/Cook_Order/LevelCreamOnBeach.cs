using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class LevelCreamOnBeach : LevelControlCookOrder
	{
		[SerializeField]
		protected List<CreamOnOrderConfig> lstCreamOnOrderConfig;

		[SerializeField]
		protected EIngredienType coneBaseIngreType;

		[SerializeField]
		protected EIngredienType creamBaseIngreType;

		protected Camera mainCamera;

		private List<EIngredienType> lstMainItemToGet;

		private List<EIngredienType> lstDecorItemToGet;

		private int indexItemToGet;

		public static LevelCreamOnBeach LevelCreamOnBeachIns => null;

		public List<CreamOnOrderConfig> LstCreamOnOrderConfig => null;

		protected override void Start()
		{
		}

		public override void RandomeNewIngredient()
		{
		}
	}
}
