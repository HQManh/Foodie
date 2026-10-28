using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CookingStationCombineMultiChoice : CookingStation
	{
		[CompilerGenerated]
		private sealed class _003CSlotsOf_003Ed__14 : IEnumerable<StationSlot>, IEnumerable, IEnumerator<StationSlot>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private StationSlot _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public CookingStationCombineMultiChoice _003C_003E4__this;

			private int groupIndex;

			public int _003C_003E3__groupIndex;

			private StationSlot[] _003C_003E7__wrap1;

			private int _003C_003E7__wrap2;

			StationSlot IEnumerator<StationSlot>.Current
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
			public _003CSlotsOf_003Ed__14(int _003C_003E1__state)
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
			IEnumerator<StationSlot> IEnumerable<StationSlot>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[SerializeField]
		private GameObject baseIng;

		private const int NoGroup = -1;

		private string _baseIngId;

		private string _baseIngError;

		private bool _resolved;

		private bool _hasBase;

		private int _baseGroup;

		public string BaseIngId => null;

		private string BaseIngError => null;

		private bool HasBaseIngError => false;

		private InteractVector BaseVector => default;

		private void EnsureResolved()
		{
		}

		private void ResolveBaseIng()
		{
		}

		private bool IsInEveryGroup(string ingId)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CSlotsOf_003Ed__14))]
		private IEnumerable<StationSlot> SlotsOf(int groupIndex)
		{
			return null;
		}

		protected override void Awake()
		{
		}

		private bool IsBaseVector(InteractVector vector)
		{
			return false;
		}

		protected override string ResolveResultId(int groupIndex)
		{
			return null;
		}

		public override InteractVector GetInteractVector(string ingId)
		{
			return default;
		}

		public override int CountFreeSlots(string ingId)
		{
			return 0;
		}

		public override int CountHeldInputs(string ingId, string forResultId)
		{
			return 0;
		}

		public override bool AcceptsId(string ingId)
		{
			return false;
		}

		public override void PutInIngredient(InteractVector vector)
		{
		}

		protected override void HandleComplete(int groupIndex, bool isResultSpawned, int num)
		{
		}

		private void TakeBase()
		{
		}

		private void NotifyBaseTaken()
		{
		}

		private void InjectBase(int groupIndex)
		{
		}

		private void ClearBase()
		{
		}

		private int ChosenGroup()
		{
			return 0;
		}
	}
}
