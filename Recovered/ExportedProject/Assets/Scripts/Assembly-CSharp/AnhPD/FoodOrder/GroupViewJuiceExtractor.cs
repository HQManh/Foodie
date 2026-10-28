using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewJuiceExtractor : StationGroupView
	{
		[CompilerGenerated]
		private sealed class _003CPlaySfxAfterDelay_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public GroupViewJuiceExtractor _003C_003E4__this;

			private float _003Celapsed_003E5__2;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CPlaySfxAfterDelay_003Ed__22(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		private const int MainTrack = 0;

		private const int GlassTrack = 1;

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		[SpineSkin(null, null, false, false, false, false, dataField = "skeletonAnimation")]
		private string glassSkin;

		[SerializeField]
		[SpineSkin(null, null, false, false, false, false, dataField = "skeletonAnimation")]
		private string fruitSkin;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string fruitInAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string glassInAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string extractAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string glassOutAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string idleAnim;

		[SerializeField]
		private AudioClip sfx;

		[SerializeField]
		[Min(0f)]
		private float sfxDelay;

		[SerializeField]
		private ParticleSystem extractVfx;

		private Coroutine _sfxRoutine;

		private Skin _restSkin;

		private Skin _cookSkin;

		private bool _restSkinCached;

		private bool _isPaused;

		private float _pausedTimeScale;

		private float _speedRate;

		private void Start()
		{
		}

		public override void Play(float duration)
		{
		}

		[IteratorStateMachine(typeof(_003CPlaySfxAfterDelay_003Ed__22))]
		private IEnumerator PlaySfxAfterDelay()
		{
			return null;
		}

		private void StopSfx()
		{
		}

		public override float GetPlayDuration(float duration)
		{
			return 0f;
		}

		private static float DurationOf(SkeletonData data, string anim)
		{
			return 0f;
		}

		public override void Stop()
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		private void PlayIdle()
		{
		}

		private Skin CookSkin(SkeletonData data)
		{
			return null;
		}

		private void AddSkin(SkeletonData data, string skinName)
		{
		}

		private void ApplySkin(Skin skin)
		{
		}

		private void ResetToSetupPose()
		{
		}
	}
}
