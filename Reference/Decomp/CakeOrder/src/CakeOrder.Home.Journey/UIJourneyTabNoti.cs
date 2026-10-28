using UnityEngine;

namespace CakeOrder.Home.Journey;

public class UIJourneyTabNoti : MonoBehaviour
{
	[SerializeField]
	private UIHomeTabPageJourney _page;

	[Tooltip("The badge to toggle - a UI-Noti-Number instance.")]
	[SerializeField]
	private GameObject _noti;

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	private void OnEnable()
	{
	}

	private void Refresh()
	{
	}
}
