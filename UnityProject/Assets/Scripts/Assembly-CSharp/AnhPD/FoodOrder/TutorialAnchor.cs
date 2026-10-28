using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class TutorialAnchor : MonoBehaviour
	{
		[SerializeField]
		private string key;

		private static readonly List<TutorialAnchor> Anchors = new List<TutorialAnchor>();

		public string Key => key;

		private void OnEnable()
		{
			Anchors.Add(this);
		}

		private void OnDisable()
		{
			Anchors.Remove(this);
		}

		public static Transform Find(string key)
		{
			if (string.IsNullOrEmpty(key))
			{
				return null;
			}
			foreach (TutorialAnchor anchor in Anchors)
			{
				if (anchor != null && anchor.key == key)
				{
					return anchor.transform;
				}
			}
			return null;
		}
	}
}
