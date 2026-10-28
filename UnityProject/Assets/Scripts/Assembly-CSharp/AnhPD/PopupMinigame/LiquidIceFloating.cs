using UnityEngine;

namespace AnhPD.PopupMinigame
{
	public class LiquidIceFloating : MonoBehaviour
	{
		[SerializeField]
		private IceFloating[] ices;

		private void GetStartY()
		{
			foreach (IceFloating ice in ices)
			{
				ice.GetStartLocalY();
			}
		}

		public void SetRate(float rate)
		{
			foreach (IceFloating ice in ices)
			{
				ice.SetRate(rate);
			}
		}

		public void Restart()
		{
			foreach (IceFloating ice in ices)
			{
				ice.SetRate(0f);
			}
		}
	}
}
