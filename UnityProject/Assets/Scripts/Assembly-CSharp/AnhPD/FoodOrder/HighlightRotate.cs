using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class HighlightRotate : Highlight
	{
		public Space space = Space.Self;

		private float _speedRation = 1f;

		private Vector3 _scale;

		private Vector3 _rotateVector;

		private void Awake()
		{
			_scale = base.transform.localScale;
			_rotateVector = new Vector3(0f, 0f, -5f);
		}

		public override void Show(bool isSpeedUp = false)
		{
			base.gameObject.SetActive(true);
			float target = (isSpeedUp ? 10f : 1f);
			if (!Mathf.Approximately(_speedRation, target))
			{
				_speedRation = target;
				base.transform.DOComplete();
				float scale = (isSpeedUp ? 1.2f : 1f);
				base.transform.DOScale(_scale * scale, 0.1f);
			}
		}

		public override void PreShow()
		{
		}

		public override void Hide()
		{
			base.gameObject.SetActive(false);
		}

		private void Update()
		{
			base.transform.Rotate(_rotateVector * (_speedRation * Time.deltaTime), space);
		}
	}
}
