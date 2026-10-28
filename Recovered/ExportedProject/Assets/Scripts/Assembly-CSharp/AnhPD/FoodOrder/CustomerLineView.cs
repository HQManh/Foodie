using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Serialization;

namespace AnhPD.FoodOrder
{
	public class CustomerLineView : MonoBehaviour
	{
		private struct Slot
		{
			public int Board;

			public int Local;
		}

		[CompilerGenerated]
		private sealed class _003CAfterDoneDelayRoutine_003Ed__102 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public CustomerLineView _003C_003E4__this;

			public int epoch;

			public Action action;

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
			public _003CAfterDoneDelayRoutine_003Ed__102(int _003C_003E1__state)
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
		private sealed class _003CCommitDoneRoutine_003Ed__103 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public CustomerLineView _003C_003E4__this;

			public int epoch;

			public int index;

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
			public _003CCommitDoneRoutine_003Ed__103(int _003C_003E1__state)
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
		private sealed class _003CPeekRoutine_003Ed__55 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public CustomerLineView _003C_003E4__this;

			public OrderBoard board;

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
			public _003CPeekRoutine_003Ed__55(int _003C_003E1__state)
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
		private sealed class _003CRevealBoardsRoutine_003Ed__82 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public CustomerLineView _003C_003E4__this;

			public List<List<OrderSpec>> orders;

			private int _003Cb_003E5__2;

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
			public _003CRevealBoardsRoutine_003Ed__82(int _003C_003E1__state)
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

		[Header("Refs")]
		[SerializeField]
		private CustomerLoader customerLoader;

		[SerializeField]
		private FTimer timer;

		[SerializeField]
		private List<OrderBoard> boards;

		[SerializeField]
		private CustomerWeatherDisplay weatherDisplay;

		[SerializeField]
		private BossOrderBoardEffect bossEffect;

		[SerializeField]
		private float peekDuration;

		[Tooltip("Covers every board of the order, RectMask2D + ignoreLayout: the peek is drawn and clipped here.")]
		[SerializeField]
		private RectTransform ingredientClip;

		[Tooltip("Inactive empty child of the boards' layout: grows one board wide while a lone board peeks.")]
		[SerializeField]
		private RectTransform peekSpacer;

		[SerializeField]
		private float peekSpacerDuration;

		[Tooltip("Canvas units kept between the peek and the safe-area edge; orderRoot slides sideways to keep it.")]
		[FormerlySerializedAs("peekScreenMargin")]
		[SerializeField]
		private float peekScreenMarginLeft;

		[SerializeField]
		private float peekScreenMarginRight;

		[SerializeField]
		private ParticleSystem vfxHappy;

		[SerializeField]
		private ParticleSystem vfxSmoke;

		[SerializeField]
		private ParticleSystem vfxUpset;

		[Header("Config")]
		[SerializeField]
		private float orderItemLoadDelay;

		[SerializeField]
		private float shakeDuration;

		[SerializeField]
		private float shakeStrength;

		[SerializeField]
		private int shakeVibrato;

		public Transform targetPos;

		public Transform orderRoot;

		private WeatherEffect _weatherEffect;

		public UnityEvent onShowOrder;

		public UnityEvent onHideOrder;

		private Vector3 _loaderRestLocalPos;

		private Vector3 _vfxHappyRestLocalPos;

		[CompilerGenerated]
		private Action<OrderBoard, string> m_onBoardTapped;

		[Header("Board reveal")]
		[SerializeField]
		private float boardAppearDuration;

		[SerializeField]
		private float boardAppearDelay;

		private Vector3 _boardScale;

		private Coroutine _revealRoutine;

		private readonly Dictionary<OrderBoard, Coroutine> _peekTimers;

		private OrderBoard _peekBoard;

		private RectTransform _peekNeighbour;

		private bool _peekWiden;

		private Vector3 _peekLinePos;

		private Vector3 _peekShiftRest;

		private bool _peekShifted;

		private Tween _peekShiftTween;

		private Slot[] _slots;

		private List<List<int>> _groups;

		private Func<int, OrderItemLook> _lookOf;

		[SerializeField]
		private float doneHideDelay;

		private int _doneEpoch;

		[CompilerGenerated]
		private Action m_onBoardCleared;

		[Header("Bounce (ingredient list open/close)")]
		[SerializeField]
		private Vector2 bounceStretch;

		[SerializeField]
		private float bounceStretchDuration;

		[SerializeField]
		private Ease bounceEase;

