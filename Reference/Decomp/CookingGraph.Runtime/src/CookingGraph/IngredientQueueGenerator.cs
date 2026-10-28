using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CookingGraph.Execution;

namespace CookingGraph;

public static class IngredientQueueGenerator
{
	private sealed class LeafRequirement
	{
		public IngredientNodeAsset leaf;

		public int covers;
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass4_0
	{
		public CookingGraphAsset graph;
	}

	[CompilerGenerated]
	private sealed class _003COrderedItems_003Ed__4 : IEnumerable<IngredientNodeAsset>, IEnumerable, IEnumerator<IngredientNodeAsset>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private IngredientNodeAsset _003C_003E2__current;

		private int _003C_003El__initialThreadId;

		private CookingGraphAsset graph;

		public CookingGraphAsset _003C_003E3__graph;

		private CustomerOrderData customers;

		public CustomerOrderData _003C_003E3__customers;

		private _003C_003Ec__DisplayClass4_0 _003C_003E8__1;

		private CookingGraphIndex _003Cindex_003E5__2;

		private List<CustomerData>.Enumerator _003C_003E7__wrap2;

		private List<DishOrderData>.Enumerator _003C_003E7__wrap3;

		private CookingAssemblySlot[] _003C_003E7__wrap4;

		private int _003C_003E7__wrap5;

		private IEnumerator<IngredientNodeAsset> _003C_003E7__wrap6;

		IngredientNodeAsset IEnumerator<IngredientNodeAsset>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
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
		public _003COrderedItems_003Ed__4(int _003C_003E1__state)
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

		private void _003C_003Em__Finally4()
		{
		}

		private void _003C_003Em__Finally5()
		{
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}

		[DebuggerHidden]
		IEnumerator<IngredientNodeAsset> IEnumerable<IngredientNodeAsset>.GetEnumerator()
		{
			return null;
		}

		[DebuggerHidden]
		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}
	}

	public static IngredientQueueData Generate(CookingGraphAsset graph, CustomerOrderData customers, int laneCount, QueueShuffleRange shuffleRange, Func<double> random = null)
	{
		return null;
	}

	public static string GenerateString(CookingGraphAsset graph, CustomerOrderData customers, int laneCount, QueueShuffleRange shuffleRange, Func<double> random = null)
	{
		return null;
	}

	public static IReadOnlyList<IngredientNodeAsset> PickupSequence(CookingGraphAsset graph, CustomerOrderData customers)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003COrderedItems_003Ed__4))]
	private static IEnumerable<IngredientNodeAsset> OrderedItems(CookingGraphAsset graph, CustomerOrderData customers)
	{
		return null;
	}

	private static IEnumerable<LeafRequirement> LeavesFor(CookingGraphAsset graph, IngredientNodeAsset ordered)
	{
		return null;
	}

	private static void Displace<T>(IList<T> lane, Func<int, int> distanceAt, Func<double> random)
	{
	}

	private static double NextUnit(Func<double> random)
	{
		return 0.0;
	}
}
