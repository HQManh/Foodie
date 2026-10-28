namespace _GAME.Profile;

public sealed class ProfileQueryResult
{
	public bool requestSucceeded;

	public int status;

	public ProfileDbModel profile;

	public string rawServerId;

	public string rawName;

	public string rawCountryCode;

	public int rawAvatar;

	public int rawScore;

	public ProfileReadEnvelope envelope;

	public bool IsSuccess => false;
}
