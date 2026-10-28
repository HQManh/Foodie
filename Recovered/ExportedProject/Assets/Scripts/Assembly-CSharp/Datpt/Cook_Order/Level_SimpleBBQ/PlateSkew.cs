using System;
using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class PlateSkew : ItemToSell
	{
		[SerializeField]
		private Transform squareTf;

		[SerializeField]
		private Transform snapPepperTf;

		[SerializeField]
		private Transform tomatoTf;

		[SerializeField]
		private SpriteRenderer peperSprRdr;

		[SerializeField]
		private List<Transform> lstSnapSkewTf;

		[SerializeField]
		private List<SpriteRenderer> lstDillSprRdr;

		[SerializeField]
		private ParticleSystem dropDillVfx;

		[SerializeField]
		private ParticleSystem dropPepperVfx;

		[SerializeField]
		private EIngredienType dillType;

		[SerializeField]
		private EIngredienType tomatoType;

		[SerializeField]
		private ObjectShaking objectShaking;

		private int indexSkew;

		private PlateController plateController;

		private bool isHavePepper;

		private bool isHaveTomato;

		public bool IsFullSkewer => false;

		public override bool IsCanMove => false;

		public List<EIngredienType> LstSubOrderIngreOnPlate { get; set; }

		public List<Skew> LstSkewOnPlate { get; set; }

		public void SetOwner(PlateController plateController)
		{
		}

		protected override void Editor()
		{
		}

		public override void Despawn()
		{
		}

		public void OnAppear(Action onAppeared = null)
		{
		}

		public void Reset()
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

		public override void OnDrop()
		{
		}
	}
}
