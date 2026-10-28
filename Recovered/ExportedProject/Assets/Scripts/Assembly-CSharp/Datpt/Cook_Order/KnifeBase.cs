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
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		protected void Editor()
		{
		}

		public virtual void PlayCutAnimation()
		{
		}

		public virtual void StopCutAnimation()
		{
		}

		public void ShowHitEffect()
		{
		}
	}
}
