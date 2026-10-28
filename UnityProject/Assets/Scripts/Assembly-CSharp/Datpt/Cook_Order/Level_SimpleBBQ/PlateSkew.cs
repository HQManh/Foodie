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

		public bool IsFullSkewer => lstSnapSkewTf.Count <= indexSkew;

		public override bool IsCanMove => indexSkew > 0;

		public List<EIngredienType> LstSubOrderIngreOnPlate { get; set; }

		public List<Skew> LstSkewOnPlate { get; set; }

		public void SetOwner(PlateController plateController)
		{
			this.plateController = plateController;
		}

		protected override void Editor()
		{
			base.Editor();
			squareTf = transform.Find("Square" /* literal recovered by guess */);
			// TODO(unrecovered): when objectShaking is unset, the pseudocode looks up a component type (FUN_04b7c294, DAT_091cd708) on the GameObject and calls its editor helper; that type and helper are not in the stubs.
			objectShaking = GetComponent<ObjectShaking>();
		}

		public override void Despawn()
		{
			base.Despawn();
			Reset();
			if (plateController != null)
			{
				plateController.GenerateNewPlate();
				LevelControlCookOrder.Ins.RemoveItemMovingToCheckCanTake(this);
			}
		}

		public void OnAppear(Action onAppeared = null)
		{
			// TODO(unrecovered): the appear path calls an IL2CPP virtual slot (0x428) on this, sets the scale from the static pose vector (DAT_0918cbd0 +0xb8), and schedules onAppeared through a DOTween OnComplete; the slot target and the static data are not in the stubs.
		}

		public void Reset()
		{
			// TODO(unrecovered): calls an IL2CPP virtual slot (0x188) on each Skew on the plate, resets localScale from the static pose vector (DAT_0918cbd0 +0xb8), and fades the dill sprites through a Utilities helper whose signature is not in the stubs.
			indexSkew = 0;
			if (LstSubOrderIngreOnPlate != null)
			{
				LstSubOrderIngreOnPlate.Clear();
			}
			if (LstSkewOnPlate != null)
			{
				LstSkewOnPlate.Clear();
			}
			peperSprRdr.SetAlpha(0f);
			if (tomatoTf != null)
			{
				tomatoTf.gameObject.SetActive(false);
				isHavePepper = false;
				isHaveTomato = false;
			}
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the take path type-checks the item against several IL2CPP class data entries, calls item interface slots (0x458, 0x2e8, 0x308..), and spawns LoopRotateCircle/ingredient visuals; not recoverable from the stubs.
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): depends on the same IL2CPP type checks and interface slots as OnTake, with a fallback to ItemIdleBase.CheckCanTake.
			return false;
		}

		public override void OnDrop()
		{
			// TODO(unrecovered): the drop path calls IL2CPP virtual slots and DOTween helpers on the dropped item, not present in the stubs.
		}
	}
}
