using System;
using CakeOrder.DataSO;
using UnityEngine;

namespace TrungKien.UI.NewFearther
{
	[Serializable]
	public class NewFeatherConfig
	{
		public NewFeatherUI prefab;

		public CakeToolSO cakeToolSO;

		public string featherName;

		public string featherDesc;

		[Tooltip("UI_InGame key of featherName; empty shows featherName as typed.")]
		public string featherNameKey;

		[Tooltip("UI_InGame key of featherDesc; empty shows featherDesc as typed.")]
		public string featherDescKey;

		public Sprite icon;

		private bool IsCakeTool => cakeToolSO != null;

		// TODO(unrecovered): cake-tool branch calls CakeOrder.DataSO ScriptableObjectWithId.LocalizedName, and the plain branch calls CakeOrder.Localization.CakeLocalization.Get(key, fallback); neither is in the stubs.
		public string LocalizedName => null;

		// TODO(unrecovered): cake-tool branch calls CakeOrder.DataSO ScriptableObjectWithId.LocalizedDesc, and the plain branch calls CakeOrder.Localization.CakeLocalization.Get(key, fallback); neither is in the stubs.
		public string LocalizedDesc => null;

		public Sprite GetIconNewFeather()
		{
			if (!IsCakeTool)
			{
				return icon;
			}
			// TODO(unrecovered): cake-tool branch reads an unnamed field at offset 0x38 of CakeToolSO; no matching stub member.
			return null;
		}
	}
}
