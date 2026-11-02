using System.Collections.Generic;
using CakeOrder.InGame.Burger;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleKFC : FlexibleDragItem
	{
		public enum KFCType
		{
			Breast = 0,
			Nugget = 1,
			Thigh = 2,
			Wing = 3
		}

		public enum KFCFlavor
		{
			Normal = 0,
			Spicy = 1
		}

		public enum KFCAddon
		{
			Cheese = 0,
			Chives = 1
		}

		[SerializeField]
		private KFCDisplay kfcDisplay;

		private KFCType _type;

		private KFCFlavor _flavor;

		private bool _hasCheese;

		private bool _hasChives;

		public KFCType Type => _type;

		public bool IsSpicy => _flavor == KFCFlavor.Spicy;

		public bool HasCheese => _hasCheese;

		public bool HasChives => _hasChives;

		public override PieceSet Pieces
		{
			get
			{
				if (!BurgerPieceTable.TryGetChickenPiece((int)_type, out var piece))
				{
					return PieceSet.Empty;
				}
				PieceSet result = PieceSet.One((int)piece);
				if (_flavor == KFCFlavor.Spicy)
				{
					result = result.Add((int)BurgerPiece.Chilly, 1);
				}
				if (_hasCheese)
				{
					result = result.Add((int)BurgerPiece.CheeseSauce, 1);
				}
				if (_hasChives)
				{
					result = result.Add((int)BurgerPiece.Chives, 1);
				}
				return result;
			}
		}

		private static bool TryGetPiece(string ingId, out BurgerPiece piece)
		{
			return BurgerPieceTable.TryGetPieceOfPreparedId(ingId, out piece);
		}

		private static BurgerPiece PieceOf(KFCAddon addon)
		{
			if (addon != KFCAddon.Cheese)
			{
				return BurgerPiece.Chives;
			}
			return BurgerPiece.CheeseSauce;
		}

		protected override bool TryGetIngIdOf<T>(T enumValue, out string id)
		{
			id = null;
			BurgerPiece piece;
			switch ((object)enumValue)
			{
			case KFCType type:
				if (!BurgerPieceTable.TryGetChickenPiece((int)type, out piece))
				{
					return false;
				}
				break;
			case KFCFlavor flavor:
				if (flavor != KFCFlavor.Spicy)
				{
					return false;
				}
				piece = BurgerPiece.Chilly;
				break;
			case KFCAddon addon:
				piece = PieceOf(addon);
				break;
			default:
				return false;
			}
			// Unlocked only when the level's recipe config actually offers a prepared ingredient for this piece.
			RecipeConfigSO config = PieceLookup.Config;
			return config != null && config.TryGetPreparedOfPiece((int)piece, out id) && !string.IsNullOrEmpty(id);
		}

		public override string GetId()
		{
			return BuildId(id, _type, _flavor, _hasCheese, _hasChives);
		}

		private string BuildId(KFCType type, KFCFlavor flavor, bool cheese, bool chives)
		{
			return BuildId(id, type, flavor, cheese, chives);
		}

		private static string BuildId(string baseId, KFCType type, KFCFlavor flavor, bool cheese, bool chives)
		{
			return string.Concat(new string[6]
			{
				baseId,
				"-flex-",
				FlexibleDragItem.ConvertIdToString((int)type),
				FlexibleDragItem.ConvertIdToString((int)flavor),
				FlexibleDragItem.ConvertIdToString(cheese ? 1 : 0),
				FlexibleDragItem.ConvertIdToString(chives ? 1 : 0)
			});
		}

		public override string ReferenceIdOf(string longId)
		{
			return BareIdOf(longId);
		}

		public static string BareIdOf(string longId)
		{
			if (BurgerPieceTable.TryGetChickenState(BurgerPieceTable.ChickenPiecesOfId(longId), out var typeCode, out var _, out var _, out var _))
			{
				return BuildId(FlexibleId.BaseOf(longId), (KFCType)typeCode, KFCFlavor.Normal, cheese: false, chives: false);
			}
			return longId;
		}

		public override void CombineInit(string firstIngId, string secondIngId)
		{
			ResetItem();
			_type = TypeFromCombine(firstIngId, secondIngId);
			MarkVisualDirty();
		}

		private static KFCType TypeFromCombine(string firstIngId, string secondIngId)
		{
			string[] array = new string[2] { firstIngId, secondIngId };
			int result = 0;
			for (int i = 0; i < array.Length; i++)
			{
				if (TryGetPiece(array[i], out var piece) && BurgerPieceTable.TryGetChickenTypeCode(piece, out var code))
				{
					result = code;
				}
			}
			return (KFCType)result;
		}

		public override PieceSet PredictCombinePieces(string firstIngId, string secondIngId)
		{
			KFCType type = TypeFromCombine(firstIngId, secondIngId);
			return BurgerPieceTable.ChickenPiecesOfId(BuildId(id, type, KFCFlavor.Normal, cheese: false, chives: false));
		}

		public override void AddIng(string ingId)
		{
			if (!TryGetPiece(ingId, out var piece))
			{
				return;
			}
			// A chicken piece decides which KFC this is; without this a dish gathered for an order stays the default type.
			if (BurgerPieceTable.TryGetChickenTypeCode(piece, out var typeCode))
			{
				_type = (KFCType)typeCode;
			}
			else if (piece == BurgerPiece.CheeseSauce)
			{
				_hasCheese = true;
			}
			else if (piece == BurgerPiece.Chives)
			{
				_hasChives = true;
			}
			else
			{
				if (piece != BurgerPiece.Chilly)
				{
					return;
				}
				_flavor = KFCFlavor.Spicy;
			}
			MarkVisualDirty();
		}

		protected override void RefreshVisual()
		{
			DisplayKfc();
		}

		private void DisplayKfc()
		{
			kfcDisplay.Display((int)_type, (int)_flavor, _hasCheese, _hasChives);
			base.transform.Appear(0.1f);
		}

		public override void Display(string longId)
		{
			Display(BurgerPieceTable.ChickenPiecesOfId(longId));
		}

		public void Display(PieceSet pieces)
		{
			if (BurgerPieceTable.TryGetChickenState(pieces, out var typeCode, out var spicy, out var cheese, out var chives))
			{
				_type = (KFCType)typeCode;
				_flavor = (KFCFlavor)(spicy ? 1 : 0);
				_hasCheese = cheese;
				_hasChives = chives;
				DisplayKfc();
			}
		}

		public override List<string> GetIngIds(string longId)
		{
			List<string> list = new List<string>();
			if (!BurgerPieceTable.TryGetChickenState(BurgerPieceTable.ChickenPiecesOfId(longId), out var typeCode, out var spicy, out var cheese, out var chives))
			{
				return list;
			}
			// TODO(unrecovered): the original uses literal ids (a distinct "plain" id set when no flavor/addon is present); prepared ids from BurgerPieceTable are used here.
			if (BurgerPieceTable.TryGetChickenPiece(typeCode, out var typePiece) && BurgerPieceTable.TryGetPreparedIdOf(typePiece, out var typeId))
			{
				list.Add(typeId);
			}
			if (spicy && BurgerPieceTable.TryGetPreparedIdOf(BurgerPiece.Chilly, out var spicyId))
			{
				list.Add(spicyId);
			}
			if (cheese && BurgerPieceTable.TryGetPreparedIdOf(BurgerPiece.CheeseSauce, out var cheeseId))
			{
				list.Add(cheeseId);
			}
			if (chives && BurgerPieceTable.TryGetPreparedIdOf(BurgerPiece.Chives, out var chivesId))
			{
				list.Add(chivesId);
			}
			return list;
		}

		protected override void ResetItem()
		{
			_type = KFCType.Breast;
			_flavor = KFCFlavor.Normal;
			_hasCheese = false;
			_hasChives = false;
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			List<KFCType> unlocked = GetUnlockedEnums<KFCType>();
			KFCType type = KFCType.Breast;
			if (unlocked.Count > 0)
			{
				type = unlocked[Random.Range(0, unlocked.Count)];
			}
			bool spicy = TryGetIngIdOf(KFCFlavor.Spicy, out var _) && Random.Range(0, 2) == 1;
			bool cheese = TryGetIngIdOf(KFCAddon.Cheese, out var _) && Random.Range(0, 2) == 1;
			bool chives = TryGetIngIdOf(KFCAddon.Chives, out var _) && Random.Range(0, 2) == 1;
			return BuildId(id, type, spicy ? KFCFlavor.Spicy : KFCFlavor.Normal, cheese, chives);
		}
	}
}
