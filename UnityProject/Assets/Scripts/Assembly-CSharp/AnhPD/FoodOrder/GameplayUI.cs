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
			// TODO(unrecovered): the popup-manager call that opens hintPopupPrefab is not identifiable from the pseudocode;
			// its created-callback is: hint => hint.ShowListOrder(listId, focusId, onClose)
		}

		public void ShowHintById(string id)
		{
			// TODO(unrecovered): the popup-manager call that opens hintPopupPrefab is not identifiable from the pseudocode;
			// its created-callback is: hint => hint.ShowRecipe(id)
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
