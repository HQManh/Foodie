using UnityEngine;
using UnityEngine.Events;

public class DoSomethingOnEnable : MonoBehaviour
{
	public UnityEvent eventEnable;

	public UnityEvent eventDisable;

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}
}
