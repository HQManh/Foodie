using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Serialization;

namespace AnhPD.FoodOrder
{
	[CreateAssetMenu(fileName = "RecipeConfigSO", menuName = "AnhPD/RecipeConfigSO")]
	public class RecipeConfigSO : ScriptableObject
	{
		public List<RecipeComponentIngredient> ingredients;

		public List<RecipeComponentStation> stations;

		public List<RecipeConfig> recipes;

		public float cookSpeed = 1f;

		[Tooltip("Order ingredient list shows belt-level inputs (cup + beans) instead of the dish's direct recipe inputs")]
		public bool ingredientListShowsRaw;

		public List<string> ingredientCanOrder;

		public string pieceEnumType;

		[Tooltip("Tên đầy đủ của enum loại món, vd CakeOrder.InGame.Burger.BurgerDish")]
		public string dishEnumType;

		[FormerlySerializedAs("dishIcons")]
		public List<RcDishInfo> dishInfos = new List<RcDishInfo>();

		private IngredientCombineLookup _combineLookup;

		private RandomOrderLookup _orderLookup;

		private Dictionary<string, RecipeComponent> _componentLookup = new Dictionary<string, RecipeComponent>();

		private bool _componentLookupBuilt;

		private Dictionary<string, RcPieceConfig> _pieceById;

		private Dictionary<int, RecipeComponentIngredient> _rawByPiece;

		private Dictionary<int, RecipeComponentIngredient> _preparedByPiece;

		private Dictionary<PieceSet, string> _preparedBySet;

		private readonly HashSet<string> _spawnWalked = new HashSet<string>();

		private Dictionary<string, List<string>> _anchorByResult;

		private HashSet<string> _anchorFollowers;

		private const int MaxLeafDepth = 8;

		public string PieceEnumStatus
		{
			get
			{
				// TODO(unrecovered): virtual call on the resolved System.Type (vtable slot 0x2f8, arg 0x300) is not identified; the getter's return value is unknown.
				return null;
			}
		}

		public string DishEnumStatus
		{
			get
			{
				// TODO(unrecovered): virtual call on the resolved System.Type (vtable slot 0x2f8, arg 0x300) is not identified; the getter's return value is unknown.
				return null;
			}
		}

		public static string DishLocId(int dishKind)
		{
			return "dish_" /* decoded from the metadata */ + dishKind.ToString();
		}

		public IEnumerable<string> GetIngredientIds()
		{
			if (ingredients != null)
			{
				return ingredients.Select(i => i.id);
			}
			// TODO(unrecovered): fallback when ingredients is null returns a static cached sequence (static block of this class, offset 0xb8); its type is not identified in this batch.
			return null;
		}

		public IEnumerable<string> GetStationIds()
		{
			if (stations != null)
			{
				return stations.Select(s => s.id);
			}
			// TODO(unrecovered): fallback when stations is null returns a static cached sequence (static block of this class, offset 0xb8); its type is not identified in this batch.
			return null;
		}

		public IEnumerable<ValueDropdownItem<int>> GetPieceKinds()
		{
			yield return new ValueDropdownItem<int>("None" /* literal recovered by guess */, -1);
			Type type = ResolvePieceEnum();
			if (type == null)
			{
				yield break;
			}
			foreach (string name in Enum.GetNames(type))
			{
				yield return new ValueDropdownItem<int>(name, (int)Enum.Parse(type, name));
			}
		}

		public IEnumerable<ValueDropdownItem<int>> GetDishKinds()
		{
			Type type = ResolveDishEnum();
			if (type == null)
			{
				yield return new ValueDropdownItem<int>("None" /* literal recovered by guess */, 0);
				yield break;
			}
			foreach (string name in Enum.GetNames(type))
			{
				yield return new ValueDropdownItem<int>(name, (int)Enum.Parse(type, name));
			}
		}

		private Type ResolvePieceEnum()
		{
			return ResolveEnum(pieceEnumType);
		}

		private Type ResolveDishEnum()
		{
			return ResolveEnum(dishEnumType);
		}

		private static Type ResolveEnum(string typeName)
		{
			string name = typeName != null ? typeName.Trim() : null;
			if (string.IsNullOrEmpty(name))
			{
				return null;
			}
			Type type = Type.GetType(name);
			if (type != null && type.IsEnum)
			{
				return type;
			}
			foreach (System.Reflection.Assembly asm in AppDomain.CurrentDomain.GetAssemblies())
			{
				type = asm.GetType(name);
				if (type != null && type.IsEnum)
				{
					return type;
				}
			}
			return null;
		}

