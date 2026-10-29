using System;
using CakeOrder.DataSO;
using CakeOrder.InGame;
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
		}

		public void Apply()
		{
			Apply(CurrentWeather());
		}

		public void Apply(WeatherEffect weather)
		{
			CaptureDefault();
			string skin = ResolveSkin(new SkinContext { weather = weather });
			if (string.IsNullOrEmpty(skin))
			{
				return;
			}
			if (skeletonAnimation)
			{
				skeletonAnimation.initialSkinName = skin;
				if (skeletonAnimation.valid)
				{
					SetSkin(skeletonAnimation.Skeleton, skin);
				}
			}
			if (skeletonGraphic)
			{
				skeletonGraphic.initialSkinName = skin;
				if (!skeletonGraphic.IsValid)
				{
					return;
				}
				SetSkin(skeletonGraphic.Skeleton, skin);
			}
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
			Entry best = null;
			if (skins != null)
			{
				foreach (Entry entry in skins)
				{
					if (entry == null || !entry.trigger)
					{
						continue;
					}
					if (best != null && entry.trigger.Priority <= best.trigger.Priority)
					{
						continue;
					}
					if (entry.trigger.IsActive(in context) && HasSkin(entry.skinName))
					{
						best = entry;
					}
				}
			}
			return best != null ? best.skinName : _defaultSkinName;
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
			LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.IsExistInstance ? LevelBaseCakeOrderAbstract.Instance : null;
			if (level && level.InitData != null && level.InitData.levelMetadata != null)
			{
				return level.InitData.levelMetadata.weatherEffect;
			}
			return WeatherEffect.Normal;
		}
	}
}
