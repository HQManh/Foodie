using CakeOrder.BaseUI;
using UnityEngine;

namespace CakeOrder.InGame;

public class UIIngredientShopping : UIElementWithAnim
{
	[SerializeField]
	private CookOrderModuleIngredientShopping _ingredientShoppingModule;

	public void SetUp(CookOrderModuleIngredientShopping ingredientShoppingModule)
	{
	}
}
