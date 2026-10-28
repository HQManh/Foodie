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

		public IntReactiveProperty IntRxProp = new IntReactiveProperty();

		private Enemy enemy = new Enemy(1000);

		private void Start()
		{
			// TODO(unrecovered): wires the MyButton/MyToggle/MyInput/MySlider/MyText UI bindings through UnityEventExtensions, UnityUIComponentExtensions and Observable combinators (FUN_04c4b894, FUN_04c49080, FUN_04e33710, FUN_04e33434 and related) that are not in the stubs.
		}
	}
}
