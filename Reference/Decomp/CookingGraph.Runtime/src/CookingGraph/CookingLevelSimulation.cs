using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CookingGraph.Execution;

namespace CookingGraph;

public sealed class CookingLevelSimulation : ICookingBotStateReader, ICookingBotCommandSink
{
	private sealed class RankComparer : IComparer<double[]>
	{
		internal static readonly RankComparer Instance;

		public int Compare(double[] x, double[] y)
		{
			return 0;
		}
	}

	private enum AutoTakeKind
	{
		Unit,
		Job,
		Transfer,
		Queue
	}

	private sealed class AutoTake
	{
		internal AutoTakeKind Kind;

		internal CookingEndpoint Source;

		internal CookingUnit Unit;

		internal (int Tool, int Lane) Job;

		internal long Transfer;

		internal QueueCell Cell;

		internal string Key;

		internal long Participant;

		internal int Slot;
	}

	private sealed class GridAssembly
	{
		internal int Cell;

		internal long Marker;

		internal string Owner;

		internal CookingGraphIndex.Recipe Recipe;
	}

	private sealed class PickPlan
	{
		internal List<(int X, int Y)> Cells;

		internal readonly List<CookingTransferRequest> Moves;

		internal readonly HashSet<long> Raw;

		internal int Footprint;

		internal readonly RoutePlan Route;
	}

	private sealed class RoutePlan
	{
		internal readonly Dictionary<CookingEndpoint, int> Targets;

		internal readonly Dictionary<(int Tool, int Lane), (CookingGraphIndex.Recipe Recipe, List<(int Ingredient, int Point)> Inputs)> Lanes;

		internal readonly List<int> Landed;

		internal readonly Dictionary<long, CookingGraphIndex.Recipe> Routes;
	}

	private struct ProcessRoute
	{
		internal CookingGraphIndex.Recipe Recipe;

		internal int Tool;

		internal int Slot;
	}

	private struct Occupant
	{
		internal int Ingredient;

		internal int Point;

		internal int? Output;

		internal bool Done;

		internal bool Flying;

		internal bool Planned;

		internal bool Unclaimed;
	}

	private sealed class QueueCell
	{
		internal long Id;

		internal int Ingredient;

		internal int DataId;

		internal int Group;

		internal int Frozen;

		internal int Amount;

		internal int PartialYield;

		internal bool Sweeper;

		internal bool Hidden;

		internal int[] Keys;

		internal CookingEndpoint Address => default(CookingEndpoint);
	}

	private sealed class Customer
	{
		internal int Index;

		internal int StaffAmount;

		internal bool Staff;

		internal bool Boss;

		internal double Patience;

		internal double InitialPatience;

		internal double Width;

		internal string CustomerId;

		internal double EatingSeconds;

		internal double Eating;

		internal CookingGraphIndex.Dish[] Dishes;

		internal readonly HashSet<int> CountedDishes;

		internal string Owner => null;
	}

	private sealed class Chain
	{
		internal int[] Remaining;

		internal int Output;

		internal int Amount;
	}

	private sealed class QueueHold
	{
		internal List<(int X, int Y)> Cells;

		internal HashSet<long> Units;
	}

	private sealed class Job
	{
		internal int Tool;

		internal int Lane;

		internal int Lead;

		internal int Output;

		internal int Amount;

		internal double Duration;

		internal double Elapsed;

		internal bool Completed;

		internal bool Jammed;

		internal bool Hop;

		internal int[] Chain;

		internal int[] InputSlots;
	}

	[CompilerGenerated]
	private sealed class _003CAssemblySources_003Ed__106 : IEnumerable<(CookingEndpoint, CookingUnit)>, IEnumerable, IEnumerator<(CookingEndpoint, CookingUnit)>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private (CookingEndpoint Address, CookingUnit Unit) _003C_003E2__current;

		private int _003C_003El__initialThreadId;

