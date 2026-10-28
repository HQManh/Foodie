using System;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home.Journey;

public class UIJourneyChapterCard : MonoBehaviour
{
	private const string LocLevelRange = "level_range";

	[Tooltip("The visible frame. The chapter's bar ends exactly on this rect's top edge, so the card art must fill it - transparent margin would let the bar show through.")]
	[SerializeField]
	private RectTransform _rectBody;

	[SerializeField]
	private Image _imgPreview;

	[SerializeField]
	private TMP_Text _txtName;

	[SerializeField]
	private TMP_Text _txtLevelRange;

	[SerializeField]
	private GameObject _objLockedOverlay;

	[SerializeField]
	private GameObject _objCompletedTick;

	[Tooltip("Opens the chapter's level picker. Left unwired on the coming-soon card, which owns no map.")]
	[SerializeField]
	private Button _btnSelect;

	private JourneyLevelMap.MapRange _range;

	private bool _isComingSoon;

	public RectTransform RectTransform => null;

	public RectTransform RectBody => null;

	public event Action onClick
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

	public void SetUp(JourneyLevelMap.MapRange range, string displayName, Sprite preview)
	{
	}

	private void ApplyPreview(Sprite preview)
	{
	}

	public void SetUpComingSoon(string text)
	{
	}

	public void UpdateProgress(int completedLevels)
	{
	}
}
