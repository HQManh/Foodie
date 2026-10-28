using System;
using ChocDino.UIFX;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class UIHintBookmark : MonoBehaviour
	{
		[SerializeField]
		private Button button;

		[SerializeField]
		private OutlineFilter outline;

		[SerializeField]
		private Image image;

		public Action<UIHintBookmark> onClick;

		public string id;

		private void Awake()
		{
			if (button != null)
			{
				button.onClick.AddListener(OnButtonClicked);
			}
		}

		private void OnButtonClicked()
		{
			if (onClick != null)
			{
				onClick(this);
			}
		}

		public void Init(string newId)
		{
			gameObject.SetActive(true);
			id = newId;
			LevelInfo info = MessyController.Ins != null ? MessyController.Ins.Info : null;
			if (info != null && image != null)
			{
				image.sprite = info.GetIngredientSprite(id);
			}
		}

		public void OnSelected()
		{
			if (outline != null)
			{
				outline.enabled = true;
			}
		}

		public void OnUnselected()
		{
			if (outline != null)
			{
				outline.enabled = false;
			}
		}
	}
}
