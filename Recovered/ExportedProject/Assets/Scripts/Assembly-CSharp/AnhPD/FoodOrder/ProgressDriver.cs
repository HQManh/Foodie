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
		}

		public void Stop()
		{
		}

		public void SetSpeed(float speed)
		{
		}
	}
}
