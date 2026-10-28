using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class OrderBoard : MonoBehaviour
	{
		private enum PreviewState
		{
			Idle = 0,
			Peeking = 1,
			Playing = 2,
			Hiding = 3
		}

		[CompilerGenerated]
		private sealed class _003CCloseOneRoutine_003Ed__58 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public Tween slide;

			public OrderBoard _003C_003E4__this;

			object IEnumerator<object>.Current
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
			public _003CCloseOneRoutine_003Ed__58(int _003C_003E1__state)
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
		}

		[CompilerGenerated]
		private sealed class _003CDismissRoutine_003Ed__62 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public OrderBoard _003C_003E4__this;

			object IEnumerator<object>.Current
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
			public _003CDismissRoutine_003Ed__62(int _003C_003E1__state)
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
		}

		[CompilerGenerated]
		private sealed class _003CLoadOrderRoutine_003Ed__43 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public OrderBoard _003C_003E4__this;

			public List<OrderSpec> list;

			public int shown;

			private int _003Ci_003E5__2;

			object IEnumerator<object>.Current
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
			public _003CLoadOrderRoutine_003Ed__43(int _003C_003E1__state)
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
		}

		[CompilerGenerated]
		private sealed class _003CPeekInRoutine_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public OrderBoard _003C_003E4__this;

			object IEnumerator<object>.Current
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
			public _003CPeekInRoutine_003Ed__54(int _003C_003E1__state)
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
		}

		[CompilerGenerated]
		private sealed class _003CPreviewIngredientsRoutine_003Ed__64 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public OrderBoard _003C_003E4__this;

			object IEnumerator<object>.Current
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
			public _003CPreviewIngredientsRoutine_003Ed__64(int _003C_003E1__state)
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
		}

		[CompilerGenerated]
		private sealed class _003CSlideOutAndClear_003Ed__63 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public OrderBoard _003C_003E4__this;

			object IEnumerator<object>.Current
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
			public _003CSlideOutAndClear_003Ed__63(int _003C_003E1__state)
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
		}

		[SerializeField]
		private FOrderItem[] items;

		[SerializeField]
		private float orderItemLoadDelay;

		[SerializeField]
		private Button zoomButton;

		[SerializeField]
		private GameObject boardRoot;

		[SerializeField]
		private OrderIngredientList ingredientList;

		[CompilerGenerated]
		private Action<OrderBoard, string> m_onZoomTapped;

		[CompilerGenerated]
		private Action<OrderBoard, float, Ease> m_PeekReleased;

		private int _tappedIndex;

		private readonly HashSet<int> _openOrders;

		private int _soloPeek;

		private Camera _uiCamera;

		private bool _uiCameraResolved;

		private Coroutine _loadRoutine;

		private Coroutine _previewRoutine;

		private List<OrderSpec> _orders;

		private OrderItemLook[] _looks;

		private PreviewState _previewState;

		private readonly List<CanvasGroup> _coveredItems;

		protected virtual GameObject VisualRoot => null;

		public string FocusOrderId => null;

		private Camera UiCamera => null;

		public int Capacity => 0;

		public bool IsLoadingOrder => false;

		public bool IsPeeking => false;

		public bool PeekIsWide => false;

		public event Action<OrderBoard, string> onZoomTapped
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<OrderBoard, float, Ease> PeekReleased
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		protected virtual void Awake()
		{
		}

		public void Tap()
		{
		}

		private void RaiseZoom()
		{
		}

		private string FocusIdAt(int index)
		{
			return null;
		}

		protected virtual int NearestOrderIndex(Vector2 screenPos)
		{
			return 0;
		}

		protected virtual bool CanFit(List<OrderSpec> ordersOnBoard, OrderSpec newOrder)
		{
			return false;
		}

		public virtual List<List<int>> Split(List<OrderSpec> orders)
		{
			return null;
		}

		protected virtual void OnDisable()
		{
		}

		protected OrderItemLook LookAt(int index)
		{
			return OrderItemLook.Normal;
		}

		protected void SetPreviewOrders(List<OrderSpec> orders, IReadOnlyList<OrderItemLook> looks)
		{
		}

		protected virtual FOrderItem ItemAt(int index)
		{
			return null;
		}

		public virtual void ShowOrder(List<OrderSpec> orders, IReadOnlyList<OrderItemLook> looks)
		{
		}

		public virtual float GetLoadDuration(List<OrderSpec> orders)
		{
			return 0f;
		}

		[IteratorStateMachine(typeof(_003CLoadOrderRoutine_003Ed__43))]
		private IEnumerator LoadOrderRoutine(List<OrderSpec> list, int shown)
		{
			return null;
		}

		public bool TryPeekIngredients(RectTransform neighbour, RectTransform clip, bool widen)
		{
			return false;
		}

		private bool HasOtherOrders(int index)
		{
			return false;
		}

		private bool CanOpen(int index)
		{
			return false;
		}

		private void StopPreviewRoutine()
		{
		}

		[IteratorStateMachine(typeof(_003CPeekInRoutine_003Ed__54))]
		private IEnumerator PeekInRoutine()
		{
			return null;
		}

		public void EndPeek(bool byTap = false)
		{
		}

		public virtual void PreviewIngredients()
		{
		}

		private void CloseOrder(int index)
		{
		}

		[IteratorStateMachine(typeof(_003CCloseOneRoutine_003Ed__58))]
		private IEnumerator CloseOneRoutine(Tween slide)
		{
			return null;
		}

		private void RedrawOpenOrders()
		{
		}

		private void RefreshIngredientPreview(int index)
		{
		}

		public void StopIngredientPreview()
		{
		}

		[IteratorStateMachine(typeof(_003CDismissRoutine_003Ed__62))]
		private IEnumerator DismissRoutine()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CSlideOutAndClear_003Ed__63))]
		private IEnumerator SlideOutAndClear()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CPreviewIngredientsRoutine_003Ed__64))]
		private IEnumerator PreviewIngredientsRoutine()
		{
			return null;
		}

		private int PreviewIndexOf(int orderIndex)
		{
			return 0;
		}

		private List<OrderSpec> BuildPreviewQueue()
		{
			return null;
		}

		private bool InPreview(int index)
		{
			return false;
		}

		private List<Vector2> PreviewSlots(List<int> indices)
		{
			return null;
		}

		private void CoverBoardWithList()
		{
		}

		private void UncoverItems()
		{
		}

		private void SetBoardVisible(bool visible)
		{
		}

		public virtual void HideOrder()
		{
		}

		public void SetItemLook(int index, OrderItemLook look, bool animate)
		{
		}

		public void PunchItem(int index)
		{
		}

		public Transform GetItemTarget(int index)
		{
			return null;
		}

		public virtual bool CommitItemDone(int index)
		{
			return false;
		}
	}
}
