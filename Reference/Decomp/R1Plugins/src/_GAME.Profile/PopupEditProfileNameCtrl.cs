using TMPro;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.Profile;

public class PopupEditProfileNameCtrl : PopupBaseCtrl
{
	public TMP_InputField inputName;

	public Button btnSave;

	private ProfileDbModel.EditModel _editModel;

	protected override void Awake()
	{
	}

	public override void Open()
	{
	}

	private void OnChangeNameInput(string _)
	{
	}

	private void SaveProfileEdit()
	{
	}
}