		public string PieceName(int kind)
		{
			Type type = ResolvePieceEnum();
			if (type != null && Enum.IsDefined(type, kind))
			{
				return Enum.GetName(type, kind);
			}
			return kind.ToString();
		}

		public string DishName(int kind)
		{
			Type type = ResolveDishEnum();
			if (type != null && Enum.IsDefined(type, kind))
			{
				return Enum.GetName(type, kind);
			}
			return kind.ToString();
		}

		public int GetDishKind(string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return 0;
			}
			RecipeComponentIngredient ing = GetRecipeComponent(id) as RecipeComponentIngredient;
			return ing != null ? ing.dishKind : 0;
		}

		public RcDishInfo GetDishInfo(int dishKind)
		{
			if (dishInfos == null)
			{
				return null;
			}
			for (int i = 0; i < dishInfos.Count; i++)
			{
				RcDishInfo info = dishInfos[i];
				if (info != null && info.dishKind == dishKind)
				{
					return info;
				}
			}
			return null;
		}

		public RcDishInfo GetDishInfoOfId(string id)
		{
			return GetDishInfo(GetDishKind(id));
		}

		public bool TryGetDishBaseId(int dishKind, out string baseId)
		{
			RcDishInfo info = GetDishInfo(dishKind);
			baseId = info != null ? info.baseId : null;
			return !string.IsNullOrEmpty(baseId);
		}

		public bool TryGetDishKindOfBaseId(string baseId, out int dishKind)
		{
			dishKind = 0;
			if (dishInfos == null || string.IsNullOrEmpty(baseId))
			{
				return false;
			}
			foreach (RcDishInfo info in dishInfos)
			{
				if (info != null && info.baseId == baseId)
				{
					dishKind = info.dishKind;
					return true;
				}
			}
			return false;
		}

		public void CollectIdsOfDishKind(int dishKind, List<string> result)
		{
			result.Clear();
			if (dishKind == 0 || ingredients == null)
			{
				return;
			}
			foreach (RecipeComponentIngredient ing in ingredients)
			{
				if (ing != null && ing.dishKind == dishKind && !string.IsNullOrEmpty(ing.id))
				{
					result.Add(ing.id);
				}
			}
		}

		public IReadOnlyList<RcDishInfo> GetAllDishInfos()
		{
			// TODO(unrecovered): fallback branch when dishInfos is null reads a static cached list (DAT_091c02c0) whose type is not identified in this batch.
			return dishInfos;
		}

		public Sprite GetDishIconOfId(string id)
		{
			RcDishInfo info = GetDishInfo(GetDishKind(id));
			return info != null ? info.icon : null;
		}

		private void BuildPieceIndex()
		{
			if (_pieceById != null)
			{
				return;
			}
			_pieceById = new Dictionary<string, RcPieceConfig>();
			_rawByPiece = new Dictionary<int, RecipeComponentIngredient>();
			_preparedByPiece = new Dictionary<int, RecipeComponentIngredient>();
			_preparedBySet = new Dictionary<PieceSet, string>();
			if (ingredients == null)
			{
				return;
			}
			foreach (RecipeComponentIngredient ing in ingredients)
			{
				RcPieceConfig piece = (ing != null) ? ing.pieceConfig : null;
				if (piece == null || string.IsNullOrEmpty(ing.id))
				{
					continue;
				}
				_pieceById[ing.id] = piece;
				if (!piece.HasPiece || (int)piece.role == 3 || (int)piece.role == 4)
				{
					continue;
				}
				Dictionary<int, RecipeComponentIngredient> byPiece = ((int)piece.role == 1) ? _rawByPiece : _preparedByPiece;
				foreach (int kind in piece.pieces)
				{
					if (kind < 0)
					{
						continue;
					}
					if (byPiece.TryGetValue(kind, out RecipeComponentIngredient existing) && existing.pieceConfig.pieces.Count <= piece.pieces.Count)
					{
						continue;
					}
					byPiece[kind] = ing;
				}
				if ((int)piece.role == 2 || (int)piece.role == 4)
				{
					_preparedBySet[SetOf(piece.pieces)] = ing.id;
				}
			}
		}

		private static PieceSet SetOf(List<int> kinds)
		{
			PieceSet set = default;
			if (kinds == null)
			{
				return set;
			}
			foreach (int kind in kinds)
			{
				if (kind >= 0 && set[kind] == 0)
				{
					set = set.Add(kind, 1);
				}
			}
			return set;
		}

		public RcPieceConfig GetPieceConfig(string id)
		{
			BuildPieceIndex();
			if (string.IsNullOrEmpty(id) || _pieceById == null)
			{
				return null;
			}
			_pieceById.TryGetValue(id, out RcPieceConfig cfg);
			return cfg;
		}

