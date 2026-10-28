using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.UI
{

public class UIHeartCounter : UIElementWithAnim
{
	[CompilerGenerated]
	private sealed class _003CIEUpdateHeartCooldown_003Ed__29 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIHeartCounter _003C_003E4__this;

		private float _003CtimeStart_003E5__2;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CIEUpdateHeartCooldown_003Ed__29(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CIEUpdateInfiniteHeart_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIHeartCounter _003C_003E4__this;

		private float _003CtimeStart_003E5__2;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CIEUpdateInfiniteHeart_003Ed__28(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	private const string LocMax = "heart_max";

	private const string LocDaysHours = "time_days_hours";

	[SerializeField]
	private TextMeshProUGUI _txtTimeCounter;

	[SerializeField]
	private Button _btnMore;

	[SerializeField]
	private Image _imgMore;

	[SerializeField]
	private GameObject _sectionNormal;

	[SerializeField]
	private GameObject _sectionUnlimitedHeart;

	[SerializeField]
	private TextMeshProUGUI _txtHeartCount;

	[Header("Heart Source")]
	[SerializeField]
	private bool _isUseSourceSaveData;

	[SerializeField]
	private GameObject[] _otherHeartSourceObjs;

	private List<IItemCurrencyHoldingSource> _otherHeartSources = new List<IItemCurrencyHoldingSource>();

	private const string KeyLocalizeMax = "MaxCap";

	private Coroutine _corUpdate;

	private float _waitTime;

	public event Action onClickMore;

	private void Awake()
	{
	}

	private void OnLanguageChanged()
	{
	}

	public void AddHeartSource(IItemCurrencyHoldingSource heartSource)
	{
	}

	private void OnDestroy()
	{
	}

	private void OnEnable()
	{
	}

	private void OnUnlimitedHeartActivated()
	{
	}

	private void OnHeartStatusChanged(int oldAmount, int newAmount)
	{
	}

	private void UpdateButton()
	{
	}

	private void OnDisable()
	{
	}

	private int CalculateTotalHeartAmount()
	{
		return 0;
	}

	private void TriggerUpdateLoop()
	{
	}

	[IteratorStateMachine(typeof(_003CIEUpdateInfiniteHeart_003Ed__28))]
	private IEnumerator IEUpdateInfiniteHeart()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEUpdateHeartCooldown_003Ed__29))]
	private IEnumerator IEUpdateHeartCooldown()
	{
		return null;
	}
}
}
