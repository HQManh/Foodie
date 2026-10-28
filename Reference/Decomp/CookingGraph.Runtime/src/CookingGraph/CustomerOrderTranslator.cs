using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace CookingGraph;

public static class CustomerOrderTranslator
{
	private sealed class Cursor
	{
		public int Index;
	}

	[CompilerGenerated]
	private sealed class _003CSplitDishes_003Ed__12 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private string _003C_003E2__current;

		private int _003C_003El__initialThreadId;

		private string source;

		public string _003C_003E3__source;

		private string context;

		public string _003C_003E3__context;

		private int _003Cdepth_003E5__2;

		private int _003Ci_003E5__3;

		string IEnumerator<string>.Current
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
		public _003CSplitDishes_003Ed__12(int _003C_003E1__state)
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

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}

		[DebuggerHidden]
		IEnumerator<string> IEnumerable<string>.GetEnumerator()
		{
			return null;
		}

		[DebuggerHidden]
		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}
	}

	public static CustomerOrderData Parse(string source, IReadOnlyList<string> customerIds = null)
	{
		return null;
	}

	public static CustomerOrderData Parse(string source, CookingGraphAsset graph, IReadOnlyList<string> customerIds = null)
	{
		return null;
	}

	public static bool TryParse(string source, out CustomerOrderData data, out CookingGraphFormatException error, IReadOnlyList<string> customerIds = null)
	{
		data = null;
		error = null;
		return false;
	}

	public static bool TryParse(string source, CookingGraphAsset graph, out CustomerOrderData data, out CookingGraphFormatException error, IReadOnlyList<string> customerIds = null)
	{
		data = null;
		error = null;
		return false;
	}

	public static IReadOnlyList<CustomerOrderValidationIssue> ValidateMinimumQuantities(string source, CookingGraphAsset graph)
	{
		return null;
	}

	public static IReadOnlyList<CustomerOrderValidationIssue> ValidateMinimumQuantities(CustomerOrderData data, CookingGraphAsset graph)
	{
		return null;
	}

	public static IReadOnlyList<CustomerOrderValidationIssue> ValidateGroupQuantities(string source, CookingGraphAsset graph)
	{
		return null;
	}

	public static IReadOnlyList<CustomerOrderValidationIssue> ValidateGroupQuantities(CustomerOrderData data, CookingGraphAsset graph)
	{
		return null;
	}

	public static string Serialize(CustomerOrderData data)
	{
		return null;
	}

	private static DishOrderData ParseDish(string token, string context)
	{
		return null;
	}

	private static OrderMemberData ParseNode(string source, Cursor cursor, string context)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CSplitDishes_003Ed__12))]
	private static IEnumerable<string> SplitDishes(string source, string context)
	{
		return null;
	}

	private static string SerializeDish(DishOrderData dish)
	{
		return null;
	}

	private static string SerializeMember(OrderMemberData member)
	{
		return null;
	}

	private static void ResolveAssets(OrderMemberData member, CookingGraphAsset graph, string context)
	{
	}

	private static CookingNodeAsset ResolveAt<T>(IReadOnlyList<T> table, int index) where T : CookingNodeAsset
	{
		return null;
	}

	private static void CollectRequiredGroups(CookingNodeAsset node, CookingGraphAsset graph, GroupNodeAsset parent, IDictionary<GroupNodeAsset, GroupNodeAsset> groups, ISet<CookingNodeAsset> visiting)
	{
	}

	private static void CollectAuthoredGroups(OrderMemberData member, CookingGraphAsset graph, IDictionary<GroupNodeAsset, int> counts, IDictionary<GroupNodeAsset, GroupNodeAsset> expectedParents, GroupNodeAsset parent, ICollection<CustomerOrderValidationIssue> issues, int customerIndex, int dishIndex)
	{
	}

	private static int ParseInt(string token, string context)
	{
		return 0;
	}

	private static void Fail(string message, string context, int position)
	{
	}
}
