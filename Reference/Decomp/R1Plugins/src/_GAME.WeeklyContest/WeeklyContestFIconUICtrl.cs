using TMPro;
using UnityEngine;
using _GAME.Utils;

namespace _GAME.WeeklyContest;

public class WeeklyContestFIconUICtrl : SingletonX<WeeklyContestFIconUICtrl>
{
	public GameObject objTime;

	public TextMeshProUGUI txtTimeLeft;

	private int _callbackTickId;

	private void Start()
	{
	}

	protected override void OnDestroy()
	{
	}

	private void UpdateUITimeLeft()
	{
	}
}
