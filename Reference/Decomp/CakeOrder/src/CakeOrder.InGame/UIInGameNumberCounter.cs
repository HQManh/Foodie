using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Utilities;

namespace CakeOrder.InGame;

public class UIInGameNumberCounter : UINumberCounterAbstract
{
	[SerializeField]
	private TextMeshProUGUI _txtAmount;

	[SerializeField]
	private bool _isShowCapacity;

	[SerializeField]
	private bool _isCountUp;

	private List<IIngameNumberSource> _holdingSources;

	protected int _capacity;

	protected int _prevDisplayedAmount;

	protected virtual void UpdateCapacity()
	{
	}

	protected override int GetAmountData()
	{
		return 0;
	}

	protected override void UpdateVisualAmount(float amount)
	{
	}

	public void AddHoldingSource(IIngameNumberSource source)
	{
	}

	public void AddHoldingSourcess(IList<IIngameNumberSource> listSources)
	{
	}

	public void RemoveHoldingSource(IIngameNumberSource source)
	{
	}

	private void OnDestroy()
	{
	}

	private void OnSourceAmountChanged()
	{
	}
}
