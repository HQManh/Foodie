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

		private bool IsCakeTool => false;

		public string LocalizedName => null;

		public string LocalizedDesc => null;

		public Sprite GetIconNewFeather()
		{
			return null;
		}
	}
}
