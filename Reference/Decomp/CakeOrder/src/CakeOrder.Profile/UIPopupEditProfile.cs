using System.Collections.Generic;
using CakeOrder.BaseUI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Profile;

public class UIPopupEditProfile : UICakePopup
{
	[Header("Preview")]
	[SerializeField]
	private Image _imgAvatarPreview;

	[SerializeField]
	private TMP_InputField _inputName;

	[Header("Avatar grid")]
	[Tooltip("Content object of the scroll rect. Items are spawned here, so the layout group and the scrolling stay entirely in the prefab.")]
	[SerializeField]
	private RectTransform _containerAvatars;

	[SerializeField]
	private UIItemAvatarOption _prefabAvatarOption;

	[Header("Save")]
	[SerializeField]
	private Button _btnSave;

	[Tooltip("Dimmed instead of disabled: a disabled button swallows the tap, and then the player gets no answer about what is wrong with the name.")]
	[SerializeField]
	private CanvasGroup _groupSave;

	[SerializeField]
	private float _saveDisabledAlpha;

	private readonly List<UIItemAvatarOption> _items;

	private string _draftAvatarId;

	public override void HideByBackButton()
	{
	}

	public override void SetUpOnCreate(SceneMainUI mainUI)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	private void BuildGrid()
	{
	}

	private void RefreshLockedAvatars()
	{
	}

	private void ReloadDraftFromSave()
	{
	}

	private void OnClickAvatar(UIItemAvatarOption item)
	{
	}

	private void OnNameChanged(string _)
	{
	}

	private void RefreshSelection()
	{
	}

	private void RefreshPreview()
	{
	}

	private void RefreshSaveState()
	{
	}

	private void OnClickSave()
	{
	}

	private void OnDestroy()
	{
	}
}
