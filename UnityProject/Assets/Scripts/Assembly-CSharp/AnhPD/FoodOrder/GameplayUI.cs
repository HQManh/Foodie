using System;
using System.Collections.Generic;
using UnityEngine;
using Utilities;

namespace AnhPD.FoodOrder
{
	public class GameplayUI : MonoBehaviour
	{
		public static GameplayUI Ins;

		[Header("hint")]
		[SerializeField]
		private UIHint hintPopupPrefab;

		[Header("alert")]
		private UIPopupAlert _alertInstance;

		protected void Awake()
		{
			if (Ins != null)
			{
				UnityEngine.Object.Destroy(base.gameObject);
			}
			else
			{
				Ins = this;
			}
		}

		public void ShowHint(List<string> listId, string focusId = null, Action onClose = null)
		{
			if (!TryOpenHint(hint => hint.ShowListOrder(listId, focusId, onClose)))
			{
				onClose?.Invoke();
			}
		}

		public void ShowHintById(string id)
		{
			TryOpenHint(hint => hint.ShowRecipe(id));
		}

		// The hint is a popup of the in-level UI; the prefab is instantiated once and reused.
		private bool TryOpenHint(Action<UIHint> onBeforeShow)
		{
			CakeOrder.InGame.UIInLevelCakeOrder inLevelUi = CakeOrder.InGame.UIInLevelCakeOrder.InstanceUIInLevel;
			if (inLevelUi == null || hintPopupPrefab == null)
			{
				return false;
			}
			inLevelUi.ShowCustomPopup(hintPopupPrefab, onBeforeShow);
			return true;
		}

		public void ShowAlert(AlertType type, bool autoHide = true)
		{
			CakeOrder.InGame.UIInLevelCakeOrder inLevelUi = CakeOrder.InGame.UIInLevelCakeOrder.InstanceUIInLevel;
			if (inLevelUi == null)
			{
				return;
			}
			inLevelUi.ShowPopupAlert(type, autoHide, OnCreated)?.RunWithLogException();
			void OnCreated(UIPopupAlert alert)
			{
				_alertInstance = alert;
			}
		}

		public void HideAlert(AlertType type, Action onHidden = null)
		{
			if (_alertInstance != null)
			{
				_alertInstance.HideAlert(type, onHidden);
			}
			else
			{
				onHidden?.Invoke();
			}
		}
	}
}
