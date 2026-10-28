namespace _GAME.BaseGame;

public sealed class ABIServerIDCommandResult
{
	public bool requestSucceeded;

	public int status;

	public string serverId;

	public bool IsSuccess => false;

	public bool IsNotFound => false;
}
