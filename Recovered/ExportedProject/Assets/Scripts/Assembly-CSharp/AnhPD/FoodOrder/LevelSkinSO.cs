using System;
using CakeOrder;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[CreateAssetMenu(fileName = "LevelSkinSO", menuName = "AnhPD/LevelSkinSO")]
	public class LevelSkinSO : ScriptableObject
	{
		[Serializable]
		public class Entry
		{
			public LevelSkinPart part;

			public Sprite hard;

			public Sprite superHard;
		}

		[SerializeField]
		private Entry[] entries;

		public Sprite GetSprite(LevelSkinPart part, LevelDifficultyTag tag)
		{
			return null;
		}
	}
}
