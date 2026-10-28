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

		private Dictionary<EIngredienType, ItemOnSkewer> dicItemOnSkewer = new Dictionary<EIngredienType, ItemOnSkewer>();

		private List<EIngredienType> lstTargetIngredienType = new List<EIngredienType>();

		public List<ItemOnSkewer> LstItemOnSkewers { get; set; }

		public List<EIngredienType> LstTargetIngredienType => lstTargetIngredienType;

		private void Editor()
		{
			squareTf = transform.Find("Square"); /* literal recovered by guess */
		}

		private void Awake()
		{
			foreach (ItemOnSkewData data in lstItemOnSkewData)
			{
				if (!dicItemOnSkewer.ContainsKey(data.ingredienType))
				{
					dicItemOnSkewer.Add(data.ingredienType, data.itemOnSkewer);
				}
			}
		}

		public void AddItemTypeTarget(EIngredienType ingredienType)
		{
			lstTargetIngredienType.Add(ingredienType);
		}

		public bool CheckOrder(List<EIngredienType> lstIngreTake)
		{
			// TODO(unrecovered): comparison closures (<CheckOrder>b__16_0/_1 and DisplayClass16_0.<CheckOrder>b__2) call IL2CPP LINQ helpers (FUN_04ae6d64, FUN_04ad7fc0, FUN_04adc1ac, FUN_04ab300c) with no stub equivalents.
			return false;
		}

		public void GenerateItemOnSkewerOnOrder(EIngredienType ingredienType, int index)
		{
			if (lstSnapTf.Count <= index)
			{
				return;
			}
			Transform snapTf = lstSnapTf[index];
			if (snapTf != null)
			{
				GenerateItem(ingredienType, snapTf.position, squareTf, lstSnapTf.Count - index);
			}
		}

		private void GenerateItem(EIngredienType ingredienType, Vector3 pos, Transform parent, int layerIndex)
		{
			// TODO(unrecovered): spawn call FUN_04c384b8 (pooler spawn) and prefab lookup FUN_06f33e4c have no stub equivalents; the DisplayClass18_0.<GenerateItem>b__0 tween/transform setup depends on DOTween and the unnamed singleton at DAT_0918cbd0.
		}

		public override void Despawn()
		{
			base.Despawn();
			Reset();
		}

		public void Reset()
		{
			if (lstTargetIngredienType != null)
			{
				lstTargetIngredienType.Clear();
				if (LstItemOnSkewers != null)
				{
					foreach (ItemOnSkewer item in LstItemOnSkewers)
					{
						item.Despawn();
					}
				}
			}
		}
	}
}
