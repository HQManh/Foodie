using UnityEngine;

namespace CakeOrder.PopupMinigame
{

public interface ICakeSimulateInputEmitter
{
	Vector3 mousePosition { get; }

	Vector3 mouseWorldPos { get; }

	Vector3 deltaMousePosition { get; }

	Vector3 deltaMouseWorldPos { get; }

	int touchCount { get; }

	Touch[] touches { get; }

	Touch GetTouch(int index);

	Vector3 ScreenToWorldPos(Vector3 screenPos);
}
}
