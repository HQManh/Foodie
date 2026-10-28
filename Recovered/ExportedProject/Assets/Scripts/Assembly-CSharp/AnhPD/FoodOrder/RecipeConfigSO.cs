using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Serialization;

namespace AnhPD.FoodOrder
{
	[CreateAssetMenu(fileName = "RecipeConfigSO", menuName = "AnhPD/RecipeConfigSO")]
	public class RecipeConfigSO : ScriptableObject
	{
		[CompilerGenerated]
		private sealed class _003CGetDishKinds_003Ed__17 : IEnumerable<ValueDropdownItem<int>>, IEnumerable, IEnumerator<ValueDropdownItem<int>>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private ValueDropdownItem<int> _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public RecipeConfigSO _003C_003E4__this;

			private Type _003Ctype_003E5__2;

			private string[] _003C_003E7__wrap2;

			private int _003C_003E7__wrap3;

			ValueDropdownItem<int> IEnumerator<ValueDropdownItem<int>>.Current
			{
				[DebuggerHidden]
				get
				{
					return default;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CGetDishKinds_003Ed__17(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<ValueDropdownItem<int>> IEnumerable<ValueDropdownItem<int>>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		private sealed class _003CGetPieceKinds_003Ed__16 : IEnumerable<ValueDropdownItem<int>>, IEnumerable, IEnumerator<ValueDropdownItem<int>>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private ValueDropdownItem<int> _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public RecipeConfigSO _003C_003E4__this;

			private Type _003Ctype_003E5__2;

			private string[] _003C_003E7__wrap2;

			private int _003C_003E7__wrap3;

			ValueDropdownItem<int> IEnumerator<ValueDropdownItem<int>>.Current
			{
				[DebuggerHidden]
				get
				{
					return default;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CGetPieceKinds_003Ed__16(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<ValueDropdownItem<int>> IEnumerable<ValueDropdownItem<int>>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		private sealed class _003COfferingIngredients_003Ed__52 : IEnumerable<(string, PieceSet)>, IEnumerable, IEnumerator<(string, PieceSet)>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private (string id, PieceSet pieces) _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public RecipeConfigSO _003C_003E4__this;

			private Dictionary<string, RcPieceConfig>.Enumerator _003C_003E7__wrap1;

			(string, PieceSet) IEnumerator<(string, PieceSet)>.Current
			{
				[DebuggerHidden]
				get
				{
					return System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EStringid_002CAnhPD_002EFoodOrder_002EPieceSetpieces_0029_003E_002Eget_Current();
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003COfferingIngredients_003Ed__52(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			private void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			private (string, PieceSet) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EStringid_002CAnhPD_002EFoodOrder_002EPieceSetpieces_0029_003E_002Eget_Current()
			{
				return default;
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<(string, PieceSet)> IEnumerable<(string, PieceSet)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public List<RecipeComponentIngredient> ingredients;

		public List<RecipeComponentStation> stations;

		public List<RecipeConfig> recipes;

		public float cookSpeed;

		[Tooltip("Order ingredient list shows belt-level inputs (cup + beans) instead of the dish's direct recipe inputs")]
		public bool ingredientListShowsRaw;

		public List<string> ingredientCanOrder;

		public string pieceEnumType;

		[Tooltip("Tên đầy đủ của enum loại món, vd CakeOrder.InGame.Burger.BurgerDish")]
		public string dishEnumType;

		[FormerlySerializedAs("dishIcons")]
		public List<RcDishInfo> dishInfos;

		private IngredientCombineLookup _combineLookup;

		private RandomOrderLookup _orderLookup;

		private Dictionary<string, RecipeComponent> _componentLookup;

		private bool _componentLookupBuilt;

		private Dictionary<string, RcPieceConfig> _pieceById;

		private Dictionary<int, RecipeComponentIngredient> _rawByPiece;

		private Dictionary<int, RecipeComponentIngredient> _preparedByPiece;

		private Dictionary<PieceSet, string> _preparedBySet;

		private readonly HashSet<string> _spawnWalked;

		private Dictionary<string, List<string>> _anchorByResult;

		private HashSet<string> _anchorFollowers;

		private const int MaxLeafDepth = 8;

		public string PieceEnumStatus => null;

		public string DishEnumStatus => null;

		public static string DishLocId(int dishKind)
		{
			return null;
		}

		public IEnumerable<string> GetIngredientIds()
		{
			return null;
		}

		public IEnumerable<string> GetStationIds()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetPieceKinds_003Ed__16))]
		public IEnumerable<ValueDropdownItem<int>> GetPieceKinds()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetDishKinds_003Ed__17))]
		public IEnumerable<ValueDropdownItem<int>> GetDishKinds()
		{
			return null;
		}

		private Type ResolvePieceEnum()
		{
			return null;
		}

		private Type ResolveDishEnum()
		{
			return null;
		}

		private static Type ResolveEnum(string typeName)
		{
			return null;
		}

		public string PieceName(int kind)
		{
			return null;
		}

		public string DishName(int kind)
		{
			return null;
		}

		public int GetDishKind(string id)
		{
			return 0;
		}

		public RcDishInfo GetDishInfo(int dishKind)
		{
			return null;
		}

		public RcDishInfo GetDishInfoOfId(string id)
		{
			return null;
		}

		public bool TryGetDishBaseId(int dishKind, out string baseId)
		{
			baseId = null;
			return false;
		}

		public bool TryGetDishKindOfBaseId(string baseId, out int dishKind)
		{
			dishKind = default;
			return false;
		}

		public void CollectIdsOfDishKind(int dishKind, List<string> result)
		{
		}

		public IReadOnlyList<RcDishInfo> GetAllDishInfos()
		{
			return null;
		}

		public Sprite GetDishIconOfId(string id)
		{
			return null;
		}

		private void BuildPieceIndex()
		{
		}

		private static PieceSet SetOf(List<int> kinds)
		{
			return default;
		}

		public RcPieceConfig GetPieceConfig(string id)
		{
			return null;
		}

		public bool IsRawIngredientId(string id)
		{
			return false;
		}

		public bool TryGetRawOfPiece(int pieceKind, out string rawId)
		{
			rawId = null;
			return false;
		}

		public bool TryGetPreparedOfPiece(int pieceKind, out string preparedId)
		{
			preparedId = null;
			return false;
		}

		public bool TryGetSpawnIdOfPiece(int pieceKind, out string id)
		{
			id = null;
			return false;
		}

		public void CollectSpawnIdsOfPiece(int pieceKind, List<string> result)
		{
		}

		public bool TryGetInputsOf(string id, int pieceKind, List<string> inputs)
		{
			return false;
		}

		private void CollectInputsOf(string id, int pieceKind, List<string> result)
		{
		}

		private RecipeCombineConfig PickCombination(RecipeConfig recipe, int pieceKind)
		{
			return null;
		}

		public bool TryGetPreparedOfPieceSet(PieceSet want, out string preparedId)
		{
			preparedId = null;
			return false;
		}

		[IteratorStateMachine(typeof(_003COfferingIngredients_003Ed__52))]
		public IEnumerable<(string, PieceSet)> OfferingIngredients()
		{
			return null;
		}

		public IReadOnlyList<string> GetAnchorsOf(string resultId)
		{
			return null;
		}

		public bool WaitsForAnchor(string ingId)
		{
			return false;
		}

		private void EnsureAnchorLookup()
		{
		}

		public RecipeComponent GetRecipeComponent(string id)
		{
			return null;
		}

		private void BuildComponentLookup()
		{
		}

		private void AddToComponentLookup<T>(List<T> list) where T : RecipeComponent
		{
		}

		private RecipeComponentIngredient GetIngredientComponent(string id)
		{
			return null;
		}

		public RecipeComponentStation GetStationComponent(string id)
		{
			return null;
		}

		public float GetStationCookDuration(string stationId, string resultId, float fallback = 2f)
		{
			return 0f;
		}

		public bool IsRecipe(string id)
		{
			return false;
		}

		public bool TryGetCombineResult(string id1, string id2, out string result)
		{
			result = null;
			return false;
		}

		public bool HasAnyCombine(string id)
		{
			return false;
		}

		public RcDisplayConfig GetIngredientDisplayConfig(string ingId)
		{
			return null;
		}

		public List<List<RcDisplayConfig>> GetAllDisplayConfigInRecipe(string strId, bool includeStations = true)
		{
			return null;
		}

		public bool TryGetDisplayIds(string resultId, List<string> result)
		{
			return false;
		}

		public bool TryCollectLeafInputs(string id, List<string> result)
		{
			return false;
		}

		private void CollectLeavesOf(string id, List<string> result, int depth)
		{
		}

		public List<RcDisplayConfig> GetDisplayConfig(List<string> listId)
		{
			return null;
		}

		public string GetIngredientName(string id)
		{
			return null;
		}

		public DragItem GetIngredientPrefab(string id)
		{
			return null;
		}

		public static string BaseIdOf(string id)
		{
			return null;
		}

		public string GetRandomIngIdForOrder()
		{
			return null;
		}

		public List<string> GetRandomListIngForOrder()
		{
			return null;
		}

		public List<string> GetListIngCanOrder()
		{
			return null;
		}

		private void InitOrderLookup()
		{
		}
	}
}
