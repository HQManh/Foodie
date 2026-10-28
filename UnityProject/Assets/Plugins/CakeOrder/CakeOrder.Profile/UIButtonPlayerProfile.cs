using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Profile
{

public class UIButtonPlayerProfile : MonoBehaviour
{
	[SerializeField]
	private Button _btn;

	[SerializeField]
	private Image _imgAvatar;

	public event Action onClick;

	private void Awake()
	{
	}

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	private void RefreshAvatar()
	{
	}

	private void OnClick()
	{
	}

	private void OnDestroy()
	{
	}
}
}
