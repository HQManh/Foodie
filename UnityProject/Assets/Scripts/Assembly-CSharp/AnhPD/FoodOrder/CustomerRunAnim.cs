using System;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CustomerRunAnim : MonoBehaviour
	{
		public enum Eff
		{
			None = 0,
			Stop = 1,
			Pass = 2
		}

		private const int BodyTrack = 0;

		private const int EffTrack = 1;

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string run;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string run2;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string stop;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string effStop;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string effPass;

		[SerializeField]
		[Range(0f, 1f)]
		private float run2Chance = 0.5f;

		[SerializeField]
		[Min(0f)]
		private float effMixOut = 0.1f;

		private Eff _eff;

		private Spine.AnimationState State
		{
			get
			{
				if ((bool)skeletonAnimation)
				{
					return skeletonAnimation.AnimationState;
				}
				return null;
			}
		}

		public bool IsRunning
		{
			get
			{
				Spine.AnimationState state = State;
				if (state == null)
				{
					return false;
				}
				TrackEntry current = state.GetCurrent(0);
				if (current == null)
				{
					return false;
				}
				if (current.Animation == null || current.Animation.Name == null)
				{
					return false;
				}
				string name = current.Animation.Name;
				if (!(name == run))
				{
					return name == run2;
				}
				return true;
			}
		}

		private void Reset()
		{
			skeletonAnimation = GetComponent<SkeletonAnimation>();
		}

		public void Run()
		{
			if (State != null && Has(run))
			{
				if (Has(run2))
				{
					PlayLap();
				}
				else
				{
					State.SetAnimation(0, run, true);
				}
			}
		}

		public void SetEff(Eff eff)
		{
			if (_eff == eff || State == null)
			{
				return;
			}
			_eff = eff;
			string text;
			switch (eff)
			{
			case Eff.Stop:
				text = effStop;
				break;
			case Eff.Pass:
				text = effPass;
				break;
			default:
				text = null;
				break;
			}
			if (Has(text))
			{
				State.SetAnimation(1, text, true);
			}
			else
			{
				State.SetEmptyAnimation(1, effMixOut);
			}
		}

		private void PlayLap()
		{
			Spine.AnimationState state = State;
			string animationName = ((UnityEngine.Random.value < run2Chance) ? run2 : run);
			TrackEntry trackEntry = state.SetAnimation(0, animationName, false);
			trackEntry.Complete += delegate(TrackEntry entry)
			{
				if (State.GetCurrent(0) == entry)
				{
					PlayLap();
				}
			};
		}

		public void Stop(Action onDone)
		{
			bool fired = false;
			void Fire()
			{
				if (!fired)
				{
					fired = true;
					onDone?.Invoke();
				}
			}
			SetEff(Eff.None);
			if (State == null || !Has(stop))
			{
				onDone?.Invoke();
				return;
			}
			fired = false;
			TrackEntry trackEntry = State.SetAnimation(0, stop, false);
			trackEntry.Complete += delegate
			{
				Fire();
			};
			trackEntry.Interrupt += delegate
			{
				Fire();
			};
		}

		private bool Has(string anim)
		{
			if (string.IsNullOrEmpty(anim))
			{
				return false;
			}
			if ((bool)skeletonAnimation)
			{
				if (skeletonAnimation.Skeleton == null)
				{
					return false;
				}
				return skeletonAnimation.Skeleton.Data.FindAnimation(anim) != null;
			}
			return false;
		}
	}
}
