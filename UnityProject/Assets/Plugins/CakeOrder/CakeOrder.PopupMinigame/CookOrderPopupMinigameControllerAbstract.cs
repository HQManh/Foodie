using System;
using System.Threading.Tasks;
using UnityEngine;

namespace CakeOrder.PopupMinigame
{

public abstract class CookOrderPopupMinigameControllerAbstract : MonoBehaviour
{
	[Serializable]
	public class ViewSetting
	{
		public Vector2Int defaultViewSize;

		public Vector2Int maxViewSize;
	}

	[Header("Config")]
	[SerializeField]
	private ViewSetting _viewConfig;

	[SerializeField]
	private float _delayEndGame;

	[Header("Setup Camera")]
	[SerializeField]
	private CookOrderPopupMinigameCameraOverride _cameraOverride;

	[SerializeField]
	private Transform _cameraFocusPoint;

	private MinisceneCameraSetting _cameraSetting;

	[Tooltip("Some objects in the minigame may need to know the camera to adjust their behavior (ex: billboard). They need implement IUseMiniSceneCamera interface and include in the _objNeedSetupCamera array.")]
	[SerializeField]
	private GameObject[] _objNeedSetupCamera;

	[SerializeField]
	private bool _isSetupCameraRecursive;

	private Action _onEnd;

	public ViewSetting ViewConfig => null;

	public MinigamePlayState CurrentState { get; private set; }

	public Camera MinisceneCamera { get; private set; }

	public MinigameInitData InitData { get; private set; }

	public MinigameRuntimeData RuntimeData { get; private set; }

	public float TimeStartPlay => 0f;

	public float TimePlay => 0f;

	public float TimePlayUnscaled => 0f;

	public abstract bool IsWin();

	public virtual Task SetupOnCreate(Camera minisceneCamera, MinisceneCameraSetting defaultCameraSetting, Vector3 worldPosition)
	{
		return null;
	}

	protected void ApplyUnscaledTime()
	{
	}

	public virtual Task SetUpBeforeShow(MinigameInitData initData, MinigameRuntimeData runtimeData)
	{
		return null;
	}

	public void StartPlay(Action onEnd)
	{
	}

	protected abstract void OnStartPlay();

	public virtual void PlayTutorial()
	{
	}

	public virtual void Start()
	{
	}

	public void End()
	{
	}

	protected virtual void OnEnd()
	{
	}

	public virtual void Hide()
	{
	}
}
}
