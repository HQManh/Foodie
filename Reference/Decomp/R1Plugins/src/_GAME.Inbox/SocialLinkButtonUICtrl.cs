using UnityEngine;
using UnityEngine.UI;

namespace _GAME.Inbox;

[RequireComponent(typeof(Button))]
public class SocialLinkButtonUICtrl : MonoBehaviour
{
	public string url;

	[Tooltip("For mailto: links only - prefills the mail body with non-identifying app/device diagnostics. The player sees it in their mail app and can edit or remove it before sending.")]
	public bool appendDeviceInfo;

	private void Start()
	{
	}

	private void OpenLink()
	{
	}

	private static string BuildDeviceInfoBody()
	{
		return null;
	}
}
