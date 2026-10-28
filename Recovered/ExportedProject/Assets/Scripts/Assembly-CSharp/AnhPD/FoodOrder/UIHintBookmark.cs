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
		}

		public void Init(string newId)
		{
		}

		public void OnSelected()
		{
		}

		public void OnUnselected()
		{
		}
	}
}
