using System;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.NiceVibrations;

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

		private Dictionary<EIngredienType, ItemOnSkewer> dicItemOnSkewer = new Dictionary<EIngredienType, ItemOnSkewer>();

		public override bool IsCanMove => true;

		public bool IsHaveItem => itemCount > 0;

		public bool IsGrilled { get; set; }

		public bool IsGrilling { get; set; }

		public List<ItemOnSkewer> LstItemOnSkewers { get; set; }

		public List<EIngredienType> LstItemOnSkewType { get; set; }

		protected override void Editor()
		{
			// TODO(unrecovered): base editor setup plus several child/component lookups through unnamed helpers (FUN_04a6a14c, FUN_04b08b78 and a dictionary build) that are not in the stubs.
		}

		protected override void Start()
		{
			base.Start();
			foreach (ItemOnSkewData data in lstItemOnSkewData)
			{
				if (!dicItemOnSkewer.ContainsKey(data.ingredienType))
				{
					dicItemOnSkewer.Add(data.ingredienType, data.itemOnSkewer);
				}
			}
		}

		public override void Despawn()
		{
			base.Despawn();
			Reset();
			if (LevelControlCookOrder.Ins != null)
			{
				LevelControlCookOrder.Ins.RemoveItemMovingToCheckCanTake(this);
			}
		}

		public void OnAppear(Action onAppeared = null)
		{
			// TODO(unrecovered): tween callbacks and static pose data (DAT_0918cbd0 +0xb8) used for the scale; not in the stubs.
		}

		public override void OnSpawn()
		{
			// TODO(unrecovered): base spawn plus component state reset through unnamed IL2CPP helpers.
		}

		public void OnItemJumpWhenDone(Action onAppeared = null)
		{
			// TODO(unrecovered): item jump tween uses DOTween callbacks and static pose vectors (DAT_0918cbd0, DAT_091898c0) not in the stubs.
		}

		public override void OnDrop()
		{
			// TODO(unrecovered): drop path uses IL2CPP virtual slots and DOTween helpers not in the stubs.
		}

		public void Reset()
		{
			if (LstItemOnSkewers != null)
			{
				foreach (ItemOnSkewer item in LstItemOnSkewers)
				{
					item.Despawn();
				}
			}
			// TODO(unrecovered): the local scale reset reads static pose data (DAT_0918cbd0 +0xc..0x14) that is not in the stubs.
			ResetSkewItem();
			if (LstItemOnSkewers != null)
			{
				LstItemOnSkewers.Clear();
			}
			if (LstItemOnSkewType != null)
			{
				LstItemOnSkewType.Clear();
				// TODO(unrecovered): the pseudocode logs through a DebugCustom helper with a static string here; not in the stubs.
			}
			itemCount = 0;
			IsGrilled = false;
			IsGrilling = false;
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
			// TODO(unrecovered): fast-path depends on IL2CPP type checks, a dictionary-contains helper (FUN_06f340e0) and the base ItemMovingBase.CheckCanTake fallback.
			return false;
		}

		private void GenerateItem(EIngredienType ingredienType, Vector3 pos, Transform parent, int layerIndex)
		{
			// TODO(unrecovered): spawns an ItemOnSkewer through an unnamed helper (FUN_04c384b8) and IL2CPP slots; not in the stubs.
		}

		public override void OnClickDown()
		{
			base.OnClickDown();
			// TODO(unrecovered): SoundControl.Ins.PlayFX(<enum value 0>, false) has an unrecovered enum type; the IsGrilling branch also calls an IL2CPP virtual slot (0x4c8) after StopShakingSkewer.
			if (IsGrilling)
			{
				StopShakingSkewer();
			}
		}

		public void OnGrilling(float time)
		{
			IsGrilling = true;
			// TODO(unrecovered): the timer spawn position is read from static pose data (DAT_0918cbd0 +0x18..0x20) that is not in the stubs; the rest (KitchenTimer.Show(0.25f, time, 5f, false), OnCookedEvent += OnGrilled, ShakingSkewer(4), and ItemOnSkewer.OnGrilling for each skewer) depends on that timer.
		}

		private void OnGrilled()
		{
			MMVibrationManager.Haptic(HapticTypes.MediumImpact);
			StopShakingSkewer();
			IsGrilled = true;
			OnItemJumpWhenDone();
			if (timer != null)
			{
				timer.Despawn();
			}
			timer = null;
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
