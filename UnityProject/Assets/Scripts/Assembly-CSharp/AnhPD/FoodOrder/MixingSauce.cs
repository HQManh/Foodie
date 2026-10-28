using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class MixingSauce : MonoBehaviour
	{
		[SerializeField]
		private float cooldown = 0.2f;

		private float _timer;

		private bool _isFlipX = true;

		private void FlipX()
		{
			Vector3 localEulerAngles = base.transform.localEulerAngles;
			localEulerAngles.x = (Mathf.Approximately(localEulerAngles.x, 180f) ? 0f : 180f);
			base.transform.localEulerAngles = localEulerAngles;
		}

		private void FlipY()
		{
			Vector3 localEulerAngles = base.transform.localEulerAngles;
			localEulerAngles.y = (Mathf.Approximately(localEulerAngles.y, 180f) ? 0f : 180f);
			base.transform.localEulerAngles = localEulerAngles;
		}

		public void OnMixing()
		{
			_timer -= Time.deltaTime;
			if (_timer < 0f)
			{
				_timer = cooldown;
				if (!_isFlipX)
				{
					FlipY();
				}
				else
				{
					FlipX();
				}
				_isFlipX = !_isFlipX;
			}
		}

		public void OnComplete()
		{
			base.transform.localEulerAngles = Vector3.zero;
			base.transform.Appear(0.1f);
		}
	}
}
