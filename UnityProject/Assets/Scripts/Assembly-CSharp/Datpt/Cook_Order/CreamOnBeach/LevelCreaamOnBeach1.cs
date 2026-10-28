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

		private Dictionary<EIngredienType, int> dicMainCream = new Dictionary<EIngredienType, int>();

		private Dictionary<EIngredienType, int> dicDecorOnCream = new Dictionary<EIngredienType, int>();

		public static LevelCreaamOnBeach1 LevelCreamOnBeach1Ins => null; // TODO(unrecovered): the pseudocode returns LevelControlCookOrder.Ins after a type-hierarchy check; the two classes are not related in the stubs, so no cast can be written.

		protected override void Start()
		{
			// TODO(unrecovered): caches Camera.main, reads a level flag and fills dictionaries through unnamed helpers and virtual slots that are not in the stubs.
		}

		public override void RandomeNewIngredient()
		{
			// TODO(unrecovered): uses unnamed list and dictionary helpers, lambdas over unnamed item lists and virtual slots that are not in the stubs.
		}

		private void GenerateNewBowlCreamMixed(EIngredienType mainCreamType, Vector3 pos)
		{
			// TODO(unrecovered): instantiates the bowl prefab through an unnamed helper and calls a virtual slot; the helper signatures are not in the stubs.
		}

		public override void ReturnIngreCutted(List<EIngredienType> lstIngreType)
		{
			// TODO(unrecovered): iterates unnamed collections and calls unnamed LevelControlCookOrder helpers; these are not in the stubs.
		}
	}
}
