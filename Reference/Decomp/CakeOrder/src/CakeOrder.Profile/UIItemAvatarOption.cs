using System;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Profile;

public class UIItemAvatarOption : MonoBehaviour
{
	[SerializeField]
	private Button _btn;

	[SerializeField]
	private Image _imgAvatar;

	[Tooltip("Frame drawn on top of the picked avatar. Toggled, not tinted, so art can make it whatever shape the design needs.")]
	[SerializeField]
	private GameObject _selectedFrame;

	private Action<UIItemAvatarOption> _onClicked;

	public string AvatarId { get; private set; }

	public void SetUp(string avatarId, Sprite sprite, Action<UIItemAvatarOption> onClicked)
	{
	}

	public void SetSelected(bool isSelected)
	{
	}

	private void OnClick()
	{
	}

	private void OnDestroy()
	{
	}
}
