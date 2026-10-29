using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;

namespace CakeOrder
{

[Obsolete]
public class MapCookingProcessConfig : MonoBehaviour, IMapDataConfig
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUpAfterSpawn_003Ed__12 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public string[] remoteConfigStrings;

		public MapCookingProcessConfig _003C_003E4__this;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	public const int KEY_INDEX_INGREDIENT_PROCESS = 0;

	public const int KEY_INDEX_RECIPE_PIECE = 1;

	public const int KEY_INDEX_DIRTY_OBJECT = 2;

	[Header("Ingredient")]
	[SerializeField]
	private IngredientProcessConfig[] _ingredientProcessConfigs;

	[SerializeField]
	private RecipePieceConfig[] _recipePieceConfigs;

	[SerializeField]
	private DirtyObjectConfig[] _dirtyObjectConfigs;

	public IngredientProcessConfig[] IngredientProcessConfigs => _ingredientProcessConfigs;

	public RecipePieceConfig[] RecipePieceConfigs => _recipePieceConfigs;

	public DirtyObjectConfig[] DirtyObjectConfigs => _dirtyObjectConfigs;

	public UniTask SetUpAfterSpawn(string mapId, params string[] remoteConfigStrings)
	{
		if (remoteConfigStrings != null && remoteConfigStrings.Length != 0)
		{
			if (!string.IsNullOrEmpty(remoteConfigStrings[KEY_INDEX_INGREDIENT_PROCESS]))
			{
				IngredientProcessConfig[] process = ImportProcessData(remoteConfigStrings[KEY_INDEX_INGREDIENT_PROCESS]);
				if (process == null)
				{
					UnityEngine.Debug.LogWarning("[MapCookingProcessConfig] Failed to import ingredient process data");
				}
				else
				{
					_ingredientProcessConfigs = process;
				}
			}
			if (remoteConfigStrings.Length > KEY_INDEX_RECIPE_PIECE && !string.IsNullOrEmpty(remoteConfigStrings[KEY_INDEX_RECIPE_PIECE]))
			{
				RecipePieceConfig[] pieces = ImportRecipePieceData(remoteConfigStrings[KEY_INDEX_RECIPE_PIECE]);
				if (pieces == null)
				{
					UnityEngine.Debug.LogWarning("[MapCookingProcessConfig] Failed to import recipe piece data");
				}
				else
				{
					_recipePieceConfigs = pieces;
				}
			}
		}
		return UniTask.CompletedTask;
	}

	private IngredientProcessConfig[] ImportProcessData(string data)
	{
		return null;
	}

	public int GetRecipePiecePriceByIndex(int index)
	{
		if (index < 0 || _recipePieceConfigs == null || index >= _recipePieceConfigs.Length)
		{
			UnityEngine.Debug.LogWarning("[MapCookingProcessConfig] No recipe piece at index " + index);
			return 0;
		}
		return _recipePieceConfigs[index].price;
	}

	public RecipePieceConfig[] ImportRecipePieceData(string data)
	{
		return null;
	}

	public DirtyObjectConfig[] ImportDirtyObjectData(string data)
	{
		return null;
	}
}
}
