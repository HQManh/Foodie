using System;
using AnhPD.FoodOrder;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.Cook
{
	public class Whisk : MonoBehaviour
	{
		[SerializeField]
		private Transform tfRoot;

		[SerializeField]
		private SpriteRenderer mixed;

		[SerializeField]
		private SpriteRenderer tool;

		[SerializeField]
		private int number;

		[SerializeField]
		private float speed = 2.5f;

		[SerializeField]
		private Transform mask;

		[SerializeField]
		private MixingSauce mixingEffect;

		[SerializeField]
		private AudioSource audioSource;

		[SerializeField]
		private Collider2D coll2D;

		private Action _onComplete;

		public bool isLockRotation = true;

		public float boostSpeed = 1f;

		private int _count;

		private float _deltaAngle;

		private float _rate;

		private bool _isComplete;

		public Action<float> OnValueChange;

		private void OnEnable()
		{
			base.transform.Appear(0.1f);
		}

		public void Init(int numMix, Action onComplete)
		{
			number = numMix;
			_rate = 0f;
			_count = 0;
			base.gameObject.SetActive(true);
			tfRoot.gameObject.SetActive(true);
			if ((bool)tool)
			{
				tool.SetAlpha(1f);
			}
			_onComplete = onComplete;
			_isComplete = false;
			if ((bool)coll2D)
			{
				coll2D.enabled = true;
			}
		}

		private void Update()
		{
			if (isLockRotation)
			{
				base.transform.eulerAngles = Vector3.zero;
			}
		}

		private void OnMouseDown()
		{
			if (!audioSource.isPlaying)
			{
				audioSource.Play();
			}
		}

		private void OnMouseDrag()
		{
			if (_isComplete)
			{
				return;
			}
			Vector3 mouseWorld = Camera.main.ScreenToWorldPoint(Input.mousePosition);
			Vector3 position = base.transform.position;
			float angle = GetAngleABC(position, tfRoot.position, mouseWorld);
			float z = tfRoot.eulerAngles.z;
			float t = Mathf.Clamp01(Time.deltaTime * speed);
			float newZ = Mathf.Lerp(z, z + angle, t);
			float delta = Mathf.Abs(newZ - tfRoot.eulerAngles.z);
			_deltaAngle += delta;
			tfRoot.eulerAngles = new Vector3(0f, 0f, newZ);
			if (_deltaAngle >= 360f)
			{
				_count++;
				_deltaAngle %= 360f;
				if ((int)((float)number / boostSpeed) <= _count)
				{
					mixed.transform.Appear(0.1f);
					_isComplete = true;
					_onComplete?.Invoke();
					if ((bool)tool)
					{
						tool.DOFade(0f, 1f).OnComplete(delegate
						{
							base.gameObject.SetActive(false);
						});
					}
					else
					{
						base.gameObject.SetActive(false);
					}
					return;
				}
				if (!audioSource.isPlaying)
				{
					audioSource.Play();
				}
			}
			_rate = Mathf.Clamp01((float)_count / (float)number);
			mixed.SetAlpha(_rate + _deltaAngle / 360f / (float)number);
			if ((bool)mask)
			{
				mask.localScale = Vector3.one * _rate;
			}
			if (delta > 0.1f)
			{
				if (mixingEffect != null)
				{
					mixingEffect.OnMixing();
				}
				OnValueChange?.Invoke(_rate + _deltaAngle / 360f / (float)number);
			}
		}

		private void OnMouseUp()
		{
			audioSource.Stop();
		}

		private float GetAngleABC(Vector2 pointA, Vector2 pointB, Vector2 pointC)
		{
			Vector2 a = pointA - pointB;
			Vector2 b = pointC - pointB;
			a.Normalize();
			b.Normalize();
			float num = Mathf.Acos(Mathf.Clamp(Vector2.Dot(a, b), -1f, 1f)) * 57.29578f;
			if (!(a.x * b.y - a.y * b.x >= 0f))
			{
				return 0f - num;
			}
			return num;
		}

		public void Restart()
		{
			_rate = 0f;
			_count = 0;
		}
	}
}
