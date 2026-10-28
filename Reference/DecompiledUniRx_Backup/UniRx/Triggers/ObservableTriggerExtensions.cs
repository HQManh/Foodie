using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	public static class ObservableTriggerExtensions
	{
		public static IObservable<int> OnAnimatorIKAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<int>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<int>();
			return gameObject.GetOrAddComponent<ObservableAnimatorTrigger>().OnAnimatorIKAsObservable();
		}

		public static IObservable<Unit> OnAnimatorMoveAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableAnimatorTrigger>().OnAnimatorMoveAsObservable();
		}

		public static IObservable<Collision2D> OnCollisionEnter2DAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Collision2D>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Collision2D>();
			return gameObject.GetOrAddComponent<ObservableCollision2DTrigger>().OnCollisionEnter2DAsObservable();
		}

		public static IObservable<Collision2D> OnCollisionExit2DAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Collision2D>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Collision2D>();
			return gameObject.GetOrAddComponent<ObservableCollision2DTrigger>().OnCollisionExit2DAsObservable();
		}

		public static IObservable<Collision2D> OnCollisionStay2DAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Collision2D>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Collision2D>();
			return gameObject.GetOrAddComponent<ObservableCollision2DTrigger>().OnCollisionStay2DAsObservable();
		}

		public static IObservable<Collision> OnCollisionEnterAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Collision>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Collision>();
			return gameObject.GetOrAddComponent<ObservableCollisionTrigger>().OnCollisionEnterAsObservable();
		}

		public static IObservable<Collision> OnCollisionExitAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Collision>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Collision>();
			return gameObject.GetOrAddComponent<ObservableCollisionTrigger>().OnCollisionExitAsObservable();
		}

		public static IObservable<Collision> OnCollisionStayAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Collision>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Collision>();
			return gameObject.GetOrAddComponent<ObservableCollisionTrigger>().OnCollisionStayAsObservable();
		}

		public static IObservable<Unit> OnDestroyAsObservable(this Component component)
		{
			if (component == null) return Observable.Return(Unit.Default);
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Return(Unit.Default);
			return gameObject.GetOrAddComponent<ObservableDestroyTrigger>().OnDestroyAsObservable();
		}

		public static IObservable<Unit> OnEnableAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableEnableTrigger>().OnEnableAsObservable();
		}

		public static IObservable<Unit> OnDisableAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableEnableTrigger>().OnDisableAsObservable();
		}

		public static IObservable<Unit> FixedUpdateAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableFixedUpdateTrigger>().FixedUpdateAsObservable();
		}

		public static IObservable<Unit> LateUpdateAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableLateUpdateTrigger>().LateUpdateAsObservable();
		}

		public static IObservable<Collider2D> OnTriggerEnter2DAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Collider2D>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Collider2D>();
			return gameObject.GetOrAddComponent<ObservableTrigger2DTrigger>().OnTriggerEnter2DAsObservable();
		}

		public static IObservable<Collider2D> OnTriggerExit2DAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Collider2D>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Collider2D>();
			return gameObject.GetOrAddComponent<ObservableTrigger2DTrigger>().OnTriggerExit2DAsObservable();
		}

		public static IObservable<Collider2D> OnTriggerStay2DAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Collider2D>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Collider2D>();
			return gameObject.GetOrAddComponent<ObservableTrigger2DTrigger>().OnTriggerStay2DAsObservable();
		}

		public static IObservable<Collider> OnTriggerEnterAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Collider>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Collider>();
			return gameObject.GetOrAddComponent<ObservableTriggerTrigger>().OnTriggerEnterAsObservable();
		}

		public static IObservable<Collider> OnTriggerExitAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Collider>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Collider>();
			return gameObject.GetOrAddComponent<ObservableTriggerTrigger>().OnTriggerExitAsObservable();
		}

		public static IObservable<Collider> OnTriggerStayAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Collider>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Collider>();
			return gameObject.GetOrAddComponent<ObservableTriggerTrigger>().OnTriggerStayAsObservable();
		}

		public static IObservable<Unit> UpdateAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableUpdateTrigger>().UpdateAsObservable();
		}

		public static IObservable<Unit> OnBecameInvisibleAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableVisibleTrigger>().OnBecameInvisibleAsObservable();
		}

		public static IObservable<Unit> OnBecameVisibleAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableVisibleTrigger>().OnBecameVisibleAsObservable();
		}

		public static IObservable<Unit> OnBeforeTransformParentChangedAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableTransformChangedTrigger>().OnBeforeTransformParentChangedAsObservable();
		}

		public static IObservable<Unit> OnTransformParentChangedAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableTransformChangedTrigger>().OnTransformParentChangedAsObservable();
		}

		public static IObservable<Unit> OnTransformChildrenChangedAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableTransformChangedTrigger>().OnTransformChildrenChangedAsObservable();
		}

		public static IObservable<Unit> OnCanvasGroupChangedAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableCanvasGroupChangedTrigger>().OnCanvasGroupChangedAsObservable();
		}

		public static IObservable<Unit> OnRectTransformDimensionsChangeAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableRectTransformTrigger>().OnRectTransformDimensionsChangeAsObservable();
		}

		public static IObservable<Unit> OnRectTransformRemovedAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableRectTransformTrigger>().OnRectTransformRemovedAsObservable();
		}

		public static IObservable<BaseEventData> OnDeselectAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<BaseEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<BaseEventData>();
			return gameObject.GetOrAddComponent<ObservableDeselectTrigger>().OnDeselectAsObservable();
		}

		public static IObservable<AxisEventData> OnMoveAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<AxisEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<AxisEventData>();
			return gameObject.GetOrAddComponent<ObservableMoveTrigger>().OnMoveAsObservable();
		}

		public static IObservable<PointerEventData> OnPointerDownAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<PointerEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<PointerEventData>();
			return gameObject.GetOrAddComponent<ObservablePointerDownTrigger>().OnPointerDownAsObservable();
		}

		public static IObservable<PointerEventData> OnPointerEnterAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<PointerEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<PointerEventData>();
			return gameObject.GetOrAddComponent<ObservablePointerEnterTrigger>().OnPointerEnterAsObservable();
		}

		public static IObservable<PointerEventData> OnPointerExitAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<PointerEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<PointerEventData>();
			return gameObject.GetOrAddComponent<ObservablePointerExitTrigger>().OnPointerExitAsObservable();
		}

		public static IObservable<PointerEventData> OnPointerUpAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<PointerEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<PointerEventData>();
			return gameObject.GetOrAddComponent<ObservablePointerUpTrigger>().OnPointerUpAsObservable();
		}

		public static IObservable<BaseEventData> OnSelectAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<BaseEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<BaseEventData>();
			return gameObject.GetOrAddComponent<ObservableSelectTrigger>().OnSelectAsObservable();
		}

		public static IObservable<PointerEventData> OnPointerClickAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<PointerEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<PointerEventData>();
			return gameObject.GetOrAddComponent<ObservablePointerClickTrigger>().OnPointerClickAsObservable();
		}

		public static IObservable<BaseEventData> OnSubmitAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<BaseEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<BaseEventData>();
			return gameObject.GetOrAddComponent<ObservableSubmitTrigger>().OnSubmitAsObservable();
		}

		public static IObservable<PointerEventData> OnDragAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<PointerEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<PointerEventData>();
			return gameObject.GetOrAddComponent<ObservableDragTrigger>().OnDragAsObservable();
		}

		public static IObservable<PointerEventData> OnBeginDragAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<PointerEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<PointerEventData>();
			return gameObject.GetOrAddComponent<ObservableBeginDragTrigger>().OnBeginDragAsObservable();
		}

		public static IObservable<PointerEventData> OnEndDragAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<PointerEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<PointerEventData>();
			return gameObject.GetOrAddComponent<ObservableEndDragTrigger>().OnEndDragAsObservable();
		}

		public static IObservable<PointerEventData> OnDropAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<PointerEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<PointerEventData>();
			return gameObject.GetOrAddComponent<ObservableDropTrigger>().OnDropAsObservable();
		}

		public static IObservable<BaseEventData> OnUpdateSelectedAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<BaseEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<BaseEventData>();
			return gameObject.GetOrAddComponent<ObservableUpdateSelectedTrigger>().OnUpdateSelectedAsObservable();
		}

		public static IObservable<PointerEventData> OnInitializePotentialDragAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<PointerEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<PointerEventData>();
			return gameObject.GetOrAddComponent<ObservableInitializePotentialDragTrigger>().OnInitializePotentialDragAsObservable();
		}

		public static IObservable<BaseEventData> OnCancelAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<BaseEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<BaseEventData>();
			return gameObject.GetOrAddComponent<ObservableCancelTrigger>().OnCancelAsObservable();
		}

		public static IObservable<PointerEventData> OnScrollAsObservable(this UIBehaviour component)
		{
			if (component == null) return Observable.Empty<PointerEventData>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<PointerEventData>();
			return gameObject.GetOrAddComponent<ObservableScrollTrigger>().OnScrollAsObservable();
		}

		public static IObservable<GameObject> OnParticleCollisionAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<GameObject>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<GameObject>();
			return gameObject.GetOrAddComponent<ObservableParticleTrigger>().OnParticleCollisionAsObservable();
		}

		public static IObservable<Unit> OnParticleTriggerAsObservable(this Component component)
		{
			if (component == null) return Observable.Empty<Unit>();
			GameObject gameObject = component.gameObject;
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableParticleTrigger>().OnParticleTriggerAsObservable();
		}

		public static IObservable<int> OnAnimatorIKAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<int>();
			return gameObject.GetOrAddComponent<ObservableAnimatorTrigger>().OnAnimatorIKAsObservable();
		}

		public static IObservable<Unit> OnAnimatorMoveAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableAnimatorTrigger>().OnAnimatorMoveAsObservable();
		}

		public static IObservable<Collision2D> OnCollisionEnter2DAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Collision2D>();
			return gameObject.GetOrAddComponent<ObservableCollision2DTrigger>().OnCollisionEnter2DAsObservable();
		}

		public static IObservable<Collision2D> OnCollisionExit2DAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Collision2D>();
			return gameObject.GetOrAddComponent<ObservableCollision2DTrigger>().OnCollisionExit2DAsObservable();
		}

		public static IObservable<Collision2D> OnCollisionStay2DAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Collision2D>();
			return gameObject.GetOrAddComponent<ObservableCollision2DTrigger>().OnCollisionStay2DAsObservable();
		}

		public static IObservable<Collision> OnCollisionEnterAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Collision>();
			return gameObject.GetOrAddComponent<ObservableCollisionTrigger>().OnCollisionEnterAsObservable();
		}

		public static IObservable<Collision> OnCollisionExitAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Collision>();
			return gameObject.GetOrAddComponent<ObservableCollisionTrigger>().OnCollisionExitAsObservable();
		}

		public static IObservable<Collision> OnCollisionStayAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Collision>();
			return gameObject.GetOrAddComponent<ObservableCollisionTrigger>().OnCollisionStayAsObservable();
		}

		public static IObservable<Unit> OnDestroyAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Return(Unit.Default);
			return gameObject.GetOrAddComponent<ObservableDestroyTrigger>().OnDestroyAsObservable();
		}

		public static IObservable<Unit> OnEnableAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableEnableTrigger>().OnEnableAsObservable();
		}

		public static IObservable<Unit> OnDisableAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableEnableTrigger>().OnDisableAsObservable();
		}

		public static IObservable<Unit> FixedUpdateAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableFixedUpdateTrigger>().FixedUpdateAsObservable();
		}

		public static IObservable<Unit> LateUpdateAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableLateUpdateTrigger>().LateUpdateAsObservable();
		}

		public static IObservable<Collider2D> OnTriggerEnter2DAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Collider2D>();
			return gameObject.GetOrAddComponent<ObservableTrigger2DTrigger>().OnTriggerEnter2DAsObservable();
		}

		public static IObservable<Collider2D> OnTriggerExit2DAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Collider2D>();
			return gameObject.GetOrAddComponent<ObservableTrigger2DTrigger>().OnTriggerExit2DAsObservable();
		}

		public static IObservable<Collider2D> OnTriggerStay2DAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Collider2D>();
			return gameObject.GetOrAddComponent<ObservableTrigger2DTrigger>().OnTriggerStay2DAsObservable();
		}

		public static IObservable<Collider> OnTriggerEnterAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Collider>();
			return gameObject.GetOrAddComponent<ObservableTriggerTrigger>().OnTriggerEnterAsObservable();
		}

		public static IObservable<Collider> OnTriggerExitAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Collider>();
			return gameObject.GetOrAddComponent<ObservableTriggerTrigger>().OnTriggerExitAsObservable();
		}

		public static IObservable<Collider> OnTriggerStayAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Collider>();
			return gameObject.GetOrAddComponent<ObservableTriggerTrigger>().OnTriggerStayAsObservable();
		}

		public static IObservable<Unit> UpdateAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableUpdateTrigger>().UpdateAsObservable();
		}

		public static IObservable<Unit> OnBecameInvisibleAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableVisibleTrigger>().OnBecameInvisibleAsObservable();
		}

		public static IObservable<Unit> OnBecameVisibleAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableVisibleTrigger>().OnBecameVisibleAsObservable();
		}

		public static IObservable<Unit> OnBeforeTransformParentChangedAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableTransformChangedTrigger>().OnBeforeTransformParentChangedAsObservable();
		}

		public static IObservable<Unit> OnTransformParentChangedAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableTransformChangedTrigger>().OnTransformParentChangedAsObservable();
		}

		public static IObservable<Unit> OnTransformChildrenChangedAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableTransformChangedTrigger>().OnTransformChildrenChangedAsObservable();
		}

		public static IObservable<Unit> OnCanvasGroupChangedAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableCanvasGroupChangedTrigger>().OnCanvasGroupChangedAsObservable();
		}

		public static IObservable<Unit> OnRectTransformDimensionsChangeAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableRectTransformTrigger>().OnRectTransformDimensionsChangeAsObservable();
		}

		public static IObservable<Unit> OnRectTransformRemovedAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableRectTransformTrigger>().OnRectTransformRemovedAsObservable();
		}

		public static IObservable<GameObject> OnParticleCollisionAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<GameObject>();
			return gameObject.GetOrAddComponent<ObservableParticleTrigger>().OnParticleCollisionAsObservable();
		}

		public static IObservable<Unit> OnParticleTriggerAsObservable(this GameObject gameObject)
		{
			if (gameObject == null) return Observable.Empty<Unit>();
			return gameObject.GetOrAddComponent<ObservableParticleTrigger>().OnParticleTriggerAsObservable();
		}

		private static T GetOrAddComponent<T>(GameObject gameObject) where T : Component
		{
			return null; // TODO(unrecovered): helper FUN_04c4e1c8 (generic component get-or-add, called with a DAT_ type handle) is an unnamed IL2CPP helper with no stub equivalent; left as stub.
		}
	}
}
