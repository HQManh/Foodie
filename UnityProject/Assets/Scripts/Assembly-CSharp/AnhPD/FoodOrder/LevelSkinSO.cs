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
			if ((int)tag != 0 && entries != null)
			{
				for (int i = 0; i < entries.Length; i++)
				{
					Entry entry = entries[i];
					if (entry != null && entry.part == part)
					{
						if ((int)tag == 2 && entry.superHard != null)
						{
							return entry.superHard;
						}
						return entry.hard;
					}
				}
			}
			return null;
		}
	}
}
