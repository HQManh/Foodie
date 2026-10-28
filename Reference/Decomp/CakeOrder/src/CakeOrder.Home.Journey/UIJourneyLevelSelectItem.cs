using System;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home.Journey;

public class UIJourneyLevelSelectItem : MonoBehaviour
{
	[SerializeField]
	private Button _btn;

	[SerializeField]
	private TMP_Text _txtLevel;

	[Tooltip("Three star objects, shown left to right. Only the first GetLevelStars of them stay active.")]
	[SerializeField]
	private GameObject[] _objStars;

	[SerializeField]
	private GameObject _objLockedOverlay;

	public int LevelIndex { get; private set; }

	public event Action<UIJourneyLevelSelectItem> onClick
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	private void Awake()
	{
	}

	public void SetUp(int levelIndex, int globalLevel, bool isUnlocked, int numStars)
	{
	}
}