		public bool IsRawIngredientId(string id)
		{
			RcPieceConfig cfg = GetPieceConfig(id);
			return cfg != null && (int)cfg.role == 1;
		}

		public bool TryGetRawOfPiece(int pieceKind, out string rawId)
		{
			BuildPieceIndex();
			if (_rawByPiece.TryGetValue(pieceKind, out RecipeComponentIngredient ing))
			{
				rawId = ing.id;
				return true;
			}
			rawId = null;
			return false;
		}

		public bool TryGetPreparedOfPiece(int pieceKind, out string preparedId)
		{
			BuildPieceIndex();
			if (_preparedByPiece.TryGetValue(pieceKind, out RecipeComponentIngredient ing))
			{
				preparedId = ing.id;
				return true;
			}
			preparedId = null;
			return false;
		}

		public bool TryGetSpawnIdOfPiece(int pieceKind, out string id)
		{
			if (TryGetRawOfPiece(pieceKind, out id))
			{
				return true;
			}
			return TryGetPreparedOfPiece(pieceKind, out id);
		}

		public void CollectSpawnIdsOfPiece(int pieceKind, List<string> result)
		{
			if (result == null)
			{
				return;
			}
			BuildPieceIndex();
			if (TryGetPreparedOfPiece(pieceKind, out string prepared))
			{
				_spawnWalked.Clear();
				CollectInputsOf(prepared, pieceKind, result);
			}
			else if (TryGetRawOfPiece(pieceKind, out string raw))
			{
				result.Add(raw);
			}
		}

		public bool TryGetInputsOf(string id, int pieceKind, List<string> inputs)
		{
			if (inputs == null)
			{
				return false;
			}
			inputs.Clear();
			if (string.IsNullOrEmpty(id) || recipes == null)
			{
				return false;
			}
			RcPieceConfig piece = GetPieceConfig(id);
			if (piece != null && (int)piece.role == 1)
			{
				return false;
			}
			RecipeConfig recipe = recipes.Find(r => r != null && r.resultId == id);
			if (recipe == null)
			{
				return false;
			}
			RecipeCombineConfig combo = PickCombination(recipe, pieceKind);
			if (combo == null || combo.components == null)
			{
				return false;
			}
			foreach (CombinationComponent comp in combo.components)
			{
				if (comp != null && comp.type == CombinationComponentType.Ingredient && !string.IsNullOrEmpty(comp.id))
				{
					inputs.Add(comp.id);
				}
			}
			return inputs.Count > 0;
		}

		private void CollectInputsOf(string id, int pieceKind, List<string> result)
		{
			RcPieceConfig piece = GetPieceConfig(id);
			if ((piece == null || (int)piece.role != 1) && recipes != null)
			{
				RecipeConfig recipe = recipes.Find(r => r != null && r.resultId == id);
				RecipeCombineConfig combo = (recipe != null) ? PickCombination(recipe, pieceKind) : null;
				if (combo != null && combo.components != null && _spawnWalked.Add(id))
				{
					int before = result.Count;
					foreach (CombinationComponent comp in combo.components)
					{
						if (comp != null && comp.type == CombinationComponentType.Ingredient && !string.IsNullOrEmpty(comp.id))
						{
							CollectInputsOf(comp.id, pieceKind, result);
						}
					}
					if (result.Count != before)
					{
						return;
					}
				}
			}
			result.Add(id);
		}

		private RecipeCombineConfig PickCombination(RecipeConfig recipe, int pieceKind)
		{
			if (recipe == null || recipe.combinations == null || recipe.combinations.Count == 0)
			{
				return null;
			}
			foreach (RecipeCombineConfig combo in recipe.combinations)
			{
				if (combo == null || combo.components == null)
				{
					continue;
				}
				foreach (CombinationComponent comp in combo.components)
				{
					if (comp == null || comp.type != CombinationComponentType.Ingredient)
					{
						continue;
					}
					RcPieceConfig piece = GetPieceConfig(comp.id);
					if (piece != null && piece.pieces != null && piece.pieces.Contains(pieceKind))
					{
						return combo;
					}
				}
			}
			return recipe.combinations[0];
		}

		public bool TryGetPreparedOfPieceSet(PieceSet want, out string preparedId)
		{
			BuildPieceIndex();
			return _preparedBySet.TryGetValue(want, out preparedId);
		}

		public IEnumerable<(string, PieceSet)> OfferingIngredients()
		{
			BuildPieceIndex();
			foreach (KeyValuePair<string, RcPieceConfig> pair in _pieceById)
			{
				if (pair.Value.Offers)
				{
					yield return (pair.Key, SetOf(pair.Value.pieces));
				}
			}
		}

