using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableEventTrigger : ObservableTriggerBase, IEventSystemHandler, IPointerEnterHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler, IBeginDragHandler, IInitializePotentialDragHandler, IDragHandler, IEndDragHandler, IDropHandler, IScrollHandler, IUpdateSelectedHandler, ISelectHandler, IDeselectHandler, IMoveHandler, ISubmitHandler, ICancelHandler
	{
		private Subject<BaseEventData> onDeselect;

		private Subject<AxisEventData> onMove;

		private Subject<PointerEventData> onPointerDown;

		private Subject<PointerEventData> onPointerEnter;

		private Subject<PointerEventData> onPointerExit;

		private Subject<PointerEventData> onPointerUp;

		private Subject<BaseEventData> onSelect;

		private Subject<PointerEventData> onPointerClick;

		private Subject<BaseEventData> onSubmit;

		private Subject<PointerEventData> onDrag;

		private Subject<PointerEventData> onBeginDrag;

		private Subject<PointerEventData> onEndDrag;

		private Subject<PointerEventData> onDrop;

		private Subject<BaseEventData> onUpdateSelected;

		private Subject<PointerEventData> onInitializePotentialDrag;

		private Subject<BaseEventData> onCancel;

		private Subject<PointerEventData> onScroll;

		void IDeselectHandler.OnDeselect(BaseEventData eventData)
		{
			if (onDeselect != null)
			{
				onDeselect.OnNext(eventData);
			}
		}

		public IObservable<BaseEventData> OnDeselectAsObservable()
		{
			if (onDeselect == null)
			{
				onDeselect = new Subject<BaseEventData>();
			}
			return onDeselect;
		}

		void IMoveHandler.OnMove(AxisEventData eventData)
		{
			if (onMove != null)
			{
				onMove.OnNext(eventData);
			}
		}

		public IObservable<AxisEventData> OnMoveAsObservable()
		{
			if (onMove == null)
			{
				onMove = new Subject<AxisEventData>();
			}
			return onMove;
		}

		void IPointerDownHandler.OnPointerDown(PointerEventData eventData)
		{
			if (onPointerDown != null)
			{
				onPointerDown.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnPointerDownAsObservable()
		{
			if (onPointerDown == null)
			{
				onPointerDown = new Subject<PointerEventData>();
			}
			return onPointerDown;
		}

		void IPointerEnterHandler.OnPointerEnter(PointerEventData eventData)
		{
			if (onPointerEnter != null)
			{
				onPointerEnter.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnPointerEnterAsObservable()
		{
			if (onPointerEnter == null)
			{
				onPointerEnter = new Subject<PointerEventData>();
			}
			return onPointerEnter;
		}

		void IPointerExitHandler.OnPointerExit(PointerEventData eventData)
		{
			if (onPointerExit != null)
			{
				onPointerExit.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnPointerExitAsObservable()
		{
			if (onPointerExit == null)
			{
				onPointerExit = new Subject<PointerEventData>();
			}
			return onPointerExit;
		}

		void IPointerUpHandler.OnPointerUp(PointerEventData eventData)
		{
			if (onPointerUp != null)
			{
				onPointerUp.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnPointerUpAsObservable()
		{
			if (onPointerUp == null)
			{
				onPointerUp = new Subject<PointerEventData>();
			}
			return onPointerUp;
		}

		void ISelectHandler.OnSelect(BaseEventData eventData)
		{
			if (onSelect != null)
			{
				onSelect.OnNext(eventData);
			}
		}

		public IObservable<BaseEventData> OnSelectAsObservable()
		{
			if (onSelect == null)
			{
				onSelect = new Subject<BaseEventData>();
			}
			return onSelect;
		}

		void IPointerClickHandler.OnPointerClick(PointerEventData eventData)
		{
			if (onPointerClick != null)
			{
				onPointerClick.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnPointerClickAsObservable()
		{
			if (onPointerClick == null)
			{
				onPointerClick = new Subject<PointerEventData>();
			}
			return onPointerClick;
		}

		void ISubmitHandler.OnSubmit(BaseEventData eventData)
		{
			if (onSubmit != null)
			{
				onSubmit.OnNext(eventData);
			}
		}

		public IObservable<BaseEventData> OnSubmitAsObservable()
		{
			if (onSubmit == null)
			{
				onSubmit = new Subject<BaseEventData>();
			}
			return onSubmit;
		}

		void IDragHandler.OnDrag(PointerEventData eventData)
		{
			if (onDrag != null)
			{
				onDrag.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnDragAsObservable()
		{
			if (onDrag == null)
			{
				onDrag = new Subject<PointerEventData>();
			}
			return onDrag;
		}

		void IBeginDragHandler.OnBeginDrag(PointerEventData eventData)
		{
			if (onBeginDrag != null)
			{
				onBeginDrag.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnBeginDragAsObservable()
		{
			if (onBeginDrag == null)
			{
				onBeginDrag = new Subject<PointerEventData>();
			}
			return onBeginDrag;
		}

		void IEndDragHandler.OnEndDrag(PointerEventData eventData)
		{
			if (onEndDrag != null)
			{
				onEndDrag.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnEndDragAsObservable()
		{
			if (onEndDrag == null)
			{
				onEndDrag = new Subject<PointerEventData>();
			}
			return onEndDrag;
		}

		void IDropHandler.OnDrop(PointerEventData eventData)
		{
			if (onDrop != null)
			{
				onDrop.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnDropAsObservable()
		{
			if (onDrop == null)
			{
				onDrop = new Subject<PointerEventData>();
			}
			return onDrop;
		}

		void IUpdateSelectedHandler.OnUpdateSelected(BaseEventData eventData)
		{
			if (onUpdateSelected != null)
			{
				onUpdateSelected.OnNext(eventData);
			}
		}

		public IObservable<BaseEventData> OnUpdateSelectedAsObservable()
		{
			if (onUpdateSelected == null)
			{
				onUpdateSelected = new Subject<BaseEventData>();
			}
			return onUpdateSelected;
		}

		void IInitializePotentialDragHandler.OnInitializePotentialDrag(PointerEventData eventData)
		{
			if (onInitializePotentialDrag != null)
			{
				onInitializePotentialDrag.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnInitializePotentialDragAsObservable()
		{
			if (onInitializePotentialDrag == null)
			{
				onInitializePotentialDrag = new Subject<PointerEventData>();
			}
			return onInitializePotentialDrag;
		}

		void ICancelHandler.OnCancel(BaseEventData eventData)
		{
			if (onCancel != null)
			{
				onCancel.OnNext(eventData);
			}
		}

		public IObservable<BaseEventData> OnCancelAsObservable()
		{
			if (onCancel == null)
			{
				onCancel = new Subject<BaseEventData>();
			}
			return onCancel;
		}

		void IScrollHandler.OnScroll(PointerEventData eventData)
		{
			if (onScroll != null)
			{
				onScroll.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnScrollAsObservable()
		{
			if (onScroll == null)
			{
				onScroll = new Subject<PointerEventData>();
			}
			return onScroll;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onDeselect != null)
			{
				onDeselect.OnCompleted();
			}
			if (onMove != null)
			{
				onMove.OnCompleted();
			}
			if (onPointerDown != null)
			{
				onPointerDown.OnCompleted();
			}
			if (onPointerEnter != null)
			{
				onPointerEnter.OnCompleted();
			}
			if (onPointerExit != null)
			{
				onPointerExit.OnCompleted();
			}
			if (onPointerUp != null)
			{
				onPointerUp.OnCompleted();
			}
			if (onSelect != null)
			{
				onSelect.OnCompleted();
			}
			if (onPointerClick != null)
			{
				onPointerClick.OnCompleted();
			}
			if (onSubmit != null)
			{
				onSubmit.OnCompleted();
			}
			if (onDrag != null)
			{
				onDrag.OnCompleted();
			}
			if (onBeginDrag != null)
			{
				onBeginDrag.OnCompleted();
			}
			if (onEndDrag != null)
			{
				onEndDrag.OnCompleted();
			}
			if (onDrop != null)
			{
				onDrop.OnCompleted();
			}
			if (onUpdateSelected != null)
			{
				onUpdateSelected.OnCompleted();
			}
			if (onInitializePotentialDrag != null)
			{
				onInitializePotentialDrag.OnCompleted();
			}
			if (onCancel != null)
			{
				onCancel.OnCompleted();
			}
			if (onScroll != null)
			{
				onScroll.OnCompleted();
			}
		}
	}
}
