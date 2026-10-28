using UnityEngine;

namespace Utilities
{

// Standard MonoBehaviour singleton. Inferred from the decompiled code; the original source was not recovered.
public class MonoSingleton<T> : MonoBehaviour where T : MonoBehaviour
{
	private static T _instance;

	public static T Instance
	{
		get
		{
			if (_instance == null)
			{
				_instance = FindObjectOfType<T>();
			}
			return _instance;
		}
	}

	public static bool IsExistInstance => _instance != null;

	public static bool HasInstance => _instance != null;

	protected virtual void Awake()
	{
		if (_instance == null)
		{
			_instance = this as T;
		}
	}

	protected virtual void OnDestroy()
	{
		if (_instance == this)
		{
			_instance = null;
		}
	}
}
}
