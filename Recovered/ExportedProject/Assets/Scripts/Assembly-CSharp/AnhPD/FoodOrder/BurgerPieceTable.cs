using System.Collections.Generic;
using CakeOrder.InGame.Burger;

namespace AnhPD.FoodOrder
{
	public static class BurgerPieceTable
	{
		public enum PieceKind
		{
			BurgerIngredient = 0,
			Chicken = 1,
			ChickenFlavor = 2,
			Topping = 3,
			SubDish = 4,
			Drink = 5
		}

		public readonly struct PieceInfo
		{
			public readonly PieceKind Kind;

			public readonly string StandaloneId;

			public PieceInfo(PieceKind kind, string standaloneId)
			{
				Kind = PieceKind.BurgerIngredient;
				StandaloneId = null;
			}
		}

		private static readonly Dictionary<BurgerPiece, PieceInfo> PieceMap;

		private static readonly Dictionary<FlexibleBurger.FillingType, BurgerPiece> FillingToPiece;

		private static Dictionary<BurgerPiece, FlexibleBurger.FillingType> _pieceToFilling;

		public const string BurgerBaseId = "burger";

		public const string ChickenBaseId = "chicken_kfc";

		private static readonly Dictionary<BurgerPiece, int> ChickenTypeCode;

		private static Dictionary<int, BurgerPiece> _chickenPieceByCode;

		private static readonly int FillingTypeCount;

		private static RecipeConfigSO Config => null;

		private static Dictionary<BurgerPiece, FlexibleBurger.FillingType> PieceToFilling => null;

		public static bool TryGetPieceOfPreparedId(string preparedId, out BurgerPiece piece)
		{
			piece = default;
			return false;
		}

		public static bool TryGetPreparedIdOf(BurgerPiece piece, out string preparedId)
		{
			preparedId = null;
			return false;
		}

		private static string PreparedIdOfChicken(BurgerPiece piece)
		{
			return null;
		}

		public static bool TryGetPieceInfo(BurgerPiece piece, out PieceInfo info)
		{
			info = default;
			return false;
		}

		public static bool IsKnownPiece(BurgerPiece piece)
		{
			return false;
		}

		public static PieceKind KindOf(BurgerPiece piece)
		{
			return PieceKind.BurgerIngredient;
		}

		public static bool TryGetChickenTypeCode(BurgerPiece piece, out int code)
		{
			code = default;
			return false;
		}

		public static bool TryGetChickenPiece(int code, out BurgerPiece piece)
		{
			piece = default;
			return false;
		}

		public static string BuildChickenId(BurgerPiece typePiece, bool spicy, bool cheese, bool chives)
		{
			return null;
		}

		public static PieceSet ChickenPiecesOfId(string id)
		{
			return default;
		}

		public static bool TryGetChickenState(PieceSet pieces, out int typeCode, out bool spicy, out bool cheese, out bool chives)
		{
			typeCode = default;
			spicy = default;
			cheese = default;
			chives = default;
			return false;
		}

		public static bool TryGetPiece(FlexibleBurger.FillingType filling, out BurgerPiece piece)
		{
			piece = default;
			return false;
		}

		public static bool TryGetFilling(BurgerPiece piece, out FlexibleBurger.FillingType filling)
		{
			filling = default;
			return false;
		}

		public static bool TryGetFilling(string preparedId, out FlexibleBurger.FillingType filling)
		{
			filling = default;
			return false;
		}

		public static bool TryGetPreparedId(FlexibleBurger.FillingType filling, out string id)
		{
			id = null;
			return false;
		}

		public static string BurgerCodeOf(BurgerPiece piece)
		{
			return null;
		}

		public static void InterleaveFillings(IReadOnlyList<FlexibleBurger.FillingType> src, List<FlexibleBurger.FillingType> dest)
		{
		}

		public static List<FlexibleBurger.FillingType> FillingsOf(PieceSet pieces)
		{
			return null;
		}

		public static PieceSet BurgerPiecesOfId(string id)
		{
			return default;
		}

		public static List<FlexibleBurger.FillingType> FillingsOfId(string id)
		{
			return null;
		}
	}
}
