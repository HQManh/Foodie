using System;
using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class Skew : IngredientItem
	{
		[SerializeField]
		private Transform squareTf;

		[SerializeField]
		private Shake2D shake2D;

		[SerializeField]
		private int itemTypeOnSkewNumConfig;

		[SerializeField]
		private int itemOnSkewerNumConfig;

		[SerializeField]
		private List<Transform> lstSnapTf;

		[SerializeField]
		private List<ItemOnSkewData> lstItemOnSkewData;

		private KitchenTimer timer;

		private int itemCount;

		private Dictionary<EIngredienType, ItemOnSkewer> dicItemOnSkewer;

		public override bool IsCanMove => false;

		public bool IsHaveItem => false;

		public bool IsGrilled { get; set; }

		public bool IsGrilling { get; set; }

		public List<ItemOnSkewer> LstItemOnSkewers { get; set; }

		public List<EIngredienType> LstItemOnSkewType { get; set; }

		protected override void Editor()
		{
		}

		protected override void Start()
		{
		}

		public override void Despawn()
		{
		}

		public void OnAppear(Action onAppeared = null)
		{
		}

		public override void OnSpawn()
		{
		}

		public void OnItemJumpWhenDone(Action onAppeared = null)
		{
		}

		public override void OnDrop()
		{
		}

		public void Reset()
		{
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			return false;
		}

		public bool CheckEqualTarget(List<EIngredienType> lstIngreTake)
		{
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			return false;
		}

		private void GenerateItem(EIngredienType ingredienType, Vector3 pos, Transform parent, int layerIndex)
		{
		}

		public override void OnClickDown()
		{
		}

		public void OnGrilling(float time)
		{
		}

		private void OnGrilled()
		{
		}

		public override void OnCancelInterract()
		{
		}

		private void ResetSkewItem()
		{
		}

		public void ShakingSkewer(ShakeType shakeType)
		{
		}

		public void StopShakingSkewer()
		{
		}
	}
}
