using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using Utilities;

namespace CakeOrder.PopupMinigame;

public class MinisceneControlCookOrder : MonoSingleton<MinisceneControlCookOrder>
{
	[CompilerGenerated]
	private sealed class _003CIECreateRenderTexture_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public MinisceneControlCookOrder _003C_003E4__this;

		public Vector2Int viewSize;

		private int _003Cwidth_003E5__2;

		private int _003Cheight_003E5__3;

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
		public _003CIECreateRenderTexture_003Ed__23(int _003C_003E1__state)
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
	private Camera _camera;

	[SerializeField]
	private Transform _spawnParentMinigame;

	[SerializeField]
	private InputMiniScene _inputCookMiniScene;

	private RenderTexture _currentRenderTexture;

	[SerializeField]
	private int _defaultRenderTextureSize;

	[SerializeField]
	private int _maxRenderTextureSize;

	private PhysicsScene2D _physicsScene;

	private SimulationMode2D _previousSimulationMode;

	private float timer;

	public Transform SpawnParentMinigame => null;

	public Camera Camera => null;

	public InputMiniScene InputMiniScene => null;

	public RenderTexture CurrentRenderTexture => null;

	public bool IsRenderTextureReady { get; private set; }

	protected override void Awake()
	{
	}

	public void UpdateRenderTextureSize(Vector2Int viewSize)
	{
	}

	[IteratorStateMachine(typeof(_003CIECreateRenderTexture_003Ed__23))]
	private IEnumerator IECreateRenderTexture(Vector2Int viewSize)
	{
		return null;
	}

	private void FixedUpdate()
	{
	}

	protected override void OnDestroy()
	{
	}
}
