using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class SkewerOnOrder : PoolingObject
	{
		[SerializeField]
		private int itemTypeOnSkewNumConfig;

		[SerializeField]
		private int itemOnSkewerNumConfig;

		[SerializeField]
		private Transform squareTf;

		[SerializeField]
		private List<Transform> lstSnapTf;

		[SerializeField]
		private List<ItemOnSkewData> lstItemOnSkewData;

		private Dictionary<EIngredienType, ItemOnSkewer> dicItemOnSkewer;

		private List<EIngredienType> lstTargetIngredienType;

		public List<ItemOnSkewer> LstItemOnSkewers { get; set; }

		public List<EIngredienType> LstTargetIngredienType => null;

		private void Editor()
		{
		}

		private void Awake()
		{
		}

		public void AddItemTypeTarget(EIngredienType ingredienType)
		{
		}

		public bool CheckOrder(List<EIngredienType> lstIngreTake)
		{
			return false;
		}

		public void GenerateItemOnSkewerOnOrder(EIngredienType ingredienType, int index)
		{
		}

		private void GenerateItem(EIngredienType ingredienType, Vector3 pos, Transform parent, int layerIndex)
		{
		}

		public override void Despawn()
		{
		}

		public void Reset()
		{
		}
	}
}
