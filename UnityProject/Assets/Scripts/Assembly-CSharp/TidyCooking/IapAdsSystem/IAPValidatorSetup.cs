using UnityEngine;
using UnityEngine.Purchasing.Security;

namespace TidyCooking.IapAdsSystem
{
	public class IAPValidatorSetup : MonoBehaviour
	{
		public static CrossPlatformValidator BuildValidator()
		{
			return new CrossPlatformValidator(GooglePlayTangle.Data(), AppleTangle.Data(), Application.identifier);
		}

		private void Start()
		{
			// TODO(unrecovered): the InAppManager instance is reached through an unnamed static chain (DAT_091b49a8 + 0x20 -> +0xc0 -> +0xb8), and InAppManager is not in the stubs.
		}
	}
}
