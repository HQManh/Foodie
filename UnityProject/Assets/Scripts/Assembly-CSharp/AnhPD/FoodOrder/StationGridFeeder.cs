using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class StationGridFeeder
	{
		private const float ScanInterval = 0.2f;

		private readonly CookingStation _station;

		private float _nextScanTime;

		private readonly List<DragItem> _candidates;

		private readonly List<string> _resultIds;

		private readonly List<PieceSet> _gathered;

		private List<OrderSpec> _specs = new List<OrderSpec>();

		public StationGridFeeder(CookingStation station)
		{
			_station = station;
			_candidates = new List<DragItem>();
			_resultIds = new List<string>();
			_gathered = new List<PieceSet>();
			_nextScanTime = Time.time + Random.Range(0f, ScanInterval);
		}

		public void Tick()
		{
			if (_nextScanTime > Time.time)
			{
				return;
			}
			_nextScanTime = Time.time + ScanInterval;
			if (!_station.AcceptsNewIntake)
			{
				return;
			}
			MessyController messy = MessyController.Ins;
			if (!messy)
			{
				return;
			}
			LevelInfo info = messy.Info;
			if (info == null || info.IsInbound(_station))
			{
				return;
			}
			List<DragItem> items = messy.GetDragItems();
			DragItem item = FindFeedableItem(messy, items);
			if (item != null)
			{
				messy.AutoFeedStationFromGrid(item, _station);
			}
		}

		private DragItem FindFeedableItem(MessyController messy, List<DragItem> items)
		{
			// TODO(unrecovered): ranks candidates by a distance value taken from an uninitialised float parameter (decompiler register noise) and depends on IsRestingOnGrid, whose DragItem flag offsets are not mapped to stub fields.
			return null;
		}

		private int RankOf(LevelInfo info, string resultId, PieceSet missing)
		{
			if (missing.IsEmpty)
			{
				return 0;
			}
			PieceOffer offer = info.GetIdPieceOffer(resultId);
			if (offer == null)
			{
				return 0;
			}
			if (missing.IntersectCount(offer.pieces) == 0)
			{
				return 0;
			}
			return OpensUnstartedOrder(info, resultId, offer.pieces) ? 2 : 1;
		}

		private bool OpensUnstartedOrder(LevelInfo info, string resultId, PieceSet pieces)
		{
			// TODO(unrecovered): iterates OrderSpec structs by value (72-byte copies) and reads spec flag/PieceSet members at unmapped offsets.
			return false;
		}

		private PieceSet CollectMissingPieces(MessyController messy, List<DragItem> items)
		{
			// TODO(unrecovered): multi-step PieceSet struct accumulation over order specs, serve-shelf gathered pieces and the plate ledger; too many intermediate struct copies to reproduce faithfully.
			return default;
		}

		private static bool IsRestingOnGrid(DragItem item)
		{
			// TODO(unrecovered): two DragItem byte flags (+0xe9, +0xea) have no stub field mapping; the landed-cell and shelf-booking checks depend on them.
			return false;
		}
	}
}
