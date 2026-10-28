using System.Threading.Tasks;
using CakeOrder.PopupMinigame;
using UnityEngine;

namespace AnhPD.PopupMinigame
{
	public class PourLiquidController : CookOrderPopupMinigameControllerAbstract
	{
		[SerializeField]
		private LiquidCup cup;

		[SerializeField]
		private LiquidFaucet faucet;

		[SerializeField]
		private FaucetHandle faucetHandle;

		[SerializeField]
		private AudioClip sfxRestart;

		private void OnPouring(float rate)
		{
		}

		private void StopPouring()
		{
		}

		private void CheckEndGame()
		{
		}

		private void Restart()
		{
		}

		private void ForceRestart()
		{
		}

		private void OnLose()
		{
		}

		public override bool IsWin()
		{
			return false;
		}

		protected override void OnStartPlay()
		{
		}

		public override Task SetUpBeforeShow(MinigameInitData initData, MinigameRuntimeData runtimeData)
		{
			return null;
		}
	}
}
