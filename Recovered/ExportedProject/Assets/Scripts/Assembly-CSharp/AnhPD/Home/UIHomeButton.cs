using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.Home
{
	public class UIHomeButton : MonoBehaviour
	{
		[SerializeField]
		private Button btn;

		[SerializeField]
		private TextMeshProUGUI subText;

		public void Setup(Action onClick)
		{
		}

		public void SetSubText(string text)
		{
		}

		public void SetInteract(bool isInteractable)
		{
		}
	}
}
