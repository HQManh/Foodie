using System;
using System.Collections.Generic;
using System.Diagnostics;
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

			public readonly List<string> Steps = new List<string>();
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
				if (_frames.Count > 0)
				{
					_frames.Pop();
				}
			}
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public readonly struct Muted : IDisposable
		{
			public void Dispose()
			{
				_suppress = Mathf.Max(0, _suppress - 1);
			}
		}

		private const int MaxLogLines = 6000;

		private static readonly Dictionary<DragItem, Trace> _live = new Dictionary<DragItem, Trace>();

		private static readonly List<Trace> _traces = new List<Trace>();

		private static readonly List<string> _log = new List<string>();

		private static readonly List<string> _skipped = new List<string>();

		private static readonly Stack<Frame> _frames = new Stack<Frame>();

		private static readonly Dictionary<object, List<Trace>> _stationInputs = new Dictionary<object, List<Trace>>();

		private static readonly Dictionary<string, int> _beltStart = new Dictionary<string, int>();

		private static readonly Dictionary<string, int> _beltIn = new Dictionary<string, int>();

		private static readonly Dictionary<string, int> _beltOutTap = new Dictionary<string, int>();

		private static readonly Dictionary<string, int> _beltOutFx = new Dictionary<string, int>();

		private static readonly Dictionary<string, int> _fxUnspent = new Dictionary<string, int>();

		private static readonly Dictionary<string, int> _bornFromTap = new Dictionary<string, int>();

		private static readonly Dictionary<string, int> _bornFromFx = new Dictionary<string, int>();

		private static readonly List<string> _alerts = new List<string>();

		private const int MaxConsoleEntries = 40;

		private static readonly List<string> _console = new List<string>();

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

		private static float Now => Time.timeSinceLevelLoad;

		public static void Reset()
		{
			_on = Application.isEditor || CakeOrder.CheatManagerCakeOrder.IsShowDebug;
			Application.logMessageReceived -= OnUnityLog;
			if (_on)
			{
				Application.logMessageReceived += OnUnityLog;
			}
			_alerts.Clear();
			_console.Clear();
			_lastConsole = null;
			_consoleErrors = 0;
			_consoleWarnings = 0;
			_startedAt = DateTime.Now;
			_live.Clear();
			_traces.Clear();
			_log.Clear();
			_skipped.Clear();
			_frames.Clear();
			_stationInputs.Clear();
			_beltStart.Clear();
			_beltIn.Clear();
			_beltOutTap.Clear();
			_beltOutFx.Clear();
			_fxUnspent.Clear();
			_bornFromTap.Clear();
			_bornFromFx.Clear();
			_serial = 0;
			_suppress = 0;
			_bagIn = 0;
			_bagOut = 0;
			_beltStarted = false;
			_droppedLogLines = 0;
		}

		public static Scope From(Source from, string note = null, object producer = null)
		{
			if (_on)
			{
				_frames.Push(new Frame
				{
					From = from,
					Note = note,
					Producer = producer
				});
			}
			return default(Scope);
		}

		public static Muted Mute()
		{
			_suppress++;
			return default(Muted);
		}

		public static void Born(DragItem item)
		{
			if (!_on || !(item != null))
			{
				return;
			}
			// (an additional per-item flag check present in the original is not recovered)
			if (_suppress > 0)
			{
				return;
			}
			Source from = Source.Unknown;
			string note = null;
			object producer = null;
			if (_frames.Count > 0)
			{
				Frame frame = _frames.Peek();
				from = frame.From;
				note = frame.Note;
				producer = frame.Producer;
			}
			if (note == null)
			{
				note = string.Format("item {0}" /* literal recovered by guess */, item.GetInstanceID());
			}
			Begin(item, from, note, producer);
		}

		public static void Adopt(DragItem item, Source from, string note)
		{
			if (_on && item != null && !_live.ContainsKey(item))
			{
				Begin(item, from, note, null);
			}
		}

		private static void Begin(DragItem item, Source from, string note, object producer)
		{
			if (_live.TryGetValue(item, out var value))
			{
				_live.Remove(item);
				Close(value, End.Lost, "re-registered" /* literal recovered by guess */);
			}
			if (producer != null && _stationInputs.TryGetValue(producer, out var value2) && value2.Count > 0)
			{
				note = note + " [from " + Describe(value2) + "]" /* literal recovered by guess */;
				value2.Clear();
			}
			Trace trace = new Trace();
			trace.Serial = ++_serial;
			trace.Id = item.GetId();
			trace.From = from;
			trace.FromNote = note;
			trace.BornAt = Time.timeSinceLevelLoad;
			trace.Item = item;
			trace.End = End.Alive;
			_live[item] = trace;
			_traces.Add(trace);
			switch (from)
			{
			case Source.SaveMeBag:
				_bagOut++;
				break;
			case Source.AutoCompleteTake:
				Bump(_bornFromFx, trace.Id, 1);
				break;
			case Source.Belt:
				Bump(_bornFromTap, trace.Id, 1);
				break;
			}
			Log(string.Format("{0} born {1} {2}" /* literal recovered by guess */, Tag(trace), from, note));
		}

		public static void Step(DragItem item, string what)
		{
			if (item != null && _live.TryGetValue(item, out var value))
			{
				value.Steps.Add(string.Format("[{0:F1}] {1}" /* literal recovered by guess */, Time.timeSinceLevelLoad, what));
				Log(Tag(value) + " " + what);
			}
		}

		public static void Finish(DragItem item, End end, string note = null, object station = null)
		{
			if (!(item != null) || !_live.TryGetValue(item, out var value))
			{
				return;
			}
			_live.Remove(item);
			Close(value, end, note);
			if (end == End.IntoStation && station != null)
			{
				if (!_stationInputs.TryGetValue(station, out var value2))
				{
					value2 = new List<Trace>();
					_stationInputs[station] = value2;
				}
				value2.Add(value);
			}
			else if (end == End.IntoBag)
			{
				_bagIn++;
			}
		}

		public static void Despawned(DragItem item)
		{
			if (item != null && _live.TryGetValue(item, out var value))
			{
				_live.Remove(item);
				Close(value, End.Lost, "despawned: " /* literal recovered by guess */ + ShortStack());
			}
		}

		public static void Skipped(string id, string why)
		{
			if (_on)
			{
				_skipped.Add(string.Format("[{0:F1}] {1}: {2}" /* literal recovered by guess */, Time.timeSinceLevelLoad, id, why));
				Log("skipped " /* literal recovered by guess */ + id + ": " + why);
			}
		}

		public static void Note(string what)
		{
			if (_on)
			{
				Log(what);
			}
		}

		public static void Alert(string what)
		{
			if (_on)
			{
				_alerts.Add(string.Format("[{0:F1}] {1}" /* literal recovered by guess */, Time.timeSinceLevelLoad, what));
				Log("ALERT: " /* literal recovered by guess */ + what);
			}
		}

		private static void OnUnityLog(string condition, string stackTrace, LogType type)
		{
			if (type == LogType.Log)
			{
				return;
			}
			if (type == LogType.Warning)
			{
				_consoleWarnings++;
			}
			else
			{
				_consoleErrors++;
			}
			if (condition == _lastConsole)
			{
				return;
			}
			_lastConsole = condition;
			StringBuilder stringBuilder = new StringBuilder(string.Format("[{0:F1}] {1}: " /* literal recovered by guess */, Time.timeSinceLevelLoad, type));
			stringBuilder.Append(FirstLines(condition, 4));
			if (type != LogType.Warning && !string.IsNullOrEmpty(stackTrace))
			{
				stringBuilder.Append('\n');
				stringBuilder.Append(FirstLines(stackTrace, 4));
			}
			_console.Add(stringBuilder.ToString());
			if (_console.Count > 40)
			{
				_console.RemoveAt(0);
			}
			Log(string.Format("console {0}: {1}" /* literal recovered by guess */, type, FirstLine(condition)));
		}

		public static string Describe(DragItem item)
		{
			if (item != null && _live.TryGetValue(item, out var value))
			{
				return Tag(value);
			}
			if (!(item != null))
			{
				return "?" /* literal recovered by guess */;
			}
			return item.GetId();
		}

		private static void Close(Trace trace, End end, string note)
		{
			trace.EndNote = note;
			trace.End = end;
			trace.EndAt = Time.timeSinceLevelLoad;
			Log(string.Format("{0} end {1} {2}" /* literal recovered by guess */, Tag(trace), end, FirstLine(note)));
		}

		public static void BeltStart(IngredientSpawnerController spawner)
		{
			if (!_on)
			{
				return;
			}
			_beltStart.Clear();
			if (spawner != null)
			{
				spawner.CountBeltServings(_beltStart);
			}
			_beltStarted = true;
			int num = 0;
			foreach (int value in _beltStart.Values)
			{
				num += value;
			}
			Log(string.Format("belt start: {0} servings ({1})" /* literal recovered by guess */, num, DescribeCounts(_beltStart)));
		}

		public static void BeltIn(IEnumerable<IngredientState> states, bool fxUnspent, string why)
		{
			if (states == null || !_on)
			{
				return;
			}
			foreach (IngredientState state in states)
			{
				if (state != null)
				{
					Bump(fxUnspent ? _fxUnspent : _beltIn, state.id, state.amount);
					Log(string.Format("belt in {0} ({1})" /* literal recovered by guess */, state, why));
				}
			}
		}

		public static void BeltOut(IngredientState state, Source to)
		{
			if (_on && state != null)
			{
				Bump((to == Source.AutoCompleteTake) ? _beltOutFx : _beltOutTap, state.id, state.amount);
				Log(string.Format("belt out {0} -> {1}" /* literal recovered by guess */, state, to));
			}
		}

		public static string BuildReport()
		{
			// TODO(unrecovered): ~1400-line report builder dominated by unrecoverable string literals and generic helper thunks
			return null;
		}

		private static void AppendJourney(StringBuilder sb, Trace trace)
		{
			// TODO(unrecovered): report formatting depends on unrecovered string literals
		}

		private static string DescribeSurplus(List<Trace> vanished)
		{
			// TODO(unrecovered): report formatting depends on unrecovered string literals
			return null;
		}

		private static void AppendBag(StringBuilder sb, LevelPieceBook book, int bagNow)
		{
			// TODO(unrecovered): report formatting depends on unrecovered string literals
		}

		public static string DescribeStationInputs(CookingStation station)
		{
			if (!_on)
			{
				return "-" /* literal recovered by guess */;
			}
			if (station != null && _stationInputs.TryGetValue(station, out var value) && value.Count > 0)
			{
				return Describe(value);
			}
			return "-" /* literal recovered by guess */;
		}

		public static string PieceNames(PieceSet pieces)
		{
			if (pieces.IsEmpty)
			{
				return "-" /* literal recovered by guess */;
			}
			RecipeConfigSO recipeConfigSO = ((MessyController.Ins != null) ? MessyController.Ins.recipeConfig : null);
			if (recipeConfigSO != null)
			{
				return pieces.ToString(recipeConfigSO.PieceName);
			}
			return pieces.ToString();
		}

		private static string SessionHeader()
		{
			// TODO(unrecovered): report formatting depends on unrecovered string literals
			return null;
		}

		private static string Tag(Trace trace)
		{
			return string.Format("#{0} {1}" /* literal recovered by guess */, trace.Serial, trace.Id);
		}

		private static string Describe(List<Trace> traces)
		{
			StringBuilder stringBuilder = new StringBuilder();
			foreach (Trace trace in traces)
			{
				stringBuilder.Append((stringBuilder.Length > 0) ? ", " : "");
				stringBuilder.Append(Tag(trace));
			}
			return stringBuilder.ToString();
		}

		private static string DescribeCounts(Dictionary<string, int> counts)
		{
			StringBuilder stringBuilder = new StringBuilder();
			foreach (KeyValuePair<string, int> count in counts)
			{
				stringBuilder.Append((stringBuilder.Length > 0) ? ", " : "");
				stringBuilder.Append(count.Key);
				stringBuilder.Append('x');
				stringBuilder.Append(count.Value);
			}
			return stringBuilder.ToString();
		}

		private static void Bump(Dictionary<string, int> into, string id, int by)
		{
			if (!string.IsNullOrEmpty(id))
			{
				into[id] = Get(into, id) + by;
			}
		}

		private static int Get<TKey>(Dictionary<TKey, int> from, TKey key)
		{
			if (!from.TryGetValue(key, out var value))
			{
				return 0;
			}
			return value;
		}

		private static string Gap(int missing)
		{
			// literal formats recovered by guess
			if (missing < 1)
			{
				return string.Format("(+{0})", -missing);
			}
			return string.Format("(-{0})", missing);
		}

		private static string NameOf(object o)
		{
			if (o is UnityEngine.Object @object && @object != null)
			{
				return @object.name;
			}
			return "?" /* literal recovered by guess */;
		}

		private static string FirstLine(string text)
		{
			if (string.IsNullOrEmpty(text))
			{
				return "";
			}
			int num = text.IndexOf('\n');
			if (num >= 0)
			{
				return text.Substring(0, num);
			}
			return text;
		}

		private static string FirstLines(string text, int count)
		{
			if (string.IsNullOrEmpty(text))
			{
				return "";
			}
			int num = -1;
			if (count > 0)
			{
				do
				{
					num = text.IndexOf('\n', num + 1);
					if (num < 0)
					{
						return text.TrimEnd();
					}
					count--;
				}
				while (count != 0);
			}
			return text.Substring(0, num).TrimEnd();
		}

		private static void Log(string line)
		{
			_log.Add(string.Format("[{0:F1}] {1}" /* literal recovered by guess */, Time.timeSinceLevelLoad, line));
			if (_log.Count > 6000)
			{
				_log.RemoveAt(0);
				_droppedLogLines++;
			}
		}

		private static string ShortStack()
		{
			string[] array = new StackTrace(2, false).ToString().Split('\n');
			StringBuilder stringBuilder = new StringBuilder();
			for (int i = 0; i < array.Length; i++)
			{
				stringBuilder.Append("  " /* literal recovered by guess */);
				stringBuilder.AppendLine(array[i].Trim());
				if (i > 6)
				{
					break;
				}
			}
			return stringBuilder.ToString();
		}
	}
}
