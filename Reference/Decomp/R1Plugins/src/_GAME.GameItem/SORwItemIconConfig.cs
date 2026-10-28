using System;
using System.Collections.Generic;
using UnityEngine;
using _GAME.Utils;

namespace _GAME.GameItem;

[CreateAssetMenu(fileName = "SORwItemIconConfig", menuName = "BaseGame/SORwItemIconConfig", order = 200)]
public class SORwItemIconConfig : SingletonSO<SORwItemIconConfig>
{
	[Serializable]
	public class ItemIcon
	{
		public RwItemType type;

		public Sprite icon;
	}

	[Tooltip("White-outline icon of each reward type")]
	public List<ItemIcon> listOutlineIcon;

	public void Load(SORwItemIconConfig newInstance)
	{
	}

	public static Sprite GetOutlineIcon(RwItemType type)
	{
		return null;
	}
}
