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

		public KFCType Type => KFCType.Breast;

		public bool IsSpicy => false;

		public bool HasCheese => false;

		public bool HasChives => false;

		public override PieceSet Pieces => default;

		private static bool TryGetPiece(string ingId, out BurgerPiece piece)
		{
			piece = default;
			return false;
		}

		private static BurgerPiece PieceOf(KFCAddon addon)
		{
			return BurgerPiece.Bun;
		}

		protected override bool TryGetIngIdOf<T>(T enumValue, out string id)
		{
			id = null;
			return false;
		}

		public override string GetId()
		{
			return null;
		}

		private string BuildId(KFCType type, KFCFlavor flavor, bool cheese, bool chives)
		{
			return null;
		}

		private static string BuildId(string baseId, KFCType type, KFCFlavor flavor, bool cheese, bool chives)
		{
			return null;
		}

		public override string ReferenceIdOf(string longId)
		{
			return null;
		}

		public static string BareIdOf(string longId)
		{
			return null;
		}

		public override void CombineInit(string firstIngId, string secondIngId)
		{
		}

		private static KFCType TypeFromCombine(string firstIngId, string secondIngId)
		{
			return KFCType.Breast;
		}

		public override PieceSet PredictCombinePieces(string firstIngId, string secondIngId)
		{
			return default;
		}

		public override void AddIng(string ingId)
		{
		}

		protected override void RefreshVisual()
		{
		}

		private void DisplayKfc()
		{
		}

		public override void Display(string longId)
		{
		}

		public void Display(PieceSet pieces)
		{
		}

		public override List<string> GetIngIds(string longId)
		{
			return null;
		}

		protected override void ResetItem()
		{
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return null;
		}
	}
}
