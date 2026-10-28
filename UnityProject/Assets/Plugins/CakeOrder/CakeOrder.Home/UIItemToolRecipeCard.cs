using CakeOrder.BaseUI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home
{

public class UIItemToolRecipeCard : UIElementWithAnim
{
	[Header("Visual")]
	[SerializeField]
	private Image _background;

	[SerializeField]
	private Image _icon;

	[SerializeField]
	private TextMeshProUGUI _txtTitle;

	[SerializeField]
	private TextMeshProUGUI _txtDescription;

	[SerializeField]
	private TextMeshProUGUI _txtDishServed;

	[Header("Config")]
	[SerializeField]
	private Color _colorTool;

	[SerializeField]
	private Color _colorRecipe;

	private const string LocDishServed = "dish_served_n";

	public string MapId { get; private set; }

	public MapToolRecipeEntry Entry { get; private set; }

	public void SetUp(string mapId, MapToolRecipeEntry entry)
	{
	}

	public void Refresh()
	{
	}
}
}
