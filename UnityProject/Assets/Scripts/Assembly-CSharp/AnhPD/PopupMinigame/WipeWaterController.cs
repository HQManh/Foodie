using System.Threading.Tasks;
using AnhPD.FoodOrder;
using CakeOrder.PopupMinigame;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.PopupMinigame
{
	public class WipeWaterController : CookOrderPopupMinigameControllerAbstract
	{
		[SerializeField]
		private TowelDrag towelDrag;

		[SerializeField]
		private Slider slider;

		[SerializeField]
		private Slider rubeSlider;

		[SerializeField]
		private CustomerLoader customerLoader;

		[SerializeField]
		private GameObject text;

		[SerializeField]
		private ParticleSystem vfxWater;

		private bool _isShowingText;

		private float _timer;

		private bool _isCompleted;

		public override Task SetUpBeforeShow(MinigameInitData initData, MinigameRuntimeData runtimeData)
		{
			// TODO(unrecovered): customer id lookup from initData goes through an unnamed helper (FUN_06fd83d4) and a virtual getter; no matching stub API.
			return null;
		}

		public override bool IsWin()
		{
			return _isCompleted;
		}

		private void Awake()
		{
			towelDrag.onTooFast = new System.Action<float>(OnRude);
			towelDrag.onWipe = new System.Action<float>(UpdateSlider);
		}

		private void Restart()
		{
			rubeSlider.value = 0f;
			// TODO(unrecovered): pseudocode makes a virtual call on this (vtable slot 0x1a8) after resetting the slider; target not identifiable.
		}

		private void OnRude(float rate)
		{
		}

		private void Update()
		{
			if (rubeSlider.value > 0f)
			{
				rubeSlider.value = rubeSlider.value + Time.unscaledDeltaTime * -0.05f;
			}
			if (_isShowingText)
			{
				_timer -= Time.unscaledDeltaTime;
				if (_timer < 0f)
				{
					_isShowingText = false;
					if (text != null)
					{
						text.SetActive(false);
					}
				}
			}
		}

		private void UpdateSlider(float value)
		{
			slider.value = value;
			if (value >= 1f)
			{
				OnComplete();
			}
		}

		protected override void OnStartPlay()
		{
			slider.value = 0f;
			rubeSlider.value = 0f;
			if (towelDrag != null)
			{
				towelDrag.Restart();
			}
			vfxWater.Play();
			_isCompleted = false;
			_isShowingText = false;
			if (text != null)
			{
				text.SetActive(false);
				_timer = 0f;
			}
		}

		private void OnComplete()
		{
			vfxWater.Stop();
			// TODO(unrecovered): towelDrag virtual call (vtable slot 0x1b8) and the unscaled-wait callback target are not identifiable from the stubs.
			customerLoader.OnCorrect(true);
			_isCompleted = true;
		}
	}
}
