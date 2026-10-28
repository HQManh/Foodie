using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.DataSO;
using CakeOrder.Model;
using DG.Tweening;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace CakeOrder.InGame
{

public class CustomerVisual : MonoBehaviour
{
	public enum State
	{
		Hidden,
		FirstInQueue,
		PlayingEndAnim,
		Ended
	}

	[Serializable]
	public class VisualConfig
	{
		public Transform queueFrontPos;

		public Transform queueEndPos;

		public Gradient blendColorByNormPos;

		public float durationMoveCustomer;

		public Ease easeMoveCustomer;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadCharacterAnimControl_003Ed__16 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public CustomerVisual _003C_003E4__this;

		private TaskAwaiter<GameObject> _003C_003Eu__1;

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

	[SerializeField]
	private VisualConfig _visualConfig;

	[SerializeField]
	private CustomerDataGeneral _data;

	[SerializeField]
	private Transform _characterAnimContainer;

	private CakeCharacterSO _characterSO;

	private CakeCharacterAnimControl _animControl;

	private AsyncOperationHandle<GameObject> _opLoadAnimControl;

	private float _normPosInQueue;

	private Tween _tweenMove;

	public State CurrentState { get; private set; }

	public void SetUp(VisualConfig visualConfig, CustomerDataGeneral data, float normPosInQueue)
	{
	}

	public void Move(float normPosInQueue)
	{
	}

	[AsyncStateMachine(typeof(_003CLoadCharacterAnimControl_003Ed__16))]
	private void LoadCharacterAnimControl()
	{
	}

	public void EndAngry()
	{
	}

	public void EndHappy()
	{
	}

	public void Disappear()
	{
	}

	private void OnDestroy()
	{
	}
}
}
