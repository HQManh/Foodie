using System;
using System.Collections.Generic;
using UnityEngine;

namespace _GAME.Utils;

public class SingletonManager<T> : MonoBehaviour where T : MonoBehaviour
{
	protected static int _callbackDataIndex;

	protected static Dictionary<int, Action> _callbackData;

	protected static Dictionary<int, Object> _callbackOwner;

	public static T Ins { get; private set; }

	public static T Instance => default(T);

	protected virtual void Awake()
	{
	}

	protected virtual void OnDestroy()
	{
	}

	public static int AddCallbackData(Action callback, bool invokeImmediately = true, Object owner = null)
	{
		return 0;
	}

	public static void RemoveCallbackData(int id)
	{
	}

	public static void InvokeCallbackData()
	{
	}

	private static bool IsCallbackDead(int id, Action callback)
	{
		return false;
	}
}
