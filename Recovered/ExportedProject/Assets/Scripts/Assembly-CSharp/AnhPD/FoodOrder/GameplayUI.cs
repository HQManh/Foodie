using System;
using System.Collections.Generic;
using UnityEngine;

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
		}

		public void ShowHint(List<string> listId, string focusId = null, Action onClose = null)
		{
		}

		public void ShowHintById(string id)
		{
		}

		public void ShowAlert(AlertType type, bool autoHide = true)
		{
		}

		public void HideAlert(AlertType type, Action onHidden = null)
		{
		}
	}
}
