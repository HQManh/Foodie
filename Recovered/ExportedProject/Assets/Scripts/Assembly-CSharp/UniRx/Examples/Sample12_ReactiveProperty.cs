using UnityEngine;
using UnityEngine.UI;

namespace UniRx.Examples
{
	public class Sample12_ReactiveProperty : MonoBehaviour
	{
		public Button MyButton;

		public Toggle MyToggle;

		public InputField MyInput;

		public Text MyText;

		public Slider MySlider;

		public IntReactiveProperty IntRxProp;

		private Enemy enemy;

		private void Start()
		{
		}
	}
}
