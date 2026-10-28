using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using CakeOrder.Home;
using TrungKienPack.Particle.Footprint;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Rendering;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace AnhPD.FoodOrder
{
	public class HomeCustomerParade : MonoBehaviour
	{
		private enum StreetLane
		{
			Sidewalk = 0,
			Curb = 1
		}

		private class Walker
		{
			public Customer Customer;

			public Transform Tf;

			public SortingGroup Sorting;

			public FootprintEffect Footprint;

			public StreetLane Lane;

			public float LaneY;

			public CustomerRunAnim Runner;

			public bool Running;

			public float RunSpeed;

			public bool Descending;

			public Vector2 Pos;

			public Vector2 Target;

			public float Speed;

			public float BobPhase;

			public bool Bobs;

			public int Slot = -1;

			public bool Shifting;

			public bool Approaching;

			public bool HeadingToStop;

			public float HoldUntil;

			public bool IsStop;

			public bool IsBoss;

			public Coroutine Routine;

			public bool AtTarget => (Pos - Target).sqrMagnitude < 0.0004f;
		}

		private class ShuffleBag
		{
			private readonly string[] _ids;

			private readonly List<string> _bag;

			private string _last;

			public bool IsEmpty => _bag.Count == 0;

			public ShuffleBag(string[] ids)
			{
				_bag = new List<string>();
				_ids = ids;
			}

			public string Next()
			{
				if (_bag.Count == 0)
				{
					_bag.AddRange(_ids);
					int n = _bag.Count;
					while (n - 1 > 0)
					{
						int k = UnityEngine.Random.Range(0, n);
						string a = _bag[k];
						n--;
						string b = _bag[n];
						_bag[n] = a;
						_bag[k] = b;
					}
					int last = _bag.Count - 1;
					if (last != 0 && _bag.Count > 0)
					{
						if (_bag[last] == _last)
						{
							string first = _bag[0];
							string tail = _bag[last];
							_bag[last] = first;
							_bag[0] = tail;
						}
					}
				}
				int idx = _bag.Count - 1;
				_last = _bag[idx];
				_bag.RemoveAt(idx);
				return _last;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass103_0
		{
			public GameObject prefab;

			internal void _003CSpawnRoutine_003Eb__0(GameObject loaded)
			{
				prefab = loaded;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass106_0
		{
			public Walker walker;

			internal bool _003CWalkRoutine_003Eb__0()
			{
				return walker.AtTarget;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass111_0
		{
			public Walker walker;

			internal bool _003CQueueRoutine_003Eb__1()
			{
				return walker.AtTarget;
			}

			internal bool _003CQueueRoutine_003Eb__0()
			{
				return walker.AtTarget;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass112_0
		{
			public bool eaten;

			public float deadline;

			internal void _003CEatRoutine_003Eb__0()
			{
				eaten = true;
			}

			internal bool _003CEatRoutine_003Eb__1()
			{
				if (eaten)
				{
					return true;
				}
				return deadline < Time.time;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass113_0
		{
			public Walker walker;

			internal bool _003CDescendRoutine_003Eb__0()
			{
				return walker.AtTarget;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass114_0
		{
			public Walker walker;

			internal bool _003CExitRoutine_003Eb__0()
			{
				return walker.AtTarget;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass115_0
		{
			public bool chased;

			public HomeCustomerParade _003C_003E4__this;

			public Walker walker;
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass118_0
		{
			public Walker walker;

			public HomeCustomerParade _003C_003E4__this;

			internal bool _003CBalkRoutine_003Eb__0()
			{
				return walker.AtTarget;
			}

			internal bool _003CBalkRoutine_003Eb__1()
			{
				if ((walker.Pos - walker.Target).sqrMagnitude >= 0.0004f)
				{
					return _003C_003E4__this._bossClaim == null;
				}
				return true;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass119_0
		{
			public float calmAt;

			public bool canRejoin;

			public HomeCustomerParade _003C_003E4__this;

			internal bool _003CStormOffRoutine_003Eb__0()
			{
				if (calmAt <= Time.time)
				{
					return true;
				}
				if (canRejoin)
				{
					return _003C_003E4__this.CanJoinQueue;
				}
				return false;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass94_0
		{
			public Walker boss;

			public HomeCustomerParade _003C_003E4__this;

			internal void _003CBossLoop_003Eb__0(Walker spawned)
			{
				boss = spawned;
			}

			internal bool _003CBossLoop_003Eb__1()
			{
				if (_003C_003E4__this != null && _003C_003E4__this._walkers != null)
				{
					return !_003C_003E4__this._walkers.Contains(boss);
				}
				return false;
			}
		}

		[CompilerGenerated]
		private sealed class _003CBalkRoutine_003Ed__118 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public Walker walker;

			public HomeCustomerParade _003C_003E4__this;

			private _003C_003Ec__DisplayClass118_0 _003C_003E8__1;

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
			public _003CBalkRoutine_003Ed__118(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				HomeCustomerParade self = _003C_003E4__this;
				switch (_003C_003E1__state)
				{
				case 0:
					_003C_003E1__state = -1;
					_003C_003E8__1 = new _003C_003Ec__DisplayClass118_0();
					_003C_003E8__1.walker = walker;
					_003C_003E8__1._003C_003E4__this = self;
					if (self == null || walker == null)
					{
						return false;
					}
					walker.Target = new Vector2(Mathf.Max(Mathf.Min(self.TurnUpX(self.BalkSlot), self.BalkX), walker.Pos.x), walker.LaneY);
					_003C_003E2__current = new WaitUntil(_003C_003E8__1._003CBalkRoutine_003Eb__0);
					_003C_003E1__state = 1;
					return true;
				case 1:
				{
					_003C_003E1__state = -1;
					if (self == null || _003C_003E8__1 == null || _003C_003E8__1.walker == null)
					{
						return false;
					}
					Walker w = _003C_003E8__1.walker;
					float t = Mathf.Clamp01(self.balkApproach);
					float x0 = w.Pos.x;
					float y0 = w.Pos.y;
					w.Target = new Vector2(x0 + (self.BalkX - x0) * t, y0 + (self.StopLineY - y0) * t);
					_003C_003E2__current = new WaitUntil(_003C_003E8__1._003CBalkRoutine_003Eb__1);
					_003C_003E1__state = 2;
					return true;
				}
				case 2:
				{
					_003C_003E1__state = -1;
					if (self == null)
					{
						return false;
					}
					if (!self.CanJoinQueue)
					{
						if (_003C_003E8__1 == null)
						{
							return false;
						}
						_003C_003E2__current = self.StormOffRoutine(_003C_003E8__1.walker, true);
						_003C_003E1__state = 5;
					}
					else
					{
						if (_003C_003E8__1 == null)
						{
							return false;
						}
						_003C_003E2__current = self.QueueRoutine(_003C_003E8__1.walker, true);
						_003C_003E1__state = 3;
					}
					return true;
				}
				case 3:
					_003C_003E1__state = -1;
					if (self == null || _003C_003E8__1 == null)
					{
						return false;
					}
					_003C_003E2__current = self.ExitRoutine(_003C_003E8__1.walker);
					_003C_003E1__state = 4;
					return true;
				case 4:
				case 5:
					_003C_003E1__state = -1;
					return false;
				default:
					return false;
				}
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

		[CompilerGenerated]
		private sealed class _003CBossLoop_003Ed__94 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public HomeCustomerParade _003C_003E4__this;

			private _003C_003Ec__DisplayClass94_0 _003C_003E8__1;

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
			public _003CBossLoop_003Ed__94(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				HomeCustomerParade self = _003C_003E4__this;
				int state = _003C_003E1__state;
				bool enterBody;
				if (state < 2)
				{
					if (state != 0 && state != 1)
					{
						return false;
					}
					enterBody = true;
				}
				else if (state == 2)
				{
					_003C_003E1__state = -1;
					if (_003C_003E8__1 == null)
					{
						return false;
					}
					if (_003C_003E8__1.boss != null)
					{
						_003C_003E2__current = new WaitUntil(_003C_003E8__1._003CBossLoop_003Eb__1);
						_003C_003E1__state = 3;
						return true;
					}
					enterBody = false;
				}
				else if (state == 3)
				{
					_003C_003E1__state = -1;
					enterBody = false;
				}
				else if (state == 4)
				{
					_003C_003E8__1 = null;
					_003C_003E1__state = -1;
					enterBody = true;
				}
				else
				{
					return false;
				}
				if (enterBody)
				{
					_003C_003E1__state = -1;
					_003C_003E8__1 = new _003C_003Ec__DisplayClass94_0();
					_003C_003E8__1._003C_003E4__this = self;
					if (self == null)
					{
						return false;
					}
					bool mapOpen = self.IsMapOpen;
					string bossId = null;
					if (mapOpen && !self._celebrating)
					{
						bossId = self.CurrentBossId();
					}
					if (!mapOpen || self._celebrating || bossId == null)
					{
						_003C_003E2__current = new WaitForSeconds(self.bossRecheckInterval);
						_003C_003E1__state = 1;
						return true;
					}
					_003C_003E8__1.boss = null;
					Action<Walker> onSpawned = _003C_003E8__1._003CBossLoop_003Eb__0;
					_003C_003E2__current = self.SpawnRoutine(bossId, self.spawnX, StreetLane.Sidewalk, true, onSpawned);
					_003C_003E1__state = 2;
					return true;
				}
				if (self == null)
				{
					return false;
				}
				_003C_003E2__current = new WaitForSeconds(UnityEngine.Random.Range(self.bossRespawnDelay.x, self.bossRespawnDelay.y));
				_003C_003E1__state = 4;
				return true;
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

		[CompilerGenerated]
		private sealed class _003CBossVisitRoutine_003Ed__115 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public HomeCustomerParade _003C_003E4__this;

			public Walker walker;

			private _003C_003Ec__DisplayClass115_0 _003C_003E8__1;

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
			public _003CBossVisitRoutine_003Ed__115(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				// TODO(unrecovered): the Ghidra MoveNext passes the chase target Y through an unnamed float register (param_2 / extraout_s0_01) and the ArrivedChasing/ClaimAndChase local functions are not present on _003C_003Ec__DisplayClass115_0; state transitions not transcribed.
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

		[CompilerGenerated]
		private sealed class _003CBrakeRoutine_003Ed__120 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public Walker walker;

			public HomeCustomerParade _003C_003E4__this;

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
			public _003CBrakeRoutine_003Ed__120(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				// TODO(unrecovered): the brake-done flag lives in a display class (DAT_09191378 / DisplayClass120_0) that has no matching declaration in this stub, so the WaitUntil predicate cannot be stored across yields.
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

		[CompilerGenerated]
		private sealed class _003CCelebrateRoutine_003Ed__126 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public HomeCustomerParade _003C_003E4__this;

			public bool fullUpgrade;

			public bool confetti;

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
			public _003CCelebrateRoutine_003Ed__126(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				// TODO(unrecovered): the upgrade-celebration branch (fullUpgrade && confetti) calls a virtual method on the building through an unidentified vtable slot (+0x188); not transcribed.
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

		[CompilerGenerated]
		private sealed class _003CChasedOffRoutine_003Ed__117 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public Walker walker;

			public HomeCustomerParade _003C_003E4__this;

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
			public _003CChasedOffRoutine_003Ed__117(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				HomeCustomerParade self = _003C_003E4__this;
				switch (_003C_003E1__state)
				{
				case 0:
					_003C_003E1__state = -1;
					if (walker == null)
					{
						return false;
					}
					walker.Running = walker.Runner != null;
					if (!walker.Running)
					{
						if (walker.Customer == null)
						{
							return false;
						}
						walker.Customer.ChangeState((Customer.State)4, null, playSfx: false);
					}
					if (self == null)
					{
						return false;
					}
					_003C_003E2__current = self.DescendRoutine(walker);
					_003C_003E1__state = 1;
					return true;
				case 1:
					_003C_003E1__state = -1;
					if (self == null)
					{
						return false;
					}
					_003C_003E2__current = self.ExitRoutine(walker);
					_003C_003E1__state = 2;
					return true;
				default:
					return false;
				}
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

		[CompilerGenerated]
		private sealed class _003CDescendRoutine_003Ed__113 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public Walker walker;

			public HomeCustomerParade _003C_003E4__this;

			private _003C_003Ec__DisplayClass113_0 _003C_003E8__1;

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
			public _003CDescendRoutine_003Ed__113(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				HomeCustomerParade self = _003C_003E4__this;
				switch (_003C_003E1__state)
				{
				case 0:
				{
					_003C_003E1__state = -1;
					_003C_003E8__1 = new _003C_003Ec__DisplayClass113_0();
					_003C_003E8__1.walker = walker;
					Walker w = _003C_003E8__1.walker;
					if (w == null)
					{
						return false;
					}
					w.Descending = true;
					if (self == null)
					{
						return false;
					}
					float turnX = self.TurnDownX;
					w.Target = new Vector2(Mathf.Max(turnX, w.Pos.x), w.LaneY);
					_003C_003E2__current = new WaitUntil(_003C_003E8__1._003CDescendRoutine_003Eb__0);
					_003C_003E1__state = 1;
					return true;
				}
				case 1:
					_003C_003E1__state = -1;
					if (_003C_003E8__1 == null || _003C_003E8__1.walker == null)
					{
						return false;
					}
					_003C_003E8__1.walker.Descending = false;
					return false;
				default:
					return false;
				}
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

		[CompilerGenerated]
		private sealed class _003CEatRoutine_003Ed__112 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public HomeCustomerParade _003C_003E4__this;

			private _003C_003Ec__DisplayClass112_0 _003C_003E8__1;

			public Walker walker;

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
			public _003CEatRoutine_003Ed__112(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				HomeCustomerParade self = _003C_003E4__this;
				switch (_003C_003E1__state)
				{
				case 0:
					_003C_003E1__state = -1;
					_003C_003E8__1 = new _003C_003Ec__DisplayClass112_0();
					if (self == null)
					{
						return false;
					}
					_003C_003E2__current = new WaitForSeconds(UnityEngine.Random.Range(self.waitBeforeEat.x, self.waitBeforeEat.y));
					_003C_003E1__state = 1;
					return true;
				case 1:
				{
					_003C_003E1__state = -1;
					if (_003C_003E8__1 == null)
					{
						return false;
					}
					_003C_003E8__1.eaten = false;
					if (self == null)
					{
						return false;
					}
					_003C_003E8__1.deadline = Time.time + self.eatTimeout;
					Walker w = walker;
					if (w == null || w.Customer == null)
					{
						return false;
					}
					w.Customer.ChangeState(Customer.State.Eat, new Action(_003C_003E8__1._003CEatRoutine_003Eb__0), playSfx: false);
					_003C_003E2__current = new WaitUntil(_003C_003E8__1._003CEatRoutine_003Eb__1);
					_003C_003E1__state = 2;
					return true;
				}
				case 2:
				{
					_003C_003E1__state = -1;
					Walker w = walker;
					if (w == null || w.Customer == null)
					{
						return false;
					}
					w.Customer.ChangeState(Customer.State.Happy, null, playSfx: false);
					if (self == null)
					{
						return false;
					}
					_003C_003E2__current = new WaitForSeconds(self.happyDuration);
					_003C_003E1__state = 3;
					return true;
				}
				default:
					return false;
				}
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

		[CompilerGenerated]
		private sealed class _003CExitRoutine_003Ed__114 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public Walker walker;

			public HomeCustomerParade _003C_003E4__this;

			private _003C_003Ec__DisplayClass114_0 _003C_003E8__1;

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
			public _003CExitRoutine_003Ed__114(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				HomeCustomerParade self = _003C_003E4__this;
				switch (_003C_003E1__state)
				{
				case 0:
					_003C_003E1__state = -1;
					_003C_003E8__1 = new _003C_003Ec__DisplayClass114_0();
					_003C_003E8__1.walker = walker;
					if (self == null || walker == null)
					{
						return false;
					}
					walker.Target = new Vector2(self.exitX, walker.LaneY);
					_003C_003E2__current = new WaitUntil(_003C_003E8__1._003CExitRoutine_003Eb__0);
					_003C_003E1__state = 1;
					return true;
				case 1:
					_003C_003E1__state = -1;
					if (_003C_003E8__1 == null || self == null)
					{
						return false;
					}
					self.Release(_003C_003E8__1.walker);
					return false;
				default:
					return false;
				}
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

		[CompilerGenerated]
		private sealed class _003CHopSeries_003Ed__128 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public HomeCustomerParade _003C_003E4__this;

			public Walker walker;

			public int hops;

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
			public _003CHopSeries_003Ed__128(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				// TODO(unrecovered): hop step calls Customer's hop method through an unidentified signature (AnhPD_FoodOrder_Customer__Hop); not transcribed.
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

		[CompilerGenerated]
		private sealed class _003CLoadPrefab_003Ed__104 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public HomeCustomerParade _003C_003E4__this;

			public string pet;

			public Action<GameObject> onDone;

			private string _003Caddress_003E5__2;

			private AsyncOperationHandle<GameObject> _003Cop_003E5__3;

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
			public _003CLoadPrefab_003Ed__104(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				// TODO(unrecovered): prefab cache lookup and Addressables handle bookkeeping (dictionary + handle list accessors) are not identified well enough to transcribe.
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

		[CompilerGenerated]
		private sealed class _003CQueueRoutine_003Ed__111 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public Walker walker;

			public HomeCustomerParade _003C_003E4__this;

			public bool fromClimb;

			private _003C_003Ec__DisplayClass111_0 _003C_003E8__1;

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
			public _003CQueueRoutine_003Ed__111(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				HomeCustomerParade self = _003C_003E4__this;
				switch (_003C_003E1__state)
				{
				case 0:
				{
					_003C_003E1__state = -1;
					_003C_003E8__1 = new _003C_003Ec__DisplayClass111_0();
					_003C_003E8__1.walker = walker;
					Walker w0 = _003C_003E8__1.walker;
					w0.Slot = self._queue.Count;
					self._queue.Add(w0);
					if (!fromClimb)
					{
						w0.Approaching = true;
						float x = Mathf.Max(self.TurnUpX(w0.Slot), w0.Pos.x);
						x = Mathf.Min(x, self.SlotX(w0.Slot));
						w0.Target = new Vector2(x, w0.LaneY);
						_003C_003E2__current = new WaitUntil(_003C_003E8__1._003CQueueRoutine_003Eb__0);
						_003C_003E1__state = 1;
						return true;
					}
					goto afterApproach;
				}
				case 1:
					_003C_003E1__state = -1;
					_003C_003E8__1.walker.Approaching = false;
					goto afterApproach;
				case 2:
					_003C_003E1__state = -1;
					if (_003C_003E8__1.walker.Running)
					{
						_003C_003E2__current = self.BrakeRoutine(_003C_003E8__1.walker);
						_003C_003E1__state = 3;
						return true;
					}
					goto afterBrake;
				case 3:
				case 4:
					_003C_003E1__state = -1;
					goto afterBrake;
				case 5:
				{
					_003C_003E1__state = -1;
					Walker w5 = _003C_003E8__1.walker;
					self.LeaveQueue(w5);
					w5.Running = w5.Runner != null;
					if (!w5.Running)
					{
						w5.Customer.ChangeState(Customer.State.Walk, null, playSfx: false);
					}
					_003C_003E2__current = self.DescendRoutine(w5);
					_003C_003E1__state = 6;
					return true;
				}
				case 6:
					_003C_003E1__state = -1;
					return false;
				default:
					return false;
				}
			afterApproach:
				{
					Walker w1 = _003C_003E8__1.walker;
					w1.Target = new Vector2(self.SlotX(w1.Slot), self.StopLineY);
					_003C_003E2__current = new WaitUntil(_003C_003E8__1._003CQueueRoutine_003Eb__1);
					_003C_003E1__state = 2;
					return true;
				}
			afterBrake:
				{
					Walker w3 = _003C_003E8__1.walker;
					if (w3.Slot < 1)
					{
						_003C_003E2__current = self.EatRoutine(w3);
						_003C_003E1__state = 5;
					}
					else
					{
						_003C_003E2__current = null;
						_003C_003E1__state = 4;
					}
					return true;
				}
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

		[CompilerGenerated]
		private sealed class _003CSpawnLoop_003Ed__93 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public HomeCustomerParade _003C_003E4__this;

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
			public _003CSpawnLoop_003Ed__93(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				int state = _003C_003E1__state;
				if (state >= 2 || state < 0)
				{
					return false;
				}
				HomeCustomerParade self = _003C_003E4__this;
				_003C_003E1__state = -1;
				if (self.IsMapOpen && !self._celebrating)
				{
					self.SpawnNext(self.spawnX);
				}
				_003C_003E2__current = new WaitForSeconds(UnityEngine.Random.Range(self.spawnInterval.x, self.spawnInterval.y));
				_003C_003E1__state = 1;
				return true;
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

		[CompilerGenerated]
		private sealed class _003CSpawnRoutine_003Ed__103 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public HomeCustomerParade _003C_003E4__this;

			public string pet;

			private _003C_003Ec__DisplayClass103_0 _003C_003E8__1;

			public float startX;

			public StreetLane lane;

			public bool boss;

			public Action<Walker> onSpawned;

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
			public _003CSpawnRoutine_003Ed__103(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				HomeCustomerParade self = _003C_003E4__this;
				switch (_003C_003E1__state)
				{
				case 0:
					_003C_003E1__state = -1;
					_003C_003E8__1 = new _003C_003Ec__DisplayClass103_0();
					_003C_003E8__1.prefab = null;
					_003C_003E2__current = self.LoadPrefab(pet, _003C_003E8__1._003CSpawnRoutine_003Eb__0);
					_003C_003E1__state = 1;
					return true;
				case 1:
				{
					_003C_003E1__state = -1;
					if (_003C_003E8__1.prefab == null)
					{
						return false;
					}
					Walker walker = self.Build(_003C_003E8__1.prefab, pet, startX, lane);
					if (walker == null)
					{
						return false;
					}
					walker.IsBoss = boss;
					self._walkers.Add(walker);
					onSpawned?.Invoke(walker);
					walker.Routine = self.StartCoroutine(self.WalkRoutine(walker));
					return false;
				}
				default:
					return false;
				}
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

		[CompilerGenerated]
		private sealed class _003CStormOffRoutine_003Ed__119 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public bool canRejoin;

			public HomeCustomerParade _003C_003E4__this;

			public Walker walker;

			private _003C_003Ec__DisplayClass119_0 _003C_003E8__1;

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
			public _003CStormOffRoutine_003Ed__119(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				HomeCustomerParade self = _003C_003E4__this;
				switch (_003C_003E1__state)
				{
				case 0:
					_003C_003E1__state = -1;
					_003C_003E8__1 = new _003C_003Ec__DisplayClass119_0();
					_003C_003E8__1._003C_003E4__this = self;
					_003C_003E8__1.canRejoin = canRejoin;
					walker.Target = walker.Pos;
					if (walker.Running)
					{
						_003C_003E2__current = self.BrakeRoutine(walker);
						_003C_003E1__state = 1;
						return true;
					}
					goto holdAngry;
				case 1:
					_003C_003E1__state = -1;
					goto holdAngry;
				case 2:
					_003C_003E1__state = -1;
					walker.Running = walker.Runner != null;
					if (_003C_003E8__1.canRejoin && self.CanJoinQueue)
					{
						walker.Customer.ReleaseAngry();
						_003C_003E2__current = self.QueueRoutine(walker, fromClimb: true);
						_003C_003E1__state = 3;
						return true;
					}
					if (!walker.Running)
					{
						walker.Customer.ChangeState(Customer.State.Walk, null, playSfx: false);
					}
					_003C_003E2__current = self.DescendRoutine(walker);
					_003C_003E1__state = 5;
					return true;
				case 3:
					_003C_003E1__state = -1;
					_003C_003E2__current = self.ExitRoutine(walker);
					_003C_003E1__state = 4;
					return true;
				case 5:
					_003C_003E1__state = -1;
					_003C_003E2__current = self.ExitRoutine(walker);
					_003C_003E1__state = 6;
					return true;
				case 4:
				case 6:
					_003C_003E1__state = -1;
					return false;
				default:
					return false;
				}
			holdAngry:
				walker.Customer.HoldAngry(playSfx: false);
				_003C_003E8__1.calmAt = Time.time + self.angryBeat;
				_003C_003E2__current = new WaitUntil(_003C_003E8__1._003CStormOffRoutine_003Eb__0);
				_003C_003E1__state = 2;
				return true;
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

		[CompilerGenerated]
		private sealed class _003CWalkRoutine_003Ed__106 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public Walker walker;

			public HomeCustomerParade _003C_003E4__this;

			private _003C_003Ec__DisplayClass106_0 _003C_003E8__1;

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
			public _003CWalkRoutine_003Ed__106(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				HomeCustomerParade self = _003C_003E4__this;
				switch (_003C_003E1__state)
				{
				case 0:
				{
					_003C_003E1__state = -1;
					_003C_003E8__1 = new _003C_003Ec__DisplayClass106_0();
					_003C_003E8__1.walker = walker;
					Walker w = _003C_003E8__1.walker;
					float chance = (w.Lane == StreetLane.Curb) ? self.shipperStopChance : self.stopChance;
					if (UnityEngine.Random.value < chance)
					{
						if (!w.IsBoss)
						{
							w.HeadingToStop = true;
							float x = Mathf.Max(self.FirstTurnUpX, w.Pos.x);
							w.Target = new Vector2(x, w.LaneY);
							_003C_003E2__current = new WaitUntil(_003C_003E8__1._003CWalkRoutine_003Eb__0);
							_003C_003E1__state = 2;
						}
						else
						{
							_003C_003E2__current = self.BossVisitRoutine(w);
							_003C_003E1__state = 1;
						}
						return true;
					}
					goto exitWalk;
				}
				case 2:
				{
					_003C_003E1__state = -1;
					Walker w = _003C_003E8__1.walker;
					w.HeadingToStop = false;
					if (self._bossClaim != null && w.Pos.x < self.BalkX)
					{
						_003C_003E2__current = self.BalkRoutine(w);
						_003C_003E1__state = 3;
						return true;
					}
					if (self.CanJoinQueue)
					{
						_003C_003E2__current = self.QueueRoutine(w, fromClimb: false);
						_003C_003E1__state = 4;
						return true;
					}
					goto exitWalk;
				}
				case 4:
					_003C_003E1__state = -1;
					goto exitWalk;
				case 1:
				case 3:
				case 5:
					_003C_003E1__state = -1;
					return false;
				default:
					return false;
				}
			exitWalk:
				_003C_003E2__current = self.ExitRoutine(_003C_003E8__1.walker);
				_003C_003E1__state = 5;
				return true;
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

		[CompilerGenerated]
		private sealed class _003CWarmStartRoutine_003Ed__98 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public HomeCustomerParade _003C_003E4__this;

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
			public _003CWarmStartRoutine_003Ed__98(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				HomeCustomerParade self = _003C_003E4__this;
				switch (_003C_003E1__state)
				{
				case 0:
					_003C_003E1__state = -1;
					// predicate recovered by guess (instance lambda on the parade was not captured in the stubs)
					_003C_003E2__current = new WaitUntil(() => self.IsMapOpen);
					_003C_003E1__state = 1;
					return true;
				case 1:
				{
					_003C_003E1__state = -1;
					if (self._celebrating)
					{
						return false;
					}
					float progress = 0f;
					if (self.building != null)
					{
						progress = self.building.UpgradeProgress;
					}
					progress = Mathf.Clamp01(progress);
					int count = Mathf.RoundToInt(progress * (self.warmStartCustomers.y - self.warmStartCustomers.x) + self.warmStartCustomers.x);
					float x = self.ScreenLeftX;
					if (count > 0)
					{
						x += self.warmStartSpacingX * -0.5f;
						for (int i = 0; i < count; i++)
						{
							self.SpawnNext(x);
							x -= self.warmStartSpacingX;
						}
					}
					return false;
				}
				default:
					return false;
				}
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

		[Header("Customers")]
		[SerializeField]
		private string[] availablePets;

		[SerializeField]
		private string[] availableShippers;

		[SerializeField]
		[Min(0.01f)]
		private float customerScale;

		[Header("Refs")]
		[SerializeField]
		private Transform customerRoot;

		[SerializeField]
		private HomeMapBuildingBase building;

		[Header("Path (local inside customerRoot)")]
		[SerializeField]
		private Vector2 stopPoint;

		[SerializeField]
		private float spawnX;

		[SerializeField]
		private float exitX;

		[SerializeField]
		private float walkSpeed;

		[SerializeField]
		[Range(0f, 0.9f)]
		private float walkSpeedRandom;

		[SerializeField]
		[Min(0f)]
		private float turnUpInset;

		[SerializeField]
		[Min(0f)]
		private float turnDownInset;

		[Header("Street bands (local Y range, each walker rolls its own Y)")]
		[SerializeField]
		private Vector2 sidewalkY;

		[SerializeField]
		private Vector2 curbY;

		[Header("Curb runners (availableShippers)")]
		[SerializeField]
		[Range(0f, 1f)]
		private float shipperChance;

		[SerializeField]
		[Min(1f)]
		private float runSpeedMultiplier;

		[SerializeField]
		[Min(0.01f)]
		private float passSpeedMultiplier;

		[SerializeField]
		[Range(0f, 1f)]
		private float shipperStopChance;

		[Header("Queue")]
		[SerializeField]
		private int queueCapacity;

		[SerializeField]
		private float queueSpacingX;

		[Header("Timing")]
		[SerializeField]
		private Vector2 spawnInterval;

		[SerializeField]
		private Vector2 waitBeforeEat;

		[SerializeField]
		private float happyDuration;

		[SerializeField]
		[Range(0f, 1f)]
		private float stopChance;

		[SerializeField]
		private float eatTimeout;

		[Header("Boss (selected level has one)")]
		[SerializeField]
		private Vector2 bossRespawnDelay;

		[SerializeField]
		[Min(0.1f)]
		private float bossRecheckInterval;

		[SerializeField]
		[Min(0f)]
		private int bossSlot;

		[SerializeField]
		[Min(0f)]
		private float bossChaseDistance;

		[SerializeField]
		[Min(0f)]
		private float angryBeat;

		[SerializeField]
		[Range(0f, 1f)]
		private float balkApproach;

		[SerializeField]
		[Min(0f)]
		private float balkBackOffX;

		[Header("Warm start (on enable)")]
		[SerializeField]
		private Vector2Int warmStartCustomers;

		[SerializeField]
		private float warmStartSpacingX;

		[Header("Upgrade celebration")]
		[SerializeField]
		private float jumpHeight;

		[SerializeField]
		private float jumpDuration;

		[SerializeField]
		private float jumpDelaySpread;

		[SerializeField]
		private Vector2Int hopsPerUpgrade;

		[SerializeField]
		private Vector2Int hopsPerFullUpgrade;

		[SerializeField]
		private Vector2 resumeDelay;

		[Header("Walk cycle")]
		[SerializeField]
		private float bobAmplitude;

		[SerializeField]
		private float bobFrequency;

		[Header("Sorting by Y")]
		[SerializeField]
		private int sortingBase;

		[SerializeField]
		private float sortingYScale;

		private readonly Dictionary<string, GameObject> _prefabs = new Dictionary<string, GameObject>();

		private readonly List<AsyncOperationHandle<GameObject>> _handles = new List<AsyncOperationHandle<GameObject>>();

		private readonly List<Walker> _walkers = new List<Walker>();

		private readonly List<Walker> _queue = new List<Walker>();

		private bool _running;

		private bool _celebrating;

		private bool _bossResolved;

		private string _bossId;

		private Walker _bossClaim;

		private FootprintSystem _footprints;

		private ShuffleBag _petBag;

		private ShuffleBag _shipperBag;

		private bool _fullUpgradeQueued;

		private int _hopSeriesRunning;

		// TODO(unrecovered): weather accessor on the building (offset 0x28 of the building's weather data) is not identified; placeholder kept
		private WeatherEffect CurrentWeather => WeatherEffect.Normal;

		private FootprintSystem Footprints
		{
			get
			{
				if (_footprints == null)
				{
					// generic finder recovered by guess (FUN_04c348dc with a FootprintSystem type token)
					_footprints = FindFirstObjectByType<FootprintSystem>();
				}
				return _footprints;
			}
		}

		private Transform Root
		{
			get
			{
				if (customerRoot != null)
				{
					return customerRoot;
				}
				return transform;
			}
		}

		private Vector2 StopLocal => stopPoint;

		private float StopLineY => stopPoint.y;

		// TODO(unrecovered): only the x component of the boss slot is recovered; the caller reads .x. y is left at 0.
		private Vector2 BossSpot => new Vector2(SlotX(bossSlot), 0f);

		private int BalkSlot => bossSlot + 1;

		private float BalkX => SlotX(BalkSlot) - balkBackOffX;

		private float TurnDownX => Mathf.Max(exitX - turnDownInset, stopPoint.x);

		// TODO(unrecovered): screen-left computation (camera/transform inverse-point chain) not transcribed
		private float ScreenLeftX => 0f;

		// TODO(unrecovered): map-unlock lookup (save-profile accessor chain on building) not transcribed
		private bool IsMapOpen => false;

		private bool CanJoinQueue => _bossClaim == null && _queue.Count < queueCapacity;

		private float FirstTurnUpX => Mathf.Min(spawnX + turnUpInset, SlotX(Mathf.Max(0, queueCapacity - 1)));

		public static string AddressOf(string pet)
		{
			return CustomerAddress.For(pet);
		}

		private void Awake()
		{
			if (building != null)
			{
				building.onLevelConfigChanged += OnLevelConfigChanged;
				building.onPartPresented += OnBuildingPartPresented;
				building.onCelebrationRequested += OnBuildingCelebrationRequested;
			}
		}

		private void OnLevelConfigChanged()
		{
			_bossResolved = false;
			if (_walkers == null)
			{
				return;
			}
			foreach (Walker walker in _walkers)
			{
				if (walker.Tf != null)
				{
					ApplyWeatherSkin(walker.Tf.gameObject);
					AttachFootprint(walker);
				}
			}
		}

		private void ApplyWeatherSkin(GameObject go)
		{
			WeatherEffect weather = CurrentWeather;
			if (go == null)
			{
				return;
			}
			SpineSkinSwitcher[] switchers = go.GetComponentsInChildren<SpineSkinSwitcher>(true);
			foreach (SpineSkinSwitcher switcher in switchers)
			{
				switcher.Apply(weather);
			}
		}

		private void AttachFootprint(Walker walker)
		{
			DetachFootprint(walker);
			FootprintSystem fs = Footprints;
			if (fs == null || walker == null || walker.Tf == null)
			{
				return;
			}
			walker.Footprint = fs.Spawn(CurrentWeather, walker.Tf);
		}

		private void DetachFootprint(Walker walker)
		{
			FootprintSystem fs = Footprints;
			if (walker == null)
			{
				return;
			}
			if (walker.Footprint != null && fs != null)
			{
				fs.Despawn(walker.Footprint);
			}
			walker.Footprint = null;
		}

		private void Start()
		{
			// the stub Start and Run share one Ghidra body; Start delegates to Run
			Run();
		}

		private void OnEnable()
		{
			if (_petBag != null)
			{
				Run();
			}
		}

		private void OnDisable()
		{
			Stop();
		}

		public void Run()
		{
			if (_running)
			{
				return;
			}
			if (_petBag == null)
			{
				_petBag = new ShuffleBag(Resolve(availablePets));
			}
			if (_shipperBag == null)
			{
				_shipperBag = new ShuffleBag(Resolve(availableShippers));
			}
			if (_petBag.IsEmpty && (_shipperBag == null || _shipperBag.IsEmpty))
			{
				return;
			}
			_running = true;
			StartCoroutine(WarmStartRoutine());
			StartCoroutine(SpawnLoop());
			StartCoroutine(BossLoop());
		}

		public void Stop()
		{
			if (!_running)
			{
				return;
			}
			_running = false;
			StopAllCoroutines();
			_celebrating = false;
			_fullUpgradeQueued = false;
			_hopSeriesRunning = 0;
			_bossClaim = null;
			if (_walkers != null)
			{
				foreach (Walker walker in _walkers)
				{
					DetachFootprint(walker);
					if (walker.Tf != null)
					{
						Destroy(walker.Tf.gameObject);
					}
				}
				_walkers.Clear();
				if (_queue != null)
				{
					_queue.Clear();
				}
			}
		}

		private static string[] Resolve(string[] ids)
		{
			if (ids == null)
			{
				// TODO(unrecovered): null branch reads a static config through an unidentified accessor chain
				return null;
			}
			List<string> list = new List<string>(ids.Length);
			foreach (string id in ids)
			{
				if (!string.IsNullOrWhiteSpace(id))
				{
					list.Add(id.Trim());
				}
			}
			return list.ToArray();
		}

		private void OnDestroy()
		{
			if (building != null)
			{
				building.onLevelConfigChanged -= OnLevelConfigChanged;
				building.onPartPresented -= OnBuildingPartPresented;
				building.onCelebrationRequested -= OnBuildingCelebrationRequested;
			}
			if (_handles != null)
			{
				foreach (AsyncOperationHandle<GameObject> handle in _handles)
				{
					if (handle.IsValid())
					{
						Addressables.Release(handle);
					}
				}
				_handles.Clear();
				if (_prefabs != null)
				{
					_prefabs.Clear();
				}
			}
		}

		private Vector2 BandOf(StreetLane lane)
		{
			return lane == StreetLane.Curb ? curbY : sidewalkY;
		}

		private float RollLaneY(StreetLane lane)
		{
			Vector2 band = BandOf(lane);
			return UnityEngine.Random.Range(band.x, band.y);
		}

		private float SlotX(int slot)
		{
			return stopPoint.x - queueSpacingX * slot;
		}

		private float TurnUpX(int slot)
		{
			float inset = spawnX + turnUpInset;
			float slotX = SlotX(slot);
			return slotX <= inset ? slotX : inset;
		}

		[IteratorStateMachine(typeof(_003CSpawnLoop_003Ed__93))]
		private IEnumerator SpawnLoop()
		{
			return new _003CSpawnLoop_003Ed__93(0) { _003C_003E4__this = this };
		}

		[IteratorStateMachine(typeof(_003CBossLoop_003Ed__94))]
		private IEnumerator BossLoop()
		{
			return new _003CBossLoop_003Ed__94(0) { _003C_003E4__this = this };
		}

		private string CurrentBossId()
		{
			// TODO(unrecovered): boss lookup (LevelBossLookup.TryResolve with building fields) not identified; returns null
			return null;
		}

		[IteratorStateMachine(typeof(_003CWarmStartRoutine_003Ed__98))]
		private IEnumerator WarmStartRoutine()
		{
			return new _003CWarmStartRoutine_003Ed__98(0) { _003C_003E4__this = this };
		}

		private void SpawnNext(float startX)
		{
			if (_shipperBag == null)
			{
				return;
			}
			bool curb;
			ShuffleBag bag;
			if (!_shipperBag.IsEmpty)
			{
				if (_petBag == null)
				{
					return;
				}
				if (_petBag.IsEmpty)
				{
					curb = true;
					bag = _shipperBag;
				}
				else
				{
					curb = UnityEngine.Random.value < shipperChance;
					bag = curb ? _shipperBag : _petBag;
				}
			}
			else
			{
				curb = false;
				bag = _petBag;
			}
			if (bag == null)
			{
				return;
			}
			string pet = bag.Next();
			StartCoroutine(SpawnRoutine(pet, startX, curb ? StreetLane.Curb : StreetLane.Sidewalk));
		}

		[IteratorStateMachine(typeof(_003CSpawnRoutine_003Ed__103))]
		private IEnumerator SpawnRoutine(string pet, float startX, StreetLane lane, bool boss = false, Action<Walker> onSpawned = null)
		{
			return new _003CSpawnRoutine_003Ed__103(0)
			{
				_003C_003E4__this = this,
				pet = pet,
				startX = startX,
				lane = lane,
				boss = boss,
				onSpawned = onSpawned
			};
		}

		[IteratorStateMachine(typeof(_003CLoadPrefab_003Ed__104))]
		private IEnumerator LoadPrefab(string pet, Action<GameObject> onDone)
		{
			return new _003CLoadPrefab_003Ed__104(0) { _003C_003E4__this = this, pet = pet, onDone = onDone };
		}

		private Walker Build(GameObject prefab, string pet, float startX, StreetLane lane)
		{
			// TODO(unrecovered): instantiation and component lookups on the prefab (GetComponent chains, walker parameter offsets) not identified; returns null
			return null;
		}

		[IteratorStateMachine(typeof(_003CWalkRoutine_003Ed__106))]
		private IEnumerator WalkRoutine(Walker walker)
		{
			return new _003CWalkRoutine_003Ed__106(0) { _003C_003E4__this = this, walker = walker };
		}

		[IteratorStateMachine(typeof(_003CQueueRoutine_003Ed__111))]
		private IEnumerator QueueRoutine(Walker walker, bool fromClimb)
		{
			return new _003CQueueRoutine_003Ed__111(0) { _003C_003E4__this = this, walker = walker, fromClimb = fromClimb };
		}

		[IteratorStateMachine(typeof(_003CEatRoutine_003Ed__112))]
		private IEnumerator EatRoutine(Walker walker)
		{
			return new _003CEatRoutine_003Ed__112(0) { _003C_003E4__this = this, walker = walker };
		}

		[IteratorStateMachine(typeof(_003CDescendRoutine_003Ed__113))]
		private IEnumerator DescendRoutine(Walker walker)
		{
			return new _003CDescendRoutine_003Ed__113(0) { _003C_003E4__this = this, walker = walker };
		}

		[IteratorStateMachine(typeof(_003CExitRoutine_003Ed__114))]
		private IEnumerator ExitRoutine(Walker walker)
		{
			return new _003CExitRoutine_003Ed__114(0) { _003C_003E4__this = this, walker = walker };
		}

		[IteratorStateMachine(typeof(_003CBossVisitRoutine_003Ed__115))]
		private IEnumerator BossVisitRoutine(Walker walker)
		{
			return new _003CBossVisitRoutine_003Ed__115(0) { _003C_003E4__this = this, walker = walker };
		}

		private void ChaseQueue()
		{
			List<Walker> chased = new List<Walker>(_queue);
			_queue.Clear();
			foreach (Walker w in chased)
			{
				if (w.Routine != null)
				{
					StopCoroutine(w.Routine);
				}
				w.Slot = -1;
				w.Shifting = false;
				w.Approaching = false;
				w.Routine = StartCoroutine(ChasedOffRoutine(w));
			}
		}

		[IteratorStateMachine(typeof(_003CChasedOffRoutine_003Ed__117))]
		private IEnumerator ChasedOffRoutine(Walker walker)
		{
			return new _003CChasedOffRoutine_003Ed__117(0) { _003C_003E4__this = this, walker = walker };
		}

		[IteratorStateMachine(typeof(_003CBalkRoutine_003Ed__118))]
		private IEnumerator BalkRoutine(Walker walker)
		{
			return new _003CBalkRoutine_003Ed__118(0) { _003C_003E4__this = this, walker = walker };
		}

		[IteratorStateMachine(typeof(_003CStormOffRoutine_003Ed__119))]
		private IEnumerator StormOffRoutine(Walker walker, bool canRejoin = false)
		{
			return new _003CStormOffRoutine_003Ed__119(0) { _003C_003E4__this = this, walker = walker, canRejoin = canRejoin };
		}

		[IteratorStateMachine(typeof(_003CBrakeRoutine_003Ed__120))]
		private IEnumerator BrakeRoutine(Walker walker)
		{
			return new _003CBrakeRoutine_003Ed__120(0) { _003C_003E4__this = this, walker = walker };
		}

		private void LeaveQueue(Walker walker)
		{
			if (_queue == null)
			{
				return;
			}
			int idx = _queue.IndexOf(walker);
			if (idx < 0)
			{
				return;
			}
			_queue.RemoveAt(idx);
			if (walker == null)
			{
				return;
			}
			walker.Slot = -1;
			for (int i = idx; i < _queue.Count; i++)
			{
				Walker w = _queue[i];
				if (w == null)
				{
					break;
				}
				w.Slot = i;
				if (!w.Approaching)
				{
					w.Target = new Vector2(SlotX(i), StopLineY);
					w.Shifting = true;
				}
			}
		}

		private void Release(Walker walker)
		{
			LeaveQueue(walker);
			if (_bossClaim == walker)
			{
				_bossClaim = null;
			}
			if (_walkers != null)
			{
				_walkers.Remove(walker);
				DetachFootprint(walker);
				if (walker != null && walker.Tf != null)
				{
					Destroy(walker.Tf.gameObject);
				}
			}
		}

		private void OnBuildingPartPresented(BuildingUpgradePartSO part)
		{
			if (!_running)
			{
				return;
			}
			if (building == null || part == null)
			{
				return;
			}
			if (!building.IsRewardMilestonePart(part))
			{
				bool fullyUpgraded = building.IsFullyUpgraded;
				if (!_celebrating)
				{
					StartCoroutine(CelebrateRoutine(fullyUpgraded, true));
					return;
				}
				if (!fullyUpgraded)
				{
					return;
				}
			}
			else if (!_celebrating)
			{
				StartCoroutine(CelebrateRoutine(true, true));
				return;
			}
			_fullUpgradeQueued = true;
		}

		private void OnBuildingCelebrationRequested()
		{
			if (!_running)
			{
				return;
			}
			if (building != null && !_celebrating)
			{
				StartCoroutine(CelebrateRoutine(true, false));
			}
		}

		[IteratorStateMachine(typeof(_003CCelebrateRoutine_003Ed__126))]
		private IEnumerator CelebrateRoutine(bool fullUpgrade, bool confetti = true)
		{
			return new _003CCelebrateRoutine_003Ed__126(0) { _003C_003E4__this = this, fullUpgrade = fullUpgrade, confetti = confetti };
		}

		[IteratorStateMachine(typeof(_003CHopSeries_003Ed__128))]
		private IEnumerator HopSeries(Walker walker, int hops)
		{
			return new _003CHopSeries_003Ed__128(0) { _003C_003E4__this = this, walker = walker, hops = hops };
		}

		private void Update()
		{
			float dt = Time.deltaTime;
			if (_walkers == null)
			{
				return;
			}
			for (int i = 0; i < _walkers.Count; i++)
			{
				Step(_walkers[i], dt);
			}
		}

		private void Step(Walker walker, float dt)
		{
			if (walker == null || walker.Tf == null)
			{
				return;
			}
			float step = dt;
			if (_celebrating || Time.time < walker.HoldUntil)
			{
				step = 0f;
			}
			if (walker.IsStop && !IsWalkCyclePlaying(walker))
			{
				walker.IsStop = false;
			}
			Vector2 toTarget = walker.Target - walker.Pos;
			float dist = toTarget.magnitude;
			if (dist <= 0.001f)
			{
				walker.BobPhase = 0f;
				walker.Shifting = false;
				walker.Pos = walker.Target;
			}
			else
			{
				float speed;
				if (!walker.Running)
				{
					speed = walker.Speed;
				}
				else if (!walker.Descending && walker.Slot < 0 && !walker.HeadingToStop)
				{
					speed = walker.RunSpeed * passSpeedMultiplier;
				}
				else
				{
					speed = walker.RunSpeed;
				}
				float travel = Mathf.Min(step * speed, dist);
				walker.Pos += toTarget / dist * travel;
				walker.BobPhase += step * bobFrequency;
			}
			// TODO(unrecovered): customer animation-state branch (ChangeState to Walk/Idle with NaN-guarded comparisons on step, distance and customer state) not transcribed
			float bob = 0f;
			if (dist > 0.001f && walker.Bobs)
			{
				bob = bobAmplitude * Mathf.Abs(Mathf.Sin(walker.BobPhase));
			}
			walker.Tf.localPosition = new Vector3(walker.Pos.x, walker.Pos.y + bob, 0f);
		}

		private void StepRunner(Walker walker, bool active)
		{
			if (walker == null)
			{
				return;
			}
			CustomerRunAnim runner = walker.Runner;
			if (runner == null)
			{
				return;
			}
			CustomerRunAnim.Eff eff = CustomerRunAnim.Eff.None;
			if (active)
			{
				if (!runner.IsRunning)
				{
					runner.Run();
				}
				if (!walker.Descending)
				{
					eff = (walker.Slot < 0 && !walker.HeadingToStop) ? CustomerRunAnim.Eff.Pass : CustomerRunAnim.Eff.Stop;
				}
			}
			runner.SetEff(eff);
		}

		private static bool IsPassing(Walker walker)
		{
			return !walker.Descending && walker.Slot < 0 && !walker.HeadingToStop;
		}

		private static bool IsWalkCyclePlaying(Walker walker)
		{
			// TODO(unrecovered): the not-running branch reads the customer's current state through an accessor that is not identified in the stub
			return false;
		}

		public void StopWalker(GameObject customer)
		{
			SetWalkerStopped(customer, true);
		}

		public void StartWalker(GameObject customer)
		{
			SetWalkerStopped(customer, false);
		}

		private void SetWalkerStopped(GameObject customer, bool stop)
		{
			if (customer == null || _walkers == null)
			{
				return;
			}
			Transform tf = customer.transform;
			foreach (Walker walker in _walkers)
			{
				if (walker.Tf == null)
				{
					continue;
				}
				if (tf == walker.Tf || tf.IsChildOf(walker.Tf))
				{
					walker.IsStop = stop;
					return;
				}
			}
		}

		private void LateUpdate()
		{
			if (_walkers == null)
			{
				return;
			}
			for (int i = 0; i < _walkers.Count; i++)
			{
				Walker w = _walkers[i];
				if (w == null)
				{
					break;
				}
				if (w.Sorting != null)
				{
					int order = sortingBase - Mathf.RoundToInt(w.Pos.y * sortingYScale);
					if (w.Slot < 0)
					{
						if (w == _bossClaim)
						{
							order += queueCapacity + 1;
						}
					}
					else
					{
						order = order - w.Slot + queueCapacity;
					}
					w.Sorting.sortingOrder = order;
				}
			}
		}
	}
}
