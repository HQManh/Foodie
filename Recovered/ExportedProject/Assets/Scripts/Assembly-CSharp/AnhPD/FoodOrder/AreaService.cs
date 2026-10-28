using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class AreaService
	{
		[CompilerGenerated]
		private sealed class _003CGetFieldItems_003Ed__10 : IEnumerable<DragItem>, IEnumerable, IEnumerator<DragItem>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private DragItem _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public AreaService _003C_003E4__this;

			private IEnumerator<DragItem> _003C_003E7__wrap1;

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
			public _003CGetFieldItems_003Ed__10(int _003C_003E1__state)
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

		[CompilerGenerated]
		private sealed class _003CGetRemainingItems_003Ed__8 : IEnumerable<DragItem>, IEnumerable, IEnumerator<DragItem>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private DragItem _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public AreaService _003C_003E4__this;

			private IEnumerator<DragItem> _003C_003E7__wrap1;

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
			public _003CGetRemainingItems_003Ed__8(int _003C_003E1__state)
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

		private GridIngController grid;

		private ServeShelfController shelf;

		public bool IsGridAlertBlinking => false;

		public bool IsGridDeadlockBlinking => false;

		public bool IsBeltTapBlocked => false;

		public float GridAlertBlinkPhase => 0f;

		public AreaService(GridIngController ingGrid, ServeShelfController serveShelf)
		{
		}

		public bool TryGetCell(DragItem item, out IngCell cell)
		{
			cell = null;
			return false;
		}

		public bool TryGetCellNearest(DragItem item, out IngCell cell)
		{
			cell = null;
			return false;
		}

		public void RefreshCellDishes()
		{
		}

		public void ShowCellDish(Vector2Int coord, bool show)
		{
		}

		public void SendToOverflow(DragItem item)
		{
		}

		[IteratorStateMachine(typeof(_003CGetRemainingItems_003Ed__8))]
		public IEnumerable<DragItem> GetRemainingItems()
		{
			return null;
		}

		public IEnumerable<DragItem> GetGridItems()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetFieldItems_003Ed__10))]
		public IEnumerable<DragItem> GetFieldItems()
		{
			return null;
		}

		public bool IsCellAvailable(string id, int num)
		{
			return false;
		}

		public int CountAvailable(string id, int max)
		{
			return 0;
		}

		public bool CanPlaceAll(IReadOnlyList<string> ids)
		{
			return false;
		}

		public void ReservePendingCell(string id)
		{
		}

		public void ReleasePendingCell(string id)
		{
		}

		public void PulseGridFullAlert(float cycleDuration)
		{
		}

		public void SetBeltStuck(bool stuck)
		{
		}

		public void SetBeltDeadlocked(bool v)
		{
		}

		public void SetBeltHasMove(bool v)
		{
		}

		public int CountCellsFreeableBySaveMe()
		{
			return 0;
		}
	}
}
