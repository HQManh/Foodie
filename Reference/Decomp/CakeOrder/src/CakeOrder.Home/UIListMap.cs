using System;
using CakeOrder.BaseUI;
using Cysharp.Threading.Tasks;

namespace CakeOrder.Home;

public abstract class UIListMap : UIElementWithAnim
{
	public abstract event Action<string> onMapSelected;

	public abstract UniTask SetUp(string initSelectedMapId);
}
