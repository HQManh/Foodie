using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

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
					return _003C_003E2__current;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return _003C_003E2__current;
				}
			}

			[DebuggerHidden]
			public _003CPlatesOf_003Ed__30(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
				_003C_003El__initialThreadId = Environment.CurrentManagedThreadId;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
				if (_003C_003E1__state != 1 && _003C_003E1__state != -3)
				{
					return;
				}
				_003C_003Em__Finally1();
			}

			private bool MoveNext()
			{
				if (_003C_003E1__state == 1)
				{
					_003C_003E1__state = -3;
				}
				else
				{
					if (_003C_003E1__state != 0)
					{
						return false;
					}
					_003C_003E1__state = -1;
					if (item == null)
					{
						return false;
					}
					_003C_003E7__wrap1 = _003C_003E4__this._requests.GetEnumerator();
					_003C_003E1__state = -3;
				}
				while (_003C_003E7__wrap1.MoveNext())
				{
					Request request = _003C_003E7__wrap1.Current;
					if (request.Item == item)
					{
						_003C_003E2__current = request.Plate;
						_003C_003E1__state = 1;
						return true;
					}
				}
				_003C_003Em__Finally1();
				_003C_003E7__wrap1 = default(List<Request>.Enumerator);
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			private void _003C_003Em__Finally1()
			{
				_003C_003E1__state = -1;
				_003C_003E7__wrap1.Dispose();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
				throw new NotSupportedException();
			}

			[DebuggerHidden]
			IEnumerator<ServePlate> IEnumerable<ServePlate>.GetEnumerator()
			{
				_003CPlatesOf_003Ed__30 result;
				if (_003C_003E1__state == -2 && _003C_003El__initialThreadId == Environment.CurrentManagedThreadId)
				{
					_003C_003E1__state = 0;
					result = this;
				}
				else
				{
					result = new _003CPlatesOf_003Ed__30(0) { _003C_003E4__this = _003C_003E4__this };
				}
				result.item = _003C_003E3__item;
				return result;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return ((IEnumerable<ServePlate>)this).GetEnumerator();
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
					return _003C_003E2__current;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return _003C_003E2__current;
				}
			}

			[DebuggerHidden]
			public _003Cget_Items_003Ed__10(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
				_003C_003El__initialThreadId = Environment.CurrentManagedThreadId;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
				if (_003C_003E1__state != 1 && _003C_003E1__state != -3)
				{
					return;
				}
				_003C_003Em__Finally1();
			}

			private bool MoveNext()
			{
				if (_003C_003E1__state == 1)
				{
					_003C_003E1__state = -3;
				}
				else
				{
					if (_003C_003E1__state != 0)
					{
						return false;
					}
					_003C_003E1__state = -1;
					_003C_003E7__wrap1 = _003C_003E4__this._requests.GetEnumerator();
					_003C_003E1__state = -3;
				}
				while (_003C_003E7__wrap1.MoveNext())
				{
					DragItem dragItem = _003C_003E7__wrap1.Current.Item;
					if (dragItem != null)
					{
						_003C_003E2__current = dragItem;
						_003C_003E1__state = 1;
						return true;
					}
				}
				_003C_003Em__Finally1();
				_003C_003E7__wrap1 = default(List<Request>.Enumerator);
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			private void _003C_003Em__Finally1()
			{
				_003C_003E1__state = -1;
				_003C_003E7__wrap1.Dispose();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
				throw new NotSupportedException();
			}

			[DebuggerHidden]
			IEnumerator<DragItem> IEnumerable<DragItem>.GetEnumerator()
			{
				_003Cget_Items_003Ed__10 result;
				if (_003C_003E1__state == -2 && _003C_003El__initialThreadId == Environment.CurrentManagedThreadId)
				{
					_003C_003E1__state = 0;
					result = this;
				}
				else
				{
					result = new _003Cget_Items_003Ed__10(0) { _003C_003E4__this = _003C_003E4__this };
				}
				return result;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return ((IEnumerable<DragItem>)this).GetEnumerator();
			}
		}

		private const float PromiseMaxAge = 3f;

		private readonly List<Request> _requests = new List<Request>();

		private const float MaxFlightTime = 2f;

		public bool Any => _requests.Count > 0;

		public int Count => _requests.Count;

		public IReadOnlyList<Request> Requests => _requests;

		public IEnumerable<DragItem> Items
		{
			[IteratorStateMachine(typeof(_003Cget_Items_003Ed__10))]
			get
			{
				return new _003Cget_Items_003Ed__10(-2) { _003C_003E4__this = this };
			}
		}

		public bool IsInFlight(DragItem item)
		{
			if (item == null)
			{
				return false;
			}
			foreach (Request request in _requests)
			{
				if (request.Item == item)
				{
					return true;
				}
			}
			return false;
		}

		public bool HasInbound(ServePlate plate)
		{
			return IndexOfOldest(plate) >= 0;
		}

		public bool HasInboundResultAnim(ServePlate plate)
		{
			foreach (Request request in _requests)
			{
				if (request.Plate == plate && request.Launched && request.OpensResultAnim)
				{
					return true;
				}
			}
			return false;
		}

		public PieceSet InboundPieces(ServePlate plate, LevelInfo info)
		{
			PieceSet pieces = PieceSet.Empty;
			foreach (Request request in _requests)
			{
				if (request.Plate != plate)
				{
					continue;
				}
				if (request.Promised)
				{
					pieces = pieces.Add(request.Pieces);
					continue;
				}
				if (request.Item == null)
				{
					continue;
				}
				PieceOffer offer = info.GetItemPieceOffer(request.Item);
				if (offer != null)
				{
					pieces = pieces.Add(offer.pieces);
				}
			}
			return pieces;
		}

		public string InboundSequence(ServePlate plate, LevelInfo info)
		{
			// TODO(unrecovered): original starts from a static string field; string.Empty assumed.
			string sequence = string.Empty;
			foreach (Request request in _requests)
			{
				if (request.Plate != plate)
				{
					continue;
				}
				if (request.Promised)
				{
					sequence = string.Concat(sequence, info.SequenceOf(request.BaseId));
				}
				else if (request.Item != null)
				{
					sequence = string.Concat(sequence, info.SequenceOf(request.Item.GetId()));
				}
			}
			return sequence;
		}

		public void Project(ServePlate plate, LevelInfo info, out FlexibleDragItem flexible, out string projectedId)
		{
			flexible = null;
			projectedId = null;
			if (plate == null)
			{
				return;
			}
			DragItem top = plate.Item;
			flexible = top as FlexibleDragItem;
			if (flexible == null)
			{
				projectedId = top != null ? top.GetId() : null;
			}
			foreach (Request request in _requests)
			{
				if (request.Plate != plate)
				{
					continue;
				}
				if (flexible != null)
				{
					break;
				}
				if (!request.Promised && request.Item == null)
				{
					continue;
				}
				FlexibleDragItem requestFlexible = request.Item as FlexibleDragItem;
				if (requestFlexible != null)
				{
					flexible = requestFlexible;
					continue;
				}
				if (!string.IsNullOrEmpty(request.ResultId))
				{
					projectedId = request.ResultId;
				}
				else if (!string.IsNullOrEmpty(projectedId))
				{
					if (!IsFlexibleId(info, projectedId))
					{
						projectedId = null;
						return;
					}
				}
				else
				{
					projectedId = BaseIdOf(request);
				}
			}
		}

		private static string BaseIdOf(Request request)
		{
			if (!request.Promised)
			{
				return request.Item.GetId();
			}
			return request.BaseId;
		}

		public static bool IsFlexibleId(LevelInfo info, string id)
		{
			if (info == null || string.IsNullOrEmpty(id))
			{
				return false;
			}
			string baseId = FlexibleId.BaseOf(id);
			DragItem prefab = info.GetIngredientPrefab(baseId);
			if (prefab == null)
			{
				return false;
			}
			return prefab is FlexibleDragItem;
		}

		public Request NextToLaunch(ServePlate plate, float stagger)
		{
			bool busy = !(plate != null && plate.IsEmpty);
			Request candidate = null;
			bool leading = true;
			float maxLaunch = float.MinValue;
			foreach (Request request in _requests)
			{
				if (request.Plate != plate)
				{
					continue;
				}
				if (leading)
				{
					busy = request.Arrived || busy;
				}
				leading = false;
				if (!request.Launched)
				{
					if (candidate == null)
					{
						candidate = request;
						if (request.Promised)
						{
							candidate = null;
						}
					}
				}
				else if (maxLaunch <= request.LaunchTime)
				{
					maxLaunch = request.LaunchTime;
				}
			}
			if (candidate == null || (candidate != Oldest(plate) && !busy))
			{
				return null;
			}
			if (maxLaunch > float.MinValue && Time.time < maxLaunch + stagger)
			{
				return null;
			}
			return candidate;
		}

		public bool IsBaseDown(ServePlate plate)
		{
			if (plate != null && plate.IsEmpty)
			{
				Request oldest = Oldest(plate);
				if (oldest != null)
				{
					return oldest.Arrived;
				}
			}
			return true;
		}

		public bool HasPending(ServePlate plate)
		{
			foreach (Request request in _requests)
			{
				if (request.Plate == plate && !request.Launched)
				{
					return true;
				}
			}
			return false;
		}

		public void MarkLaunched(Request request)
		{
			if (request != null)
			{
				request.Launched = true;
				request.LaunchTime = Time.time;
			}
		}

		public void Add(ServePlate plate, DragItem item, string resultId)
		{
			Request request = new Request();
			request.Plate = plate;
			request.Item = item;
			request.ResultId = resultId;
			request.ReserveTime = Time.time;
			_requests.Add(request);
		}

		public void AddPromise(ServePlate plate, string baseId, PieceSet pieces, string resultId)
		{
			Request request = new Request();
			request.Plate = plate;
			request.ResultId = resultId;
			request.ReserveTime = Time.time;
			request.Promised = true;
			request.BaseId = baseId;
			request.Pieces = pieces;
			_requests.Add(request);
		}

		public Request FindPromise(string baseId)
		{
			foreach (Request request in _requests)
			{
				if (request.Promised && request.BaseId == baseId)
				{
					return request;
				}
			}
			return null;
		}

		public static void Bind(Request promise, DragItem item)
		{
			if (promise == null)
			{
				return;
			}
			promise.Item = item;
			promise.Promised = false;
		}

		public Request Find(ServePlate plate, DragItem item)
		{
			if (item == null)
			{
				return null;
			}
			foreach (Request request in _requests)
			{
				if (request.Plate == plate && request.Item == item)
				{
					return request;
				}
			}
			return null;
		}

		public Request TakeArrivedOldest(ServePlate plate)
		{
			int index = IndexOfOldest(plate);
			if (index < 0)
			{
				return null;
			}
			Request request = _requests[index];
			if (request == null || !request.Arrived)
			{
				return null;
			}
			_requests.RemoveAt(index);
			return request;
		}

		public void AbortPlate(ServePlate plate, Action<DragItem> onOrphan, Action<DragItem> onStandDown = null)
		{
			for (int i = _requests.Count - 1; i >= 0; i--)
			{
				Request request = _requests[i];
				if (request.Plate != plate)
				{
					continue;
				}
				if (!request.Launched)
				{
					if (onStandDown != null)
					{
						onStandDown(request.Item);
					}
				}
				else if (request.Arrived || (onOrphan != null && IsOverdue(request)))
				{
					if (onOrphan != null)
					{
						onOrphan(request.Item);
					}
				}
				_requests.RemoveAt(i);
			}
		}

		private static bool IsOverdue(Request request)
		{
			if (!request.Launched || request.Arrived)
			{
				return false;
			}
			return request.LaunchTime + MaxFlightTime < Time.time;
		}

		[IteratorStateMachine(typeof(_003CPlatesOf_003Ed__30))]
		public IEnumerable<ServePlate> PlatesOf(DragItem item)
		{
			return new _003CPlatesOf_003Ed__30(-2) { _003C_003E3__item = item, _003C_003E4__this = this };
		}

		public void RemoveAllOf(DragItem item)
		{
			if (item == null)
			{
				return;
			}
			for (int i = _requests.Count - 1; i >= 0; i--)
			{
				if (_requests[i].Item == item)
				{
					_requests.RemoveAt(i);
				}
			}
		}

		public void CollectStalePlates(IReadOnlyList<ServePlate> livePlates, List<ServePlate> into)
		{
			into.Clear();
			foreach (Request request in _requests)
			{
				bool stale;
				if (request.Promised)
				{
					if (request.ReserveTime + PromiseMaxAge < Time.time)
					{
						stale = true;
					}
					else
					{
						stale = !IsOnShelf(request.Plate, livePlates);
					}
				}
				else if (IsAirborne(request.Item) && !IsOverdue(request))
				{
					stale = !IsOnShelf(request.Plate, livePlates);
				}
				else
				{
					stale = true;
				}
				if (stale && !into.Contains(request.Plate))
				{
					into.Add(request.Plate);
				}
			}
		}

		private static bool IsAirborne(DragItem item)
		{
			if (item == null)
			{
				return false;
			}
			return item.gameObject.activeInHierarchy;
		}

		private static bool IsOnShelf(ServePlate plate, IReadOnlyList<ServePlate> livePlates)
		{
			if (plate == null)
			{
				return false;
			}
			for (int i = 0; i < livePlates.Count; i++)
			{
				if (livePlates[i] == plate)
				{
					return true;
				}
			}
			return false;
		}

		public Request Oldest(ServePlate plate)
		{
			int index = IndexOfOldest(plate);
			return index >= 0 ? _requests[index] : null;
		}

		private int IndexOfOldest(ServePlate plate)
		{
			for (int i = 0; i < _requests.Count; i++)
			{
				if (_requests[i].Plate == plate)
				{
					return i;
				}
			}
			return -1;
		}
	}
}
