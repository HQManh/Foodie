#if UNITY_EDITOR
using System.Collections.Generic;
using AnhPD.FoodOrder;
using CakeOrder.InGame;
using UnityEngine;

// Editor-only helper, not part of the original game. The game's own cooking bot (CookingEstimatorBot) lives in a DLL with empty method
// bodies, so it cannot play. This taps the belt the way a player would, through the same pickup code path, so the rest of the loop can
// be exercised and debugged. It reports what it does in the Console.
public class FSBurgerAutoPlayer : MonoBehaviour
{
	private const float TapInterval = 0.5f;

	private float _nextTap;

	private int _taps;

	private int _rejected;

	private int _fed;

	private float _nextReport;

	private void Update()
	{
		LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
		if (level == null || level.PlayState != LevelPlayState.Playing || Time.time < _nextTap)
		{
			return;
		}
		_nextTap = Time.time + TapInterval;
		IngredientSpawnerController spawner = FindFirstObjectByType<IngredientSpawnerController>();
		if (spawner == null || spawner.Pickup == null)
		{
			return;
		}
		// Keep a couple of grid cells free, like a player would, so the grid does not jam.
		DragItem[] heldItems = FindObjectsByType<DragItem>(FindObjectsSortMode.None);
		int held = heldItems.Length;
		BuildNeeds(heldItems, out Dictionary<string, int> need, out Dictionary<string, int> have, out Dictionary<string, string> rawToCooked);
		bool tapped = false;
		IngredientConveyorItem fallback = null;
		foreach (IngredientConveyorItem item in held >= 11 ? new IngredientConveyorItem[0] : FindObjectsByType<IngredientConveyorItem>(FindObjectsSortMode.None))
		{
			if (item == null || !item.IsPickable)
			{
				continue;
			}
			// Only take what an open order still lacks (after what the grid already holds), like a player working to the order boards.
			string rawId = item.Items.Count > 0 ? item.Items[0].id : null;
			if (rawId == null)
			{
				continue;
			}
			string cooked = rawToCooked.TryGetValue(rawId, out string made) ? made : rawId;
			need.TryGetValue(cooked, out int wanted);
			have.TryGetValue(cooked, out int owned);
			if (wanted - owned <= 0)
			{
				if (fallback == null && spawner.Pickup.CanPick(item)) fallback = item;
				continue;
			}
			have[cooked] = owned + 1;
			if (spawner.Pickup.CanPick(item))
			{
				spawner.Pickup.Tap(item);
				_taps++;
				tapped = true;
				break;
			}
			_rejected++;
		}
		// Nothing needed is within reach: take any pickable item (while the grid has room) so the belt keeps moving.
		if (!tapped && fallback != null && held < 10)
		{
			spawner.Pickup.Tap(fallback);
			_taps++;
		}
		// Like a player: send a grid item to a station that can take it.
		MessyController game = MessyController.Ins;
		if (game != null && game.Info != null)
		{
			foreach (DragItem drag in FindObjectsByType<DragItem>(FindObjectsSortMode.None))
			{
				if (drag == null || drag.Cell == null || drag.IsWindingUp)
				{
					continue;
				}
				if (game.Info.TryGetInteractableStation(drag.GetId(), drag.transform.position, out CookingStation station) && station != null)
				{
					game.AutoFeedStationFromGrid(drag, station);
					_fed++;
					break;
				}
			}
		}
		if (Time.time >= _nextReport)
		{
			_nextReport = Time.time + 10f;
			Debug.Log("[FSBurgerAutoPlayer] t=" + Time.time.ToString("0") + " taps=" + _taps + " skipped=" + _rejected + " fedToStations=" + _fed + " dragItems=" + FindObjectsByType<DragItem>(FindObjectsSortMode.None).Length + " beltItems=" + FindObjectsByType<IngredientConveyorItem>(FindObjectsSortMode.None).Length);
		}
	}

	private static void BuildNeeds(DragItem[] heldItems, out Dictionary<string, int> need, out Dictionary<string, int> have, out Dictionary<string, string> rawToCooked)
	{
		need = new Dictionary<string, int>();
		have = new Dictionary<string, int>();
		rawToCooked = new Dictionary<string, string>();
		foreach (CookingStation station in FindObjectsByType<CookingStation>(FindObjectsSortMode.None))
		{
			foreach (StationInteractGroup group in station.Groups)
			{
				if (group == null || group.slots == null) continue;
				foreach (StationSlot slot in group.slots)
				{
					if (slot != null && !string.IsNullOrEmpty(slot.ingId) && !string.IsNullOrEmpty(group.resultId)) rawToCooked[slot.ingId] = group.resultId;
				}
			}
		}
		MessyController game = MessyController.Ins;
		FCustomerLineHandle handle = game != null ? game.LineHandle : null;
		if (handle == null || game.Info == null) return;
		foreach (FCustomerLine line in handle.OrderLines)
		{
			if (line == null || !line.IsCustomerReady) continue;
			List<int> open = line.GetOpenOrderIndices();
			if (open == null) continue;
			foreach (int index in open)
			{
				string id = line.GetOrderIds(index).Item1;
				if (FlexibleId.IsFlexible(id))
				{
					FlexibleDragItem prefab = game.Info.GetIngredientPrefab(FlexibleId.BaseOf(id)) as FlexibleDragItem;
					List<string> parts = prefab != null ? prefab.GetIngIds(id) : null;
					if (parts == null) continue;
					foreach (string part in parts) need[part] = (need.TryGetValue(part, out int n) ? n : 0) + 1;
				}
				else
				{
					need[id] = (need.TryGetValue(id, out int n) ? n : 0) + 1;
				}
			}
		}
		foreach (DragItem item in heldItems)
		{
			if (item == null) continue;
			string held = item.GetId();
			string cooked = rawToCooked.TryGetValue(held, out string made) ? made : held;
			have[cooked] = (have.TryGetValue(cooked, out int n) ? n : 0) + 1;
		}
	}
}
#endif
