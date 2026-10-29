using System.Collections.Generic;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace Datpt.SpineUtilities
{
	public class SpineMixSkin : MonoBehaviour
	{
		private ISkeletonComponent _skeletonRenderer;

		[SpineSkin(null, null, false, false, false, false, dataField = "_skeletonRenderer")]
		[SerializeField]
		private string[] _skins;

		private void OnEnable()
		{
			ReloadSkin();
		}

		public void ReloadSkin()
		{
			if (_skeletonRenderer == null)
			{
				_skeletonRenderer = GetComponent<ISkeletonComponent>();
			}
			Skeleton skeleton = _skeletonRenderer.Skeleton;
			if (skeleton == null)
			{
				return;
			}
			Skin skin = new Skin("runtime-skin" /* literal recovered by guess */);
			SkeletonData data = skeleton.Data;
			foreach (string skinName in _skins)
			{
				Skin found = data.FindSkin(skinName);
				if (found == null)
				{
					Debug.LogError("Missing skin: " /* literal recovered by guess */ + skinName);
				}
				else
				{
					skin.AddSkin(found);
				}
			}
			skeleton.SetSkin(skin);
			skeleton.SetSlotsToSetupPose();
			Refresh();
		}

		public void ReloadSkin(List<string> _skins)
		{
			if (_skeletonRenderer == null)
			{
				_skeletonRenderer = GetComponent<ISkeletonComponent>();
			}
			Skeleton skeleton = _skeletonRenderer.Skeleton;
			if (skeleton == null)
			{
				return;
			}
			Skin skin = new Skin("runtime-skin" /* literal recovered by guess */);
			SkeletonData data = skeleton.Data;
			if (_skins != null)
			{
				foreach (string skinName in _skins)
				{
					Skin found = data.FindSkin(skinName);
					if (found == null)
					{
						Debug.LogError("Missing skin: " /* literal recovered by guess */ + skinName);
					}
					else
					{
						skin.AddSkin(found);
					}
				}
			}
			skeleton.SetSkin(skin);
			skeleton.SetSlotsToSetupPose();
			Refresh();
		}

		private void Refresh()
		{
			// the original picks the refresh call by renderer type
			if (_skeletonRenderer is SkeletonAnimation animation)
			{
				animation.Update(0f);
				animation.LateUpdate();
			}
			else if (_skeletonRenderer is SkeletonGraphic graphic)
			{
				graphic.Update(0f);
				graphic.LateUpdate();
			}
		}
	}
}
