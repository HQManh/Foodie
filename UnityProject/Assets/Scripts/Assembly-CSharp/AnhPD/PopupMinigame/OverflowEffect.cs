using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AnhPD.PopupMinigame
{
	public class OverflowEffect : MonoBehaviour
	{
		[CompilerGenerated]
		private sealed class _003CAnimation_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public OverflowEffect _003C_003E4__this;

			private int _003Ci_003E5__2;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return _003C_003E2__current;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return _003C_003E2__current;
				}
			}

			[DebuggerHidden]
			public _003CAnimation_003Ed__2(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				switch (_003C_003E1__state)
				{
				case 0:
					_003C_003E1__state = -1;
					_003Ci_003E5__2 = 0;
					break;
				case 1:
					_003C_003E1__state = -1;
					_003C_003E4__this.spriteRenderers[_003Ci_003E5__2].enabled = false;
					_003Ci_003E5__2++;
					break;
				default:
					return false;
				}
				SpriteRenderer[] renderers = _003C_003E4__this.spriteRenderers;
				if (_003Ci_003E5__2 < renderers.Length)
				{
					renderers[_003Ci_003E5__2].enabled = true;
					_003C_003E2__current = new WaitForSecondsRealtime(0.15f);
					_003C_003E1__state = 1;
					return true;
				}
				renderers[renderers.Length - 1].enabled = true;
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
				throw new NotSupportedException();
			}
		}

		[SerializeField]
		private SpriteRenderer[] spriteRenderers;

		private void OnEnable()
		{
			for (int i = 0; i < spriteRenderers.Length; i++)
			{
				spriteRenderers[i].enabled = false;
			}
			StartCoroutine(Animation());
		}

		[IteratorStateMachine(typeof(_003CAnimation_003Ed__2))]
		private IEnumerator Animation()
		{
			return new _003CAnimation_003Ed__2(0)
			{
				_003C_003E4__this = this
			};
		}

		private void OnDisable()
		{
			StopAllCoroutines();
		}
	}
}