		private Tween _bounce;

		private Vector3 _loaderRestScale;

		public FTimer Timer => null;

		public CustomerLoader Loader => null;

		public float RevealDuration { get; private set; }

		private Vector3 LinePos => default;

		public event Action<OrderBoard, string> onBoardTapped
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

		public event Action onBoardCleared
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

		private void SetupSpacerTap()
		{
		}

		private void RegisterBoard(OrderBoard board)
		{
		}

		private void RaiseBoardTapped(OrderBoard board, string focusId)
		{
		}

		private void OnDestroy()
		{
		}

		private void OnDisable()
		{
		}

		public void PeekIngredients(OrderBoard board)
		{
		}

		private void LateUpdate()
		{
		}

		[IteratorStateMachine(typeof(_003CPeekRoutine_003Ed__55))]
		private IEnumerator PeekRoutine(OrderBoard board)
		{
			return null;
		}

		private void FinishPeek(OrderBoard board, bool byTap = false)
		{
		}

		private void StopTimer(OrderBoard board)
		{
		}

		private void StopPeek()
		{
		}

		private void GrowSpacer(RectTransform board)
		{
		}

		private void OnPeekReleased(OrderBoard board, float duration, Ease ease)
		{
		}

		private void KeepPeekOnScreen(RectTransform board, RectTransform neighbour, bool widen, bool follow = false)
		{
		}

		private static float ScreenX(Camera cam, Vector3 world)
		{
			return 0f;
		}

		private void ShiftPeekTo(Vector3 to, bool follow)
		{
		}

		private void TweenPeekShift(Vector3 to, float duration, Ease ease)
		{
		}

		private void ResetPeekShift()
		{
		}

		private Tween TweenSpacer(float width, float duration, Ease ease = Ease.OutCubic)
		{
			return null;
		}

		private void SetSpacerWidth(float width)
		{
		}

		private void ResetSpacer()
		{
		}

		private RectTransform NeighbourOf(OrderBoard board)
		{
			return null;
		}

		public string DebugRevealState()
		{
			return null;
		}

		public int GetBoardCount(List<OrderSpec> order)
		{
			return 0;
		}

		public void SetBossLook(bool isBoss)
		{
		}

		public void ShowOrder(List<OrderSpec> order, Func<int, OrderItemLook> lookOf)
		{
		}

		private void DistributeAndShow(List<OrderSpec> order)
		{
		}

		[IteratorStateMachine(typeof(_003CRevealBoardsRoutine_003Ed__82))]
		private IEnumerator RevealBoardsRoutine(List<List<OrderSpec>> orders)
		{
			return null;
		}

		private List<OrderItemLook> LooksOf(List<int> group)
		{
			return null;
		}

		private void EnsureBoardCount(int needed)
		{
		}

		public void ReleaseOrderBoards()
		{
		}

		public void HideOrder()
		{
		}

		private bool HasSlot(int index)
		{
			return false;
		}

		private bool MapGlobalIndex(int index, out int board, out int local)
		{
			board = default;
			local = default;
			return false;
		}

		private OrderItemLook LookOf(int index)
		{
			return OrderItemLook.Normal;
		}

		public void RefreshItem(int index, bool animate = false)
		{
		}

		public void MarkItemDone(int index)
		{
		}

		public void GetNeighbors(int index, List<int> result)
		{
		}

		public void PlayHappyVfx()
		{
		}

		public void PunchOrder(int index)
		{
		}

		public Transform GetOrderTarget(int index)
		{
			return null;
		}

		public void RunAfterDoneDelay(Action action)
		{
		}

		[IteratorStateMachine(typeof(_003CAfterDoneDelayRoutine_003Ed__102))]
		private IEnumerator AfterDoneDelayRoutine(Action action, int epoch)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CCommitDoneRoutine_003Ed__103))]
		private IEnumerator CommitDoneRoutine(int index, int epoch)
		{
			return null;
		}

		private void OnEnterUpsetZone()
		{
		}

		private void OnLeaveUpsetZone()
		{
		}

		private void OnEnterAngryZone()
		{
		}

		private void OnLeaveAngryZone()
		{
		}

		public void PlayShake()
		{
		}

		public void StopShake()
		{
		}

		private void PlayBounce()
		{
		}

		private void KillBounce()
		{
		}

		public void PlayTimeout()
		{
		}

		public void OnRefillWaitTime(Action onDone = null)
		{
		}

		public void SetWeather(WeatherEffect effect)
		{
		}
	}
}
