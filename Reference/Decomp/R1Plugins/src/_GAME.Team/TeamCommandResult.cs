namespace _GAME.Team;

public sealed class TeamCommandResult
{
	public bool requestSucceeded;

	public int status;

	public bool IsSuccess => false;

	public static TeamCommandResult TransportFailure()
	{
		return null;
	}

	public static TeamCommandResult FromStatus(int status)
	{
		return null;
	}
}
