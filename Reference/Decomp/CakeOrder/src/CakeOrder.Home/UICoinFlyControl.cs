using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.Home;

public class UICoinFlyControl : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CIEFly_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UICoinFlyControl _003C_003E4__this;

		public Image coin;

		public Vector3 startPos;

		public Vector3 destPos;

		public Action onArrive;

		private Vector2 _003Cperpendicular_003E5__2;

		private float _003CperpendicularOffset_003E5__3;

		private float _003Ctime_003E5__4;

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
		public _003CIEFly_003Ed__13(int _003C_003E1__state)
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

	[SerializeField]
	private Image coinPrefab;

	[SerializeField]
	private Transform poolContainer;

	[SerializeField]
	private CoinFlyAnimConfig animConfig;

	[SerializeField]
	private AudioSource audioSource;

	[SerializeField]
	private ParticleSystem particleArrive;

	[SerializeField]
	private float arriveRandomRadius;

	private readonly ObjectStackPoolControl<Image> _pool;

	private int _burstFrame;

	private int _burstsThisFrame;

	private void Awake()
	{
	}

	private void OnDisable()
	{
	}

	private void OnDestroy()
	{
	}

	public void Fly(Vector3 startPos, Vector3 destPos, Action onArrive = null)
	{
	}

	[IteratorStateMachine(typeof(_003CIEFly_003Ed__13))]
	private IEnumerator IEFly(Image coin, Vector3 startPos, Vector3 destPos, Action onArrive)
	{
		return null;
	}
}
