using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home
{

public class UIItemToolUpdateDetail : MonoBehaviour
{
	[SerializeField]
	private GameObject _root;

	[SerializeField]
	private TextMeshProUGUI _txtDescription;

	[SerializeField]
	private Slider _sliderCurrent;

	[SerializeField]
	private Slider _sliderUpgraded;

	public void SetUp(string description, float currentValue, float nextValue, float maxValue = 0f)
	{
	}

	public void Hide()
	{
	}

	private static void SetSlider(Slider slider, float value, float max)
	{
	}
}
}
