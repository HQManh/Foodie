using CakeOrder.InGame;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class BackgroundTintService
	{
		private readonly InGameBackgroundsControl _background;

		private bool _saveMeDim;

		private bool _boosterDim;

		private bool _bossPresent;

		public BackgroundTintService(InGameBackgroundsControl background)
		{
			_background = background;
			GameEventBus.Subscribe<BossPresenceEvent>(OnBossPresence);
		}

		public void Dispose()
		{
			GameEventBus.Unsubscribe<BossPresenceEvent>(OnBossPresence);
		}

		public void SetSaveMeDim(bool dim)
		{
			_saveMeDim = dim;
			Refresh();
		}

		public void SetBoosterDim(bool dim)
		{
			_boosterDim = dim;
			Refresh();
		}

		private void OnBossPresence(BossPresenceEvent evt)
		{
			_bossPresent = evt.present;
			if (evt.present && GameplayUI.Ins != null)
			{
				GameplayUI.Ins.ShowAlert((AlertType)3, true);
			}
			Refresh();
		}

		private void Refresh()
		{
			if (_background != null)
			{
				Color tint = (_saveMeDim ? AnhPDOrderConstant.SAVE_ME_BACKGROUND_TINT : (_boosterDim ? AnhPDOrderConstant.BOOSTER_BACKGROUND_TINT : (_bossPresent ? AnhPDOrderConstant.BOSS_BACKGROUND_TINT : Color.white)));
				_background.ChangeTintColorAll(tint);
			}
		}
	}
}
