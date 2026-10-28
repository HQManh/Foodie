using System.Collections.Generic;
using CakeOrder.InGame;

namespace AnhPD.FoodOrder
{
	public class LevelPieceBook
	{
		private LevelInfo _info;

		private PieceSet _levelPieces;

		private readonly Dictionary<string, int> _levelFormDemand;

		private readonly Dictionary<string, int> _produced;

		private readonly Dictionary<string, int> _autoBuilt;

		private readonly List<PieceSet> _rescueGathered;

		private readonly Dictionary<string, int> _rescueTaken;

		private readonly List<string> _rescueInputs;

		public PieceSet LevelPieces => default;

		public void Setup(LevelInfo info, IEnumerable<CustomerSpawnData> customers)
		{
		}

		public int LevelFormDemand(string formId)
		{
			return 0;
		}

		public bool TryGetForm(int dishKey, int pieceKind, out string formId)
		{
			formId = null;
			return false;
		}

		public int CountMade(string id)
		{
			return 0;
		}

		public int CountInBag(string id)
		{
			return 0;
		}

		public int CountInbound(string id)
		{
			return 0;
		}

		public int CountOwedByStations(string id)
		{
			return 0;
		}

		private static int CountLoose(MessyController messy, string id)
		{
			return 0;
		}

		private static int CountOwedByStations(MessyController messy, string id)
		{
			return 0;
		}

		private static int CountHeldByStations(MessyController messy, string id, string forResultId = null)
		{
			return 0;
		}

		private int CountMadeFor(string id, string forResultId)
		{
			return 0;
		}

		public PieceSet FieldPieces()
		{
			return default;
		}

		public PieceSet GridPieces()
		{
			return default;
		}

		public PieceSet OpenOrderMissing()
		{
			return default;
		}

		public bool OpenOrderWantsAsIs(string id, PieceSet missing)
		{
			return false;
		}

		public bool TakeWantedAsIs(string id, ref PieceSet missing)
		{
			return false;
		}

		private PieceSet SumPieces(IEnumerable<DragItem> items, bool skipDishRow)
		{
			return default;
		}

		public void CollectGridTakeables(List<DragItem> into)
		{
		}

		public void CollectBagEntries(List<string> into)
		{
		}

		public void CollectBelt(List<IngredientState> into, bool frozenOnly = false)
		{
		}

		public void CollectQueued(List<IngredientState> into)
		{
		}

		public void CollectQueuedHard(List<IngredientState> into)
		{
		}

		public void CollectOrphanPlates(List<ServePlate> into)
		{
		}

		public void CollectRawToFinishOpenOrders(List<IngredientState> into)
		{
		}

		private void CollectRaw(RecipeConfigSO config, string id, int piece, List<IngredientState> into, string forResultId)
		{
		}

		public void RecordProduced(string id, int count)
		{
		}

		public void RecordAutoBuilt(string formId)
		{
		}

		public int Produced(string id)
		{
			return 0;
		}

		public int AutoBuilt(string id)
		{
			return 0;
		}

		public int LevelFormRemaining(string formId)
		{
			return 0;
		}

		public bool CanBuildForm(string formId, int alreadyPlanned)
		{
			return false;
		}

		public string DebugReport()
		{
			return null;
		}

		private static void Bump(Dictionary<string, int> into, string id, int by)
		{
		}

		private static int Get(Dictionary<string, int> from, string id)
		{
			return 0;
		}
	}
}
