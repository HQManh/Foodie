using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using CakeOrder.DataSO;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class CustomerLineView : MonoBehaviour
	{
		private struct Slot
		{
			public int Board;

			public int Local;
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
		private float peekDuration = 2.5f;

		[Tooltip("Covers every board of the order, RectMask2D + ignoreLayout: the peek is drawn and clipped here.")]
		[SerializeField]
		private RectTransform ingredientClip;

		[Tooltip("Inactive empty child of the boards' layout: grows one board wide while a lone board peeks.")]
		[SerializeField]
		private RectTransform peekSpacer;

		[SerializeField]
		private float peekSpacerDuration = 0.25f;

		[Tooltip("Canvas units kept between the peek and the safe-area edge; orderRoot slides sideways to keep it.")]
		[FormerlySerializedAs("peekScreenMargin")]
		[SerializeField]
		private float peekScreenMarginLeft = 16f;

		[SerializeField]
		private float peekScreenMarginRight = 40f;

		[SerializeField]
		private ParticleSystem vfxHappy;

		[SerializeField]
		private ParticleSystem vfxSmoke;

		[SerializeField]
		private ParticleSystem vfxUpset;

		[Header("Config")]
		[SerializeField]
		private float orderItemLoadDelay = 0.2f;

		[SerializeField]
		private float shakeDuration = 0.1f;

		[SerializeField]
		private float shakeStrength = 0.05f;

		[SerializeField]
		private int shakeVibrato = 10;

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
		private float boardAppearDuration = 0.3f;

		[SerializeField]
		private float boardAppearDelay = 0.15f;

		private Vector3 _boardScale = Vector3.one;

		private Coroutine _revealRoutine;

		private readonly Dictionary<OrderBoard, Coroutine> _peekTimers = new Dictionary<OrderBoard, Coroutine>();

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
		private float doneHideDelay = 0.35f;

		private int _doneEpoch;

		[CompilerGenerated]
		private Action m_onBoardCleared;

		[Header("Bounce (ingredient list open/close)")]
		[SerializeField]
		private Vector2 bounceStretch = new Vector2(0f, 0.08f);

		[SerializeField]
		private float bounceStretchDuration = 0.3f;

		[SerializeField]
		private Ease bounceEase = Ease.InOutSine;

		private Tween _bounce;

		private Vector3 _loaderRestScale;

		public FTimer Timer => timer;

		public CustomerLoader Loader => customerLoader;

		public float RevealDuration { get; private set; }

		private Vector3 LinePos
		{
			get
			{
				if ((bool)orderRoot && (bool)orderRoot.parent)
				{
					return orderRoot.parent.position;
				}
				return base.transform.position;
			}
		}

		public event Action<OrderBoard, string> onBoardTapped
		{
			[CompilerGenerated]
			add
			{
				m_onBoardTapped = (Action<OrderBoard, string>)Delegate.Combine(m_onBoardTapped, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onBoardTapped = (Action<OrderBoard, string>)Delegate.Remove(m_onBoardTapped, value);
			}
		}

		public event Action onBoardCleared
		{
			[CompilerGenerated]
			add
			{
				m_onBoardCleared = (Action)Delegate.Combine(m_onBoardCleared, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onBoardCleared = (Action)Delegate.Remove(m_onBoardCleared, value);
			}
		}

		private void Awake()
		{
			timer.OnShake = (Action)Delegate.Combine(timer.OnShake, new Action(OnEnterAngryZone));
			timer.OnStopShake = (Action)Delegate.Combine(timer.OnStopShake, new Action(OnLeaveAngryZone));
			timer.OnUpset = (Action)Delegate.Combine(timer.OnUpset, new Action(OnEnterUpsetZone));
			timer.OnStopUpset = (Action)Delegate.Combine(timer.OnStopUpset, new Action(OnLeaveUpsetZone));
			_loaderRestLocalPos = customerLoader.transform.localPosition;
			if ((bool)vfxHappy)
			{
				_vfxHappyRestLocalPos = vfxHappy.transform.localPosition;
			}
			if (boards.Count > 0 && (bool)boards[0])
			{
				_boardScale = boards[0].transform.localScale;
			}
			foreach (OrderBoard board in boards)
			{
				RegisterBoard(board);
			}
			SetupSpacerTap();
		}

		private void SetupSpacerTap()
		{
			if (!peekSpacer)
			{
				return;
			}
			GameObject gameObject = peekSpacer.gameObject;
			if (!gameObject.TryGetComponent<Image>(out var graphic))
			{
				graphic = gameObject.AddComponent<Image>();
				graphic.color = new Color(0f, 0f, 0f, 0f);
			}
			graphic.raycastTarget = true;
			if (!gameObject.TryGetComponent<Button>(out var button))
			{
				button = gameObject.AddComponent<Button>();
			}
			button.transition = Selectable.Transition.None;
			button.onClick.AddListener(delegate
			{
				// TODO(unrecovered): original calls OrderBoard.RaiseZoom (private); Tap() is the accessible equivalent.
				if ((bool)_peekBoard)
				{
					_peekBoard.Tap();
				}
			});
		}

		private void RegisterBoard(OrderBoard board)
		{
			if ((bool)board)
			{
				Action<OrderBoard, string> zoomHandler = RaiseBoardTapped;
				board.onZoomTapped -= zoomHandler;
				board.onZoomTapped += zoomHandler;
				Action<OrderBoard, float, Ease> releasedHandler = OnPeekReleased;
				board.PeekReleased -= releasedHandler;
				board.PeekReleased += releasedHandler;
			}
		}

		private void RaiseBoardTapped(OrderBoard board, string focusId)
		{
			m_onBoardTapped?.Invoke(board, focusId);
		}

		private void OnDestroy()
		{
			timer.OnShake = (Action)Delegate.Remove(timer.OnShake, new Action(OnEnterAngryZone));
			timer.OnStopShake = (Action)Delegate.Remove(timer.OnStopShake, new Action(OnLeaveAngryZone));
			timer.OnUpset = (Action)Delegate.Remove(timer.OnUpset, new Action(OnEnterUpsetZone));
			timer.OnStopUpset = (Action)Delegate.Remove(timer.OnStopUpset, new Action(OnLeaveUpsetZone));
		}

		private void OnDisable()
		{
			_revealRoutine = null;
			_peekTimers.Clear();
			StopPeek();
		}

		public void PeekIngredients(OrderBoard board)
		{
			PlayBounce();
			if ((bool)_peekBoard && _peekBoard.IsPeeking && _peekBoard.PeekIsWide)
			{
				board = _peekBoard;
				FinishPeek(board, byTap: true);
				return;
			}
			if (board.IsPeeking)
			{
				FinishPeek(board, byTap: true);
				return;
			}
			StopTimer(board);
			RectTransform rectTransform = NeighbourOf(board);
			bool flag = (bool)rectTransform ? false : (bool)peekSpacer;
			if (!board.TryPeekIngredients(rectTransform, ingredientClip, flag))
			{
				board.PreviewIngredients();
				return;
			}
			if (!board.IsPeeking)
			{
				KeepPeekOnScreen((RectTransform)board.transform, null, widen: false);
				return;
			}
			bool peekIsWide = board.PeekIsWide;
			if (!peekIsWide)
			{
				rectTransform = null;
			}
			flag = peekIsWide && flag;
			if (flag)
			{
				GrowSpacer((RectTransform)board.transform);
			}
			KeepPeekOnScreen((RectTransform)board.transform, rectTransform, flag);
			_peekBoard = board;
			_peekNeighbour = rectTransform;
			_peekWiden = flag;
			_peekLinePos = LinePos;
			Coroutine value = StartCoroutine(PeekRoutine(board));
			_peekTimers[board] = value;
		}

		private void LateUpdate()
		{
			if (!_peekBoard || !_peekBoard.IsPeeking)
			{
				return;
			}
			Vector3 linePos = LinePos;
			if ((linePos - _peekLinePos).sqrMagnitude < 1E-10f)
			{
				return;
			}
			_peekLinePos = linePos;
			KeepPeekOnScreen((RectTransform)_peekBoard.transform, _peekNeighbour, _peekWiden, follow: true);
		}

		private IEnumerator PeekRoutine(OrderBoard board)
		{
			yield return new WaitForSeconds(peekDuration);
			_peekTimers.Remove(board);
			FinishPeek(board);
		}

		private void FinishPeek(OrderBoard board, bool byTap = false)
		{
			StopTimer(board);
			if (board == _peekBoard)
			{
				_peekBoard = null;
				_peekNeighbour = null;
			}
			if ((bool)board)
			{
				board.EndPeek(byTap);
			}
		}

		private void StopTimer(OrderBoard board)
		{
			if ((bool)board && _peekTimers.TryGetValue(board, out var value))
			{
				if (value != null)
				{
					StopCoroutine(value);
				}
				_peekTimers.Remove(board);
			}
		}

		private void StopPeek()
		{
			foreach (Coroutine value in _peekTimers.Values)
			{
				if (value != null)
				{
					StopCoroutine(value);
				}
			}
			_peekTimers.Clear();
			_peekBoard = null;
			_peekNeighbour = null;
		}

		private void GrowSpacer(RectTransform board)
		{
			peekSpacer.DOKill();
			peekSpacer.gameObject.SetActive(true);
			peekSpacer.SetAsLastSibling();
			Vector2 sizeDelta = peekSpacer.sizeDelta;
			Rect rect = board.rect;
			Vector3 localScale = board.localScale;
			peekSpacer.sizeDelta = new Vector2(sizeDelta.x, rect.height * localScale.y);
			SetSpacerWidth(0f);
			TweenSpacer(board.rect.width * board.localScale.x, peekSpacerDuration);
		}

		private void OnPeekReleased(OrderBoard board, float duration, Ease ease)
		{
			if (duration < 0f)
			{
				duration = peekSpacerDuration;
			}
			if (_peekShifted)
			{
				TweenPeekShift(_peekShiftRest, duration, ease);
			}
			if ((bool)peekSpacer && peekSpacer.gameObject.activeSelf)
			{
				peekSpacer.DOKill();
				TweenSpacer(0f, duration, ease).OnComplete(ResetSpacer);
			}
		}

		private void KeepPeekOnScreen(RectTransform board, RectTransform neighbour, bool widen, bool follow = false)
		{
			if (!orderRoot)
			{
				return;
			}
			if (!_peekShifted)
			{
				_peekShiftRest = orderRoot.localPosition;
			}
			Transform parent = orderRoot.parent;
			Vector3 shift = orderRoot.localPosition - _peekShiftRest;
			if ((bool)parent)
			{
				shift = parent.TransformVector(shift);
			}
			Canvas canvas = board.GetComponentInParent<Canvas>();
			if ((bool)canvas)
			{
				canvas = canvas.rootCanvas;
			}
			Camera cam;
			if ((bool)canvas && canvas.renderMode == RenderMode.ScreenSpaceOverlay)
			{
				cam = null;
			}
			else if ((bool)canvas && (bool)canvas.worldCamera)
			{
				cam = canvas.worldCamera;
			}
			else
			{
				cam = Camera.main;
			}
			Vector3[] corners = new Vector3[4];
			board.GetWorldCorners(corners);
			Vector3 bottomLeft = corners[0];
			Vector3 bottomRight = corners[3];
			float x0 = ScreenX(cam, bottomLeft - shift);
			float x1 = ScreenX(cam, bottomRight - shift);
			float width = x1 - x0;
			float absWidth = Mathf.Abs(width);
			if (Mathf.Approximately(0f, width))
			{
				return;
			}
			Vector3 edge = bottomRight - bottomLeft;
			float minX = Mathf.Min(x0, x1);
			float maxX = Mathf.Max(x0, x1);
			if (widen)
			{
				float x2 = ScreenX(cam, bottomRight + edge - shift);
				minX = Mathf.Min(minX, x2);
				maxX = Mathf.Max(maxX, x2);
			}
			if ((bool)neighbour)
			{
				neighbour.GetWorldCorners(corners);
				float n0 = ScreenX(cam, corners[0] - shift);
				maxX = Mathf.Max(maxX, n0);
				minX = Mathf.Min(minX, n0);
				float n1 = ScreenX(cam, corners[3] - shift);
				minX = Mathf.Min(minX, n1);
				maxX = Mathf.Max(maxX, n1);
			}
			Rect safeArea = Screen.safeArea;
			float scale = 1f;
			if ((bool)canvas)
			{
				scale = canvas.scaleFactor;
			}
			float rightLimit = safeArea.xMax - scale * peekScreenMarginRight;
			float dx = 0f;
			if (maxX > rightLimit)
			{
				dx = rightLimit - maxX;
			}
			else
			{
				float leftLimit = safeArea.xMin + scale * peekScreenMarginLeft;
				if (minX < leftLimit)
				{
					dx = leftLimit - minX;
				}
			}
			Vector3 target;
			if (dx != 0f)
			{
				float clamped = Mathf.Clamp(dx, 0f - absWidth, absWidth);
				float k = clamped / width;
				Vector3 worldShift = edge * k;
				if ((bool)parent)
				{
					worldShift = parent.InverseTransformVector(worldShift);
				}
				target = _peekShiftRest + worldShift;
			}
			else
			{
				if (!_peekShifted)
				{
					return;
				}
				target = _peekShiftRest;
			}
			ShiftPeekTo(target, follow);
		}

		private static float ScreenX(Camera cam, Vector3 world)
		{
			return RectTransformUtility.WorldToScreenPoint(cam, world).x;
		}

		private void ShiftPeekTo(Vector3 to, bool follow)
		{
			float duration = peekSpacerDuration;
			if (follow)
			{
				if (_peekShiftTween != null)
				{
					if (_peekShiftTween.IsActive() && _peekShiftTween.IsPlaying())
					{
						float remaining = _peekShiftTween.Duration() - _peekShiftTween.Elapsed();
						if (remaining > 0f)
						{
							duration = remaining;
							TweenPeekShift(to, duration, Ease.OutCubic);
							return;
						}
					}
					_peekShiftTween.Kill();
				}
				_peekShiftTween = null;
				orderRoot.localPosition = to;
				_peekShifted = (to - _peekShiftRest).sqrMagnitude >= 1E-10f;
				return;
			}
			TweenPeekShift(to, duration, Ease.OutCubic);
		}

		private void TweenPeekShift(Vector3 to, float duration, Ease ease)
		{
			if (_peekShiftTween != null)
			{
				_peekShiftTween.Kill();
			}
			_peekShifted = true;
			_peekShiftTween = orderRoot.DOLocalMove(to, duration).SetEase(ease);
			if ((to - _peekShiftRest).sqrMagnitude < 1E-10f)
			{
				_peekShiftTween.OnComplete(delegate
				{
					_peekShifted = false;
				});
			}
		}

		private void ResetPeekShift()
		{
			if (_peekShifted)
			{
				if (_peekShiftTween != null)
				{
					_peekShiftTween.Kill();
				}
				_peekShiftTween = null;
				orderRoot.localPosition = _peekShiftRest;
				_peekShifted = false;
			}
		}

		private Tween TweenSpacer(float width, float duration, Ease ease = Ease.OutCubic)
		{
			return DOTween.To(() => peekSpacer.sizeDelta.x, SetSpacerWidth, width, duration).SetEase(ease).SetTarget(peekSpacer);
		}

		private void SetSpacerWidth(float width)
		{
			Vector2 sizeDelta = peekSpacer.sizeDelta;
			sizeDelta.x = width;
			peekSpacer.sizeDelta = sizeDelta;
			LayoutRebuilder.MarkLayoutForRebuild(peekSpacer);
		}

		private void ResetSpacer()
		{
			if ((bool)peekSpacer)
			{
				peekSpacer.DOKill();
				SetSpacerWidth(0f);
				peekSpacer.gameObject.SetActive(false);
			}
		}

		private RectTransform NeighbourOf(OrderBoard board)
		{
			int num = boards.IndexOf(board);
			if (num < 0)
			{
				return null;
			}
			int num2 = num + 1;
			if (num2 >= boards.Count || !boards[num2] || !boards[num2].gameObject.activeInHierarchy)
			{
				if (num == 0)
				{
					return null;
				}
				num2 = num - 1;
				if (!boards[num2])
				{
					return null;
				}
				if (!boards[num2].gameObject.activeInHierarchy)
				{
					return null;
				}
			}
			return (RectTransform)boards[num2].transform;
		}

		public string DebugRevealState()
		{
			StringBuilder stringBuilder = new StringBuilder();
			stringBuilder.Append(string.Format("active={0} revealDur={1}", base.gameObject.activeInHierarchy, RevealDuration) + string.Format(" revealRoutine={0} loading=[", _revealRoutine != null));
			for (int i = 0; i < boards.Count; i++)
			{
				if ((bool)boards[i] && boards[i].gameObject.activeSelf && boards[i].IsLoadingOrder)
				{
					stringBuilder.Append(i).Append(' ');
				}
			}
			stringBuilder.Append(']');
			return stringBuilder.ToString();
		}

		public int GetBoardCount(List<OrderSpec> order)
		{
			if (boards.Count > 0 && (bool)boards[0])
			{
				return boards[0].Split(order).Count;
			}
			return 1;
		}

		public void SetBossLook(bool isBoss)
		{
			if ((bool)bossEffect)
			{
				if (isBoss)
				{
					bossEffect.PlayEffect();
				}
				else
				{
					bossEffect.StopEffect();
				}
			}
		}

		public void ShowOrder(List<OrderSpec> order, Func<int, OrderItemLook> lookOf)
		{
			_lookOf = lookOf;
			if (onShowOrder != null)
			{
				onShowOrder.Invoke();
			}
			orderRoot.gameObject.SetActive(true);
			orderRoot.localScale = Vector3.one;
			DistributeAndShow(order);
		}

		private void DistributeAndShow(List<OrderSpec> order)
		{
			_doneEpoch++;
			_groups = boards[0].Split(order);
			int count = _groups.Count;
			EnsureBoardCount(count);
			_slots = new Slot[order.Count];
			for (int i = 0; i < order.Count; i++)
			{
				_slots[i].Board = -1;
				_slots[i].Local = -1;
			}
			for (int j = count; j < boards.Count; j++)
			{
				if ((bool)boards[j])
				{
					boards[j].HideOrder();
					boards[j].gameObject.SetActive(false);
				}
			}
			List<List<OrderSpec>> list = new List<List<OrderSpec>>(count);
			for (int k = 0; k < count; k++)
			{
				List<int> list2 = _groups[k];
				List<OrderSpec> list3 = new List<OrderSpec>(list2.Count);
				for (int l = 0; l < list2.Count; l++)
				{
					int num = list2[l];
					list3.Add(order[num]);
					_slots[num].Board = k;
					_slots[num].Local = l;
				}
				list.Add(list3);
			}
			RevealDuration = 0f;
			for (int m = 0; m < count; m++)
			{
				float loadDuration = 0f;
				if ((bool)boards[m])
				{
					loadDuration = boards[m].GetLoadDuration(list[m]);
				}
				float num2 = boardAppearDelay * (float)m + Mathf.Max(boardAppearDuration, loadDuration);
				RevealDuration = Mathf.Max(RevealDuration, num2);
			}
			if (_revealRoutine != null)
			{
				StopCoroutine(_revealRoutine);
			}
			_revealRoutine = StartCoroutine(RevealBoardsRoutine(list));
		}

		private IEnumerator RevealBoardsRoutine(List<List<OrderSpec>> orders)
		{
			for (int b = 0; b < orders.Count; b++)
			{
				OrderBoard orderBoard = boards[b];
				orderBoard.gameObject.SetActive(true);
				orderBoard.HideOrder();
				orderBoard.transform.DOKill();
				orderBoard.transform.localScale = Vector3.zero;
				orderBoard.transform.DOScale(_boardScale, boardAppearDuration).SetEase(Ease.OutBack);
				orderBoard.ShowOrder(orders[b], LooksOf(_groups[b]));
				if (b < orders.Count - 1)
				{
					yield return new WaitForSeconds(boardAppearDelay);
				}
			}
			_revealRoutine = null;
		}

		private List<OrderItemLook> LooksOf(List<int> group)
		{
			List<OrderItemLook> list = new List<OrderItemLook>(group.Count);
			foreach (int item in group)
			{
				list.Add((_lookOf != null) ? _lookOf(item) : OrderItemLook.Normal);
			}
			return list;
		}

		private void EnsureBoardCount(int needed)
		{
			if (boards.Count == 0 || !boards[0])
			{
				return;
			}
			OrderBoard orderBoard = boards[0];
			while (boards.Count < needed)
			{
				OrderBoard orderBoard2 = UnityEngine.Object.Instantiate(orderBoard, orderBoard.transform.parent);
				orderBoard2.transform.localScale = orderBoard.transform.localScale;
				orderBoard2.transform.localPosition = orderBoard.transform.localPosition;
				orderBoard2.HideOrder();
				orderBoard2.gameObject.SetActive(false);
				RegisterBoard(orderBoard2);
				boards.Add(orderBoard2);
			}
		}

		public void ReleaseOrderBoards()
		{
			HideOrder();
			m_onBoardCleared?.Invoke();
		}

		public void HideOrder()
		{
			_doneEpoch++;
			if (onHideOrder != null)
			{
				onHideOrder.Invoke();
			}
			orderRoot.gameObject.SetActive(false);
			if (_revealRoutine != null)
			{
				StopCoroutine(_revealRoutine);
				_revealRoutine = null;
			}
			StopPeek();
			foreach (OrderBoard board in boards)
			{
				if ((bool)board)
				{
					board.transform.DOKill();
					board.HideOrder();
					board.gameObject.SetActive(false);
				}
			}
			ResetSpacer();
			ResetPeekShift();
			_slots = null;
			_groups = null;
			_lookOf = null;
		}

		private bool HasSlot(int index)
		{
			if (index >= 0 && _slots != null)
			{
				return index < _slots.Length;
			}
			return false;
		}

		private bool MapGlobalIndex(int index, out int board, out int local)
		{
			board = -1;
			local = -1;
			if (index >= 0 && _slots != null && index < _slots.Length)
			{
				board = _slots[index].Board;
				local = _slots[index].Local;
				if (board >= 0 && board < boards.Count)
				{
					return boards[board] != null;
				}
			}
			return false;
		}

		private OrderItemLook LookOf(int index)
		{
			if (_lookOf == null)
			{
				return OrderItemLook.Normal;
			}
			return _lookOf(index);
		}

		public void RefreshItem(int index, bool animate = false)
		{
			if (MapGlobalIndex(index, out var board, out var local))
			{
				boards[board].SetItemLook(local, LookOf(index), animate);
			}
		}

		public void MarkItemDone(int index)
		{
			if (MapGlobalIndex(index, out var _, out var _))
			{
				RefreshItem(index);
				StartCoroutine(CommitDoneRoutine(index, _doneEpoch));
			}
		}

		public void GetNeighbors(int index, List<int> result)
		{
			result.Clear();
			if (index < 0 || _slots == null || index >= _slots.Length || _slots[index].Board < 0)
			{
				return;
			}
			int board = _slots[index].Board;
			int local = _slots[index].Local;
			for (int i = 0; i < _slots.Length; i++)
			{
				if (i != index && _slots[i].Board >= 0)
				{
					int num = Mathf.Abs(_slots[i].Board - board);
					int num2 = Mathf.Abs(_slots[i].Local - local);
					if ((_slots[i].Board == board && num2 == 1) || (num == 1 && _slots[i].Local == local))
					{
						result.Add(i);
					}
				}
			}
		}

		public void PlayHappyVfx()
		{
			if ((bool)vfxHappy)
			{
				vfxHappy.transform.localPosition = _vfxHappyRestLocalPos;
				Transform transform = vfxHappy.transform;
				transform.position = transform.position + customerLoader.CustomerWorldOffset;
				vfxHappy.Play();
			}
		}

		public void PunchOrder(int index)
		{
			if (MapGlobalIndex(index, out var board, out var local))
			{
				boards[board].PunchItem(local);
			}
		}

		public Transform GetOrderTarget(int index)
		{
			if (MapGlobalIndex(index, out var board, out var local))
			{
				return boards[board].GetItemTarget(local);
			}
			return null;
		}

		public void RunAfterDoneDelay(Action action)
		{
			StartCoroutine(AfterDoneDelayRoutine(action, _doneEpoch));
		}

		private IEnumerator AfterDoneDelayRoutine(Action action, int epoch)
		{
			yield return new WaitForSeconds(doneHideDelay);
			if (epoch == _doneEpoch)
			{
				action?.Invoke();
			}
		}

		private IEnumerator CommitDoneRoutine(int index, int epoch)
		{
			yield return new WaitForSeconds(doneHideDelay);
			if (epoch == _doneEpoch && MapGlobalIndex(index, out var board, out var local) && boards[board].CommitItemDone(local))
			{
				m_onBoardCleared?.Invoke();
			}
		}

		private void OnEnterUpsetZone()
		{
			customerLoader.HoldAngry();
		}

		private void OnLeaveUpsetZone()
		{
			customerLoader.ReleaseAngry();
		}

		private void OnEnterAngryZone()
		{
			PlayShake();
		}

		private void OnLeaveAngryZone()
		{
			StopShake();
		}

		public void PlayShake()
		{
			Tween t = customerLoader.transform.DOShakePosition(shakeDuration, shakeStrength, shakeVibrato, 90f, snapping: false, fadeOut: true).SetLoops(-1, LoopType.Yoyo);
			if ((bool)vfxSmoke)
			{
				vfxSmoke.Play();
			}
		}

		public void StopShake()
		{
			KillBounce();
			customerLoader.transform.DOKill();
			customerLoader.transform.localPosition = _loaderRestLocalPos;
			if ((bool)vfxSmoke)
			{
				vfxSmoke.Stop();
			}
		}

		private void PlayBounce()
		{
			if (bounceStretchDuration > 0f)
			{
				KillBounce();
				Transform transform = customerLoader.transform;
				Vector3 localScale = transform.localScale;
				_loaderRestScale = localScale;
				_bounce = transform.DOScale(new Vector3(localScale.x + localScale.x * bounceStretch.x, localScale.y + localScale.y * bounceStretch.y, localScale.z + localScale.z * 0f), bounceStretchDuration * 0.5f).SetEase(bounceEase).SetLoops(2, LoopType.Yoyo)
					.OnComplete(delegate
					{
						_bounce = null;
					});
			}
		}

		private void KillBounce()
		{
			if (_bounce != null)
			{
				_bounce.Kill();
				customerLoader.transform.localScale = _loaderRestScale;
			}
		}

		public void PlayTimeout()
		{
			if ((bool)vfxUpset)
			{
				vfxUpset.Play();
			}
		}

		public void OnRefillWaitTime(Action onDone = null)
		{
			timer.RefillTime(onDone);
			customerLoader.OnCorrect(false);
		}

		public void SetWeather(WeatherEffect effect)
		{
			_weatherEffect = effect;
			weatherDisplay.ApplyEffect(effect);
		}
	}
}
