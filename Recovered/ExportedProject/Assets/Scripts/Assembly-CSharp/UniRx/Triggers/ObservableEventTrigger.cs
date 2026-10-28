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
		}

		public IObservable<BaseEventData> OnDeselectAsObservable()
		{
			return null;
		}

		void IMoveHandler.OnMove(AxisEventData eventData)
		{
		}

		public IObservable<AxisEventData> OnMoveAsObservable()
		{
			return null;
		}

		void IPointerDownHandler.OnPointerDown(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnPointerDownAsObservable()
		{
			return null;
		}

		void IPointerEnterHandler.OnPointerEnter(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnPointerEnterAsObservable()
		{
			return null;
		}

		void IPointerExitHandler.OnPointerExit(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnPointerExitAsObservable()
		{
			return null;
		}

		void IPointerUpHandler.OnPointerUp(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnPointerUpAsObservable()
		{
			return null;
		}

		void ISelectHandler.OnSelect(BaseEventData eventData)
		{
		}

		public IObservable<BaseEventData> OnSelectAsObservable()
		{
			return null;
		}

		void IPointerClickHandler.OnPointerClick(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnPointerClickAsObservable()
		{
			return null;
		}

		void ISubmitHandler.OnSubmit(BaseEventData eventData)
		{
		}

		public IObservable<BaseEventData> OnSubmitAsObservable()
		{
			return null;
		}

		void IDragHandler.OnDrag(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnDragAsObservable()
		{
			return null;
		}

		void IBeginDragHandler.OnBeginDrag(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnBeginDragAsObservable()
		{
			return null;
		}

		void IEndDragHandler.OnEndDrag(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnEndDragAsObservable()
		{
			return null;
		}

		void IDropHandler.OnDrop(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnDropAsObservable()
		{
			return null;
		}

		void IUpdateSelectedHandler.OnUpdateSelected(BaseEventData eventData)
		{
		}

		public IObservable<BaseEventData> OnUpdateSelectedAsObservable()
		{
			return null;
		}

		void IInitializePotentialDragHandler.OnInitializePotentialDrag(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnInitializePotentialDragAsObservable()
		{
			return null;
		}

		void ICancelHandler.OnCancel(BaseEventData eventData)
		{
		}

		public IObservable<BaseEventData> OnCancelAsObservable()
		{
			return null;
		}

		void IScrollHandler.OnScroll(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnScrollAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
