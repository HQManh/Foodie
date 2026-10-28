using System;
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
			faucet.StartWatering(rate);
			if (rate < 0.1f)
			{
				StopPouring();
				return;
			}
			cup.OnPouring(rate);
		}

		private void StopPouring()
		{
			// TODO(unrecovered): pseudocode resets LiquidCup internal fields (0x6c/0x70/0x44/0x38) and an inner object at cup+0x28 that do not match the LiquidCup stub layout. Only faucet.StopWatering is mapped.
			faucet.StopWatering();
		}

		private void CheckEndGame()
		{
			// TODO(unrecovered): end-game evaluation reads LiquidCup float fields (0x50/0x58/0x5c) and state (0x68) that do not map to LiquidCup stub fields by name and type.
		}

		private void Restart()
		{
			// TODO(unrecovered): restart sfx call signature and LiquidCup.Restart / FaucetHandle virtual slots (0x188) are not identifiable from the stubs.
		}

		private void ForceRestart()
		{
			// TODO(unrecovered): FaucetHandle virtual call (0x188) and LiquidCup.ForceRestart are not identifiable from the stubs.
		}

		private void OnLose()
		{
			// TODO(unrecovered): FaucetHandle virtual call (0x178) and LiquidCup flag at 0x58 do not match stub fields; WaitToDoUnscaled callback target unknown.
		}

		public override bool IsWin()
		{
			// TODO(unrecovered): win check reads LiquidCup fields (tolerance, amounts, state) whose offsets do not match the LiquidCup stub layout.
			return false;
		}

		protected override void OnStartPlay()
		{
		}

		public override Task SetUpBeforeShow(MinigameInitData initData, MinigameRuntimeData runtimeData)
		{
			ForceRestart();
			faucetHandle.onPouring = new Action<float>(OnPouring);
			faucetHandle.onStopPouring = new Action(StopPouring);
			faucetHandle.onFinish = new Action(CheckEndGame);
			cup.onOverflow = new Action(OnLose);
			return base.SetUpBeforeShow(initData, runtimeData);
		}
	}
}
