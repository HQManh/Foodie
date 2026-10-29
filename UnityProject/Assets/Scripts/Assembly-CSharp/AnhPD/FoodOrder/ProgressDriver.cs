using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class ProgressDriver : MonoBehaviour
	{
		[SerializeField]
		private AbstractProgressRunner runner;

		private Tween _tween;

		public void RunProgress(ProgressDriverContext context)
		{
			Stop();
			if (context == null)
			{
				return;
			}
			if (runner == null || runner.gameObject == null)
			{
				// No progress bar wired: still time the process so the station completes.
				_tween = DOVirtual.DelayedCall(Mathf.Max(0.01f, context.duration), () => context.onComplete?.Invoke(), true);
				return;
			}
			runner.gameObject.SetActive(true);
			_tween = runner.BuildTween(context.duration, context.onHalfway, context.onComplete);
			runner.SetProgress(0f);
		}

		public void Stop()
		{
			if (_tween != null)
			{
				_tween.Kill();
			}
			_tween = null;
			if (runner != null && runner.gameObject != null)
			{
				runner.gameObject.SetActive(false);
			}
		}

		public void SetSpeed(float speed)
		{
			if (_tween != null)
			{
				_tween.timeScale = speed;
			}
		}
	}
}
