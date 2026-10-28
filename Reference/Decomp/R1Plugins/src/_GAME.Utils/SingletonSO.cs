using UnityEngine;

namespace _GAME.Utils;

public class SingletonSO<T> : ScriptableObject where T : ScriptableObject
{
	public static T Ins { get; private set; }

	public static T Instance => default(T);

	public virtual void SetInstance(T newInstance)
	{
	}

	protected virtual void OnDestroy()
	{
	}
}
