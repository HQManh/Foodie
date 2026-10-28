using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class RecipeConfig
	{
		[CompilerGenerated]
		private sealed class _003CAnchorChoices_003Ed__5 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private string _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public RecipeConfig _003C_003E4__this;

			private HashSet<string> _003Cseen_003E5__2;

			private List<RecipeCombineConfig>.Enumerator _003C_003E7__wrap2;

			private CombinationComponent[] _003C_003E7__wrap3;

			private int _003C_003E7__wrap4;

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
			public _003CAnchorChoices_003Ed__5(int _003C_003E1__state)
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

		public string resultId;

		public List<RecipeCombineConfig> combinations;

		[Tooltip("Nguyên liệu vào tự do (gạo; lá trà + cốc). Nguyên liệu KHÔNG có trong danh sách chỉ được nhận khi ít nhất một anchor đã nằm trong slot. Trống = không ràng buộc thứ tự.")]
		public List<string> anchorIds;

		[Tooltip("Order ingredient list only: shows these ids instead of the first combination. Empty = default.")]
		public List<string> displayIds;

		public bool IsAnchor(string ingId)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CAnchorChoices_003Ed__5))]
		public IEnumerable<string> AnchorChoices()
		{
			return null;
		}
	}
}
