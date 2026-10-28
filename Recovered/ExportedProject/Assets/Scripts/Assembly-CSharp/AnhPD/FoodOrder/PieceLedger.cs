using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public static class PieceLedger
	{
		public enum Source
		{
			Unknown = 0,
			Belt = 1,
			AutoCompleteTake = 2,
			StationResult = 3,
			PlateMerge = 4,
			SaveMeBag = 5,
			AutoCompleteDish = 6,
			AutoCompleteReturn = 7
		}

		public enum End
		{
			Alive = 0,
			IntoStation = 1,
			Merged = 2,
			Served = 3,
			IntoBag = 4,
			AutoCompleteGathered = 5,
			AutoCompleteUndelivered = 6,
			Lost = 7
		}

		private class Trace
		{
			public int Serial;

			public string Id;

			public Source From;

			public string FromNote;

			public float BornAt;

			public DragItem Item;

			public End End;

			public string EndNote;

			public float EndAt;

			public readonly List<string> Steps;
		}

		private struct Frame
		{
			public Source From;

			public string Note;

			public object Producer;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public readonly struct Scope : IDisposable
		{
			public void Dispose()
			{
			}
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public readonly struct Muted : IDisposable
		{
			public void Dispose()
			{
			}
		}

		private const int MaxLogLines = 6000;

		private static readonly Dictionary<DragItem, Trace> _live;

		private static readonly List<Trace> _traces;

		private static readonly List<string> _log;

		private static readonly List<string> _skipped;

		private static readonly Stack<Frame> _frames;

		private static readonly Dictionary<object, List<Trace>> _stationInputs;

		private static readonly Dictionary<string, int> _beltStart;

		private static readonly Dictionary<string, int> _beltIn;

		private static readonly Dictionary<string, int> _beltOutTap;

		private static readonly Dictionary<string, int> _beltOutFx;

		private static readonly Dictionary<string, int> _fxUnspent;

		private static readonly Dictionary<string, int> _bornFromTap;

		private static readonly Dictionary<string, int> _bornFromFx;

		private static readonly List<string> _alerts;

		private const int MaxConsoleEntries = 40;

		private static readonly List<string> _console;

		private static int _consoleErrors;

		private static int _consoleWarnings;

		private static string _lastConsole;

		private static int _serial;

		private static int _suppress;

		private static int _bagIn;

		private static int _bagOut;

		private static bool _beltStarted;

		private static int _droppedLogLines;

		private static DateTime _startedAt;

		private static bool _on;

		private static float Now => 0f;

		public static void Reset()
		{
		}

		public static Scope From(Source from, string note = null, object producer = null)
		{
			return default;
		}

		public static Muted Mute()
		{
			return default;
		}

		public static void Born(DragItem item)
		{
		}

		public static void Adopt(DragItem item, Source from, string note)
		{
		}

		private static void Begin(DragItem item, Source from, string note, object producer)
		{
		}

		public static void Step(DragItem item, string what)
		{
		}

		public static void Finish(DragItem item, End end, string note = null, object station = null)
		{
		}

		public static void Despawned(DragItem item)
		{
		}

		public static void Skipped(string id, string why)
		{
		}

		public static void Note(string what)
		{
		}

		public static void Alert(string what)
		{
		}

		private static void OnUnityLog(string condition, string stackTrace, LogType type)
		{
		}

		public static string Describe(DragItem item)
		{
			return null;
		}

		private static void Close(Trace trace, End end, string note)
		{
		}

		public static void BeltStart(IngredientSpawnerController spawner)
		{
		}

		public static void BeltIn(IEnumerable<IngredientState> states, bool fxUnspent, string why)
		{
		}

		public static void BeltOut(IngredientState state, Source to)
		{
		}

		public static string BuildReport()
		{
			return null;
		}

		private static void AppendJourney(StringBuilder sb, Trace trace)
		{
		}

		private static string DescribeSurplus(List<Trace> vanished)
		{
			return null;
		}

		private static void AppendBag(StringBuilder sb, LevelPieceBook book, int bagNow)
		{
		}

		public static string DescribeStationInputs(CookingStation station)
		{
			return null;
		}

		public static string PieceNames(PieceSet pieces)
		{
			return null;
		}

		private static string SessionHeader()
		{
			return null;
		}

		private static string Tag(Trace trace)
		{
			return null;
		}

		private static string Describe(List<Trace> traces)
		{
			return null;
		}

		private static string DescribeCounts(Dictionary<string, int> counts)
		{
			return null;
		}

		private static void Bump(Dictionary<string, int> into, string id, int by)
		{
		}

		private static int Get<TKey>(Dictionary<TKey, int> from, TKey key)
		{
			return 0;
		}

		private static string Gap(int missing)
		{
			return null;
		}

		private static string NameOf(object o)
		{
			return null;
		}

		private static string FirstLine(string text)
		{
			return null;
		}

		private static string FirstLines(string text, int count)
		{
			return null;
		}

		private static void Log(string line)
		{
		}

		private static string ShortStack()
		{
			return null;
		}
	}
}
