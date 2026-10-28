using CookingGraph;

namespace CakeOrder.InGame
{

public interface IAutoplayCheatTarget
{
	bool IsAutoplayEnabled { get; }

	CookingBotPickingStrategy PickingStrategy { get; }

	CookingBotPickingStrategy EffectivePickingStrategy { get; }

	float Intelligent { get; }

	void ToggleAutoplay();

	void SetPickingStrategy(CookingBotPickingStrategy strategy);

	void SetIntelligent(float value);
}
}