		public IReadOnlyList<string> GetAnchorsOf(string resultId)
		{
			if (string.IsNullOrEmpty(resultId))
			{
				return null;
			}
			EnsureAnchorLookup();
			return _anchorByResult.TryGetValue(resultId, out List<string> anchors) ? anchors : null;
		}

		public bool WaitsForAnchor(string ingId)
		{
			if (string.IsNullOrEmpty(ingId))
			{
				return false;
			}
			EnsureAnchorLookup();
			return _anchorFollowers.Contains(ingId);
		}

		private void EnsureAnchorLookup()
		{
			if (_anchorByResult != null)
			{
				return;
			}
			_anchorByResult = new Dictionary<string, List<string>>();
			_anchorFollowers = new HashSet<string>();
			if (recipes == null)
			{
				return;
			}
			foreach (RecipeConfig recipe in recipes)
			{
				if (recipe == null || string.IsNullOrEmpty(recipe.resultId) || recipe.anchorIds == null)
				{
					continue;
				}
				List<string> ids = recipe.anchorIds.FindAll(s => !string.IsNullOrEmpty(s));
				if (ids.Count == 0)
				{
					continue;
				}
				_anchorByResult[recipe.resultId] = ids;
				foreach (string choice in recipe.AnchorChoices())
				{
					if (!ids.Contains(choice))
					{
						_anchorFollowers.Add(choice);
					}
				}
			}
		}

