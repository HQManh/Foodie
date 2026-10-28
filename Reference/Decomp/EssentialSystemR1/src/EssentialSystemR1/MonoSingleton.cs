using UnityEngine;

namespace EssentialSystemR1;

public class MonoSingleton<T> : MonoBehaviour where T : MonoBehaviour
{
	private static T _instance;

	public static T Instance => default(T);

	public static bool IsExistInstance => false;

	protected virtual void Awake()
	{
	}

	protected virtual void OnDestroy()
	{
	}
}
