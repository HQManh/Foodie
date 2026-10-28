using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using DG.Tweening;
using TrungKienPack.Particle;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class AutoCompleteOrderFx
	{
		private class Candidate
		{
			public PieceOffer offer;

			public ServePlate plate;

			public DragItem fieldItem;

			public string beltId;

			public string pendingId;

			public string id;

			public bool hard;

			public int planCopies;

			public int takenCopiesLeft;

			public Vector3 takenPos;

			public string SourceId => null;
		}

		private class Orbiter
		{
			public DragItem flyer;

			public Vector3 from;

			public Vector3 scale;

			public float slotAngle;

			public float enterAt;

			public float collapseAt;

			public bool entered;
		}

		private static readonly Vector3 MergePoint;

		private const float PlateAppearDuration = 0.2f;

		private const float EnterDelay = 0.1f;

		private const float EnterInterval = 0.12f;

		private const float EnterDuration = 0.3f;

		private const float EnterJumpPower = 1.25f;

		private const float OrbitRadius = 1f;

		private const float OrbitSpeed = 220f;

		private const float OrbitSpeedMax = 1100f;

		private const float OrbitHold = 0.15f;

		private const float CollapseDuration = 0.5f;

		private const float CollapseStagger = 0.06f;

		private const Ease CollapseEase = Ease.InBack;

		private const float MergeDuration = 0.25f;

		private const float TornadoShrinkDuration = 0.3f;

		private const int FxPlateSortingOrder = 40;

		private const int FxItemSortingOrder = 41;

		private const int BlockId = 1007;

		private readonly LevelInfo _info;

		private readonly GridIngController _grid;

		private readonly IngredientSpawnerController _spawner;

		private readonly ServeService _serve;

		private bool _isPlaying;

		private ServeTicket _ticket;

		private bool _served;

		[CompilerGenerated]
		private Action m_onFinished;

		private readonly List<CookingStation> _pausedStations;

		private readonly List<int> _completable;

		private const float ShelfPollInterval = 0.1f;

		private const float MaxShelfWait = 4f;

		private float _shelfWaited;

		private Tween _shelfWait;

		private bool _repicked;

		private readonly List<string> _builtForms;

		private readonly List<string> _missedTakes;

		private const int MaxRecipeDepth = 8;

		private readonly List<ServePlate> _orphanPlates;

		private readonly List<DragItem> _gridItems;

		private const int OrphanPlatePriority = -1;

		private const int InputPriority = 2;

		private const int PendingPriority = 3;

		private const int FrozenBeltPriority = 4;

		private const int PendingHardPriority = 5;

		private readonly Dictionary<IngredientState, Vector3> _bundlePos;

		private readonly List<Orbiter> _orbiters;

		private Tween _orbitTween;

		private float _orbitClock;

		private float _orbitAngle;

		private float _collapseStart;

		private float _showEnd;

		private ServePlate _plate;

		private BaseParticleElement _tornado;

		public bool IsPlaying => false;

		public bool LastShowServed { get; private set; }

		public event Action onFinished
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public AutoCompleteOrderFx(LevelInfo info, GridIngController grid, IngredientSpawnerController spawner, ServeService serve)
		{
		}

		private void Begin()
		{
		}

		private void Finish()
		{
		}

		public bool TryPlay(FCustomerLine line)
		{
			return false;
		}

		public bool CanPlay(FCustomerLine line)
		{
			return false;
		}

		private bool PickOrder(FCustomerLine line, out int orderIndex, out PieceSet needed)
		{
			orderIndex = default;
			needed = default;
			return false;
		}

		private int DishOf(FCustomerLine line, int orderIndex)
		{
			return 0;
		}

		private string OrderSequence(FCustomerLine line, int orderIndex)
		{
			return null;
		}

		private bool OrderPieces(FCustomerLine line, int orderIndex, out PieceSet needed)
		{
			needed = default;
			return false;
		}

		private List<int> FreeServableOrders(FCustomerLine line)
		{
			return null;
		}

		private bool CollectCompletableOrders(FCustomerLine line, List<int> into)
		{
			return false;
		}

		private void Resume(FCustomerLine line, int orderIndex, PieceSet needed)
		{
		}

		private void Fallback()
		{
		}

		private bool TryPickReadyOrder(FCustomerLine line, out int orderIndex, out PieceSet needed)
		{
			orderIndex = default;
			needed = default;
			return false;
		}

		private ServeShelfController.PlateTake TakePlateDish(PieceSet needed, out DragItem dish, out PieceSet onPlate)
		{
			dish = null;
			onPlate = default;
			return ServeShelfController.PlateTake.None;
		}

		private List<DragItem> GatherIngredients(PieceSet needed, DragItem plateDish, int dishKey, string wantSequence)
		{
			return null;
		}

		private static string PieceNames(PieceSet pieces)
		{
			return null;
		}

		private static List<Candidate> BuildPlan(List<Candidate> candidates, PieceSet needed, out PieceSet missing)
		{
			missing = default;
			return null;
		}

		private static List<Candidate> Plan(List<Candidate> candidates, PieceSet needed, int dishKey, List<string> builtForms, out PieceSet missing)
		{
			missing = default;
			return null;
		}

		private static List<Candidate> PieceCandidatesFor(List<Candidate> candidates, int dishKey, LevelPieceBook book, RecipeConfigSO config)
		{
			return null;
		}

		private static bool IsWrongForm(Candidate candidate, int dishKey, LevelPieceBook book, RecipeConfigSO config)
		{
			return false;
		}

		private static bool TryGetRootOf(RecipeConfigSO config, int kind, out string root)
		{
			root = null;
			return false;
		}

		private static bool TryReserve(RecipeConfigSO config, string id, int kind, List<Candidate> candidates, List<Candidate> plan, int depth)
		{
			return false;
		}

		private static Candidate PickById(List<Candidate> candidates, string id)
		{
			return null;
		}

		private void FlushLeftovers(List<IngredientState> leftovers, bool fxUnspent)
		{
		}

		private static void ReturnUnspentBeltCopies(List<Candidate> plan, List<IngredientState> leftovers)
		{
		}

		private List<Candidate> CollectCandidates(int dishKey, string wantSequence)
		{
			return null;
		}

		private void AddPendingCandidate(List<Candidate> candidates, IngredientState state, int priority, bool hard)
		{
		}

		private PieceOffer OfferForId(string id)
		{
			return null;
		}

		private static PieceOffer NoPieces(int priority)
		{
			return null;
		}

		private static PieceOffer Reprioritised(PieceOffer offer, int priority)
		{
			return null;
		}

		private static Candidate PickBestCandidate(List<Candidate> candidates, PieceSet needed)
		{
			return null;
		}

		private DragItem TakeCandidate(Candidate candidate, List<IngredientState> leftovers, out bool stillUsable)
		{
			stillUsable = default;
			return null;
		}

		private DragItem TakeFromPending(Candidate candidate, out bool stillUsable)
		{
			stillUsable = default;
			return null;
		}

		private DragItem TakeFromBelt(Candidate candidate, List<IngredientState> leftovers, out bool stillUsable)
		{
			stillUsable = default;
			return null;
		}

		private bool TakeBundledLeftover(string id, List<IngredientState> leftovers, out Vector3 pos, out int copies)
		{
			pos = default;
			copies = default;
			return false;
		}

		private static void PrepareFlyer(DragItem item)
		{
		}

		private DragItem SpawnFlyer(string id, Vector3 pos)
		{
			return null;
		}

		private void StopTornado()
		{
		}

		private void PlayGather(FCustomerLine line, int orderIndex, List<DragItem> flyers)
		{
		}

		private void TickOrbit(float clock)
		{
		}

		private int[] CollapseRanks(List<DragItem> flyers, string orderId, int dishKey)
		{
			return null;
		}

		private bool IsDishBase(string baseId, int dishKey)
		{
			return false;
		}

		private static bool TryClaimSequence(string want, bool[] used, string code, out int at)
		{
			at = default;
			return false;
		}

		private ServePlate SpawnPlate(int dishKey)
		{
			return null;
		}

		private void DespawnPlate()
		{
		}

		private void MergeAndServe(FCustomerLine line, int orderIndex, List<DragItem> flyers)
		{
		}

		private void FlyOnPlate(FCustomerLine line, int orderIndex, ServePlate plate, DragItem dish, List<string> spent)
		{
		}

		private void FlyDishAlone(FCustomerLine line, DragItem dish, List<string> spent)
		{
		}

		private static void PlayDoneFood(Vector3 at)
		{
		}

		private void Deliver(FCustomerLine line, DragItem dish, List<string> spent)
		{
		}

		private void ReturnSpent(List<string> ids)
		{
		}
	}
}
