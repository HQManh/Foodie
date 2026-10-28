using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using UnityEngine;

namespace _GAME.GameUI;

public class RwItemDropCtrl : RwItemUICtrl
{
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass6_0
	{
		public bool arrived;

		public RwItemDropCtrl _003C_003E4__this;

		public Action callback;

		internal void _003CPlayLegacyAsync_003Eb__0()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass7_0
	{
		public RwItemDropCtrl _003C_003E4__this;

		public Vector3 srcPos;

		public bool reachedDestination;

		public Vector3 dstPos;

		public Action onArrived;

		internal void _003CPlayDropAsync_003Eb__2()
		{
		}

		internal void _003CPlayDropAsync_003Eb__3()
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayDropAsync_003Ed__7 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<DropResult> _003C_003Et__builder;

		public RwItemDropCtrl _003C_003E4__this;

		public Vector3 srcPos;

		public Vector3 dstPos;

		public Action onArrived;

		public CancellationToken cancellationToken;

		private _003C_003Ec__DisplayClass7_0 _003C_003E8__1;

		private int _003CleaseVersion_003E5__2;

		private Sequence _003Csequence_003E5__3;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayLegacyAsync_003Ed__6 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public RwItemDropCtrl _003C_003E4__this;

		public Action callback;

		public Vector3 srcPos;

		public Vector3 dstPos;

		private _003C_003Ec__DisplayClass6_0 _003C_003E8__1;

		private int _003CleaseVersion_003E5__2;

		private UnityEngine.Awaitable<DropResult>.Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	public Animator animDrop;

	private Sequence _dropSequence;

	private int _leaseVersion;

	private bool _isInPool;

	private bool _ownsActiveSlot;

	internal int LeaseVersion => 0;

	public void DropFromToPos(Vector3 srcPos, Vector3 dstPos, Action callback = null)
	{
	}

	[AsyncStateMachine(typeof(_003CPlayLegacyAsync_003Ed__6))]
	private UniTaskVoid PlayLegacyAsync(Vector3 srcPos, Vector3 dstPos, Action callback)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	[AsyncStateMachine(typeof(_003CPlayDropAsync_003Ed__7))]
	internal UniTask<DropResult> PlayDropAsync(Vector3 srcPos, Vector3 dstPos, Action onArrived, CancellationToken cancellationToken)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<DropResult>);
	}

	internal void PrepareForSpawn()
	{
	}

	internal bool TryPrepareForPool(out bool releaseActiveSlot)
	{
		releaseActiveSlot = default(bool);
		return false;
	}

	internal void ReturnToPool(int expectedLeaseVersion)
	{
	}

	private void KillActiveSequence()
	{
	}

	private void SafePlaySoundShow()
	{
	}

	private void SafePlaySoundDrop()
	{
	}

	private void SafeShowVfxShow(Vector3 position)
	{
	}

	private void SafeShowVfxDrop(Vector3 position)
	{
	}

	private void SafeInvoke(Action callback)
	{
	}

	protected virtual void PlaySoundShow()
	{
	}

	protected virtual void PlaySoundDrop()
	{
	}

	protected virtual void ShowVfxShow(Vector3 dstPos)
	{
	}

	protected virtual void ShowVfxDrop(Vector3 dstPos)
	{
	}

	protected virtual void Despawn()
	{
	}
}
