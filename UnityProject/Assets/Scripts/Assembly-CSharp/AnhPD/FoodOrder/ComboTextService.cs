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
		private float comboWindow = 2f;

		[Tooltip("Beats counted silently before the text starts showing")]
		[SerializeField]
		private int showFromCombo = 3;

		[SerializeField]
		private float offsetY = 0.5f;

		private float _resetAt = -1f;

		private int _streak;

		public bool IsComboRunning => _resetAt >= 0f;

		public int Streak => _streak;

		public void Play(float volume = 1f)
		{
			PlayBeat(null, volume);
		}

		public void Play(Vector3 worldPos, float volume = 1f)
		{
			PlayBeat(worldPos, volume);
		}

		public void ResetCombo()
		{
			_resetAt = -1f;
			if ((bool)vfxCombo)
			{
				vfxCombo.Reset();
			}
		}

		private void PlayBeat(Vector3? worldPos, float volume)
		{
			if (!vfxCombo)
			{
				return;
			}
			_streak++;
			_resetAt = Time.time + comboWindow;
			if (_streak >= showFromCombo)
			{
				if (worldPos.HasValue)
				{
					Transform transform = vfxCombo.transform;
					Vector3 value = worldPos.Value;
					Vector3 position = transform.position;
					position.x = value.x;
					position.y = value.y + offsetY;
					transform.position = position;
				}
				if (!vfxCombo.gameObject.activeSelf)
				{
					vfxCombo.gameObject.SetActive(true);
				}
				vfxCombo.Play(volume);
			}
		}

		private void Update()
		{
			if (_resetAt >= 0f && _resetAt <= Time.time)
			{
				ResetCombo();
			}
		}
	}
}