		public CookingLevelSimulation _003C_003E4__this;

		private List<CookingEndpoint>.Enumerator _003C_003E7__wrap1;

		private CookingEndpoint _003Csource_003E5__3;

		private IEnumerator<CookingUnit> _003C_003E7__wrap3;

		(CookingEndpoint, CookingUnit) IEnumerator<(CookingEndpoint, CookingUnit)>.Current
		{
			[DebuggerHidden]
			get
			{
				return System_002ECollections_002EGeneric_002EIEnumerator_003C_0028CookingGraph_002EExecution_002ECookingEndpointAddress_002CCookingGraph_002EExecution_002ECookingUnitUnit_0029_003E_002Eget_Current();
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
		public _003CAssemblySources_003Ed__106(int _003C_003E1__state)
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

		private void _003C_003Em__Finally2()
		{
		}

		[DebuggerHidden]
		private (CookingEndpoint, CookingUnit) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028CookingGraph_002EExecution_002ECookingEndpointAddress_002CCookingGraph_002EExecution_002ECookingUnitUnit_0029_003E_002Eget_Current()
		{
			return default((CookingEndpoint, CookingUnit));
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}

		[DebuggerHidden]
		IEnumerator<(CookingEndpoint, CookingUnit)> IEnumerable<(CookingEndpoint, CookingUnit)>.GetEnumerator()
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
	private sealed class _003CWholeProcessSources_003Ed__110 : IEnumerable<(CookingEndpoint, CookingUnit)>, IEnumerable, IEnumerator<(CookingEndpoint, CookingUnit)>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private (CookingEndpoint Address, CookingUnit Unit) _003C_003E2__current;

		private int _003C_003El__initialThreadId;

		public CookingLevelSimulation _003C_003E4__this;

		private IEnumerator<(CookingEndpoint Address, CookingUnit Unit)> _003C_003E7__wrap1;

		private List<CookingEndpoint>.Enumerator _003C_003E7__wrap2;

		private CookingEndpoint _003Caddress_003E5__4;

		private IEnumerator<CookingUnit> _003C_003E7__wrap4;

		(CookingEndpoint, CookingUnit) IEnumerator<(CookingEndpoint, CookingUnit)>.Current
		{
			[DebuggerHidden]
			get
			{
				return System_002ECollections_002EGeneric_002EIEnumerator_003C_0028CookingGraph_002EExecution_002ECookingEndpointAddress_002CCookingGraph_002EExecution_002ECookingUnitUnit_0029_003E_002Eget_Current();
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
		public _003CWholeProcessSources_003Ed__110(int _003C_003E1__state)
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

		private void _003C_003Em__Finally2()
		{
		}

		private void _003C_003Em__Finally3()
		{
		}

		[DebuggerHidden]
		private (CookingEndpoint, CookingUnit) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028CookingGraph_002EExecution_002ECookingEndpointAddress_002CCookingGraph_002EExecution_002ECookingUnitUnit_0029_003E_002Eget_Current()
		{
			return default((CookingEndpoint, CookingUnit));
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}

		[DebuggerHidden]
		IEnumerator<(CookingEndpoint, CookingUnit)> IEnumerable<(CookingEndpoint, CookingUnit)>.GetEnumerator()
		{
			return null;
		}

		[DebuggerHidden]
		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}
	}

	private readonly Dictionary<long, string> momentOfUnit;

	private readonly Dictionary<string, List<int>> momentCells;

	private int pickSerial;

	private readonly List<CookingPlateMove> plateMoves;

	private bool rescueDeclined;

	private readonly HashSet<int> pendingTimeouts;

	private readonly HashSet<int> staffStarted;

	private readonly List<GridAssembly> gridAssemblies;

	private readonly Dictionary<long, long> gridArrivalOrder;

	private long nextGridArrival;

	private const double Epsilon = 1E-08;

	private readonly CookingGraphIndex index;

	private readonly List<List<QueueCell>> queues;

	private readonly QueueGroupKind[] groupKinds;

	private readonly EffectData[][] gridEffects;

	private readonly List<Customer> active;

	private readonly List<Customer> pending;

	private readonly List<Customer> eating;

	private readonly Dictionary<(int Tool, int Lane), Job> jobs;

	private readonly Dictionary<long, Chain> chains;

	private readonly Dictionary<long, CookingGraphIndex.Recipe> routes;

	private readonly HashSet<long> raw;

	private readonly Dictionary<long, int> yieldDebt;

	private readonly Dictionary<int, int> picks;

	private readonly Dictionary<EffectData, int> colorLockProgress;

	private readonly List<int> dirtyOrder;

	private readonly List<QueueHold> queueHolds;

	private readonly HashSet<int> timedOut;

	private readonly List<CookingLevelEvent> events;

	private readonly Random random;

	private readonly int servingLimit;

	private readonly int totalCustomers;

	private readonly int maxSaveMe;

	private readonly int visibleQueueRows;

	private readonly bool spiderCleansAllStacks;

	private readonly bool saveMeClearsDirty;

	private readonly bool allowPlayerAssistance;

	private readonly int saveMeMaxCells;

	private readonly double gridWarningSeconds;

	private readonly double deadlockWarningSeconds;

	private double warningSince;

	private int bagPreview;

	private readonly bool detectDeadlock;

	private readonly bool continueAfterTimeout;

	private readonly bool wantedOnly;

	private readonly int[] charges;

	private long nextUnit;

	private long change;

	private int completedOrders;

	private int bagCell;

	private bool settling;

	public const string Semantics = "cookinggraph-csharp-2026-10-16-pre-merge-v11";

	private bool UrgentFirst => false;

	public IReadOnlyList<CookingPlateMove> PlateMoves => null;

	public CookingAutoCompleteRecord LastAutoComplete { get; private set; }

	public int BagCell => 0;

	public int? BagPreviewIngredient => null;

	public bool RescuePending { get; private set; }

	public long SaveMeOfferId { get; private set; }

	public IReadOnlyList<int> PendingTimeoutCustomers => null;

	public IReadOnlyList<CookingGridAssemblySnapshot> GridAssemblies => null;

	private double[] NoProcessPriority => null;

	public CookingLoseReason WarningReason { get; private set; }

	public double WarningSecondsRemaining => 0.0;

	public CookingExecution Execution { get; }

	public CookingRuntimeSettings Settings { get; }

	public CookingLevelStatus Status { get; private set; }

	public CookingLoseReason LoseReason { get; private set; }

	public long Revision { get; private set; }

	public int ServedCount { get; private set; }

	public int SaveMeUsed { get; private set; }

	public double Time => 0.0;

	public int RemainingItems => 0;

	public int RemainingPieces => 0;

	public int ActiveProcessCount => 0;

	public int GridJams { get; private set; }

	public IReadOnlyList<int> TimedOutCustomers => null;

	private CookingEndpoint BagAddress => default(CookingEndpoint);

	private double[] NoFulfillment => null;

	public string RuntimeFingerprint { get; private set; }

	public IReadOnlyList<IngredientNodeAsset> IngredientAssets => null;

	public CookingBoosterPlan PlanBooster(CookingBooster booster, int column = -1, int row = -1)
	{
		return null;
	}

	public bool TryApplyBooster(CookingBoosterPlan plan)
	{
		return false;
	}

	public CookingSaveMePlan PlanSaveMe()
	{
		return null;
	}

	public bool TryApplySaveMe(CookingSaveMePlan plan, bool awaitPresentation = false)
	{
		return false;
	}

	private static int CompareRank(double[] x, double[] y)
	{
		return 0;
	}

	private double SelectionPatience(Customer c)
	{
		return 0.0;
	}

	private int OrderMissing(Customer c)
	{
		return 0;
	}

	private static Customer CustomerOf(IEnumerable<Customer> customers, CookingEndpoint dishSlot)
	{
		return null;
	}

	private void TagMoment(long firstNewTransfer, bool pick)
	{
	}

	private bool MomentInFlight(string key)
	{
		return false;
	}

	private void RecordMomentArrival(CookingUnit unit, CookingEndpoint target)
	{
	}

	private void CloseMoments()
	{
	}

	private bool MomentHeld(int cell)
	{
		return false;
	}

	private bool MomentHeld(CookingEndpoint address)
	{
		return false;
	}

	private bool MomentPendingAfter(long unitId)
	{
		return false;
	}

	private void Replan()
	{
	}

	private void ReplanWaitingLanes()
	{
	}

	private void ReplanWaitingServes()
	{
	}

	private void ReplanPlates()
	{
	}

	private static bool[] FitPlate(CookingAssemblySnapshot from, CookingAssemblySnapshot to)
	{
		return null;
	}

	private void ExchangePlates(Customer a, int dishA, CookingAssemblySnapshot plateA, bool[] fillA, Customer b, int dishB, CookingAssemblySnapshot plateB, bool[] fillB)
	{
	}

	private Dictionary<int, int> MadeSupply()
	{
		return null;
	}

	private bool[] HeldSlots(Customer c, int d)
	{
		return null;
	}

	private Dictionary<Customer, int> ProjectedMissing(Dictionary<int, int> supply, Dictionary<(Customer, int), bool[]> plates = null)
	{
		return null;
	}

	private double[] ProgressRank(Dictionary<Customer, int> missing)
	{
		return null;
	}

	private int Debt(long unit)
	{
		return 0;
	}

	private int TotalServings(CookingUnit unit)
	{
		return 0;
	}

	private int Servings(CookingUnit unit)
	{
		return 0;
	}

	private int MakesUnit(CookingUnit unit)
	{
		return 0;
	}

	private bool AutoCompleteDishAtomic(Customer customer, int dish, bool apply, List<long> plannedParticipants)
	{
		return false;
	}

	private (Func<bool, CookingAutoCompleteTake>, Func<bool>) ShowTake(AutoTake take, int ingredient)
	{
		return default((Func<bool, CookingAutoCompleteTake>, Func<bool>));
	}

	private CookingTransferSnapshot[] BoundServes(Customer customer, int dish)
	{
		return null;
	}

	private void RecordAutoComplete(Customer customer, int dish, IEnumerable<CookingAutoCompleteTake> takes, IEnumerable<CookingTransferSnapshot> bound)
	{
	}

	private void ForgetUnit(long unit)
	{
	}

	private void PayUnit(CookingEndpoint source, CookingUnit unit)
	{
	}

	private void PayJob((int Tool, int Lane) key)
	{
	}

	private void PayTransfer(long transfer, CookingUnit unit)
	{
	}

	private void PayQueue(QueueCell q)
	{
	}

	public bool CycleBagPreview()
	{
		return false;
	}

	private HashSet<int> UnfilledDemand()
	{
		return null;
	}

	private void ReleaseUnusableBagItems()
	{
	}

	public int BoosterCharges(CookingBooster booster)
	{
		return 0;
	}

	public bool CanUseBooster(CookingBooster booster)
	{
		return false;
	}

	public bool CanUseBooster(CookingBooster booster, out string reason)
	{
		reason = null;
		return false;
	}

	private int[] CleanTableCells(bool all = false)
	{
		return null;
	}

	private bool CleanTable(bool all = false)
	{
		return false;
	}

	public bool TryUseBooster(CookingBooster booster, int column = 0, int row = 0)
	{
		return false;
	}

	private bool ApplyBoosterCore(CookingBooster booster, int column, int row)
	{
		return false;
	}

	private List<(int, int, int)> ShiftUpMoves()
	{
		return null;
	}

	private bool ShiftUp()
	{
		return false;
	}

	private bool AutoComplete(bool apply = true)
	{
		return false;
	}

	private bool AutoCompleteDish(Customer customer, int dish, bool apply, List<long> plannedParticipants = null)
	{
		return false;
	}

	private int[] GridRescueCells()
	{
		return null;
	}

	private bool FullGridWithoutBeltMove()
	{
		return false;
	}

	public bool CanOfferSaveMe()
	{
		return false;
	}

	public void CompleteSaveMe()
	{
	}

	public void DeclineSaveMe()
	{
	}

	public bool CanSaveMe()
	{
		return false;
	}

	public bool TrySaveMe(bool awaitPresentation = false)
	{
		return false;
	}

	public BotGameState ReadState()
	{
		return null;
	}

	private void AdmitCustomers()
	{
	}

	private void CompleteCustomers()
	{
	}

	private void LeaveCustomer(Customer customer)
	{
	}

	private void AdvanceEating(double delta)
	{
	}

	private void AddDirty(Customer customer, int type)
	{
	}

	private int ClearDirty(int count)
	{
		return 0;
	}

	private void AdvancePatience(Customer[] customers, double delta)
	{
	}

	private void CheckEnd()
	{
	}

	private void Lose(CookingLoseReason reason)
	{
	}

	private CookingAssemblySnapshot GridAssemblyState(GridAssembly a)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CAssemblySources_003Ed__106))]
	private IEnumerable<(CookingEndpoint, CookingUnit)> AssemblySources()
	{
		return null;
	}

	private CookingEndpoint? GridAssemblyTarget(int ingredient, ISet<CookingEndpoint> planned = null)
	{
		return null;
	}

	private int[][] GridAssemblyDependencies(CookingGraphIndex.Recipe recipe)
	{
		return null;
	}

	private void PreMerge()
	{
	}

	[IteratorStateMachine(typeof(_003CWholeProcessSources_003Ed__110))]
	private IEnumerable<(CookingEndpoint, CookingUnit)> WholeProcessSources()
	{
		return null;
	}

	private bool PlanWholeRecipeCapture(CookingUnit unit, CookingEndpoint source, PickPlan plan)
	{
		return false;
	}

	private void ReclaimWholeRecipes()
	{
	}

	private QueueCell At(int x, int y)
	{
		return null;
	}

	private List<(int, int)> GroupCells(int group)
	{
		return null;
	}

	private List<(int, int)> Instance(int x, int y, bool movement = false)
	{
		return null;
	}

	public bool IsHidden(int x, int y)
	{
		return false;
	}

	internal bool IsQueueCellHeld(int x, int y)
	{
		return false;
	}

	private void ReleaseQueueHolds()
	{
	}

	private void Gravity()
	{
	}

	private PickPlan PlanPick(int x, int y, bool anyRow, out string error, bool ignoreGridCapacity = false)
	{
		error = null;
		return null;
	}

	private List<CookingTransferRequest> PlanWholeDishCapture(CookingUnit unit, CookingEndpoint source, IEnumerable<CookingTransferRequest> batch)
	{
		return null;
	}

	public PickAvailability AssessNormalPick(int lane)
	{
		return PickAvailability.Available;
	}

	public bool CanPick(int lane, out string error)
	{
		error = null;
		return false;
	}

	public bool TryPick(int lane)
	{
		return false;
	}

	public bool TryPick(BotPickCommand command)
	{
		return false;
	}

	private bool Pick(int x, int y, bool anyRow)
	{
		return false;
	}

	private static QueueCell CopyQueueCell(QueueCell c)
	{
		return null;
	}

	private bool RecoverDeadlock(bool apply, out long[] participants)
	{
		participants = null;
		return false;
	}

	public (int, int)? ToolBoundTarget(int ingredient)
	{
		return null;
	}

	public IReadOnlyList<(int, int?)?> ToolSlotRoutes(int tool)
	{
		return null;
	}

	private bool AutoStep(CookingGraphIndex.Recipe recipe)
	{
		return false;
	}

	private bool Preservable(int ingredient)
	{
		return false;
	}

	private int LaneOf(int tool, int flat)
	{
		return 0;
	}

	private static int ToolOf(CookingEndpoint address)
	{
		return 0;
	}

	private void PlanEntry(RoutePlan plan, CookingGraphIndex.Recipe recipe, int tool, int slot, int ingredient, long unit)
	{
	}

	private void PinLane(int tool, int lane, CookingGraphIndex.Recipe recipe)
	{
	}

	private void PinArrival(CookingUnit unit, CookingEndpoint target)
	{
	}

	private List<Occupant> LaneOccupants(int tool, int lane, RoutePlan plan, bool vacated = false)
	{
		return null;
	}

	private CookingGraphIndex.Recipe LaneRecipe(int tool, List<Occupant> occupants)
	{
		return null;
	}

	private Dictionary<int, int> OpenDemand(RoutePlan plan)
	{
		return null;
	}

	private List<int> SupplyUnits(int candidate, RoutePlan plan, (int Tool, int Lane)? own)
	{
		return null;
	}

	private bool OutputNeeded(CookingGraphIndex.Recipe recipe, RoutePlan plan, (int Tool, int Lane)? own)
	{
		return false;
	}

	private List<int> ParkedIngredients()
	{
		return null;
	}

	private bool LaneMayHandOver(int tool, List<Occupant> occupants)
	{
		return false;
	}

	private ProcessRoute? RouteProcess(int ingredient, RoutePlan plan = null, (int Tool, int Lane)? own = null, bool vacateOwn = false)
	{
		return null;
	}

	private ProcessRoute? ToolBoundEntry(int ingredient, RoutePlan plan, (int Tool, int Lane)? own)
	{
		return null;
	}

	private bool OnwardFreesByItself(CookingGraphIndex.Recipe recipe, (int Tool, int Lane) own)
	{
		return false;
	}

	private void RecordGridArrival(CookingUnit unit, CookingEndpoint target)
	{
	}

	private int Missing(Customer c, int d)
	{
		return 0;
	}

	private IEnumerable<(Customer, int)> ServingCandidates()
	{
		return null;
	}

	private Dictionary<int, int> AvailableForSelection()
	{
		return null;
	}

	private bool RecipeReadyForSelection(CookingGraphIndex.Recipe recipe, int ingredient)
	{
		return false;
	}

	private double[] ProcessPriority(int ingredient, CookingGraphIndex.Recipe recipe = null)
	{
		return null;
	}

	private IEnumerable<CookingUnit> ProcessUnits(CookingEndpoint source)
	{
		return null;
	}

	private IEnumerable<int> ProcessPreservationOrder(int tool)
	{
		return null;
	}

	private IEnumerable<int> ProcessGridOrder()
	{
		return null;
	}

	private static int Point(CookingGraphIndex.Recipe recipe, int ingredient)
	{
		return 0;
	}

	private IEnumerable<int> LaneSlots(int tool, int lane)
	{
		return null;
	}

	private int FreeHopSlot(int tool)
	{
		return 0;
	}

	private CookingEndpoint? PreservationDestination(int ingredient, Dictionary<CookingEndpoint, int> planned = null)
	{
		return null;
	}

	private bool PreferServingOutput(int output, CookingUnit unit, CookingEndpoint source, CookingGraphIndex.Recipe onward)
	{
		return false;
	}

	private void ProcessTools()
	{
	}

	private List<CookingTransferRequest> PlanOutputSwaps(int tool, int lane, CookingEndpoint source, CookingUnit[] blocked, ISet<CookingEndpoint> reserved, Dictionary<long, CookingGraphIndex.Recipe> recipes, bool legacyOrder = false)
	{
		return null;
	}

	private void Reclaim()
	{
	}

	public static CookingEndpoint GridAddress(int cell)
	{
		return default(CookingEndpoint);
	}

	public static CookingEndpoint ToolAddress(int tool, int flat)
	{
		return default(CookingEndpoint);
	}

	private static CookingEndpoint DishAddress(Customer c, int dish, int slot)
	{
		return default(CookingEndpoint);
	}

	private static CookingEndpoint StaffAddress(Customer c)
	{
		return default(CookingEndpoint);
	}

	private void Changed()
	{
	}

	private void Emit(CookingLevelEventKind kind, int subject = -1, string detail = "", IEnumerable<long> participants = null)
	{
	}

	public CookingLevelSimulation(CookingLevelDefinition definition, CookingExecutionProfile executionProfile = null, CookingGraphOverrideProfile graphProfile = null, CookingCustomerEatingProfile eatingProfile = null)
	{
	}

	private CookingUnit NewUnit(int ingredient, CookingPayloadKind kind = CookingPayloadKind.Ingredient, int quantity = 1)
	{
		return default(CookingUnit);
	}

	private CookingAssemblySnapshot Assembly(Customer c, int dish)
	{
		return null;
	}

	private bool Incoming(CookingEndpoint address)
	{
		return false;
	}

	private bool Outgoing(CookingEndpoint address)
	{
		return false;
	}

	private bool Occupied(CookingEndpoint address)
	{
		return false;
	}

	private bool GridFree(int c)
	{
		return false;
	}

	private int FreeCell(ISet<CookingEndpoint> planned = null)
	{
		return 0;
	}

	public bool IsCellUsable(int cell)
	{
		return false;
	}

	private void CollectKey(int color)
	{
	}

	private CookingGridEffectSnapshot ResolveGridEffect(EffectData e)
	{
		return default(CookingGridEffectSnapshot);
	}

	private void Dispatch(List<CookingTransferRequest> requests, bool pick = false, int waveOrdinal = 0, CookingWaveType? wholeDishWaveType = null, IReadOnlyDictionary<long, CookingGraphIndex.Recipe> recipes = null)
	{
	}

	public IReadOnlyList<CookingLevelEvent> DrainEvents()
	{
		return null;
	}

	public bool CompleteTransfer(Guid runId, long transferId)
	{
		return false;
	}

	public void CompleteReadyTravel()
	{
	}

	public void FinishPendingAssembly()
	{
	}

	public void Advance(double gameplayDelta, double? customerDelta = null)
	{
	}

	public double? NextCompletionIn()
	{
		return null;
	}

	public void Reconcile()
	{
	}

	private void Settle()
	{
	}

	private void RefreshBag()
	{
	}

	private HashSet<int> Demand()
	{
		return null;
	}

	private double[] FulfillmentRank(Customer c, int d, int gate, int exact)
	{
		return null;
	}

	private double[] DirectFulfillmentPriority(int ingredient, ISet<CookingEndpoint> planned = null)
	{
		return null;
	}

	private double[] ProcessFulfillmentPriority(CookingGraphIndex.Recipe recipe)
	{
		return null;
	}

	private bool PreferDirectServing(int ingredient, IEnumerable<CookingGraphIndex.Recipe> recipes, ISet<CookingEndpoint> planned = null, bool wholeDishCapture = false)
	{
		return false;
	}

	private CookingEndpoint? ServeTarget(int ingredient, ISet<CookingEndpoint> planned = null)
	{
		return null;
	}

	private List<CookingTransferRequest> PlanCapture(Customer customer, int dishIndex, CookingUnit? extra = null, CookingEndpoint extraSource = default(CookingEndpoint))
	{
		return null;
	}

	private bool TryCaptureWith(CookingUnit unit, CookingEndpoint source)
	{
		return false;
	}

	private void AutoServe()
	{
	}

	public CookingLevelSnapshot ReadSnapshot()
	{
		return null;
	}

	private string Fingerprint(CookingLevelDefinition definition)
	{
		return null;
	}
}
