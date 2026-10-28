using System;
using CakeOrder.PopupMinigame;
using UnityEngine;

namespace AnhPD.PopupMinigame
{
	public class FaucetHandle : CakeMinigameRaycastReceiver
	{
		public Action<float> onPouring;

		public Action onStopPouring;

		public Action onFinish;

		protected bool IsBlock;

		public Vector2 HandStartPosition
		{
			get
			{
				return transform.position;
			}
		}

		protected void HandlePouring(float rate)
		{
			if (!IsBlock && onPouring != null)
			{
				onPouring(rate);
			}
		}

		protected void HandleStopPouring()
		{
			if (onStopPouring != null)
			{
				onStopPouring();
			}
		}

		public void Block()
		{
			IsBlock = true;
		}

		public void Unblock()
		{
			IsBlock = false;
		}

		public virtual void OnCancel()
		{
		}

		public virtual void OnRestart()
		{
		}
	}
}
