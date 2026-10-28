using System.Collections.Generic;
using UnityEngine;

namespace CakeOrder.Home
{

public class UIHideObjectsWhileActive : MonoBehaviour
{
	[Tooltip("Switched off while this object is active. Anything already off is left alone, so it does not come back on when this page closes.")]
	[SerializeField]
	private GameObject[] _objectsToHide;

	private readonly List<GameObject> _hiddenByMe = new List<GameObject>();

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}
}
}
