using System;

namespace _GAME.GameUI;

[Serializable]
public enum PopupAction
{
	None,
	OpenImmediate,
	CloseImmediate,
	OpenAlpha,
	CloseAlpha,
	OpenScale,
	OpenMoveUp,
	OpenMoveDown,
	OpenMoveLeft,
	OpenMoveRight,
	CloseScale,
	CloseMoveUp,
	CloseMoveDown,
	CloseMoveLeft,
	CloseMoveRight
}
