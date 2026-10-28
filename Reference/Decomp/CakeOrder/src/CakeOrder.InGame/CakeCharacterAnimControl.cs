using DG.Tweening;
using UnityEngine;

namespace CakeOrder.InGame;

public class CakeCharacterAnimControl : MonoBehaviour
{
	[SerializeField]
	private SpriteRenderer _spriteRenderer;

	private Tween _tweenColor;

	public void SetBlendColor(Color color)
	{
	}

	public void ChangeBlendColor(Color color, float duration)
	{
	}

	public void Appear()
	{
	}
}
