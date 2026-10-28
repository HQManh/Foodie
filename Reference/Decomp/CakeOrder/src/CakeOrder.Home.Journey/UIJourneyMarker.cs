using TMPro;
using UnityEngine;

namespace CakeOrder.Home.Journey;

public class UIJourneyMarker : MonoBehaviour
{
	[SerializeField]
	private TMP_Text _txtLevel;

	public RectTransform RectTransform => null;

	public void SetLevel(int globalLevel)
	{
	}
}
