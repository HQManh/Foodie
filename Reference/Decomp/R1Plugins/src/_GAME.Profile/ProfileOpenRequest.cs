namespace _GAME.Profile;

public readonly struct ProfileOpenRequest
{
	public ProfileOpenSource Source { get; }

	public string TargetServerId { get; }

	public ProfileReadEnvelope Envelope { get; }

	public ProfileDbModel Profile => null;

	public bool IsValid => false;

	public ProfileOpenRequest(ProfileOpenSource source, string targetServerId, ProfileReadEnvelope envelope)
	{
		Source = ProfileOpenSource.Unknown;
		TargetServerId = null;
		Envelope = default(ProfileReadEnvelope);
	}
}
