using TrungKienPack.Particle;
using UnityEngine;
using Utilities;

namespace AnhPD.FoodOrder
{
	public class ComboTextService : MonoSingleton<ComboTextService>
	{
		[SerializeField]
		private VFXComboControl vfxCombo;

		[Tooltip("No combo beat within this many seconds → combo level back to 0")]
		[SerializeField]
		private float comboWindow;

		[Tooltip("Beats counted silently before the text starts showing")]
		[SerializeField]
		private int showFromCombo;

		[SerializeField]
		private float offsetY;

		private float _resetAt;

		private int _streak;

		public bool IsComboRunning => false;

		public int Streak => 0;

		public void Play(float volume = 1f)
		{
		}

		public void Play(Vector3 worldPos, float volume = 1f)
		{
		}

		public void ResetCombo()
		{
		}

		private void PlayBeat(Vector3? worldPos, float volume)
		{
		}

		private void Update()
		{
		}
	}
}
