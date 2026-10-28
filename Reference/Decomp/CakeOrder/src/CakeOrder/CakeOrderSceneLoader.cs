using System;
using System.Collections.Generic;
using SceneTransitionR1;
using UnityEngine;
using Utilities;

namespace CakeOrder;

public class CakeOrderSceneLoader : MonoSingleton<CakeOrderSceneLoader>
{
	public const string HomeSceneName = "NewHome";

	public const string GameplayOverlaySceneName = "GameplayHUD";

	public const string MinigameSceneName = "Miniscene";

	public const string TutorialSceneName = "FSBreakfast-Tutorial";

	[SerializeField]
	private SceneLoader _sceneLoader;

	public SceneLoader SceneLoader => null;

	public bool IsLoadingInProgress => false;

	public void LoadHome()
	{
	}

	public void LoadHome(LoadedSceneCoroutineDelegate onBeforeLoad, Action onLoaded, Action onFinished, Dictionary<string, object> customData = null)
	{
	}
}
