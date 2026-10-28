using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.CreamOnBeach
{
	public class LevelCreaamOnBeach1 : LevelCreamOnBeach
	{
		[SerializeField]
		private BowlCreamMixed bowlMixedPrefab;

		[SerializeField]
		private List<EIngredienType> lstCreamType;

		private Dictionary<EIngredienType, int> dicMainCream;

		private Dictionary<EIngredienType, int> dicDecorOnCream;

		public static LevelCreaamOnBeach1 LevelCreamOnBeach1Ins => null;

		protected override void Start()
		{
		}

		public override void RandomeNewIngredient()
		{
		}

		private void GenerateNewBowlCreamMixed(EIngredienType mainCreamType, Vector3 pos)
		{
		}

		public override void ReturnIngreCutted(List<EIngredienType> lstIngreType)
		{
		}
	}
}
