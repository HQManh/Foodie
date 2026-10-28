using System.Collections.Generic;
using System.Text;
using CakeOrder.InGame;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class LevelPieceBook
	{
		private LevelInfo _info;

		private PieceSet _levelPieces = PieceSet.Empty;

		private readonly Dictionary<string, int> _levelFormDemand = new Dictionary<string, int>();

		private readonly Dictionary<string, int> _produced = new Dictionary<string, int>();

		private readonly Dictionary<string, int> _autoBuilt = new Dictionary<string, int>();

		private readonly List<PieceSet> _rescueGathered = new List<PieceSet>();

		private readonly Dictionary<string, int> _rescueTaken = new Dictionary<string, int>();

		private readonly List<string> _rescueInputs = new List<string>();

		public PieceSet LevelPieces => _levelPieces;

		public void Setup(LevelInfo info, IEnumerable<CustomerSpawnData> customers)
		{
			_info = info;
			_levelPieces = PieceSet.Empty;
			_levelFormDemand.Clear();
			_produced.Clear();
			_autoBuilt.Clear();
			if (info == null || customers == null)
			{
				return;
			}
			foreach (CustomerSpawnData customer in customers)
			{
				if (customer == null || customer.orders == null || customer.IsCleanDishStaff)
				{
					continue;
				}
				foreach (CustomerSingleOrderSpawnData order in customer.orders)
				{
					if (string.IsNullOrEmpty(order.recipe))
					{
						continue;
					}
					OrderSpec[] array = info.ConvertOrderData(order.recipe);
					for (int i = 0; i < array.Length; i++)
					{
						OrderSpec spec = array[i];
						if (!spec.HasPieces)
						{
							continue;
						}
						_levelPieces = _levelPieces.Add(spec.Pieces);
						int dishKey = info.DishKeyOfOrder(spec);
						foreach (var (kind, count) in spec.Pieces)
						{
							if (info.TryGetFormOf(dishKey, kind, out var formId))
							{
								Bump(_levelFormDemand, formId, count);
							}
						}
					}
				}
			}
		}

		public int LevelFormDemand(string formId)
		{
			return Get(_levelFormDemand, formId);
		}

		public bool TryGetForm(int dishKey, int pieceKind, out string formId)
		{
			formId = null;
			if (_info != null)
			{
				return _info.TryGetFormOf(dishKey, pieceKind, out formId);
			}
			return false;
		}

		public int CountMade(string id)
		{
			MessyController ins = MessyController.Ins;
			if (!ins || string.IsNullOrEmpty(id))
			{
				return 0;
			}
			int num = CountLoose(ins, id);
			int num2 = CountInBag(id);
			int num3 = CountOwedByStations(ins, id);
			int num4 = ((_info != null) ? _info.CountInboundFor(id) : 0);
			int num5 = CountHeldByStations(ins, id);
			return num2 + num + num3 + num4 + num5;
		}

		public int CountInBag(string id)
		{
			SpawnBagSaveMe active = SpawnBagSaveMe.Active;
			if ((bool)active)
			{
				return active.CountEntries(id);
			}
			return 0;
		}

		public int CountInbound(string id)
		{
			if (_info != null)
			{
				return _info.CountInboundFor(id);
			}
			return 0;
		}

		public int CountOwedByStations(string id)
		{
			MessyController ins = MessyController.Ins;
			if ((bool)ins)
			{
				return CountOwedByStations(ins, id);
			}
			return 0;
		}

		private static int CountLoose(MessyController messy, string id)
		{
			int num = 0;
			SpawnBagSaveMe active = SpawnBagSaveMe.Active;
			foreach (DragItem dragItem in messy.GetDragItems())
			{
				if ((bool)dragItem && dragItem.gameObject.activeInHierarchy && !dragItem.IsOnDishRow && !dragItem.DishControlled && (!active || !active.IsPreview(dragItem)) && dragItem.GetBaseId() == id)
				{
					num++;
				}
			}
			return num;
		}

		private static int CountOwedByStations(MessyController messy, string id)
		{
			int num = 0;
			foreach (CookingStation cookingStation in messy.GetCookingStations())
			{
				if ((bool)cookingStation && cookingStation.WorkingResultId == id)
				{
					num += cookingStation.OwedResults;
				}
			}
			return num;
		}

		private static int CountHeldByStations(MessyController messy, string id, string forResultId = null)
		{
			int num = 0;
			foreach (CookingStation cookingStation in messy.GetCookingStations())
			{
				if ((bool)cookingStation)
				{
					num += cookingStation.CountHeldInputs(id, forResultId);
				}
			}
			return num;
		}

		private int CountMadeFor(string id, string forResultId)
		{
			MessyController ins = MessyController.Ins;
			if (!ins || string.IsNullOrEmpty(id))
			{
				return 0;
			}
			int num = CountLoose(ins, id);
			int num2 = CountInBag(id);
			int num3 = CountOwedByStations(ins, id);
			int num4 = ((_info != null) ? _info.CountInboundFor(id) : 0);
			int num5 = num2 + num + num3 + num4;
			if (forResultId != null)
			{
				num5 += CountHeldByStations(ins, id, forResultId);
			}
			return num5;
		}

		public PieceSet FieldPieces()
		{
			return SumPieces((_info != null) ? _info.GetFieldItems() : null, skipDishRow: false);
		}

		public PieceSet GridPieces()
		{
			return SumPieces((_info != null) ? _info.GetGridItems() : null, skipDishRow: true);
		}

		public PieceSet OpenOrderMissing()
		{
			MessyController ins = MessyController.Ins;
			FCustomerLineHandle fCustomerLineHandle = (ins ? ins.LineHandle : null);
			if (_info != null && (bool)fCustomerLineHandle)
			{
				List<string> activeUnservedRecipes = fCustomerLineHandle.GetActiveUnservedRecipes();
				if (activeUnservedRecipes != null && activeUnservedRecipes.Count != 0)
				{
					PieceSet pieceSet = PieceSet.Empty;
					foreach (string item in activeUnservedRecipes)
					{
						if (_info.TryGetOrderPieces(item, out var pieces))
						{
							pieceSet = pieceSet.Add(pieces);
						}
					}
					if (!pieceSet.IsEmpty)
					{
						return pieceSet.Subtract(FieldPieces());
					}
				}
			}
			return PieceSet.Empty;
		}

		public bool OpenOrderWantsAsIs(string id, PieceSet missing)
		{
			if (_info != null)
			{
				PieceOffer idPieceOffer = _info.GetIdPieceOffer(id);
				if (idPieceOffer != null && missing.IntersectCount(idPieceOffer.pieces) != 0)
				{
					if (FlexibleId.IsFlexible(id))
					{
						return true;
					}
					MessyController ins = MessyController.Ins;
					FCustomerLineHandle fCustomerLineHandle = (ins ? ins.LineHandle : null);
					if ((bool)fCustomerLineHandle)
					{
						foreach (OrderSpec item in fCustomerLineHandle.GetActiveOpenOrderSpecs())
						{
							if (!item.HasPieces)
							{
								continue;
							}
							int dishKey = _info.DishKeyOfOrder(item);
							foreach (var (kind, _) in idPieceOffer.pieces)
							{
								if (missing[kind] != 0 && item.Pieces[kind] != 0 && (!_info.TryGetFormOf(dishKey, kind, out var formId) || formId == id))
								{
									return true;
								}
							}
						}
						return false;
					}
					return true;
				}
			}
			return false;
		}

		public bool TakeWantedAsIs(string id, ref PieceSet missing)
		{
			if (!missing.IsEmpty && OpenOrderWantsAsIs(id, missing))
			{
				PieceOffer idPieceOffer = _info?.GetIdPieceOffer(id);
				if (idPieceOffer != null)
				{
					missing = missing.Subtract(idPieceOffer.pieces);
				}
				return true;
			}
			return false;
		}

		private PieceSet SumPieces(IEnumerable<DragItem> items, bool skipDishRow)
		{
			PieceSet result = PieceSet.Empty;
			if (items != null)
			{
				foreach (DragItem item in items)
				{
					if ((bool)item && !item.isDirtyPlate && (!skipDishRow || !item.IsOnDishRow))
					{
						PieceOffer itemPieceOffer = _info.GetItemPieceOffer(item);
						if (itemPieceOffer != null)
						{
							result = result.Add(itemPieceOffer.pieces);
						}
					}
				}
			}
			return result;
		}

		public void CollectGridTakeables(List<DragItem> into)
		{
			into.Clear();
			if (_info == null)
			{
				return;
			}
			MessyController ins = MessyController.Ins;
			if (!ins)
			{
				return;
			}
			IEnumerable<DragItem> gridItems = _info.GetGridItems();
			if (gridItems == null)
			{
				return;
			}
			foreach (DragItem item in gridItems)
			{
				if ((bool)item && item.IsLandedInCell && !item.isDirtyPlate && !item.IsOnDishRow && !ins.IsBookedByShelf(item))
				{
					into.Add(item);
				}
			}
		}

		public void CollectBagEntries(List<string> into)
		{
			into.Clear();
			SpawnBagSaveMe active = SpawnBagSaveMe.Active;
			if (!active || active.IsEmpty || active.EntryCount <= 0)
			{
				return;
			}
			for (int i = 0; i < active.EntryCount; i++)
			{
				string text = active.EntryIdAt(i);
				if (!string.IsNullOrEmpty(text))
				{
					into.Add(text);
				}
			}
		}

		public void CollectBelt(List<IngredientState> into, bool frozenOnly = false)
		{
			into.Clear();
			MessyController ins = MessyController.Ins;
			IngredientSpawnerController ingredientSpawnerController = (ins ? ins.Spawner : null);
			if ((bool)ingredientSpawnerController)
			{
				ingredientSpawnerController.CollectTakableForFx(into, frozenOnly);
			}
		}

		public void CollectQueued(List<IngredientState> into)
		{
			into.Clear();
			MessyController ins = MessyController.Ins;
			IngredientSpawnerController ingredientSpawnerController = (ins ? ins.Spawner : null);
			if ((bool)ingredientSpawnerController)
			{
				ingredientSpawnerController.CollectPendingForFx(into);
			}
		}

		public void CollectQueuedHard(List<IngredientState> into)
		{
			into.Clear();
			MessyController ins = MessyController.Ins;
			IngredientSpawnerController ingredientSpawnerController = (ins ? ins.Spawner : null);
			if ((bool)ingredientSpawnerController)
			{
				ingredientSpawnerController.CollectPendingHardForFx(into);
			}
		}

		public void CollectOrphanPlates(List<ServePlate> into)
		{
			into.Clear();
			MessyController ins = MessyController.Ins;
			ServeShelfController serveShelfController = (ins ? ins.ServeShelf : null);
			if ((bool)serveShelfController)
			{
				serveShelfController.CollectOrphanPlatesForFx(into);
			}
		}

		public void CollectRawToFinishOpenOrders(List<IngredientState> into)
		{
			into.Clear();
			_rescueTaken.Clear();
			MessyController ins = MessyController.Ins;
			FCustomerLineHandle fCustomerLineHandle = (ins ? ins.LineHandle : null);
			RecipeConfigSO recipeConfig = (ins ? ins.recipeConfig : null);
			if (_info == null || !fCustomerLineHandle || !recipeConfig)
			{
				return;
			}
			List<OrderSpec> activeOpenOrderSpecs = fCustomerLineHandle.GetActiveOpenOrderSpecs();
			if (!ins.ServeShelf)
			{
				_rescueGathered.Clear();
			}
			else
			{
				ins.ServeShelf.GetGatheredPieces(activeOpenOrderSpecs, _rescueGathered);
			}
			for (int i = 0; i < activeOpenOrderSpecs.Count; i++)
			{
				OrderSpec orderSpec = activeOpenOrderSpecs[i];
				if (!orderSpec.HasPieces)
				{
					continue;
				}
				int dishKey = _info.DishKeyOfOrder(orderSpec);
				foreach (var (kind, count) in orderSpec.Pieces)
				{
					if (_info.TryGetFormOf(dishKey, kind, out var formId) || recipeConfig.TryGetPreparedOfPiece(kind, out formId))
					{
						int num = ((i < _rescueGathered.Count) ? _rescueGathered[i][kind] : 0);
						for (int need = count - num; need > 0; need--)
						{
							CollectRaw(recipeConfig, formId, kind, into, null);
						}
					}
				}
			}
		}

		private void CollectRaw(RecipeConfigSO config, string id, int piece, List<IngredientState> into, string forResultId)
		{
			_rescueTaken.TryGetValue(id, out var value);
			int num = CountMadeFor(id, forResultId);
			if (value < num)
			{
				_rescueTaken[id] = value + 1;
			}
			else if (!config.TryGetInputsOf(id, piece, _rescueInputs))
			{
				into.Add(new IngredientState(id, 1));
			}
			else
			{
				string[] array = _rescueInputs.ToArray();
				for (int i = 0; i < array.Length; i++)
				{
					CollectRaw(config, array[i], piece, into, id);
				}
			}
		}

		public void RecordProduced(string id, int count)
		{
			if (count > 0)
			{
				Bump(_produced, id, count);
			}
		}

		public void RecordAutoBuilt(string formId)
		{
			Bump(_autoBuilt, formId, 1);
		}

		public int Produced(string id)
		{
			return Get(_produced, id);
		}

		public int AutoBuilt(string id)
		{
			return Get(_autoBuilt, id);
		}

		public int LevelFormRemaining(string formId)
		{
			if (string.IsNullOrEmpty(formId))
			{
				return 0;
			}
			int num = Get(_levelFormDemand, formId);
			int num2 = Get(_produced, formId);
			int num3 = CountOwedByStations(formId);
			int num4 = ((_info != null) ? _info.CountInboundFor(formId) : 0);
			int num5 = Get(_autoBuilt, formId);
			return num - (num2 + num3 + num4 + num5);
		}

		public bool CanBuildForm(string formId, int alreadyPlanned)
		{
			return LevelFormRemaining(formId) - alreadyPlanned > 0;
		}

		public string DebugReport()
		{
			StringBuilder stringBuilder = new StringBuilder();
			stringBuilder.AppendLine(string.Format("[LevelPieceBook] level pieces: {0}", _levelPieces)); /* literal recovered by guess */
			stringBuilder.AppendLine("forms:"); /* literal recovered by guess */
			foreach (KeyValuePair<string, int> item in _levelFormDemand)
			{
				string key = item.Key;
				stringBuilder.AppendLine(string.Format("  {0}: demand={1} produced={2} owed={3}", key, item.Value, Get(_produced, key), CountOwedByStations(key)) + string.Format(" inbound={0} auto={1} remaining={2}", (_info != null) ? _info.CountInboundFor(key) : 0, Get(_autoBuilt, key), LevelFormRemaining(key))); /* literal recovered by guess */
			}
			return stringBuilder.ToString();
		}

		private static void Bump(Dictionary<string, int> into, string id, int by)
		{
			if (!string.IsNullOrEmpty(id))
			{
				into[id] = Get(into, id) + by;
			}
		}

		private static int Get(Dictionary<string, int> from, string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return 0;
			}
			if (!from.TryGetValue(id, out var value))
			{
				return 0;
			}
			return value;
		}
	}
}
