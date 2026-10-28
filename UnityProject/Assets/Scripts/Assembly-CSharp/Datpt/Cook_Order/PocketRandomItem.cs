using System;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class PocketRandomItem : ItemIdleBase
	{
		[SerializeField]
		protected TextMesh countTmp;

		[SerializeField]
		protected GameObject itemOnPocketVisualObj;

		[SerializeField]
		protected bool isRandomItemCutted;

		[SerializeField]
		protected Transform tfToShowAnimFilled;

		[field: SerializeField]
		public int PocketNum { get; set; }

		protected virtual void Start()
		{
			UpdateVisualCount();
			// TODO(unrecovered): sets countTmp's GameObject active based on LevelControlCookOrder.Ins flag at offset 0x19c; that flag has no confirmed stub member.
		}

		public void AddPocketNum(int value)
		{
			PocketNum += value;
			UpdateVisualCount();
			ShowAnimFilled(() =>
			{
				if (itemOnPocketVisualObj != null)
				{
					itemOnPocketVisualObj.SetActive(true);
				}
			});
		}

		public void UpdateVisualCount()
		{
			countTmp.text = string.Format("{0}" /* literal recovered by guess */, PocketNum);
		}

		public override void OnClickDown()
		{
			// TODO(unrecovered): decrements PocketNum and calls a virtual LevelControlCookOrder method (vtable 0x388/0x318), SoundControl.Ins PlayFX(9) and Haptic(4); the virtual slots and the 0x19c flag have no stub members.
		}

		public void ShowAnimFilled(Action onComplete = null)
		{
			// TODO(unrecovered): DOLocalMove/DOPunchScale tween chain, SoundControl.Ins PlayFX(5) and the static scale/position owner at DAT_0918cbd0 are not in stubs.
		}
	}
}
