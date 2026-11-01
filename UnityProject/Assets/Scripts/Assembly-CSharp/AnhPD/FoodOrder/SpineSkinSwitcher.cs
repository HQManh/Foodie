using System;
using CakeOrder.DataSO;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SpineSkinSwitcher : MonoBehaviour
	{
		[Serializable]
		public class Entry
		{
			public CustomerSkinTriggerSO trigger;

			[SpineSkin(null, null, false, true, false, false)]
			public string skinName;
		}

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private SkeletonGraphic skeletonGraphic;

		[Tooltip("Same priority: the earlier entry wins.")]
		[SerializeField]
		private Entry[] skins;

		private const string DefaultSpineSkin = "default";

		private string _defaultSkinName;

		private bool _defaultCaptured;

		private void Reset()
		{
			skeletonAnimation = GetComponent<SkeletonAnimation>();
			skeletonGraphic = GetComponent<SkeletonGraphic>();
		}

		private void OnEnable()
		{
			Apply(CurrentWeather());
			CakeOrder.InGame.InGameBackgroundsControl.WeatherChanged += Apply;
		}

		private void OnDisable()
		{
			CakeOrder.InGame.InGameBackgroundsControl.WeatherChanged -= Apply;
		}

		public void Apply()
		{
			Apply(CurrentWeather());
		}

		public void Apply(WeatherEffect weather)
		{
			CaptureDefault();
			SkinContext context = new SkinContext { weather = weather };
			string skin = ResolveSkin(in context);
			if (string.IsNullOrEmpty(skin) || !HasSkin(skin)) skin = _defaultSkinName;
			if (skeletonAnimation != null) SetSkin(skeletonAnimation.Skeleton, skin);
			else if (skeletonGraphic != null) SetSkin(skeletonGraphic.Skeleton, skin);
		}

		private static void SetSkin(Skeleton skeleton, string skinName)
		{
			if (skeleton == null)
			{
				return;
			}
			if (skeleton.Data.FindSkin(skinName) != null)
			{
				skeleton.SetSkin(skinName);
				skeleton.SetSlotsToSetupPose();
			}
		}

		private void CaptureDefault()
		{
			if (_defaultCaptured)
			{
				return;
			}
			_defaultCaptured = true;
			if (skeletonAnimation != null)
			{
				_defaultSkinName = skeletonAnimation.initialSkinName;
			}
			else if (skeletonGraphic != null)
			{
				_defaultSkinName = skeletonGraphic.initialSkinName;
			}
			if (string.IsNullOrEmpty(_defaultSkinName))
			{
				_defaultSkinName = DefaultSpineSkin;
			}
		}

		private string ResolveSkin(in SkinContext context)
		{
			if (skins == null) return null;
			foreach (Entry entry in skins)
			{
				if (entry != null && entry.trigger != null && entry.trigger.IsActive(in context)) return entry.skinName;
			}
			return null;
		}

		private bool HasSkin(string skinName)
		{
			if (string.IsNullOrEmpty(skinName))
			{
				return false;
			}
			SkeletonDataAsset asset = null;
			if (skeletonAnimation != null)
			{
				asset = skeletonAnimation.skeletonDataAsset;
			}
			else if (skeletonGraphic != null)
			{
				asset = skeletonGraphic.skeletonDataAsset;
			}
			if (asset == null)
			{
				return true;
			}
			SkeletonData data = asset.GetSkeletonData(true);
			return data == null || data.FindSkin(skinName) != null;
		}

		public static void ApplyAllInScene()
		{
			SpineSkinSwitcher[] all = FindObjectsOfType<SpineSkinSwitcher>(true);
			foreach (SpineSkinSwitcher sw in all)
			{
				if (sw == null)
				{
					continue;
				}
				sw.Apply(CurrentWeather());
			}
		}

		private static WeatherEffect CurrentWeather()
		{
			CakeOrder.InGame.InGameBackgroundsControl control = FindObjectOfType<CakeOrder.InGame.InGameBackgroundsControl>();
			return control != null ? control.CurrentWeather : WeatherEffect.Normal;
		}
	}
}
