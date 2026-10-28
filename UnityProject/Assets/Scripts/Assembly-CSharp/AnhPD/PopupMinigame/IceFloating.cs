using System;
using UnityEngine;

namespace AnhPD.PopupMinigame
{
	[Serializable]
	public class IceFloating
	{
		[SerializeField]
		private Transform tfIceRoot;

		[SerializeField]
		private float offsetY = 1f;

		[SerializeField]
		private float _startLocalY;

		public void GetStartLocalY()
		{
			if (tfIceRoot != null)
			{
				_startLocalY = tfIceRoot.localPosition.y;
				return;
			}
		}

		public void SetRate(float rate)
		{
			if (tfIceRoot != null)
			{
				Vector3 p = tfIceRoot.localPosition;
				p.y = _startLocalY + offsetY * rate;
				tfIceRoot.localPosition = p;
			}
		}

		public void Restart()
		{
			SetRate(0f);
		}
	}
}
