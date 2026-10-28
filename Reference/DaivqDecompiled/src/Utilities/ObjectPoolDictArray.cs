using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities;

public class ObjectPoolDictArray : MonoSingleton<ObjectPoolDictArray>
{
	[CompilerGenerated]
	private sealed class _003CIEPrePooling_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public int amount;

		public int amountSpawnEachFrame;

		public ObjectPoolDictArray _003C_003E4__this;

		public GameObject prefab;

		public Action onEnd;

		private int _003CnumSteps_003E5__2;

		private int _003Ci_003E5__3;

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
		public _003CIEPrePooling_003Ed__9(int _003C_003E1__state)
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

	private List<int> _pooledKeyList;

	private Dictionary<int, List<GameObject>> _pooledGoDic;

	private Transform _transform;

	private Dictionary<int, Coroutine> _dictCorPrePooling;

	protected Transform _Transform => null;

	public void InitGameObjects(GameObject prefab, int amount)
	{
	}

	public void PrePooling(GameObject prefab, int amount, int amountSpawnEachFrame, Action onEnd = null)
	{
	}

	public void PrePoolingMax(GameObject prefab, int maxAmount, int amountSpawnEachFrame, Action onEnd = null)
	{
	}

	[IteratorStateMachine(typeof(_003CIEPrePooling_003Ed__9))]
	private IEnumerator IEPrePooling(GameObject prefab, int amount, int amountSpawnEachFrame, Action onEnd = null)
	{
		return null;
	}

	private void InstantPrePooling(GameObject prefab, int amount)
	{
	}

	public GameObject GetGameObject(GameObject prefab, Vector3 position, Quaternion rotation, bool forceInstantiate = false)
	{
		return null;
	}

	public GameObject GetGameObject(GameObject prefab, bool forceInstantiate = false)
	{
		return null;
	}

	public T GetGameObject<T>(T prefabComponent, Vector3 position, Quaternion rotation, bool forceInstantiate = false) where T : MonoBehaviour
	{
		return default(T);
	}

	public ParticleSystem GetParticle(ParticleSystem particle, Vector3 position, Quaternion rotation, bool forceInstantiate = false)
	{
		return null;
	}

	public ParticleSystem GetParticle(ParticleSystem particle, Vector3 position)
	{
		return null;
	}

	public void PlayParticleOnce(ParticleSystem particle, Vector3 position, float scale = -1f)
	{
	}

	public void PlayParticleOnce(ParticleSystem particle, Vector3 position, Quaternion rotation, float scale = -1f)
	{
	}

	public LineRenderer GetLine(LineRenderer line, Vector3 position, Quaternion rotation, bool forceInstantiate = false)
	{
		return null;
	}

	public T GetGameObject<T>(T prefabComponent, bool forceInstantiate = false) where T : MonoBehaviour
	{
		return default(T);
	}

	public ParticleSystem GetParticle(ParticleSystem particle, bool forceInstantiate = false)
	{
		return null;
	}

	public LineRenderer GetLine(LineRenderer line, bool forceInstantiate = false)
	{
		return null;
	}

	public List<GameObject> GetGameObjects(GameObject prefab, int amount, bool forceInstantiate = false)
	{
		return null;
	}

	public List<GameObject> GetGameObjects(GameObject prefab, int amount, Vector3 position, Quaternion rotation, bool forceInstantiate = false)
	{
		return null;
	}

	public List<T> GetGameObjects<T>(T prefabComponent, int amount, bool forceInstantiate = false) where T : MonoBehaviour
	{
		return null;
	}

	public List<ParticleSystem> GetParticles(ParticleSystem particle, int amount, bool forceInstantiate = false)
	{
		return null;
	}

	public List<LineRenderer> GetLines(LineRenderer line, int amount, bool forceInstantiate = false)
	{
		return null;
	}

	public List<T> GetGameObjects<T>(T prefabComponent, int amount, Vector3 position, Quaternion rotation, bool forceInstantiate = false) where T : MonoBehaviour
	{
		return null;
	}

	public List<ParticleSystem> GetParticles(ParticleSystem particle, int amount, Vector3 position, Quaternion rotation, bool forceInstantiate = false)
	{
		return null;
	}

	public List<LineRenderer> GetLines(LineRenderer line, int amount, Vector3 position, Quaternion rotation, bool forceInstantiate = false)
	{
		return null;
	}

	public Coroutine GetGameObjectsIterate(GameObject prefab, int amount, int amountEachFrame, Action<GameObject> onGetObject, Action onFinished = null)
	{
		return null;
	}

	public Coroutine GetGameObjectsIterate(GameObject prefab, int amount, Vector3 position, Quaternion rotation, int amountEachFrame, Action<GameObject> onGetObject, Action onFinished = null)
	{
		return null;
	}

	public Coroutine GetGameObjectsIterate<T>(T prefabComponent, int amount, int amountEachFrame, Action<T> onGetComponent, Action onFinished = null) where T : MonoBehaviour
	{
		return null;
	}

	public Coroutine GetParticles(ParticleSystem particle, int amount, int amountEachFrame, Action<ParticleSystem> onGetParticle, Action onFinished = null)
	{
		return null;
	}

	public Coroutine GetLines(LineRenderer line, int amount, int amountEachFrame, Action<LineRenderer> onGetLine, Action onFinished = null)
	{
		return null;
	}

	public Coroutine GetGameObjectsIterate<T>(T prefabComponent, int amount, Vector3 position, Quaternion rotation, int amountEachFrame, Action<T> onGetComponent, Action onFinished = null) where T : MonoBehaviour
	{
		return null;
	}

	public Coroutine GetParticles(ParticleSystem particle, int amount, Vector3 position, Quaternion rotation, int amountEachFrame, Action<ParticleSystem> onGetParticle, Action onFinished = null)
	{
		return null;
	}

	public Coroutine GetLines(LineRenderer line, int amount, Vector3 position, Quaternion rotation, int amountEachFrame, Action<LineRenderer> onGetLine, Action onFinished = null)
	{
		return null;
	}

	public void ReleaseGameObject(GameObject go)
	{
	}

	public int GetActivePooledObjectCount()
	{
		return 0;
	}

	public List<GameObject> GetActiveObjects(GameObject prefab)
	{
		return null;
	}

	public List<GameObject> GetListSpawnedObjects(GameObject prefab)
	{
		return null;
	}

	public int CountSpawnedObjects(GameObject prefab)
	{
		return 0;
	}
}
