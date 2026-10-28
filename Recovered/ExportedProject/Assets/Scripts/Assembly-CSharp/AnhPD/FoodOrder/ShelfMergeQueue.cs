using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AnhPD.FoodOrder
{
	public class ShelfMergeQueue
	{
		public class Request
		{
			public ServePlate Plate;

			public DragItem Item;

			public string ResultId;

			public float ReserveTime;

			public bool Launched;

			public float LaunchTime;

			public bool Arrived;

			public bool OpensResultAnim;

			public bool Promised;

			public string BaseId;

			public PieceSet Pieces;
		}

		[CompilerGenerated]
		private sealed class _003CPlatesOf_003Ed__30 : IEnumerable<ServePlate>, IEnumerable, IEnumerator<ServePlate>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private ServePlate _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			private DragItem item;

			public DragItem _003C_003E3__item;

			public ShelfMergeQueue _003C_003E4__this;

			private List<Request>.Enumerator _003C_003E7__wrap1;

			ServePlate IEnumerator<ServePlate>.Current
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
			public _003CPlatesOf_003Ed__30(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<ServePlate> IEnumerable<ServePlate>.GetEnumerator()
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
		private sealed class _003Cget_Items_003Ed__10 : IEnumerable<DragItem>, IEnumerable, IEnumerator<DragItem>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private DragItem _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public ShelfMergeQueue _003C_003E4__this;

			private List<Request>.Enumerator _003C_003E7__wrap1;

			DragItem IEnumerator<DragItem>.Current
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
			public _003Cget_Items_003Ed__10(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<DragItem> IEnumerable<DragItem>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		private const float PromiseMaxAge = 3f;

		private readonly List<Request> _requests;

		private const float MaxFlightTime = 2f;

		public bool Any => false;

		public int Count => 0;

		public IReadOnlyList<Request> Requests => null;

		public IEnumerable<DragItem> Items
		{
			[IteratorStateMachine(typeof(_003Cget_Items_003Ed__10))]
			get
			{
				return null;
			}
		}

		public bool IsInFlight(DragItem item)
		{
			return false;
		}

		public bool HasInbound(ServePlate plate)
		{
			return false;
		}

		public bool HasInboundResultAnim(ServePlate plate)
		{
			return false;
		}

		public PieceSet InboundPieces(ServePlate plate, LevelInfo info)
		{
			return default;
		}

		public string InboundSequence(ServePlate plate, LevelInfo info)
		{
			return null;
		}

		public void Project(ServePlate plate, LevelInfo info, out FlexibleDragItem flexible, out string projectedId)
		{
			flexible = null;
			projectedId = null;
		}

		private static string BaseIdOf(Request request)
		{
			return null;
		}

		public static bool IsFlexibleId(LevelInfo info, string id)
		{
			return false;
		}

		public Request NextToLaunch(ServePlate plate, float stagger)
		{
			return null;
		}

		public bool IsBaseDown(ServePlate plate)
		{
			return false;
		}

		public bool HasPending(ServePlate plate)
		{
			return false;
		}

		public void MarkLaunched(Request request)
		{
		}

		public void Add(ServePlate plate, DragItem item, string resultId)
		{
		}

		public void AddPromise(ServePlate plate, string baseId, PieceSet pieces, string resultId)
		{
		}

		public Request FindPromise(string baseId)
		{
			return null;
		}

		public static void Bind(Request promise, DragItem item)
		{
		}

		public Request Find(ServePlate plate, DragItem item)
		{
			return null;
		}

		public Request TakeArrivedOldest(ServePlate plate)
		{
			return null;
		}

		public void AbortPlate(ServePlate plate, Action<DragItem> onOrphan, Action<DragItem> onStandDown = null)
		{
		}

		[IteratorStateMachine(typeof(_003CPlatesOf_003Ed__30))]
		public IEnumerable<ServePlate> PlatesOf(DragItem item)
		{
			return null;
		}

		public void RemoveAllOf(DragItem item)
		{
		}

		public void CollectStalePlates(IReadOnlyList<ServePlate> livePlates, List<ServePlate> into)
		{
		}

		private static bool IsOverdue(Request request)
		{
			return false;
		}

		private static bool IsOnShelf(ServePlate plate, IReadOnlyList<ServePlate> livePlates)
		{
			return false;
		}

		public Request Oldest(ServePlate plate)
		{
			return null;
		}

		private int IndexOfOldest(ServePlate plate)
		{
			return 0;
		}

		private static bool IsAirborne(DragItem item)
		{
			return false;
		}
	}
}
