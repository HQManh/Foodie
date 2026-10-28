using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleBurgerDisplay : MonoBehaviour
	{
		[SerializeField]
		private BurgerFillingDisplay[] burgerFillings;

		[SerializeField]
		private SpriteRenderer top;

		[SerializeField]
		private SpriteRenderer bottom;

		[SerializeField]
		private float topOffset = 0.5f;

		[SerializeField]
		private float rootOffset = 0.5f;

		[SerializeField]
		private List<FlexibleBurger.FillingType> listTest;

		private readonly List<FlexibleBurger.FillingType> _ordered = new List<FlexibleBurger.FillingType>();

		private readonly Dictionary<FlexibleBurger.FillingType, int> _usedPerType = new Dictionary<FlexibleBurger.FillingType, int>();

		private readonly Dictionary<FlexibleBurger.FillingType, List<SpriteRenderer>> _clones = new Dictionary<FlexibleBurger.FillingType, List<SpriteRenderer>>();

		[Header("Anim ghép thêm nhân")]
		[Tooltip("Độ bẹt của pha nhún: Y co bằng từng này, X phình ra bù lại. 0 = bỏ hẳn pha nhún.")]
		[SerializeField]
		private float squashAmount = 0.15f;

		[SerializeField]
		private float squashDuration = 0.08f;

		[Tooltip("Pha bung: scale trả về cỡ gốc, đồng thời các lớp tách nhau ra.")]
		[SerializeField]
		private float popDuration = 0.18f;

		[Tooltip("Khoảng hở CỘNG DỒN lúc bung: lớp thứ n (tính từ dưới) bay cao thêm n lần từng này.")]
		[SerializeField]
		private float spreadGap = 0.18f;

		[SerializeField]
		private float fallDuration = 0.3f;

		[Tooltip("Trễ giữa hai lớp liền nhau lúc rơi — lớp dưới đáp trước, lớp trên trễ dần.")]
		[SerializeField]
		private float fallStagger = 0.04f;

		private readonly List<(Transform tf, float restY)> _layers = new List<(Transform, float)>();

		private Vector3 _baseScale;

		private bool _baseScaleCaptured;

		private Sequence _anim;

		public int FillingLayerCount { get; private set; }

		public float AssembleDuration
		{
			get
			{
				int count = _layers.Count;
				if (count == 0)
				{
					return 0f;
				}
				float num = 0f;
				if (squashAmount > 0f && squashDuration > 0f)
				{
					num = squashDuration;
				}
				return num + popDuration + fallDuration + fallStagger * (float)(count - 1);
			}
		}

		public void Test()
		{
			Display(listTest);
		}

		public void Display(List<FlexibleBurger.FillingType> list, bool showTop = true)
		{
			KillAnim();
			_layers.Clear();
			HideAllFillings();
			BurgerPieceTable.InterleaveFillings(list, _ordered);
			_usedPerType.Clear();
			FillingLayerCount = 0;
			float num = rootOffset;
			for (int i = 0; i < _ordered.Count; i++)
			{
				FlexibleBurger.FillingType fillingType = _ordered[i];
				BurgerFillingDisplay burgerFillingDisplay = FindFilling(fillingType);
				if (burgerFillingDisplay == null)
				{
					continue;
				}
				int value;
				_usedPerType.TryGetValue(fillingType, out value);
				_usedPerType[fillingType] = value + 1;
				SpriteRenderer renderer = GetRenderer(burgerFillingDisplay, value);
				if ((bool)renderer)
				{
					renderer.gameObject.SetActive(true);
					FillingLayerCount++;
					num += burgerFillingDisplay.bottomOffset;
					Vector3 localPosition = renderer.transform.localPosition;
					renderer.transform.localPosition = new Vector3(localPosition.x, num, localPosition.z);
					_layers.Add((renderer.transform, num));
					num += burgerFillingDisplay.height + burgerFillingDisplay.topOffset;
					renderer.sortingOrder = i;
				}
			}
			if (!top)
			{
				return;
			}
			num += topOffset;
			Vector3 localPosition2 = top.transform.localPosition;
			top.transform.localPosition = new Vector3(localPosition2.x, num, localPosition2.z);
			top.sortingOrder = _ordered.Count;
			top.gameObject.SetActive(showTop);
			if (showTop)
			{
				_layers.Add((top.transform, num));
			}
		}

		private SpriteRenderer GetRenderer(BurgerFillingDisplay filling, int indexInType)
		{
			if (indexInType < 1)
			{
				return filling.render;
			}
			if (!filling.render)
			{
				return null;
			}
			List<SpriteRenderer> value;
			if (!_clones.TryGetValue(filling.type, out value))
			{
				value = new List<SpriteRenderer>();
				_clones[filling.type] = value;
			}
			while (indexInType > value.Count)
			{
				SpriteRenderer spriteRenderer = Object.Instantiate(filling.render, filling.render.transform.parent);
				spriteRenderer.name = string.Format("{0}_{1}", filling.render.name, value.Count + 2) /* format recovered by guess */;
				spriteRenderer.transform.localScale = filling.render.transform.localScale;
				value.Add(spriteRenderer);
			}
			return value[indexInType - 1];
		}

		private void HideAllFillings()
		{
			for (int i = 0; i < burgerFillings.Length; i++)
			{
				if ((bool)burgerFillings[i].render)
				{
					burgerFillings[i].render.gameObject.SetActive(false);
				}
			}
			foreach (List<SpriteRenderer> value in _clones.Values)
			{
				foreach (SpriteRenderer item in value)
				{
					if ((bool)item)
					{
						item.gameObject.SetActive(false);
					}
				}
			}
		}

		private void Awake()
		{
		}

		private void CaptureBaseScale()
		{
			if (!_baseScaleCaptured)
			{
				_baseScale = base.transform.localScale;
				_baseScaleCaptured = true;
			}
		}

		public void PlayAssembleAnim()
		{
			CaptureBaseScale();
			KillAnim();
			if (_layers.Count == 0 || !Application.isPlaying)
			{
				return;
			}
			_anim = DOTween.Sequence().SetTarget(base.transform);
			bool flag = squashAmount <= 0f || squashDuration <= 0f;
			if (!flag)
			{
				_anim.Append(base.transform.DOScale(new Vector3((squashAmount + 1f) * _baseScale.x, (1f - squashAmount) * _baseScale.y, _baseScale.z), squashDuration).SetEase(Ease.OutQuad));
			}
			_anim.Append(base.transform.DOScale(_baseScale, popDuration).SetEase(Ease.OutBack));
			for (int i = 0; i < _layers.Count; i++)
			{
				(Transform tf, float restY) layer = _layers[i];
				if ((bool)layer.tf)
				{
					_anim.Join(layer.tf.DOLocalMoveY(spreadGap * (float)(i + 1) + layer.restY, popDuration).SetEase(Ease.OutBack));
				}
			}
			float num = (flag ? 0f : squashDuration);
			for (int j = 0; j < _layers.Count; j++)
			{
				(Transform tf, float restY) layer2 = _layers[j];
				if ((bool)layer2.tf)
				{
					_anim.Insert(num + popDuration + fallStagger * (float)j, layer2.tf.DOLocalMoveY(layer2.restY, fallDuration).SetEase(Ease.OutBounce));
				}
			}
			_anim.OnComplete(delegate
			{
				_anim = null;
			});
		}

		private void KillAnim()
		{
			if (_anim != null)
			{
				_anim.Kill();
			}
			_anim = null;
			base.transform.DOKill();
			if (_baseScaleCaptured)
			{
				base.transform.localScale = _baseScale;
			}
			foreach (var layer in _layers)
			{
				if ((bool)layer.tf)
				{
					layer.tf.DOKill();
				}
			}
		}

		public Vector3 GetCenter()
		{
			Bounds bounds;
			if (!TryGetBounds(out bounds))
			{
				return base.transform.position;
			}
			return bounds.center;
		}

		public bool TryGetBounds(out Bounds bounds)
		{
			bounds = default(Bounds);
			Bounds? combined = null;
			for (int i = 0; i < burgerFillings.Length; i++)
			{
				Encapsulate(ref combined, burgerFillings[i].render);
			}
			foreach (List<SpriteRenderer> value in _clones.Values)
			{
				foreach (SpriteRenderer item in value)
				{
					Encapsulate(ref combined, item);
				}
			}
			Encapsulate(ref combined, bottom);
			Encapsulate(ref combined, top);
			if (combined.HasValue)
			{
				bounds = combined.Value;
			}
			return combined.HasValue;
		}

		private static void Encapsulate(ref Bounds? combined, SpriteRenderer render)
		{
			if ((bool)render && render.gameObject.activeInHierarchy)
			{
				if (!combined.HasValue)
				{
					combined = render.bounds;
					return;
				}
				Bounds value = combined.Value;
				value.Encapsulate(render.bounds);
				combined = value;
			}
		}

		private BurgerFillingDisplay FindFilling(FlexibleBurger.FillingType type)
		{
			for (int i = 0; i < burgerFillings.Length; i++)
			{
				if (burgerFillings[i].type == type)
				{
					return burgerFillings[i];
				}
			}
			return null;
		}
	}
}
