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
		if (line == null)
		{
			return;
		}
		line.useWorldSpace = true;
		line.positionCount = 2;
		line.enabled = true;
		_root = root;
	}

	public Tween ShootTween(Vector3 target, float duration)
	{
		Tween tween = web.DOMove(target, duration);
		// ease inferred from the constant 5 passed to an unnamed helper in the pseudocode
		tween.SetEase(Ease.InQuad);
		return tween;
	}

	public Tween CatchTween(float duration)
	{
		// TODO(unrecovered): the target vector is read from an unnamed static block (DAT_0918cbd0 + 0xb8) that has no stub member.
		return null;
	}

	public void UpdateLine()
	{
		if (_root == null || line == null)
		{
			return;
		}
		line.SetPosition(0, _root.position);
		if (web == null)
		{
			return;
		}
		line.SetPosition(1, web.position);
	}
}
