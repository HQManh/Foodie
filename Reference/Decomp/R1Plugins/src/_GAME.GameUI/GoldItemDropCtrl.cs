using UnityEngine;

namespace _GAME.GameUI;

public class GoldItemDropCtrl : RwItemDropCtrl
{
	private bool _defaultSaved;

	private Sprite _defaultIcon;

	private bool _defaultPreserveAspect;

	public void SetIcon(Sprite icon)
	{
	}

	protected override void PlaySoundShow()
	{
	}

	protected override void PlaySoundDrop()
	{
	}

	protected override void ShowVfxShow(Vector3 dstPos)
	{
	}

	protected override void ShowVfxDrop(Vector3 dstPos)
	{
	}

	protected override void Despawn()
	{
	}
}
