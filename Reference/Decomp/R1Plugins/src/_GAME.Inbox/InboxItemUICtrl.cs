using TMPro;
using UnityEngine;

namespace _GAME.Inbox;

public class InboxItemUICtrl : MonoBehaviour
{
	public GameObject iconGift;

	public GameObject iconMail;

	public GameObject iconNotify;

	public GameObject iconChecked;

	public GameObject frameRead;

	public TextMeshProUGUI txtTitle;

	public TextMeshProUGUI txtTime;

	public TextMeshProUGUI txtContent;

	private ABIServerInboxModel _inboxData;

	public void UpdateUIData(ABIServerInboxModel newData = null)
	{
	}

	public void ShowDetail()
	{
	}
}
