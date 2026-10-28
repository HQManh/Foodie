using System;
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
				Kind = kind;
				StandaloneId = standaloneId;
			}
		}

		/* literal ids recovered by guess */
		private static readonly Dictionary<BurgerPiece, PieceInfo> PieceMap = new Dictionary<BurgerPiece, PieceInfo>
		{
			{
				BurgerPiece.Bun,
				new PieceInfo(PieceKind.BurgerIngredient, "bun")
			},
			{
				BurgerPiece.Lettuce,
				new PieceInfo(PieceKind.BurgerIngredient, "lettuce")
			},
			{
				BurgerPiece.Patty,
				new PieceInfo(PieceKind.BurgerIngredient, "patty")
			},
			{
				BurgerPiece.Onion,
				new PieceInfo(PieceKind.BurgerIngredient, "onion")
			},
			{
				BurgerPiece.Tomato,
				new PieceInfo(PieceKind.BurgerIngredient, "tomato")
			},
			{
				BurgerPiece.Cheese,
				new PieceInfo(PieceKind.BurgerIngredient, "cheese")
			},
			{
				BurgerPiece.Egg,
				new PieceInfo(PieceKind.BurgerIngredient, "egg")
			},
			{
				BurgerPiece.Soda,
				new PieceInfo(PieceKind.Drink, "soda")
			},
			{
				BurgerPiece.Ice,
				new PieceInfo(PieceKind.Drink, "ice")
			},
			{
				BurgerPiece.ChickenBreast,
				new PieceInfo(PieceKind.Chicken, null)
			},
			{
				BurgerPiece.ChickenNugget,
				new PieceInfo(PieceKind.Chicken, null)
			},
			{
				BurgerPiece.ChickenThigh,
				new PieceInfo(PieceKind.Chicken, null)
			},
			{
				BurgerPiece.ChickenWing,
				new PieceInfo(PieceKind.Chicken, null)
			},
			{
				BurgerPiece.Chilly,
				new PieceInfo(PieceKind.ChickenFlavor, "chilly")
			},
			{
				BurgerPiece.Chives,
				new PieceInfo(PieceKind.Topping, "chives")
			},
			{
				BurgerPiece.CheeseSauce,
				new PieceInfo(PieceKind.Topping, "cheese_sauce")
			},
			{
				BurgerPiece.Potato,
				new PieceInfo(PieceKind.SubDish, "potato")
			}
		};

		private static readonly Dictionary<FlexibleBurger.FillingType, BurgerPiece> FillingToPiece = new Dictionary<FlexibleBurger.FillingType, BurgerPiece>
		{
			{
				FlexibleBurger.FillingType.Bun,
				BurgerPiece.Bun
			},
			{
				FlexibleBurger.FillingType.Lettuce,
				BurgerPiece.Lettuce
			},
			{
				FlexibleBurger.FillingType.BeefPatty,
				BurgerPiece.Patty
			},
			{
				FlexibleBurger.FillingType.RedOnion,
				BurgerPiece.Onion
			},
			{
				FlexibleBurger.FillingType.Tomato,
				BurgerPiece.Tomato
			},
			{
				FlexibleBurger.FillingType.Cheese,
				BurgerPiece.Cheese
			},
			{
				FlexibleBurger.FillingType.Egg,
				BurgerPiece.Egg
			}
		};

		private static Dictionary<BurgerPiece, FlexibleBurger.FillingType> _pieceToFilling;

		public const string BurgerBaseId = "burger";

		public const string ChickenBaseId = "chicken_kfc";

		private static readonly Dictionary<BurgerPiece, int> ChickenTypeCode = new Dictionary<BurgerPiece, int>
		{
			{
				BurgerPiece.ChickenBreast,
				0
			},
			{
				BurgerPiece.ChickenNugget,
				1
			},
			{
				BurgerPiece.ChickenThigh,
				2
			},
			{
				BurgerPiece.ChickenWing,
				3
			}
		};

		private static Dictionary<int, BurgerPiece> _chickenPieceByCode;

		private static readonly int FillingTypeCount = Enum.GetValues(typeof(FlexibleBurger.FillingType)).Length;

		private static RecipeConfigSO Config => PieceLookup.Config;

		private static Dictionary<BurgerPiece, FlexibleBurger.FillingType> PieceToFilling
		{
			get
			{
				if (_pieceToFilling == null)
				{
					_pieceToFilling = new Dictionary<BurgerPiece, FlexibleBurger.FillingType>();
					foreach (KeyValuePair<FlexibleBurger.FillingType, BurgerPiece> item in FillingToPiece)
					{
						_pieceToFilling.Add(item.Value, item.Key);
					}
				}
				return _pieceToFilling;
			}
		}

		public static bool TryGetPieceOfPreparedId(string preparedId, out BurgerPiece piece)
		{
			piece = BurgerPiece.Bun;
			RecipeConfigSO config = PieceLookup.Config;
			if (config != null)
			{
				RcPieceConfig pieceConfig = config.GetPieceConfig(preparedId);
				if (pieceConfig != null && pieceConfig.HasPiece && pieceConfig.pieces.Count == 1)
				{
					piece = (BurgerPiece)pieceConfig.pieces[0];
					return true;
				}
			}
			return false;
		}

		public static bool TryGetPreparedIdOf(BurgerPiece piece, out string preparedId)
		{
			string text;
			if (KindOf(piece) == PieceKind.Chicken)
			{
				text = PreparedIdOfChicken(piece);
			}
			else
			{
				text = null;
				if (PieceLookup.Config != null)
				{
					if (!PieceLookup.Config.TryGetPreparedOfPiece((int)piece, out var preparedId2))
					{
						preparedId2 = null;
					}
					text = preparedId2;
				}
			}
			preparedId = text;
			return !string.IsNullOrEmpty(preparedId);
		}

		private static string PreparedIdOfChicken(BurgerPiece piece)
		{
			return BuildChickenId(piece, spicy: false, cheese: false, chives: false);
		}

		public static bool TryGetPieceInfo(BurgerPiece piece, out PieceInfo info)
		{
			return PieceMap.TryGetValue(piece, out info);
		}

		public static bool IsKnownPiece(BurgerPiece piece)
		{
			return PieceMap.ContainsKey(piece);
		}

		public static PieceKind KindOf(BurgerPiece piece)
		{
			if (!PieceMap.TryGetValue(piece, out var value))
			{
				return PieceKind.BurgerIngredient;
			}
			return value.Kind;
		}

		public static bool TryGetChickenTypeCode(BurgerPiece piece, out int code)
		{
			return ChickenTypeCode.TryGetValue(piece, out code);
		}

		public static bool TryGetChickenPiece(int code, out BurgerPiece piece)
		{
			if (_chickenPieceByCode == null)
			{
				_chickenPieceByCode = new Dictionary<int, BurgerPiece>();
				foreach (KeyValuePair<BurgerPiece, int> item in ChickenTypeCode)
				{
					_chickenPieceByCode.Add(item.Value, item.Key);
				}
			}
			return _chickenPieceByCode.TryGetValue(code, out piece);
		}

		public static string BuildChickenId(BurgerPiece typePiece, bool spicy, bool cheese, bool chives)
		{
			if (!ChickenTypeCode.TryGetValue(typePiece, out var value))
			{
				return null;
			}
			return string.Concat(new string[5]
			{
				ChickenBaseId + "-flex-",
				FlexibleDragItem.ConvertIdToString(value),
				FlexibleDragItem.ConvertIdToString(spicy ? 1 : 0),
				FlexibleDragItem.ConvertIdToString(cheese ? 1 : 0),
				FlexibleDragItem.ConvertIdToString(chives ? 1 : 0)
			});
		}

		public static PieceSet ChickenPiecesOfId(string id)
		{
			if (!string.IsNullOrEmpty(id) && id.StartsWith(ChickenBaseId + "-flex-"))
			{
				List<int> list = FlexibleId.Parts(id);
				if (list.Count > 3 && TryGetChickenPiece(list[0], out var piece))
				{
					PieceSet result = PieceSet.One((int)piece);
					if (list[1] > 0)
					{
						result = result.Add(14);
					}
					if (list[2] > 0)
					{
						result = result.Add(16);
					}
					if (list[3] > 0)
					{
						result = result.Add(15);
					}
					return result;
				}
			}
			return PieceSet.Empty;
		}

		public static bool TryGetChickenState(PieceSet pieces, out int typeCode, out bool spicy, out bool cheese, out bool chives)
		{
			typeCode = -1;
			chives = false;
			cheese = false;
			spicy = false;
			foreach (var (kind, count) in pieces)
			{
				if (TryGetChickenTypeCode((BurgerPiece)kind, out var code))
				{
					typeCode = code;
					break;
				}
			}
			if (typeCode >= 0)
			{
				spicy = pieces[14] > 0;
				cheese = pieces[16] > 0;
				chives = pieces[15] > 0;
			}
			return typeCode >= 0;
		}

		public static bool TryGetPiece(FlexibleBurger.FillingType filling, out BurgerPiece piece)
		{
			return FillingToPiece.TryGetValue(filling, out piece);
		}

		public static bool TryGetFilling(BurgerPiece piece, out FlexibleBurger.FillingType filling)
		{
			return PieceToFilling.TryGetValue(piece, out filling);
		}

		public static bool TryGetFilling(string preparedId, out FlexibleBurger.FillingType filling)
		{
			filling = FlexibleBurger.FillingType.Bun;
			RecipeConfigSO config = PieceLookup.Config;
			if (config != null)
			{
				RcPieceConfig pieceConfig = config.GetPieceConfig(preparedId);
				if (pieceConfig != null && pieceConfig.role != PieceRole.Raw && TryGetPieceOfPreparedId(preparedId, out var piece))
				{
					return PieceToFilling.TryGetValue(piece, out filling);
				}
			}
			return false;
		}

		public static bool TryGetPreparedId(FlexibleBurger.FillingType filling, out string id)
		{
			id = null;
			if (!FillingToPiece.TryGetValue(filling, out var value))
			{
				return false;
			}
			return TryGetPreparedIdOf(value, out id);
		}

		public static string BurgerCodeOf(BurgerPiece piece)
		{
			if (piece != BurgerPiece.Bun && PieceToFilling.TryGetValue(piece, out var value))
			{
				return FlexibleDragItem.ConvertIdToString((int)value);
			}
			return string.Empty;
		}

		public static void InterleaveFillings(IReadOnlyList<FlexibleBurger.FillingType> src, List<FlexibleBurger.FillingType> dest)
		{
			dest.Clear();
			if (src.Count == 0)
			{
				return;
			}
			int[] array = new int[FillingTypeCount];
			for (int i = 0; i < src.Count; i++)
			{
				int num = (int)src[i];
				if (num >= 0 && num < array.Length)
				{
					array[num]++;
				}
			}
			int num2 = 0;
			bool flag = false;
			while (true)
			{
				if (num2 >= array.Length)
				{
					num2 = 0;
					bool num3 = !flag;
					flag = false;
					if (num3)
					{
						break;
					}
				}
				if (array[num2] > 0)
				{
					array[num2]--;
					dest.Add((FlexibleBurger.FillingType)num2);
					flag = true;
				}
				num2++;
			}
		}

		public static List<FlexibleBurger.FillingType> FillingsOf(PieceSet pieces)
		{
			List<FlexibleBurger.FillingType> list = new List<FlexibleBurger.FillingType>();
			foreach (var (kind, count) in pieces)
			{
				if (kind != 0 && PieceToFilling.TryGetValue((BurgerPiece)kind, out var value))
				{
					for (int i = 0; i < count; i++)
					{
						list.Add(value);
					}
				}
			}
			list.Sort();
			return list;
		}

		public static PieceSet BurgerPiecesOfId(string id)
		{
			PieceSet result = PieceSet.One(0);
			foreach (int item in FlexibleId.Parts(id))
			{
				if (FillingToPiece.TryGetValue((FlexibleBurger.FillingType)item, out var value))
				{
					result = result.Add((int)value);
				}
			}
			return result;
		}

		public static List<FlexibleBurger.FillingType> FillingsOfId(string id)
		{
			return FillingsOf(BurgerPiecesOfId(id));
		}
	}
}
