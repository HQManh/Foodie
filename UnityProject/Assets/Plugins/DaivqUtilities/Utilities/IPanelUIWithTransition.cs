using System;

namespace Utilities
{

public interface IPanelUIWithTransition
{
	public enum ShowState
	{
		Hide,
		Show,
		Showing,
		Hiding
	}

	ShowState State { get; }

	void ShowImmediately();

	void HideImmediately();

	void ShowWithTransition(Action onComplete);

	void HideWithTransition(Action onComplete);
}
}
