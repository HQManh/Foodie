using UnityEngine;
using UnityEngine.Events;

public class DoSomethingOnEnable : MonoBehaviour
{
	public UnityEvent eventEnable;

	public UnityEvent eventDisable;

	private void OnEnable()
	{
		if (eventEnable != null)
		{
			eventEnable.Invoke();
		}
	}

	private void OnDisable()
	{
		if (eventDisable != null)
		{
			eventDisable.Invoke();
		}
	}
}
