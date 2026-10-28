using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home.Journey;

public class UIJourneyRewardIcon : MonoBehaviour
{
	[SerializeField]
	private Image _imgIcon;

	[SerializeField]
	private TMP_Text _txtAmount;

	[Tooltip("Replaces the amount once the milestone is claimed - the two never show together.")]
	[SerializeField]
	private GameObject _objClaimedTick;

	public string CurrencyId { get; private set; }

	public Transform IconTransform => null;

	public void SetClaimed(bool isClaimed)
	{
	}

	public void SetUp(JourneyMilestoneRemoteConfig.RewardEntry reward)
	{
	}
}
