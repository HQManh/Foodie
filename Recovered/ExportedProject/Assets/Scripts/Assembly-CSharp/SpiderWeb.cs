using DG.Tweening;
using UnityEngine;

public class SpiderWeb : MonoBehaviour
{
	[SerializeField]
	private LineRenderer line;

	[SerializeField]
	private Transform web;

	private Transform _root;

	public void Setup(Transform root)
	{
	}

	public Tween ShootTween(Vector3 target, float duration)
	{
		return null;
	}

	public Tween CatchTween(float duration)
	{
		return null;
	}

	public void UpdateLine()
	{
	}
}
