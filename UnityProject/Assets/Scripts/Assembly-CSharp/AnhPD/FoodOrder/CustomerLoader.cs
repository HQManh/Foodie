using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using CakeOrder;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Rendering;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;

namespace AnhPD.FoodOrder
{
	public class CustomerLoader : MonoBehaviour
	{
		[Header("Walk-in")]
		private float walkBobAmplitude = 0.15f;

		private float walkStepDistance = 1f;

		[SerializeField]
		[Range(0f, 0.9f)]
		private float walkSpeedRandom = 0.15f;

		[SerializeField]
		private float walkInDistance = 5f;

		[SerializeField]
		private float walkInDuration = 0.5f;

		[Header("Leave")]
		[SerializeField]
		private float leaveSpeed = 10f;

		[SerializeField]
		private int leaveSortingOrder = -10;

		[SerializeField]
		private SortingGroup sortingGroup;

		[SerializeField]
		private float timeoutHideDelay = 0.5f;

		[SerializeField]
		[Range(0.05f, 1f)]
		private float chaseLeaveSpeedScale = 0.4f;

		[Header("Customer pool")]
		[SerializeField]
		private List<string> customerIds = new List<string>();

		[Header("Staff")]
		[SerializeField]
		private List<string> staffIds = new List<string>();

		private const CustomerType FirstStaffType = CustomerType.StaffCleanDish;

		private int _baseSortingOrder;

		private bool _baseSortingCaptured;

		private float _tintDarken;

		private float _visualScale = 1f;

		private float _animSpeed = 1f;

		private string _currentCustomerId;

		private bool _isTransitioning;

		private float? _exitWorldX;

		private bool _enterFromRight;

		[CompilerGenerated]
		private Action m_onLeaving;

		private Action _pendingLeaveCallback;

		private Action _pendingSpawnCoin;

		[SerializeField]
		private Transform customerRoot;

		private Dictionary<string, Customer> _customerDict = new Dictionary<string, Customer>();

		private List<AsyncOperationHandle<GameObject>> _usedOps = new List<AsyncOperationHandle<GameObject>>();

		private AsyncOperationHandle<GameObject> _opLoadCustomer;

		private const int MaxFallbackDraws = 3;

		private static readonly List<string> _idBag = new List<string>();

		public bool IsCustomerReady { get; private set; }

		public string CustomerId => _currentCustomerId;

		public float? CurrentSlotSize
		{
			get
			{
				if (TryGetCurrentCustomer(out var customer))
				{
					return customer.SlotSize;
				}
				return null;
			}
		}

		public Vector3 CustomerWorldOffset
		{
			get
			{
				if ((bool)customerRoot && TryGetCurrentCustomer(out var customer))
				{
					return customer.transform.position - customerRoot.position;
				}
				return Vector3.zero;
			}
		}

