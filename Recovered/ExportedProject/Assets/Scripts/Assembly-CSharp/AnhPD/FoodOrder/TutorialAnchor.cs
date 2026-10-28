using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class TutorialAnchor : MonoBehaviour
	{
		[SerializeField]
		private string key;

		private static readonly List<TutorialAnchor> Anchors;

		public string Key => null;

		private void OnEnable()
		{
		}

		private void OnDisable()
		{
		}

		public static Transform Find(string key)
		{
			return null;
		}
	}
}
