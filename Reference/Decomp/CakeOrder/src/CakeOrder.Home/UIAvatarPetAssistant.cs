using CakeOrder.BaseUI;
using CakeOrder.DataSO;

namespace CakeOrder.Home;

public class UIAvatarPetAssistant : UIElementWithAnim
{
	protected bool _isOwned;

	public PetAssistantSO PetAssistantSO { get; private set; }

	public void SetUp(PetAssistantSO petAssistantSO, bool isOwned)
	{
	}

	protected virtual void OnSetUp()
	{
	}

	protected virtual void OnChangeStateOwned()
	{
	}

	public void SetOwned()
	{
	}

	public virtual void PlayHappy()
	{
	}
}
