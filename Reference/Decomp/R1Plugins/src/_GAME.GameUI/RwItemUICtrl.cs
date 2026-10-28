using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameItem;

namespace _GAME.GameUI;

public class RwItemUICtrl : MonoBehaviour
{
	public Image imgIcon;

	public TextMeshProUGUI txtValue;

	[Tooltip("Show the white-outline icon (SORwItemIconConfig) instead of CookOrder's; types without one keep CookOrder's icon")]
	public bool useOutlineIcon;

	[Header("RUNTIME")]
	[HideInInspector]
	public RwItemModel itemData;

	private GameObject _decoSpawned;

	public void SetData(RwItemType type, int value)
	{
	}

	public void SetData(RwItemModel newItemData)
	{
	}
}
