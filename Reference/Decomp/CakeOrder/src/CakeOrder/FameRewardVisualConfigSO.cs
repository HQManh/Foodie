using UnityEngine;

namespace CakeOrder;

[CreateAssetMenu(fileName = "FameProgressVisualConfigSO", menuName = "ScriptableObjects/CakeOrder/FameRewardVisualConfigSO", order = 1)]
public class FameRewardVisualConfigSO : ScriptableObject
{
	public Sprite spriteFameRewardIngredient;

	public Sprite spriteFameRewardRecipe;

	public Sprite spriteFameRewardTool;

	public Sprite spriteFameRewardPetAssistant;

	public Sprite spriteFameRewardUnlockFinalChallenge;

	public Sprite spriteNewMechanic;

	public Sprite spriteCard;
}
