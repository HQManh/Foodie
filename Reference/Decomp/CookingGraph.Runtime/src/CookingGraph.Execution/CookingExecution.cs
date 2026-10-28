using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace CookingGraph.Execution;

public sealed class CookingExecution
{
	private sealed class Inventory
	{
		internal int Capacity;

		internal readonly List<CookingUnit> Units;
	}

	private sealed class Dish
	{
		internal CookingAssemblySlot[] Slots;

		internal bool[] Filled;

		internal bool GridAssembly;
	}

	private sealed class Flight
	{
		internal long Id;

		internal CookingUnit Unit;

		internal CookingTransferRequest Request;

		internal Wave Wave;

		internal double Offset;

		internal double? ReleasedAt;

		internal double? DepartedAt;

		internal bool SourceRemoved;

		internal double NotBefore;
	}

	private sealed class Wave
	{
		internal long Id;

		internal CookingWaveType Type;

		internal double? StartedAt;

		internal int Ordinal;

		internal readonly List<Flight> Members;
	}

	private sealed class Merge
	{
		internal CookingEndpoint Target;

		internal double Remaining;

		internal double Duration;
	}

	private const double Epsilon = 1E-09;

	private readonly Dictionary<CookingEndpoint, Inventory> inventories;

	private readonly Dictionary<CookingEndpoint, Dish> dishes;

	private readonly HashSet<long> knownUnits;

	private readonly HashSet<long> claimedUnits;

	private readonly HashSet<long> assemblyMarkers;

	private readonly List<Flight> flights;

	private readonly List<Wave> waves;

	private readonly List<Merge> merges;

	private readonly List<CookingExecutionEvent> events;

	private long nextFlight;

	private long nextWave;

	private double nextWaveStart;

	public Guid RunId { get; private set; }

	public double Time { get; private set; }

	public CookingExecutionConfig Config { get; private set; }

	public bool HasPendingWork => false;

	public double RemainingWaveDelay => 0.0;

	public int WaitingTransferCount => 0;

	public int ActiveMergeCount => 0;

	public int ActiveWaveCount => 0;

	public IReadOnlyList<CookingAssemblySnapshot> Assemblies => null;

	public IReadOnlyList<CookingTransferSnapshot> Transfers => null;

	internal event Action<CookingUnit, CookingEndpoint> InventoryArrived
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

	public CookingExecutionSnapshot ReadSnapshot()
	{
		return null;
	}

	public CookingExecution(CookingExecutionConfig config = null)
	{
	}

	public void Reset(CookingExecutionConfig config = null)
	{
	}

	public void RegisterInventory(CookingEndpoint address, int capacity, IEnumerable<CookingUnit> initialUnits = null)
	{
	}

	public IReadOnlyList<CookingUnit> UnitsAt(CookingEndpoint address)
	{
		return null;
	}

	public bool IsUnitClaimed(long id)
	{
		return false;
	}

	internal void Produce(CookingEndpoint address, IEnumerable<CookingUnit> produced)
	{
	}

	internal bool Consume(CookingEndpoint address, long id)
	{
		return false;
	}

	internal bool Relocate(CookingEndpoint source, CookingEndpoint target, long id)
	{
		return false;
	}

	public void RegisterDish(string customerId, int dishIndex, IEnumerable<CookingAssemblySlot> slots)
	{
	}

	internal void SeedAssemblyBase(string owner, int slot)
	{
	}

	internal void RemoveGridAssembly(string owner)
	{
	}

	public bool ContainsTransfer(Guid run, long id)
	{
		return false;
	}

	public bool IsReady(Guid run, long id)
	{
		return false;
	}

	public bool TryDispatch(IEnumerable<CookingTransferRequest> requests, bool acceptedPick, out string error, int waveOrdinal = 0, CookingWaveType? wholeDishWaveType = null)
	{
		error = null;
		return false;
	}

	public bool CompleteTransfer(Guid run, long id)
	{
		return false;
	}

	public void CompleteReadyTransfers()
	{
	}

	public double? NextCompletionIn()
	{
		return null;
	}

	public void Tick(double delta, bool skipTravel = false)
	{
	}

	public void FinishPendingAssembly()
	{
	}

	public bool TryCompleteClaimedDish(string customerId, int dishIndex)
	{
		return false;
	}

	internal bool CancelTransfer(long id)
	{
		return false;
	}

	internal void CompleteSourcedDish(string customerId, int dishIndex)
	{
	}

	internal bool RetargetWaiting(long id, CookingEndpoint target)
	{
		return false;
	}

	internal void ExchangePlates(CookingEndpoint first, bool[] firstFilled, CookingEndpoint second, bool[] secondFilled)
	{
	}

	public IReadOnlyList<CookingExecutionEvent> DrainEvents()
	{
		return null;
	}

	private void AdvanceDepartures()
	{
	}

	private bool PhaseOpen(Flight flight)
	{
		return false;
	}

	private void Depart(Flight flight, double at)
	{
	}

	private void RemoveSource(Flight flight)
	{
	}

	private void PruneWaves()
	{
	}

	private bool Claimed(CookingEndpoint target)
	{
		return false;
	}

	private void Fill(CookingEndpoint target)
	{
	}

	private bool TryDish(CookingEndpoint target, out Dish dish)
	{
		dish = null;
		return false;
	}

	private static CookingEndpoint DishAddress(CookingEndpoint target)
	{
		return default(CookingEndpoint);
	}

	private CookingTransferSnapshot Snapshot(Flight f)
	{
		return null;
	}

	private CookingAssemblySnapshot Snapshot(CookingEndpoint address, Dish dish)
	{
		return null;
	}

	private void Emit(CookingExecutionEventKind kind, CookingEndpoint target, long flight = 0L)
	{
	}

	private static void RequireAddress(CookingEndpoint address)
	{
	}

	internal static void RequireTime(double value, string name)
	{
	}
}
