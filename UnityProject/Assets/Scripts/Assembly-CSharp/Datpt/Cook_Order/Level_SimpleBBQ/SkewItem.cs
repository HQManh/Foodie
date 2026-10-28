using System;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.NiceVibrations;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class SkewItem : IngredientItem
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

		private Dictionary<EIngredienType, ItemOnSkewer> dicItemOnSkewer = new Dictionary<EIngredienType, ItemOnSkewer>();

		public override bool IsCanMove => true;

		public bool IsGrilled { get; set; }

		public bool IsGrilling { get; set; }

		public List<ItemOnSkewer> LstItemOnSkewers { get; set; }

		public List<EIngredienType> LstItemOnSkewType { get; set; }

		protected override void Editor()
		{
			// TODO(unrecovered): component and child lookups through unnamed helpers (FUN_04a6a14c, FUN_04b08b78) and the dictionary build are not in the stubs.
		}

		protected override void Start()
		{
			// TODO(unrecovered): builds dicItemOnSkewer and the skewer lists from lstItemOnSkewData through IL2CPP enumerators and an unnamed Dictionary helper.
		}

		public override void Despawn()
		{
			base.Despawn();
			Reset();
			LevelControlCookOrder.Ins.RemoveItemMovingToCheckCanTake(this);
		}

		public void OnAppear(Action onAppeared = null)
		{
			// TODO(unrecovered): tween callbacks and static pose data (DAT_0918cbd0 +0xb8) used for the scale; not in the stubs.
		}

		public void OnItemJumpWhenDone(Action onAppeared = null)
		{
			// TODO(unrecovered): item jump tween uses DOTween callbacks and static pose vectors not in the stubs.
		}

		public override void OnDrop()
		{
			// TODO(unrecovered): drop path uses IL2CPP virtual slots and DOTween helpers not in the stubs.
		}

		public void Reset()
		{
			// TODO(unrecovered): resets the skewer items through IL2CPP virtual slots and clears lists via unnamed helpers.
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): take path uses IL2CPP type checks, interface slots and DOTween callbacks; not recoverable from the stubs.
			return false;
		}

		public bool CheckEqualTarget(List<EIngredienType> lstIngreTake)
		{
			// TODO(unrecovered): compares against lstItemOnSkewType through IL2CPP enumerators and closure helpers not in the stubs.
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): fast-path depends on IL2CPP type checks, a dictionary-contains helper and the base ItemMovingBase.CheckCanTake fallback.
			return false;
		}

		private void GenerateItem(EIngredienType ingredienType, Vector3 pos, Transform parent, int layerIndex)
		{
			// TODO(unrecovered): spawns an item through an unnamed helper (FUN_04c384b8) and IL2CPP slots; not in the stubs.
		}

		public override void OnClickDown()
		{
			// TODO(unrecovered): base click handling plus SoundControl.PlayFX with an unrecovered enum argument and an IL2CPP virtual slot (0x4c8) on the grilling branch.
		}

		public void OnGrilling(float time)
		{
			// TODO(unrecovered): grilling starts a KitchenTimer whose position comes from static pose data (DAT_0918cbd0) and whose callbacks use IL2CPP virtual slots; not in the stubs.
		}

		private void OnGrilled()
		{
			MMVibrationManager.Haptic(HapticTypes.MediumImpact);
			StopShakingSkewer();
			IsGrilled = true;
			OnItemJumpWhenDone();
			// TODO(unrecovered): timer despawn after the jump is not recovered; the pseudocode's despawn call goes through unnamed IL2CPP slots and KitchenTimer state that are not identified in the stubs.
		}

		public override void OnCancelInterract()
		{
			// TODO(unrecovered): random inside-circle offset and safe-area checks through LevelControlCookOrder helpers with static pose data; not recoverable from the stubs.
		}

		private void ResetSkewItem()
		{
			// TODO(unrecovered): resets the skewer items through IL2CPP slots and static pose data (DAT_0918cbd0); not in the stubs.
		}

		public void ShakingSkewer(ShakeType shakeType)
		{
			// TODO(unrecovered): calls two IL2CPP virtual slots (0x178, 0x180) on shake2D and compares a stored shake-type field; the slot targets are not identified in the stubs.
		}

		public void StopShakingSkewer()
		{
			// TODO(unrecovered): calls an IL2CPP virtual slot (0x188) on shake2D; the slot target is not identified in the stubs.
		}
	}
}
