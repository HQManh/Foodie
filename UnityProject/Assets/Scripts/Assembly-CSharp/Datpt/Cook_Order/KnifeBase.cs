using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class KnifeBase : MonoBehaviour
	{
		[SerializeField]
		protected GameObject idleObj;

		[SerializeField]
		protected GameObject onCutObj;

		[SerializeField]
		protected GameObject hitObj;

		[SerializeField]
		protected Transform squareTf;

		[Header("Animation")]
		[SerializeField]
		protected Animation knifeAnimation;

		[SerializeField]
		protected AnimationClip knifeCutAnimationClip;

		[CompilerGenerated]
		private Action m_OnCut;

		public event Action OnCut
		{
			[CompilerGenerated]
			add
			{
				Action action = m_OnCut;
				Action action2;
				do
				{
					action2 = action;
					action = System.Threading.Interlocked.CompareExchange(ref m_OnCut, (Action)Delegate.Combine(action2, value), action2);
				}
				while (action != action2);
			}
			[CompilerGenerated]
			remove
			{
				Action action = m_OnCut;
				Action action2;
				do
				{
					action2 = action;
					action = System.Threading.Interlocked.CompareExchange(ref m_OnCut, (Action)Delegate.Remove(action2, value), action2);
				}
				while (action != action2);
			}
		}

		protected void Editor()
		{
			knifeAnimation = GetComponent<Animation>();
			// literal recovered by guess: child transform name is not in the pseudocode as text
			squareTf = transform.Find("Square" /* literal recovered by guess */);
		}

		public virtual void PlayCutAnimation()
		{
			if (idleObj != null)
			{
				idleObj.SetActive(false);
				if (onCutObj != null)
				{
					onCutObj.SetActive(true);
					Datpt.Utilities.PlayAnimation(knifeAnimation, knifeCutAnimationClip, true, null, 0f, 1f);
				}
			}
		}

		public virtual void StopCutAnimation()
		{
			if (idleObj != null)
			{
				idleObj.SetActive(true);
				if (onCutObj != null)
				{
					onCutObj.SetActive(false);
					if (knifeCutAnimationClip != null && knifeAnimation != null)
					{
						knifeAnimation.Stop(knifeCutAnimationClip.name);
						if (squareTf != null)
						{
							// TODO(unrecovered): squareTf local position/rotation/scale are set from static pose data (DAT_0918cbd0, DAT_091898c0); the static objects are not in the stubs.
							if (hitObj != null)
							{
								hitObj.SetActive(false);
							}
						}
					}
				}
			}
		}

		public void ShowHitEffect()
		{
			if (SoundControl.Ins != null)
			{
				// TODO(unrecovered): SoundControl.PlayFX(<enum value 2>, false) - the enum type of the generic argument is not recoverable from the pseudocode.
				if (hitObj == null)
				{
					return;
				}
				hitObj.SetActive(true);
				m_OnCut?.Invoke();
				Datpt.Utilities.DelayedCallScaled(0.2f, delegate
				{
					if (hitObj != null)
					{
						hitObj.SetActive(false);
					}
				});
			}
		}
	}
}