		public event Action onLeaving
		{
			[CompilerGenerated]
			add
			{
				m_onLeaving = (Action)Delegate.Combine(m_onLeaving, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onLeaving = (Action)Delegate.Remove(m_onLeaving, value);
			}
		}

		private static bool IsStaff(CustomerType customerType)
		{
			return (int)customerType > 0;
		}

		public string StaffIdFor(CustomerType customerType)
		{
			int num = (int)customerType - 1;
			if (num >= 0 && num < staffIds.Count && !string.IsNullOrEmpty(staffIds[num]))
			{
				return staffIds[num];
			}
			return null;
		}

		private void SetLeavingSorting(bool leaving)
		{
			if (!_baseSortingCaptured)
			{
				if (!sortingGroup)
				{
					sortingGroup = GetComponent<SortingGroup>();
				}
				if (!sortingGroup)
				{
					UnityEngine.Debug.LogWarning("[CustomerLoader] " + base.name + " has no SortingGroup", this);
				}
				else
				{
					_baseSortingOrder = sortingGroup.sortingOrder;
				}
				_baseSortingCaptured = true;
			}
			if ((bool)sortingGroup)
			{
				sortingGroup.sortingOrder = (leaving ? leaveSortingOrder : _baseSortingOrder);
			}
		}

		public void SetTint(float darken, float duration = 0f)
		{
			_tintDarken = Mathf.Clamp01(darken);
			if (_currentCustomerId != null && _customerDict.TryGetValue(_currentCustomerId, out var value))
			{
				value.SetTint(_tintDarken, duration);
			}
		}

		public void SetVisualScale(float scale, float duration = 0f)
		{
			_visualScale = Mathf.Max(0.01f, scale);
			if (_currentCustomerId != null && _customerDict.TryGetValue(_currentCustomerId, out var value))
			{
				value.SetVisualScale(_visualScale, duration);
			}
		}

		public void SetAnimSpeed(float speed)
		{
			_animSpeed = Mathf.Max(0.01f, speed);
			if (_currentCustomerId != null && _customerDict.TryGetValue(_currentCustomerId, out var value))
			{
				value.SetAnimSpeed(_animSpeed);
			}
		}

		public void SetExitWorldX(float worldX)
		{
			_exitWorldX = worldX;
		}

		public void SetEnterFromRight(bool fromRight)
		{
			_enterFromRight = fromRight;
		}

		public void NextCustomer(CustomerType customerType, string customerId, Action showOrder)
		{
			if (_isTransitioning)
			{
				return;
			}
			if (_currentCustomerId != null && _customerDict.TryGetValue(_currentCustomerId, out var _))
			{
				HideCurrentCustomer(delegate
				{
					ShowCustomer(customerType, customerId, showOrder);
				}, notifyLeaving: false);
			}
			else
			{
				ShowCustomer(customerType, customerId, showOrder);
			}
		}

		private async void ShowCustomer(CustomerType customerType, string customerId, Action callback = null)
		{
			void Arrived()
			{
				IsCustomerReady = true;
				callback?.Invoke();
				_isTransitioning = false;
			}
			_isTransitioning = true;
			try
			{
				if (!TryResolveCustomerId(customerType, customerId, out var resolvedId))
				{
					UnityEngine.Debug.LogError("[CustomerLoader] Could not resolve a customer id");
					_isTransitioning = false;
					return;
				}
				string text = await LoadOrFallback(resolvedId, customerType);
				if (text == null)
				{
					_isTransitioning = false;
					return;
				}
				_currentCustomerId = text;
				if (TryGetCurrentCustomer(out var customer))
				{
					customer.gameObject.SetActive(true);
					SetLeavingSorting(false);
					customer.ChangeState(Customer.State.Idle);
					_animSpeed = 1f;
					_tintDarken = 0f;
					_visualScale = 1f;
					customer.SetTint(0f);
					customer.SetVisualScale(1f);
					customer.SetAnimSpeed(1f);
					Vector2 vector = (_enterFromRight ? Vector2.right : Vector2.left);
					customer.LocalMoveInstant(vector * walkInDistance);
					float duration = walkInDuration * UnityEngine.Random.Range(1f - walkSpeedRandom, walkSpeedRandom + 1f);
					if ((int)customerType < 1)
					{
						customer.WalkIn(-(vector * walkInDistance), duration, walkBobAmplitude, WalkStepsFor(walkInDistance), Arrived);
					}
					else
					{
						customer.LocalMove(-(vector * walkInDistance), duration, Arrived, 0f, Ease.OutBack);
					}
				}
				else
				{
					_isTransitioning = false;
				}
			}
			finally
			{
				_isTransitioning = false;
			}
		}

		private bool TryResolveCustomerId(CustomerType customerType, string customerId, out string resolvedId)
		{
			if (!string.IsNullOrEmpty(customerId))
			{
				ConsumeFromBag(customerId);
				resolvedId = customerId;
				return true;
			}
			resolvedId = StaffIdFor(customerType);
			if (resolvedId == null)
			{
				resolvedId = (((int)customerType < 1) ? RandomIdFromList() : null);
				return resolvedId != null;
			}
			return true;
		}

		public async void ShowWalkIn(CustomerType customerType, string customerId, Action onArrived, bool atLeavePace = false)
		{
			void Arrived()
			{
				IsCustomerReady = true;
				onArrived?.Invoke();
			}
			if (_currentCustomerId != null && _customerDict.TryGetValue(_currentCustomerId, out var current))
			{
				current.gameObject.SetActive(false);
			}
			if (!TryResolveCustomerId(customerType, customerId, out var resolvedId))
			{
				onArrived?.Invoke();
				return;
			}
			string text = await LoadOrFallback(resolvedId, customerType);
			if (text == null)
			{
				onArrived?.Invoke();
				return;
			}
			_currentCustomerId = text;
			if (!TryGetCurrentCustomer(out var customer))
			{
				onArrived?.Invoke();
				return;
			}
			customer.gameObject.SetActive(true);
			SetLeavingSorting(false);
			customer.ChangeState(Customer.State.Idle, null, playSfx: false);
			customer.SetTint(_tintDarken);
			customer.SetVisualScale(_visualScale);
			customer.SetAnimSpeed(_animSpeed);
			IsCustomerReady = false;
			if (!atLeavePace || !TryWalkInFromEdge(customer, Arrived))
			{
				Vector2 vector = (_enterFromRight ? Vector2.right : Vector2.left);
				customer.LocalMoveInstant(vector * walkInDistance);
				float duration = walkInDuration * UnityEngine.Random.Range(1f - walkSpeedRandom, walkSpeedRandom + 1f);
				customer.WalkIn(-(vector * walkInDistance), duration, walkBobAmplitude, WalkStepsFor(walkInDistance), Arrived);
			}
		}

		private bool TryWalkInFromEdge(Customer customer, Action onArrived)
		{
			if (_exitWorldX.HasValue && (bool)customerRoot)
			{
				float x = customerRoot.lossyScale.x;
				float exitX = _exitWorldX.Value;
				float num = (Mathf.Approximately(0f, x) ? 1f : x);
				float x2 = customerRoot.position.x;
				float num2 = (exitX - x2) / num;
				customer.LocalMoveInstant(new Vector2(num2, 0f));
				float duration = 0f;
				if (leaveSpeed > 0.01f)
				{
					duration = Mathf.Abs(exitX - x2) / leaveSpeed;
				}
				customer.LocalMove(new Vector2(0f - num2, 0f), duration, onArrived, 0f, Ease.Linear);
				return true;
			}
			return false;
		}

		private int WalkStepsFor(float distance)
		{
			float num = Mathf.Max(0.0001f, walkStepDistance);
			return Mathf.Max(1, Mathf.FloorToInt(Mathf.Abs(distance) / num));
		}

		public void WalkInFrom(Vector3 worldOffset, float duration)
		{
			if (_currentCustomerId == null || !TryGetCurrentCustomer(out var customer))
			{
				return;
			}
			float num = (customerRoot ? customerRoot.lossyScale.x : 1f);
			float num2 = (Mathf.Approximately(0f, num) ? 1f : num);
			float num3 = worldOffset.x;
			if (duration <= 0f || Mathf.Abs(num3 /= num2) < 0.001f)
			{
				customer.LocalMoveInstant(Vector2.zero);
				return;
			}
			customer.LocalMoveInstant(new Vector2(num3, 0f));
			customer.WalkIn(new Vector2(0f - num3, 0f), duration, walkBobAmplitude, WalkStepsFor(num3));
		}

		public void HideCurrentCustomer(Action callback = null, bool notifyLeaving = true, bool atWalkPace = false)
		{
			Customer customer = null;
			void Gone()
			{
				customer.gameObject.SetActive(false);
				callback?.Invoke();
			}
			if (_isTransitioning)
			{
				return;
			}
			IsCustomerReady = false;
			if (TryGetCurrentCustomer(out customer))
			{
				if (notifyLeaving)
				{
					m_onLeaving?.Invoke();
				}
				SetLeavingSorting(true);
				if (atWalkPace)
				{
					WalkCustomerToExit(customer, Gone);
				}
				else
				{
					MoveCustomerToExit(customer, Gone);
				}
			}
			else
			{
				callback?.Invoke();
			}
		}

		public void ChaseAway(Action callback = null)
		{
			IsCustomerReady = false;
			if (!TryGetCurrentCustomer(out var customer))
			{
				callback?.Invoke();
				return;
			}
			customer.SetTint(0f);
			customer.SetVisualScale(1f);
			customer.SetAnimSpeed(1f);
			customer.HoldAngry(delegate
			{
				SetLeavingSorting(true);
				MoveCustomerToExit(customer, delegate
				{
					customer.gameObject.SetActive(false);
					callback?.Invoke();
				}, chaseLeaveSpeedScale);
			});
		}

		public void OnEat(Func<bool> isOrderComplete, Action onEaten = null)
		{
			if (!TryGetCurrentCustomer(out var customer))
			{
				UnityEngine.Debug.LogWarning("[CustomerLoader] No customer '" + _currentCustomerId + "' to eat");
			}
			else
			{
				customer.Eat(isOrderComplete, onEaten);
			}
		}

		public void OnCorrect(bool leave = true)
		{
			if (leave)
			{
				IsCustomerReady = false;
			}
			if (!TryGetCurrentCustomer(out var customer))
			{
				UnityEngine.Debug.LogWarning("[CustomerLoader] No customer '" + _currentCustomerId + "' to react");
			}
			else
			{
				customer.ChangeState(Customer.State.Happy);
			}
		}

		public void OnLeave(Action callback, Action onServed = null)
		{
			IsCustomerReady = false;
			_pendingLeaveCallback = callback;
			_pendingSpawnCoin = onServed;
			if (!TryGetCurrentCustomer(out var customer))
			{
				FlushSpawnCoin();
				FlushLeaveCallback();
			}
			else
			{
				customer.ContinueHappy(FlushLeaveCallback);
				FlushSpawnCoin();
			}
		}

		private void FlushLeaveCallback()
		{
			Action pendingLeaveCallback = _pendingLeaveCallback;
			_pendingLeaveCallback = null;
			pendingLeaveCallback?.Invoke();
		}

		private void FlushSpawnCoin()
		{
			Action pendingSpawnCoin = _pendingSpawnCoin;
			_pendingSpawnCoin = null;
			pendingSpawnCoin?.Invoke();
		}

		public void HoldAngry(bool playSfx = true)
		{
			if (TryGetCurrentCustomer(out var customer))
			{
				customer.HoldAngry(playSfx);
			}
		}

		public void ReleaseAngry()
		{
			if (TryGetCurrentCustomer(out var customer))
			{
				customer.ReleaseAngry();
			}
		}

		public void Cheer()
		{
			if (TryGetCurrentCustomer(out var customer))
			{
				customer.Cheer();
			}
		}

		public void OnIncorrect()
		{
			if (!TryGetCurrentCustomer(out var customer))
			{
				UnityEngine.Debug.LogWarning("[CustomerLoader] No customer '" + _currentCustomerId + "' to react");
				return;
			}
			customer.KillAnimations();
			customer.ChangeState(Customer.State.Unhappy);
		}

		public void PlayTimeoutAnim(Action onDone = null)
		{
			if (!TryGetCurrentCustomer(out var customer))
			{
				UnityEngine.Debug.LogWarning("[CustomerLoader] No customer '" + _currentCustomerId + "' to time out");
				onDone?.Invoke();
				return;
			}
			customer.HoldAngry();
			DOVirtual.DelayedCall(timeoutHideDelay, delegate
			{
				onDone?.Invoke();
			}).SetTarget(this);
		}

		private void MoveCustomerToExit(Customer customer, Action callback = null, float speedScale = 1f)
		{
			if (!TryGetExitDelta(customer, out var localDeltaX, out var worldDeltaX))
			{
				callback?.Invoke();
				return;
			}
			float num = Mathf.Max(0.01f, speedScale) * leaveSpeed;
			float duration = 0f;
			if (num > 0.01f)
			{
				duration = Mathf.Abs(worldDeltaX) / num;
			}
			customer.LocalMove(new Vector2(localDeltaX, 0f), duration, callback, 0f, Ease.Linear);
		}

		private void WalkCustomerToExit(Customer customer, Action callback = null)
		{
			if (!TryGetExitDelta(customer, out var localDeltaX, out var _))
			{
				callback?.Invoke();
			}
			else
			{
				customer.LocalMove(new Vector2(localDeltaX, 0f), walkInDuration, callback, 0f, Ease.InBack);
			}
		}

		private bool TryGetExitDelta(Customer customer, out float localDeltaX, out float worldDeltaX)
		{
			worldDeltaX = 0f;
			localDeltaX = 0f;
			if (!_exitWorldX.HasValue)
			{
				UnityEngine.Debug.LogError("[CustomerLoader] Exit world X is not set", this);
				return false;
			}
			float num = (customerRoot ? customerRoot.lossyScale.x : 1f);
			float num2 = (Mathf.Approximately(0f, num) ? 1f : num);
			float value = _exitWorldX.Value;
			float num3 = value - customer.transform.position.x;
			worldDeltaX = num3;
			localDeltaX = num3 / num2;
			return true;
		}

		private void ConsumeFromBag(string customerId)
		{
			if (!string.IsNullOrEmpty(customerId))
			{
				_idBag.Remove(customerId);
			}
		}

		private bool TryGetCurrentCustomer(out Customer customer)
		{
			customer = null;
			if (_currentCustomerId != null)
			{
				return _customerDict.TryGetValue(_currentCustomerId, out customer);
			}
			return false;
		}

		public async void LoadCustomerById(string customerId)
		{
			if (_currentCustomerId != null && _customerDict.TryGetValue(_currentCustomerId, out var current))
			{
				current.gameObject.SetActive(false);
			}
			string text = await LoadOrFallback(customerId, CustomerType.Customer);
			if (text != null)
			{
				_currentCustomerId = text;
				if (!TryGetCurrentCustomer(out var customer))
				{
					UnityEngine.Debug.LogError("[CustomerLoader] Customer '" + text + "' was not found after loading");
					return;
				}
				customer.gameObject.SetActive(true);
				customer.LocalMoveInstant(Vector2.zero);
			}
		}

		private async Task<string> LoadOrFallback(string customerId, CustomerType customerType)
		{
			CancellationToken ct = base.destroyCancellationToken;
			if (await TryEnsureLoaded(customerId, ct))
			{
				return customerId;
			}
			string lastTried = customerId;
			for (int i = 0; i < 3; i++)
			{
				string fallbackId = (((int)customerType < 1) ? RandomIdFromList() : null);
				if (string.IsNullOrEmpty(fallbackId) || fallbackId == lastTried)
				{
					break;
				}
				lastTried = fallbackId;
				if (await TryEnsureLoaded(fallbackId, ct))
				{
					UnityEngine.Debug.LogWarning(string.Concat("[CustomerLoader] ", customerId, " failed to load, using ", fallbackId, " instead"), this);
					return fallbackId;
				}
			}
			UnityEngine.Debug.LogError("[CustomerLoader] " + customerId + " failed to load and no fallback worked", this);
			return null;
		}

		private async Task<bool> TryEnsureLoaded(string customerId, CancellationToken ct)
		{
			if (string.IsNullOrEmpty(customerId))
			{
				return false;
			}
			if (_customerDict.ContainsKey(customerId))
			{
				return true;
			}
			try
			{
				await LoadCustomer(customerId, ct);
			}
			catch (Exception)
			{
				// TODO(unrecovered): catch block not visible in pseudocode; assumed Try* swallows load failures so LoadOrFallback can draw a fallback.
				return false;
			}
			return true;
		}

		private string RandomCustomerId(CustomerType customerType = CustomerType.Customer)
		{
			if ((int)customerType > 0)
			{
				return null;
			}
			return RandomIdFromList();
		}

		private string RandomIdFromList()
		{
			if (customerIds == null || customerIds.Count == 0)
			{
				return null;
			}
			_idBag.RemoveAll((string id) => !customerIds.Contains(id));
			if (_idBag.Count == 0)
			{
				RefillBag();
			}
			if (_idBag.Count == 0)
			{
				return null;
			}
			int num = UnityEngine.Random.Range(0, _idBag.Count);
			if (_idBag.Count > 1 && _idBag[num] == _currentCustomerId)
			{
				num = (num + 1) % _idBag.Count;
			}
			string result = _idBag[num];
			_idBag.RemoveAt(num);
			return result;
		}

		private void RefillBag()
		{
			foreach (string customerId in customerIds)
			{
				if (!string.IsNullOrEmpty(customerId))
				{
					_idBag.Add(customerId);
				}
			}
		}

		private static async Task<bool> HasAddress(string address, CancellationToken ct)
		{
			AsyncOperationHandle<IList<IResourceLocation>> op = Addressables.LoadResourceLocationsAsync(address, typeof(GameObject));
			try
			{
				await op.ToUniTask(null, PlayerLoopTiming.Update, ct);
				return op.Status == AsyncOperationStatus.Succeeded && op.Result != null && op.Result.Count > 0;
			}
			finally
			{
				if (op.IsValid())
				{
					Addressables.Release(op);
				}
			}
		}

		private async Task LoadCustomer(string customerId, CancellationToken ct)
		{
			if (string.IsNullOrEmpty(customerId))
			{
				throw new ArgumentNullException("customerId", "customerId is empty");
			}
			string address = CustomerAddress.For(customerId);
			if (!await HasAddress(address, ct))
			{
				throw new InvalidOperationException("[CustomerLoader] No addressable found for '" + address + "'");
			}
			_opLoadCustomer = Addressables.LoadAssetAsync<GameObject>(address);
			_usedOps.Add(_opLoadCustomer);
			await _opLoadCustomer.ToUniTask(null, PlayerLoopTiming.Update, ct);
			if (_opLoadCustomer.Status == AsyncOperationStatus.Succeeded && (bool)_opLoadCustomer.Result)
			{
				GameObject gameObject = UnityEngine.Object.Instantiate(_opLoadCustomer.Result, customerRoot);
				Customer component = gameObject.GetComponent<Customer>();
				if (!component)
				{
					UnityEngine.Object.Destroy(gameObject);
					throw new InvalidOperationException("[CustomerLoader] Prefab '" + address + "' has no Customer component");
				}
				_customerDict[customerId] = component;
				return;
			}
			throw new InvalidOperationException("[CustomerLoader] Failed to load '" + address + "'");
		}

		private void OnDestroy()
		{
			DOTween.Kill(this);
			foreach (AsyncOperationHandle<GameObject> usedOp in _usedOps)
			{
				if (usedOp.IsValid())
				{
					Addressables.Release(usedOp);
				}
			}
			_usedOps.Clear();
			_customerDict.Clear();
		}
	}
}
