using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "Character_", menuName = "ScriptableObjects/CakeOrder/Character", order = 1)]
public class CakeCharacterSO : ScriptableObjectWithId
{
	public int characterGlobalIndex;

	public CharacterType characterType;

	public CakeMapSO map;

	public AssetReference assetCharacterAnimControl;

	public AssetReference assetAvatarSpineUI;
}
