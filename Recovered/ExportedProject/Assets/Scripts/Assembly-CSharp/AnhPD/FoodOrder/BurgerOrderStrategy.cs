using System.Collections.Generic;
using CakeOrder.InGame;
using CakeOrder.InGame.Burger;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class BurgerOrderStrategy : OrderStrategy
	{
		[SerializeField]
		private int maxFillingsForDoubleBurger;

		[SerializeField]
		[Range(0f, 1f)]
		private float burgerBias;

		[Header("Random ở piece space")]
		[Tooltip("Số nhân TỐI ĐA của một burger sinh ngẫu nhiên (chưa kể bun).")]
		[SerializeField]
		private int maxRandomFillings;

		[Tooltip("Xác suất mỗi topping tuỳ chọn được thêm vào món (ớt/hành lá/sốt phô mai/đá).")]
		[SerializeField]
		[Range(0f, 1f)]
		private float toppingRate;

		private List<string> _listCanOrder;

		private string _flexibleId;

		private static readonly BurgerPiece[] ChickenTypes;

		private List<BurgerPiece> _availablePieces;

		private Dictionary<string, PieceOffer> _idOffers;

		private List<string> ListCanOrder => null;

		private string FlexibleId => null;

		private List<BurgerPiece> AvailablePieces => null;

		private Dictionary<string, PieceOffer> IdOffers => null;

		public override List<string> GetRandomListOrder()
		{
			return null;
		}

		private bool Has(BurgerPiece piece)
		{
			return false;
		}

		public override string[] GenerateRandomRecipes()
		{
			return null;
		}

		private static List<BurgerPiece> DecodePieces(string recipe)
		{
			return null;
		}

		private List<BurgerPiece> RollDish()
		{
			return null;
		}

		private bool HasAnyChicken()
		{
			return false;
		}

		private List<BurgerPiece> RollBurger()
		{
			return null;
		}

		private List<BurgerPiece> RollChicken()
		{
			return null;
		}

		private List<BurgerPiece> RollPotato()
		{
			return null;
		}

		private List<BurgerPiece> RollDrink()
		{
			return null;
		}

		private void AddOptional(List<BurgerPiece> dish, BurgerPiece piece)
		{
		}

		public override List<OrderSpec> GetItemOrderSpecs(DragItem item)
		{
			return null;
		}

		protected override string RandomFlexibleId(FlexibleDragItem prefab, List<string> allBaseIds)
		{
			return null;
		}

		public override OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			return null;
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			return null;
		}

		public override bool TryGetOrderPieces(string recipe, out PieceSet pieces)
		{
			pieces = default;
			return false;
		}

		private static Dictionary<string, PieceOffer> BuildIdOffers()
		{
			return null;
		}

		private static bool IsChickenSet(PieceSet pieces)
		{
			return false;
		}

		public override PieceOffer GetIdPieceOffer(string id)
		{
			return null;
		}

		private static PieceOffer BurgerOfferFromId(string id)
		{
			return null;
		}

		private static PieceOffer ChickenOfferFromId(string id)
		{
			return null;
		}

		public override PieceOffer GetItemPieceOffer(DragItem item)
		{
			return null;
		}

		public override bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			return false;
		}

		private void EnforceMaxOneFlexible(List<string> list)
		{
		}

		private void EnsureAtLeastOneFlexible(List<string> list)
		{
		}

		private string GetRandomNonFlexibleId()
		{
			return null;
		}

		private bool IsFlexibleId(string id)
		{
			return false;
		}
	}
}
