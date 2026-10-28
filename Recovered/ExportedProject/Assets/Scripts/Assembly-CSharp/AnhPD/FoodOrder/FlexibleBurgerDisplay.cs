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
		private float topOffset;

		[SerializeField]
		private float rootOffset;

		[SerializeField]
		private List<FlexibleBurger.FillingType> listTest;

		private readonly List<FlexibleBurger.FillingType> _ordered;

		private readonly Dictionary<FlexibleBurger.FillingType, int> _usedPerType;

		private readonly Dictionary<FlexibleBurger.FillingType, List<SpriteRenderer>> _clones;

		[Header("Anim ghép thêm nhân")]
		[Tooltip("Độ bẹt của pha nhún: Y co bằng từng này, X phình ra bù lại. 0 = bỏ hẳn pha nhún.")]
		[SerializeField]
		private float squashAmount;

		[SerializeField]
		private float squashDuration;

		[Tooltip("Pha bung: scale trả về cỡ gốc, đồng thời các lớp tách nhau ra.")]
		[SerializeField]
		private float popDuration;

		[Tooltip("Khoảng hở CỘNG DỒN lúc bung: lớp thứ n (tính từ dưới) bay cao thêm n lần từng này.")]
		[SerializeField]
		private float spreadGap;

		[SerializeField]
		private float fallDuration;

		[Tooltip("Trễ giữa hai lớp liền nhau lúc rơi — lớp dưới đáp trước, lớp trên trễ dần.")]
		[SerializeField]
		private float fallStagger;

		private readonly List<(Transform tf, float restY)> _layers;

		private Vector3 _baseScale;

		private bool _baseScaleCaptured;

		private Sequence _anim;

		public int FillingLayerCount { get; private set; }

		public float AssembleDuration => 0f;

		public void Test()
		{
		}

		public void Display(List<FlexibleBurger.FillingType> list, bool showTop = true)
		{
		}

		private SpriteRenderer GetRenderer(BurgerFillingDisplay filling, int indexInType)
		{
			return null;
		}

		private void HideAllFillings()
		{
		}

		private void Awake()
		{
		}

		private void CaptureBaseScale()
		{
		}

		public void PlayAssembleAnim()
		{
		}

		private void KillAnim()
		{
		}

		public Vector3 GetCenter()
		{
			return default;
		}

		public bool TryGetBounds(out Bounds bounds)
		{
			bounds = default;
			return false;
		}

		private static void Encapsulate(ref Bounds? combined, SpriteRenderer render)
		{
		}

		private BurgerFillingDisplay FindFilling(FlexibleBurger.FillingType type)
		{
			return null;
		}
	}
}
