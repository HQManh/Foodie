using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using CakeOrder.Home;
using TrungKienPack.Particle.Footprint;
using UnityEngine;
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

			public int Slot;

			public bool Shifting;

			public bool Approaching;

			public bool HeadingToStop;

			public float HoldUntil;

			public bool IsStop;

			public bool IsBoss;

			public Coroutine Routine;

			public bool AtTarget => false;
		}

		private class ShuffleBag
		{
			private readonly string[] _ids;

			private readonly List<string> _bag;

			private string _last;

			public bool IsEmpty => false;

			public ShuffleBag(string[] ids)
			{
			}

			public string Next()
			{
				return null;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass103_0
		{
			public GameObject prefab;

			internal void _003CSpawnRoutine_003Eb__0(GameObject loaded)
			{
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass106_0
		{
			public Walker walker;

			internal bool _003CWalkRoutine_003Eb__0()
			{
				return false;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass111_0
		{
			public Walker walker;

			internal bool _003CQueueRoutine_003Eb__1()
			{
				return false;
			}

			internal bool _003CQueueRoutine_003Eb__0()
			{
				return false;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass112_0
		{
			public bool eaten;

			public float deadline;

			internal void _003CEatRoutine_003Eb__0()
			{
			}

			internal bool _003CEatRoutine_003Eb__1()
			{
				return false;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass113_0
		{
			public Walker walker;

			internal bool _003CDescendRoutine_003Eb__0()
			{
				return false;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass114_0
		{
			public Walker walker;

			internal bool _003CExitRoutine_003Eb__0()
			{
				return false;
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
				return false;
			}

			internal bool _003CBalkRoutine_003Eb__1()
			{
				return false;
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
			}

			internal bool _003CBossLoop_003Eb__1()
			{
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
			public _003CBalkRoutine_003Ed__118(int _003C_003E1__state)
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
			public _003CBossLoop_003Ed__94(int _003C_003E1__state)
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
			public _003CBossVisitRoutine_003Ed__115(int _003C_003E1__state)
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
			public _003CBrakeRoutine_003Ed__120(int _003C_003E1__state)
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
			public _003CCelebrateRoutine_003Ed__126(int _003C_003E1__state)
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
			public _003CChasedOffRoutine_003Ed__117(int _003C_003E1__state)
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
			public _003CDescendRoutine_003Ed__113(int _003C_003E1__state)
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
			public _003CEatRoutine_003Ed__112(int _003C_003E1__state)
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
			public _003CExitRoutine_003Ed__114(int _003C_003E1__state)
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
			public _003CHopSeries_003Ed__128(int _003C_003E1__state)
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
			public _003CLoadPrefab_003Ed__104(int _003C_003E1__state)
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
			public _003CQueueRoutine_003Ed__111(int _003C_003E1__state)
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
			public _003CSpawnLoop_003Ed__93(int _003C_003E1__state)
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
			public _003CSpawnRoutine_003Ed__103(int _003C_003E1__state)
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
			public _003CStormOffRoutine_003Ed__119(int _003C_003E1__state)
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
			public _003CWalkRoutine_003Ed__106(int _003C_003E1__state)
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
			public _003CWarmStartRoutine_003Ed__98(int _003C_003E1__state)
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

		private readonly Dictionary<string, GameObject> _prefabs;

		private readonly List<AsyncOperationHandle<GameObject>> _handles;

		private readonly List<Walker> _walkers;

		private readonly List<Walker> _queue;

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

		private WeatherEffect CurrentWeather => WeatherEffect.Normal;

		private FootprintSystem Footprints => null;

		private Transform Root => null;

		private Vector2 StopLocal => default;

		private float StopLineY => 0f;

		private Vector2 BossSpot => default;

		private int BalkSlot => 0;

		private float BalkX => 0f;

		private float TurnDownX => 0f;

		private float ScreenLeftX => 0f;

		private bool IsMapOpen => false;

		private bool CanJoinQueue => false;

		private float FirstTurnUpX => 0f;

		public static string AddressOf(string pet)
		{
			return null;
		}

		private void Awake()
		{
		}

		private void OnLevelConfigChanged()
		{
		}

		private void ApplyWeatherSkin(GameObject go)
		{
		}

		private void AttachFootprint(Walker walker)
		{
		}

		private void DetachFootprint(Walker walker)
		{
		}

		private void Start()
		{
		}

		private void OnEnable()
		{
		}

		private void OnDisable()
		{
		}

		public void Run()
		{
		}

		public void Stop()
		{
		}

		private static string[] Resolve(string[] ids)
		{
			return null;
		}

		private void OnDestroy()
		{
		}

		private Vector2 BandOf(StreetLane lane)
		{
			return default;
		}

		private float RollLaneY(StreetLane lane)
		{
			return 0f;
		}

		private float SlotX(int slot)
		{
			return 0f;
		}

		private float TurnUpX(int slot)
		{
			return 0f;
		}

		[IteratorStateMachine(typeof(_003CSpawnLoop_003Ed__93))]
		private IEnumerator SpawnLoop()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CBossLoop_003Ed__94))]
		private IEnumerator BossLoop()
		{
			return null;
		}

		private string CurrentBossId()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CWarmStartRoutine_003Ed__98))]
		private IEnumerator WarmStartRoutine()
		{
			return null;
		}

		private void SpawnNext(float startX)
		{
		}

		[IteratorStateMachine(typeof(_003CSpawnRoutine_003Ed__103))]
		private IEnumerator SpawnRoutine(string pet, float startX, StreetLane lane, bool boss = false, Action<Walker> onSpawned = null)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CLoadPrefab_003Ed__104))]
		private IEnumerator LoadPrefab(string pet, Action<GameObject> onDone)
		{
			return null;
		}

		private Walker Build(GameObject prefab, string pet, float startX, StreetLane lane)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CWalkRoutine_003Ed__106))]
		private IEnumerator WalkRoutine(Walker walker)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CQueueRoutine_003Ed__111))]
		private IEnumerator QueueRoutine(Walker walker, bool fromClimb)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CEatRoutine_003Ed__112))]
		private IEnumerator EatRoutine(Walker walker)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CDescendRoutine_003Ed__113))]
		private IEnumerator DescendRoutine(Walker walker)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CExitRoutine_003Ed__114))]
		private IEnumerator ExitRoutine(Walker walker)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CBossVisitRoutine_003Ed__115))]
		private IEnumerator BossVisitRoutine(Walker walker)
		{
			return null;
		}

		private void ChaseQueue()
		{
		}

		[IteratorStateMachine(typeof(_003CChasedOffRoutine_003Ed__117))]
		private IEnumerator ChasedOffRoutine(Walker walker)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CBalkRoutine_003Ed__118))]
		private IEnumerator BalkRoutine(Walker walker)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CStormOffRoutine_003Ed__119))]
		private IEnumerator StormOffRoutine(Walker walker, bool canRejoin = false)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CBrakeRoutine_003Ed__120))]
		private IEnumerator BrakeRoutine(Walker walker)
		{
			return null;
		}

		private void LeaveQueue(Walker walker)
		{
		}

		private void Release(Walker walker)
		{
		}

		private void OnBuildingPartPresented(BuildingUpgradePartSO part)
		{
		}

		private void OnBuildingCelebrationRequested()
		{
		}

		[IteratorStateMachine(typeof(_003CCelebrateRoutine_003Ed__126))]
		private IEnumerator CelebrateRoutine(bool fullUpgrade, bool confetti = true)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CHopSeries_003Ed__128))]
		private IEnumerator HopSeries(Walker walker, int hops)
		{
			return null;
		}

		private void Update()
		{
		}

		private void Step(Walker walker, float dt)
		{
		}

		private void StepRunner(Walker walker, bool active)
		{
		}

		private static bool IsPassing(Walker walker)
		{
			return false;
		}

		private static bool IsWalkCyclePlaying(Walker walker)
		{
			return false;
		}

		public void StopWalker(GameObject customer)
		{
		}

		public void StartWalker(GameObject customer)
		{
		}

		private void SetWalkerStopped(GameObject customer, bool stop)
		{
		}

		private void LateUpdate()
		{
		}
	}
}
