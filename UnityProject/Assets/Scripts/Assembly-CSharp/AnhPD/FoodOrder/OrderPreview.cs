using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class OrderPreview : MonoBehaviour
	{
		[SerializeField]
		private List<OrderPreviewItem> items;

		[Header("Punch")]
		[SerializeField]
		private Transform punchTarget;

		[SerializeField]
		private float punchScaleY = 0.15f;

		[SerializeField]
		private float punchDuration = 0.3f;

		[SerializeField]
		private int punchVibrato = 6;

		[SerializeField]
		[Range(0f, 1f)]
		private float punchElasticity = 0.5f;

		private readonly List<Sprite> _icons = new List<Sprite>();

		private readonly List<int> _counts = new List<int>();

		private int _shownSig;

		private Tween _punch;

		private Vector3 _punchBase;

		private Transform PunchTarget => punchTarget ? punchTarget : transform;

		public void Show(IReadOnlyList<OrderSpec> orders)
		{
			if (items == null || items.Count == 0)
			{
				Hide();
				return;
			}
			Group(orders);
			if (_icons == null || _icons.Count == 0)
			{
				Hide();
				return;
			}
			EnsureItems(_icons.Count);
			gameObject.SetActive(true);
			for (int i = 0; i < items.Count; i++)
			{
				OrderPreviewItem item = items[i];
				if (!item)
				{
					continue;
				}
				if (i < _icons.Count)
				{
					item.Show(_icons[i], _counts[i]);
				}
				else
				{
					item.Hide();
				}
			}
			int sig = Signature();
			if (sig != _shownSig)
			{
				Punch();
			}
			_shownSig = sig;
		}

		public void Hide()
		{
			StopPunch();
			_shownSig = 0;
			gameObject.SetActive(false);
		}

		private void OnDisable()
		{
			StopPunch();
		}

		private void Punch()
		{
			Transform target = PunchTarget;
			if (_punch != null && _punch.IsActive())
			{
				_punch.Kill();
				target.localScale = _punchBase;
			}
			else
			{
				_punchBase = target.localScale;
			}
			// original multiplies a static config vector by punchScaleY; the vector is not recovered, a vertical punch is assumed from the field name
			Vector3 punch = Vector3.up * punchScaleY;
			_punch = target.DOPunchScale(punch, punchDuration, punchVibrato, punchElasticity).SetTarget(this);
		}

		private void StopPunch()
		{
			if (_punch != null && _punch.IsActive())
			{
				_punch.Kill();
				_punch = null;
				PunchTarget.localScale = _punchBase;
				return;
			}
			_punch = null;
		}

		private int Signature()
		{
			uint sig = 17u;
			if (_icons == null)
			{
				return (int)sig;
			}
			for (int i = 0; i < _icons.Count; i++)
			{
				Sprite icon = _icons[i];
				uint id = icon ? (uint)icon.GetInstanceID() : 0u;
				uint count = (_counts != null && i < _counts.Count) ? (uint)_counts[i] : 0u;
				sig = id + sig * 31u + count * 7u;
			}
			if (sig < 2u)
			{
				sig = 1u;
			}
			return (int)sig;
		}

		private void EnsureItems(int count)
		{
			if (items == null || items.Count == 0)
			{
				return;
			}
			OrderPreviewItem template = items[0];
			if (!template)
			{
				return;
			}
			while (items.Count < count)
			{
				Transform parent = template.transform.parent;
				OrderPreviewItem clone = Instantiate(template, parent, false);
				clone.transform.SetAsLastSibling();
				items.Add(clone);
			}
		}

		private void Group(IReadOnlyList<OrderSpec> orders)
		{
			_icons.Clear();
			_counts.Clear();
			MessyController messy = MessyController.Ins;
			if (!messy || orders == null)
			{
				return;
			}
			LevelInfo info = messy.Info;
			if (info == null)
			{
				return;
			}
			for (int i = 0; i < orders.Count; i++)
			{
				Sprite icon = info.GetDishIconOfId(orders[i].BaseId);
				if (!icon)
				{
					continue;
				}
				int idx = _icons.IndexOf(icon);
				if (idx < 0)
				{
					_icons.Add(icon);
					_counts.Add(1);
				}
				else
				{
					_counts[idx] = _counts[idx] + 1;
				}
			}
		}
	}
}
