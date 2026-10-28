namespace UnityEngine.Purchasing.Security
{
	public class AppleStoreKitTestTangle
	{
		private static byte[] data;

		private static int[] order;

		private static int key;

		public static readonly bool IsPopulated;

		static AppleStoreKitTestTangle()
		{
			// TODO(unrecovered): base64 payload literal (DAT_0921d080) is not in the dump; data stays null.
			// TODO(unrecovered): order table is an RVA-backed int array (InitializeArray, 45 entries) not in the dump; order stays null.
			key = 163;
			IsPopulated = true;
		}

		public static byte[] Data()
		{
			// TODO(unrecovered): pseudocode calls UnityEngine.Purchasing.Security.Obfuscator.DeObfuscate, but no Obfuscator class or DeObfuscate method exists anywhere in the project (checked by grep); the call is not written.
			return null;
		}
	}
}
