using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.BaseUI
{

public class UIToastMessage : UIElementWithAnim
{
	[SerializeField]
	private TextMeshProUGUI _textMessage;

	[SerializeField]
	private Button[] _btnClose;

	private string _message;

	private void Awake()
	{
	}

	public void SetMessage(string message)
	{
	}

	protected override void OnBeforeShow()
	{
	}
}
}
