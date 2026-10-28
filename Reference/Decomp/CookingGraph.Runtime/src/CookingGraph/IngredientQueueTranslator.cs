using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace CookingGraph;

public static class IngredientQueueTranslator
{
	[CompilerGenerated]
	private sealed class _003CParseGroups_003Ed__10 : IEnumerable<QueueGroupData>, IEnumerable, IEnumerator<QueueGroupData>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private QueueGroupData _003C_003E2__current;

		private int _003C_003El__initialThreadId;

		private string section;

		public string _003C_003E3__section;

		private QueueGroupKind kind;

		public QueueGroupKind _003C_003E3__kind;

		private string context;

		public string _003C_003E3__context;

		private string[] _003C_003E7__wrap1;

		private int _003C_003E7__wrap2;

		QueueGroupData IEnumerator<QueueGroupData>.Current
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
		public _003CParseGroups_003Ed__10(int _003C_003E1__state)
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
		IEnumerator<QueueGroupData> IEnumerable<QueueGroupData>.GetEnumerator()
		{
			return null;
		}

		[DebuggerHidden]
		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}
	}

	public const int EmptySlotId = -2;

	public static IngredientQueueData Parse(string source)
	{
		return null;
	}

	public static IngredientQueueData Parse(string source, CookingGraphAsset graph)
	{
		return null;
	}

	public static bool TryParse(string source, out IngredientQueueData data, out CookingGraphFormatException error)
	{
		data = null;
		error = null;
		return false;
	}

	public static bool TryParse(string source, CookingGraphAsset graph, out IngredientQueueData data, out CookingGraphFormatException error)
	{
		data = null;
		error = null;
		return false;
	}

	public static string Serialize(IngredientQueueData data)
	{
		return null;
	}

	public static string SerializeItem(QueueItemData item)
	{
		return null;
	}

	internal static (string, List<EffectData>) ParseEffectToken(string token, string context)
	{
		return default((string, List<EffectData>));
	}

	internal static string SerializeEffects(IReadOnlyList<EffectData> effects)
	{
		return null;
	}

	internal static int ParseInteger(string token, string context, int position)
	{
		return 0;
	}

	[IteratorStateMachine(typeof(_003CParseGroups_003Ed__10))]
	private static IEnumerable<QueueGroupData> ParseGroups(string section, QueueGroupKind kind, string context)
	{
		return null;
	}

	private static string SerializeGroups(IEnumerable<QueueGroupData> groups, QueueGroupKind kind)
	{
		return null;
	}
}