		public RecipeComponent GetRecipeComponent(string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return null;
			}
			if (!_componentLookupBuilt)
			{
				BuildComponentLookup();
			}
			if (_componentLookup.TryGetValue(id, out RecipeComponent comp))
			{
				return comp;
			}
			BuildComponentLookup();
			_componentLookup.TryGetValue(id, out comp);
			return comp;
		}

		private void BuildComponentLookup()
		{
			_componentLookup.Clear();
			AddToComponentLookup(ingredients);
			AddToComponentLookup(stations);
			_componentLookupBuilt = true;
		}

		private void AddToComponentLookup<T>(List<T> list) where T : RecipeComponent
		{
			// The decompiled generic body was not part of the extraction; every component with an id is registered under that id.
			if (list == null)
			{
				return;
			}
			foreach (T component in list)
			{
				if (component != null && !string.IsNullOrEmpty(component.id))
				{
					_componentLookup[component.id] = component;
				}
			}
		}

		private RecipeComponentIngredient GetIngredientComponent(string id)
		{
			RecipeComponentIngredient ing = GetRecipeComponent(id) as RecipeComponentIngredient;
			if (ing != null)
			{
				return ing;
			}
			UnityEngine.Debug.LogError("Recipe ingredient not found: " + id + " (known: " + string.Join(", ", _componentLookup.Keys) + ")" /* literal recovered by guess */, this);
			return null;
		}

		public RecipeComponentStation GetStationComponent(string id)
		{
			return GetRecipeComponent(id) as RecipeComponentStation;
		}

		public float GetStationCookDuration(string stationId, string resultId, float fallback = 2f)
		{
			float duration = fallback;
			RecipeComponentStation station = GetStationComponent(stationId);
			if (station != null)
			{
				duration = station.GetCookDuration(resultId);
			}
			float speed = (0.01f <= cookSpeed) ? cookSpeed : 0.01f;
			return duration / speed;
		}

		public bool IsRecipe(string id)
		{
			return recipes != null && recipes.Exists(r => r != null && r.resultId == id);
		}

		public bool TryGetCombineResult(string id1, string id2, out string result)
		{
			if (_combineLookup == null)
			{
				_combineLookup = new IngredientCombineLookup(recipes);
			}
			return _combineLookup.TryGetResult(id1, id2, out result);
		}

		public bool HasAnyCombine(string id)
		{
			if (_combineLookup == null)
			{
				_combineLookup = new IngredientCombineLookup(recipes);
			}
			return _combineLookup.HasAnyCombine(id);
		}

		public RcDisplayConfig GetIngredientDisplayConfig(string ingId)
		{
			RecipeComponentIngredient ing = GetIngredientComponent(ingId);
			return ing != null ? ing.displayConfig : null;
		}

		public List<List<RcDisplayConfig>> GetAllDisplayConfigInRecipe(string strId, bool includeStations = true)
		{
			List<List<RcDisplayConfig>> result = new List<List<RcDisplayConfig>>();
			if (recipes == null)
			{
				return result;
			}
			RecipeConfig recipe = recipes.Find(r => r != null && r.resultId == strId);
			if (recipe == null || recipe.combinations == null)
			{
				return result;
			}
			foreach (RecipeCombineConfig comb in recipe.combinations)
			{
				List<RcDisplayConfig> row = new List<RcDisplayConfig>();
				if (comb != null && comb.components != null)
				{
					foreach (CombinationComponent comp in comb.components)
					{
						if (comp == null)
						{
							continue;
						}
						if (!includeStations && comp.type == CombinationComponentType.Station)
						{
							continue;
						}
						RecipeComponent component = GetRecipeComponent(comp.id);
						if (component != null)
						{
							row.Add(component.displayConfig);
						}
					}
				}
				result.Add(row);
			}
			return result;
		}

		public bool TryGetDisplayIds(string resultId, List<string> result)
		{
			if (recipes == null)
			{
				return false;
			}
			RecipeConfig recipe = recipes.Find(r => r != null && r.resultId == resultId);
			if (recipe == null || recipe.displayIds == null || recipe.displayIds.Count == 0)
			{
				return false;
			}
			result.AddRange(recipe.displayIds);
			return true;
		}

		public bool TryCollectLeafInputs(string id, List<string> result)
		{
			int before = result.Count;
			CollectLeavesOf(id, result, 0);
			if (result.Count == before)
			{
				return false;
			}
			if (result.Count == before + 1)
			{
				return result[before] != id;
			}
			return true;
		}

		private void CollectLeavesOf(string id, List<string> result, int depth)
		{
			CombinationComponent[] components = null;
			RcPieceConfig piece = GetPieceConfig(id);
			if ((piece == null || (int)piece.role != 1) && recipes != null)
			{
				RecipeConfig recipe = recipes.Find(r => r != null && r.resultId == id);
				if (recipe != null && recipe.combinations != null && recipe.combinations.Count > 0 && recipe.combinations[0] != null)
				{
					components = recipe.combinations[0].components;
				}
			}
			if (components != null && depth < MaxLeafDepth)
			{
				int before = result.Count;
				foreach (CombinationComponent comp in components)
				{
					if (comp != null && comp.type == CombinationComponentType.Ingredient && !string.IsNullOrEmpty(comp.id))
					{
						CollectLeavesOf(comp.id, result, depth + 1);
					}
				}
				if (result.Count != before)
				{
					return;
				}
			}
			result.Add(id);
		}

		public List<RcDisplayConfig> GetDisplayConfig(List<string> listId)
		{
			List<RcDisplayConfig> result = new List<RcDisplayConfig>();
			if (listId == null)
			{
				return result;
			}
			foreach (string id in listId)
			{
				RecipeComponent comp = GetRecipeComponent(id);
				if (comp != null)
				{
					result.Add(comp.displayConfig);
					continue;
				}
				UnityEngine.Debug.LogError("RecipeConfigSO " + name + ": no component for id " + id /* literal recovered by guess */, this);
			}
			return result;
		}

		public string GetIngredientName(string id)
		{
			if (ingredients == null)
			{
				return null;
			}
			foreach (RecipeComponentIngredient ing in ingredients)
			{
				if (ing != null && ing.id == id)
				{
					return ing.ingSO != null ? ing.ingSO.LocalizedName : null;
				}
			}
			return null;
		}

		public DragItem GetIngredientPrefab(string id)
		{
			RecipeComponentIngredient ing = GetIngredientComponent(FlexibleId.BaseOf(id));
			return (ing != null && ing.gameplayConfig != null) ? ing.gameplayConfig.prefab : null;
		}

		public static string BaseIdOf(string id)
		{
			return FlexibleId.BaseOf(id);
		}

		public string GetRandomIngIdForOrder()
		{
			InitOrderLookup();
			return _orderLookup.GetRandomIngredientId();
		}

		public List<string> GetRandomListIngForOrder()
		{
			InitOrderLookup();
			return _orderLookup.GetRandomListIngredientId();
		}

		public List<string> GetListIngCanOrder()
		{
			return ingredientCanOrder;
		}

		private void InitOrderLookup()
		{
			if (_orderLookup != null)
			{
				return;
			}
			List<RecipeComponent> list = new List<RecipeComponent>();
			if (ingredientCanOrder != null)
			{
				foreach (string id in ingredientCanOrder)
				{
					RecipeComponent comp = GetRecipeComponent(id);
					if (comp != null)
					{
						list.Add(comp);
						continue;
					}
					UnityEngine.Debug.LogError("Order ingredient " + id + " has no recipe component on " + name /* literal recovered by guess */, this);
				}
			}
			_orderLookup = new RandomOrderLookup(list);
		}
	}
}
