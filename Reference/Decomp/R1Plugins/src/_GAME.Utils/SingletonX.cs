using UnityEngine;

namespace _GAME.Utils;

public class SingletonX<T> : MonoBehaviour where T : MonoBehaviour
{
	public static T Ins { get; private set; }

	public static T Instance => default(T);

	protected virtual void Awake()
	{
	}

	protected virtual void OnDestroy()
	{
	}
}
