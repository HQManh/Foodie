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
			return null;
		}

		public override bool IsWin()
		{
			return false;
		}

		private void Awake()
		{
		}

		private void Restart()
		{
		}

		private void OnRude(float rate)
		{
		}

		private void Update()
		{
		}

		private void UpdateSlider(float value)
		{
		}

		protected override void OnStartPlay()
		{
		}

		private void OnComplete()
		{
		}
	}
}
