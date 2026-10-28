using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Utilities
{

public class ObjectPoolDictArray : MonoSingleton<ObjectPoolDictArray>
{
	// Recovered from the Ghidra decompile (Utilities.ObjectPoolDictArray$$*).
	// Pool buckets are keyed by the prefab's instance ID.
	private List<int> _pooledKeyList;

	private Dictionary<int, List<GameObject>> _pooledGoDic;

	private Transform _transform;

	private Dictionary<int, Coroutine> _dictCorPrePooling;

	protected Transform _Transform
	{
		get
		{
			if (_transform == null)
			{
				_transform = transform;
			}
			return _transform;
		}
	}

	private void EnsureInit()
	{
		if (_pooledKeyList == null)
		{
			_pooledKeyList = new List<int>();
		}
		if (_pooledGoDic == null)
		{
			_pooledGoDic = new Dictionary<int, List<GameObject>>();
		}
		if (_dictCorPrePooling == null)
		{
			_dictCorPrePooling = new Dictionary<int, Coroutine>();
		}
	}

	// Registers the prefab's bucket (creating it if needed) and returns it.
	private List<GameObject> GetOrCreateList(GameObject prefab)
	{
		EnsureInit();
		int id = prefab.GetInstanceID();
		if (!_pooledKeyList.Contains(id))
		{
			_pooledKeyList.Add(id);
		}
		if (!_pooledGoDic.TryGetValue(id, out List<GameObject> list))
		{
			list = new List<GameObject>();
			_pooledGoDic.Add(id, list);
		}
		return list;
	}

	// Returns the bucket without registering a new one.
	private List<GameObject> FindList(GameObject prefab)
	{
		EnsureInit();
		_pooledGoDic.TryGetValue(prefab.GetInstanceID(), out List<GameObject> list);
		return list;
	}

	public void InitGameObjects(GameObject prefab, int amount)
	{
		if (prefab == null)
		{
			return;
		}
		List<GameObject> list = GetOrCreateList(prefab);
		for (int i = 0; i < amount; i++)
		{
			GameObject go = Instantiate(prefab, _Transform);
			go.SetActive(false);
			list.Add(go);
		}
	}

	public void PrePooling(GameObject prefab, int amount, int amountSpawnEachFrame, Action onEnd = null)
	{
		if (prefab == null || amount < 1)
		{
			onEnd?.Invoke();
			return;
		}
		int id = prefab.GetInstanceID();
		GetOrCreateList(prefab);
		if (amountSpawnEachFrame < 1)
		{
			InstantPrePooling(prefab, amount);
			onEnd?.Invoke();
			return;
		}
		if (_dictCorPrePooling.TryGetValue(id, out Coroutine running) && running != null)
		{
			StopCoroutine(running);
		}
		_dictCorPrePooling[id] = StartCoroutine(IEPrePooling(prefab, amount, amountSpawnEachFrame, onEnd));
	}

	public void PrePoolingMax(GameObject prefab, int maxAmount, int amountSpawnEachFrame, Action onEnd = null)
	{
		PrePooling(prefab, maxAmount - CountSpawnedObjects(prefab), amountSpawnEachFrame, onEnd);
	}

	private IEnumerator IEPrePooling(GameObject prefab, int amount, int amountSpawnEachFrame, Action onEnd = null)
	{
		int steps = amount / amountSpawnEachFrame;
		for (int i = 0; i < steps; i++)
		{
			InstantPrePooling(prefab, amountSpawnEachFrame);
			yield return null;
		}
		int remainder = amount - steps * amountSpawnEachFrame;
		if (remainder > 0)
		{
			InstantPrePooling(prefab, remainder);
		}
		onEnd?.Invoke();
	}

	private void InstantPrePooling(GameObject prefab, int amount)
	{
		if (prefab == null)
		{
			return;
		}
		List<GameObject> list = GetOrCreateList(prefab);
		for (int i = 0; i < amount; i++)
		{
			GameObject go = Instantiate(prefab, _Transform);
			go.SetActive(false);
			list.Add(go);
		}
	}

	// Reuses an inactive pooled object when possible, otherwise instantiates one.
	public GameObject GetGameObject(GameObject prefab, Vector3 position, Quaternion rotation, bool forceInstantiate = false)
	{
		if (prefab == null)
		{
			return null;
		}
		List<GameObject> list = GetOrCreateList(prefab);
		if (!forceInstantiate)
		{
			for (int i = list.Count - 1; i >= 0; i--)
			{
				GameObject go = list[i];
				if (go == null)
				{
					list.RemoveAt(i);
					continue;
				}
				if (!go.activeSelf)
				{
					Transform tr = go.transform;
					tr.position = position;
					tr.rotation = rotation;
					go.SetActive(true);
					return go;
				}
			}
		}
		GameObject spawned = Instantiate(prefab, position, rotation);
		spawned.transform.SetParent(_Transform);
		list.Add(spawned);
		return spawned;
	}

	public GameObject GetGameObject(GameObject prefab, bool forceInstantiate = false)
	{
		if (prefab == null)
		{
			return null;
		}
		List<GameObject> list = GetOrCreateList(prefab);
		if (!forceInstantiate)
		{
			for (int i = list.Count - 1; i >= 0; i--)
			{
				GameObject go = list[i];
				if (go == null)
				{
					list.RemoveAt(i);
					continue;
				}
				if (!go.activeSelf)
				{
					go.SetActive(true);
					return go;
				}
			}
		}
		GameObject spawned = Instantiate(prefab);
		spawned.transform.SetParent(_Transform);
		list.Add(spawned);
		return spawned;
	}

	public T GetGameObject<T>(T prefabComponent, Vector3 position, Quaternion rotation, bool forceInstantiate = false) where T : MonoBehaviour
	{
		if (prefabComponent == null)
		{
			return default(T);
		}
		GameObject go = GetGameObject(prefabComponent.gameObject, position, rotation, forceInstantiate);
		return go != null ? go.GetComponent<T>() : default(T);
	}

	public T GetGameObject<T>(T prefabComponent, bool forceInstantiate = false) where T : MonoBehaviour
	{
		if (prefabComponent == null)
		{
			return default(T);
		}
		GameObject go = GetGameObject(prefabComponent.gameObject, forceInstantiate);
		return go != null ? go.GetComponent<T>() : default(T);
	}

	public ParticleSystem GetParticle(ParticleSystem particle, Vector3 position, Quaternion rotation, bool forceInstantiate = false)
	{
		if (particle == null)
		{
			return null;
		}
		GameObject go = GetGameObject(particle.gameObject, position, rotation, forceInstantiate);
		return go != null ? go.GetComponent<ParticleSystem>() : null;
	}

	public ParticleSystem GetParticle(ParticleSystem particle, Vector3 position)
	{
		if (particle == null)
		{
			return null;
		}
		return GetParticle(particle, position, particle.transform.rotation);
	}

	public void PlayParticleOnce(ParticleSystem particle, Vector3 position, float scale = -1f)
	{
		if (particle == null)
		{
			return;
		}
		PlayParticleOnce(particle, position, particle.transform.rotation, scale);
	}

	public void PlayParticleOnce(ParticleSystem particle, Vector3 position, Quaternion rotation, float scale = -1f)
	{
		if (particle == null)
		{
			return;
		}
		GameObject go = GetGameObject(particle.gameObject, position, rotation, false);
		if (go == null)
		{
			return;
		}
		if (scale > 0f)
		{
			go.transform.localScale = particle.transform.localScale * scale;
		}
		ParticleSystem ps = go.GetComponent<ParticleSystem>();
		if (ps != null)
		{
			ps.Play();
		}
	}

	public LineRenderer GetLine(LineRenderer line, Vector3 position, Quaternion rotation, bool forceInstantiate = false)
	{
		if (line == null)
		{
			return null;
		}
		GameObject go = GetGameObject(line.gameObject, position, rotation, forceInstantiate);
		return go != null ? go.GetComponent<LineRenderer>() : null;
	}

	public ParticleSystem GetParticle(ParticleSystem particle, bool forceInstantiate = false)
	{
		if (particle == null)
		{
			return null;
		}
		GameObject go = GetGameObject(particle.gameObject, forceInstantiate);
		return go != null ? go.GetComponent<ParticleSystem>() : null;
	}

	public LineRenderer GetLine(LineRenderer line, bool forceInstantiate = false)
	{
		if (line == null)
		{
			return null;
		}
		GameObject go = GetGameObject(line.gameObject, forceInstantiate);
		return go != null ? go.GetComponent<LineRenderer>() : null;
	}

	// Collects up to `amount` pooled objects: reuses inactive ones first, then instantiates the rest.
	private List<GameObject> CollectGameObjects(GameObject prefab, int amount, bool hasTransform, Vector3 position, Quaternion rotation, bool forceInstantiate)
	{
		if (prefab == null)
		{
			return null;
		}
		List<GameObject> list = GetOrCreateList(prefab);
		List<GameObject> result = new List<GameObject>();
		if (!forceInstantiate)
		{
			for (int i = list.Count - 1; i >= 0 && result.Count < amount; i--)
			{
				GameObject go = list[i];
				if (go == null)
				{
					list.RemoveAt(i);
					continue;
				}
				if (!go.activeSelf)
				{
					go.SetActive(true);
					result.Add(go);
				}
			}
		}
		while (result.Count < amount)
		{
			result.Add(hasTransform ? GetGameObject(prefab, position, rotation, true) : GetGameObject(prefab, true));
		}
		return result;
	}

	public List<GameObject> GetGameObjects(GameObject prefab, int amount, bool forceInstantiate = false)
	{
		return CollectGameObjects(prefab, amount, false, Vector3.zero, Quaternion.identity, forceInstantiate);
	}

	public List<GameObject> GetGameObjects(GameObject prefab, int amount, Vector3 position, Quaternion rotation, bool forceInstantiate = false)
	{
		return CollectGameObjects(prefab, amount, true, position, rotation, forceInstantiate);
	}

	public List<T> GetGameObjects<T>(T prefabComponent, int amount, bool forceInstantiate = false) where T : MonoBehaviour
	{
		if (prefabComponent == null)
		{
			return null;
		}
		return ToComponents<T>(GetGameObjects(prefabComponent.gameObject, amount, forceInstantiate));
	}

	public List<ParticleSystem> GetParticles(ParticleSystem particle, int amount, bool forceInstantiate = false)
	{
		if (particle == null)
		{
			return null;
		}
		return ToComponents<ParticleSystem>(GetGameObjects(particle.gameObject, amount, forceInstantiate));
	}

	public List<LineRenderer> GetLines(LineRenderer line, int amount, bool forceInstantiate = false)
	{
		if (line == null)
		{
			return null;
		}
		return ToComponents<LineRenderer>(GetGameObjects(line.gameObject, amount, forceInstantiate));
	}

	public List<T> GetGameObjects<T>(T prefabComponent, int amount, Vector3 position, Quaternion rotation, bool forceInstantiate = false) where T : MonoBehaviour
	{
		if (prefabComponent == null)
		{
			return null;
		}
		return ToComponents<T>(GetGameObjects(prefabComponent.gameObject, amount, position, rotation, forceInstantiate));
	}

	public List<ParticleSystem> GetParticles(ParticleSystem particle, int amount, Vector3 position, Quaternion rotation, bool forceInstantiate = false)
	{
		if (particle == null)
		{
			return null;
		}
		return ToComponents<ParticleSystem>(GetGameObjects(particle.gameObject, amount, position, rotation, forceInstantiate));
	}

	public List<LineRenderer> GetLines(LineRenderer line, int amount, Vector3 position, Quaternion rotation, bool forceInstantiate = false)
	{
		if (line == null)
		{
			return null;
		}
		return ToComponents<LineRenderer>(GetGameObjects(line.gameObject, amount, position, rotation, forceInstantiate));
	}

	private static List<T> ToComponents<T>(List<GameObject> gameObjects) where T : Component
	{
		if (gameObjects == null)
		{
			return null;
		}
		List<T> result = new List<T>(gameObjects.Count);
		foreach (GameObject go in gameObjects)
		{
			result.Add(go.GetComponent<T>());
		}
		return result;
	}

	// Spawns `amount` objects, `amountEachFrame` per frame, and reports each through the callbacks.
	private IEnumerator IESpawnGameObjectIterate(GameObject prefab, int amount, bool hasTransform, Vector3 position, Quaternion rotation, int amountEachFrame, Action<GameObject> onGetObject, Action onFinished)
	{
		List<GameObject> list = GetOrCreateList(prefab);
		for (int i = 0; i < amount; i++)
		{
			if (i % amountEachFrame == 0)
			{
				yield return null;
			}
			GameObject go = hasTransform
				? Instantiate(prefab, position, rotation, _Transform)
				: Instantiate(prefab, _Transform);
			list.Add(go);
			go.SetActive(true);
			onGetObject?.Invoke(go);
		}
		onFinished?.Invoke();
	}

	public Coroutine GetGameObjectsIterate(GameObject prefab, int amount, int amountEachFrame, Action<GameObject> onGetObject, Action onFinished = null)
	{
		if (prefab == null)
		{
			return null;
		}
		return StartCoroutine(IESpawnGameObjectIterate(prefab, amount, false, Vector3.zero, Quaternion.identity, amountEachFrame, onGetObject, onFinished));
	}

	public Coroutine GetGameObjectsIterate(GameObject prefab, int amount, Vector3 position, Quaternion rotation, int amountEachFrame, Action<GameObject> onGetObject, Action onFinished = null)
	{
		if (prefab == null)
		{
			return null;
		}
		return StartCoroutine(IESpawnGameObjectIterate(prefab, amount, true, position, rotation, amountEachFrame, onGetObject, onFinished));
	}

	public Coroutine GetGameObjectsIterate<T>(T prefabComponent, int amount, int amountEachFrame, Action<T> onGetComponent, Action onFinished = null) where T : MonoBehaviour
	{
		if (prefabComponent == null)
		{
			return null;
		}
		return GetGameObjectsIterate(prefabComponent.gameObject, amount, amountEachFrame, go => onGetComponent?.Invoke(go.GetComponent<T>()), onFinished);
	}

	public Coroutine GetGameObjectsIterate<T>(T prefabComponent, int amount, Vector3 position, Quaternion rotation, int amountEachFrame, Action<T> onGetComponent, Action onFinished = null) where T : MonoBehaviour
	{
		if (prefabComponent == null)
		{
			return null;
		}
		return GetGameObjectsIterate(prefabComponent.gameObject, amount, position, rotation, amountEachFrame, go => onGetComponent?.Invoke(go.GetComponent<T>()), onFinished);
	}

	public Coroutine GetParticles(ParticleSystem particle, int amount, int amountEachFrame, Action<ParticleSystem> onGetParticle, Action onFinished = null)
	{
		if (particle == null)
		{
			return null;
		}
		return GetGameObjectsIterate(particle.gameObject, amount, amountEachFrame, go => onGetParticle?.Invoke(go.GetComponent<ParticleSystem>()), onFinished);
	}

	public Coroutine GetLines(LineRenderer line, int amount, int amountEachFrame, Action<LineRenderer> onGetLine, Action onFinished = null)
	{
		if (line == null)
		{
			return null;
		}
		return GetGameObjectsIterate(line.gameObject, amount, amountEachFrame, go => onGetLine?.Invoke(go.GetComponent<LineRenderer>()), onFinished);
	}

	public Coroutine GetParticles(ParticleSystem particle, int amount, Vector3 position, Quaternion rotation, int amountEachFrame, Action<ParticleSystem> onGetParticle, Action onFinished = null)
	{
		if (particle == null)
		{
			return null;
		}
		return GetGameObjectsIterate(particle.gameObject, amount, position, rotation, amountEachFrame, go => onGetParticle?.Invoke(go.GetComponent<ParticleSystem>()), onFinished);
	}

	public Coroutine GetLines(LineRenderer line, int amount, Vector3 position, Quaternion rotation, int amountEachFrame, Action<LineRenderer> onGetLine, Action onFinished = null)
	{
		if (line == null)
		{
			return null;
		}
		return GetGameObjectsIterate(line.gameObject, amount, position, rotation, amountEachFrame, go => onGetLine?.Invoke(go.GetComponent<LineRenderer>()), onFinished);
	}

	// Returns an object to the pool: parents it back under the pool and deactivates it.
	public void ReleaseGameObject(GameObject go)
	{
		if (go == null)
		{
			return;
		}
		go.transform.SetParent(_Transform);
		go.SetActive(false);
	}

	public int GetActivePooledObjectCount()
	{
		EnsureInit();
		int count = 0;
		foreach (int id in _pooledKeyList)
		{
			if (!_pooledGoDic.TryGetValue(id, out List<GameObject> list))
			{
				continue;
			}
			foreach (GameObject go in list)
			{
				if (go != null && go.activeInHierarchy)
				{
					count++;
				}
			}
		}
		return count;
	}

	public List<GameObject> GetActiveObjects(GameObject prefab)
	{
		if (prefab == null)
		{
			return null;
		}
		List<GameObject> list = FindList(prefab);
		if (list == null)
		{
			return null;
		}
		List<GameObject> result = new List<GameObject>();
		for (int i = list.Count - 1; i >= 0; i--)
		{
			GameObject go = list[i];
			if (go == null)
			{
				list.RemoveAt(i);
			}
			else if (go.activeSelf)
			{
				result.Add(go);
			}
		}
		return result;
	}

	public List<GameObject> GetListSpawnedObjects(GameObject prefab)
	{
		if (prefab == null)
		{
			return null;
		}
		return FindList(prefab);
	}

	public int CountSpawnedObjects(GameObject prefab)
	{
		if (prefab == null)
		{
			return 0;
		}
		List<GameObject> list = FindList(prefab);
		return list != null ? list.Count : 0;
	}
}
}
