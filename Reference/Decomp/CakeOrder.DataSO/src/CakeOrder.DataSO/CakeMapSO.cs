using UnityEngine;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "Map-", menuName = "ScriptableObjects/CakeOrder/Map", order = 1)]
public class CakeMapSO : ScriptableObjectWithId
{
	[Header("Basis Info")]
	[SerializeField]
	private string _sceneNameFormat;

	[SerializeField]
	private string _sceneNameFormatCookingGraph;

	[SerializeField]
	private SceneType _sceneType;

	public int numMainLevels;

	[Tooltip("The number of levels that player must complete to unlock the next map.")]
	public int numRequiredLevels;

	[Tooltip("Is the map can play, or just preview for next updates.")]
	public MapDataMode mode;

	[Tooltip("Off = the home Upgrade button is replaced by a locked one that toasts 'available next update'.")]
	public bool allowUpgrade;

	public SceneType ConfiguredSceneType => SceneType.Normal;

	public string GetSceneName(int levelIndex)
	{
		return null;
	}
}
