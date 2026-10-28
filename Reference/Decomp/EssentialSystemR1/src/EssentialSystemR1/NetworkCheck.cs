using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;

namespace EssentialSystemR1;

public class NetworkCheck : MonoBehaviour
{
	public enum NetworkStatus
	{
		Undetermined,
		Connected,
		ConnectionLost,
		InternetDisabled
	}

	[CompilerGenerated]
	private sealed class _003CIECheckConnection_003Ed__33 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public NetworkCheck _003C_003E4__this;

		private UnityWebRequest _003Crequest_003E5__2;

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
		public _003CIECheckConnection_003Ed__33(int _003C_003E1__state)
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

		private void _003C_003Em__Finally1()
		{
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	private NetworkStatus _status;

	[Header("Settings")]
	[Tooltip("How often to check when we are ONLINE (seconds)")]
	[SerializeField]
	private float _intervalOnlineCheck;

	[Tooltip("How often to check when we are OFFLINE (seconds)")]
	[SerializeField]
	private float _intervalOfflineCheck;

	private bool _isRequestCheckConnection;

	private float _lastTimeDoneCheck;

	private float _intervalCheck;

	private Action<NetworkStatus> _onResultCheckConnection;

	private bool _isChecking;

	private Coroutine _corCheckConnection;

	public static NetworkCheck Instance { get; private set; }

	public static bool IsExistInstance => false;

	public bool IsConnected { get; private set; }

	public bool IsCheckingConnection => false;

	public event Action OnConnected
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

	public event Action OnDisconnected
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

	private void OnDestroy()
	{
	}

	private void Start()
	{
	}

	private void LateUpdate()
	{
	}

	public void RequestCheckConnection(Action<NetworkStatus> onResult = null)
	{
	}

	[IteratorStateMachine(typeof(_003CIECheckConnection_003Ed__33))]
	private IEnumerator IECheckConnection()
	{
		return null;
	}

	private void SetStatusAfterCheck(NetworkStatus newStatus)
	{
	}
}
