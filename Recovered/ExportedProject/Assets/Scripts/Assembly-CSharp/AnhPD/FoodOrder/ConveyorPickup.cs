using System;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class ConveyorPickup
	{
		private readonly struct Handout
		{
			public readonly string Id;

			public readonly LevelInfo.HomePlan Plan;

			public Handout(string id, LevelInfo.HomePlan plan)
			{
				Id = null;
				Plan = default;
			}
		}

		private readonly Action<IngredientConveyorItem> _removeItem;

		public bool PickAnyMode;

		public Action OnPicked;

		public Action<IngredientConveyorItem> OnPickedItem;

		public Action<IngredientConveyorItem> OnRejectedItem;

		private readonly List<IngredientConveyorItem> _batch;

		private readonly List<string> _batchIds;

		private readonly List<LevelInfo.HomePlan> _batchPlan;

		private readonly List<CookingStation> _busyStations;

		private bool _gridFull;

		public bool GridFullOnLastCheck => false;

		public int CellsNeededOnLastCheck => 0;

		public ConveyorPickup(Action<IngredientConveyorItem> removeItem)
		{
		}

		public bool AcceptsTap(IngredientConveyorItem item)
		{
			return false;
		}

		public bool CanPick(IngredientConveyorItem item)
		{
			return false;
		}

		public bool CanPickIgnoringAlert(IngredientConveyorItem item)
		{
			return false;
		}

		public bool HasMoveFor(IngredientConveyorItem item)
		{
			return false;
		}

		private bool Allows(IngredientConveyorItem item, bool requireChainReady, bool ignoreAlertLock = false)
		{
			return false;
		}

		public void Tap(IngredientConveyorItem item)
		{
		}

		private void RejectChain(IngredientConveyorItem item)
		{
		}

		private void TapRelease(IngredientConveyorItem item)
		{
		}

		public bool HasRoomFor(IngredientConveyorItem item, bool requireStationExit = false)
		{
			return false;
		}

		private static int CopiesOf(IngredientState state)
		{
			return 0;
		}

		public string DebugLastBatch()
		{
			return null;
		}

		private void BlinkBusyStations(IngredientConveyorItem item)
		{
		}

		private static void CollectBatch(IngredientConveyorItem item, List<IngredientConveyorItem> acc)
		{
		}

		private void ReleaseOne(IngredientConveyorItem item, List<Handout> handouts)
		{
		}

		private static void SpawnOne(IngredientState state, LevelInfo.HomePlan plan, Vector3 pos, List<DragItem> spawned)
		{
		}

		private static void AfterShelfReleases(List<DragItem> spawned, Action removeSlot)
		{
		}
	}
}
