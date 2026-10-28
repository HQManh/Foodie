namespace _GAME.Profile;

public readonly struct ProfileReadEnvelope
{
	public ProfileDbModel Profile { get; }

	public ProfileSnapshotQuality Quality { get; }

	public string SourceTag { get; }

	public string DiagnosticCode { get; }

	public bool HasProfile => false;

	public bool IsTrustworthy => false;

	private ProfileReadEnvelope(ProfileDbModel profile, ProfileSnapshotQuality quality, string sourceTag, string diagnosticCode)
	{
		Profile = null;
		Quality = ProfileSnapshotQuality.Unspecified;
		SourceTag = null;
		DiagnosticCode = null;
	}

	internal static ProfileReadEnvelope Authoritative(ProfileDbModel profile, string sourceTag)
	{
		return default(ProfileReadEnvelope);
	}

	internal static ProfileReadEnvelope LegacyRecovered(ProfileDbModel profile, string sourceTag)
	{
		return default(ProfileReadEnvelope);
	}

	internal static ProfileReadEnvelope LocalAuthoritative(ProfileDbModel profile, string sourceTag)
	{
		return default(ProfileReadEnvelope);
	}

	public static ProfileReadEnvelope Fallback(ProfileDbModel profile, string sourceTag, string diagnosticCode = "PRF_FALLBACK")
	{
		return default(ProfileReadEnvelope);
	}

	public static ProfileReadEnvelope ParseFailed(string sourceTag, string diagnosticCode)
	{
		return default(ProfileReadEnvelope);
	}

	public static ProfileReadEnvelope ParseFailed(ProfileDbModel fallbackProfile, string sourceTag, string diagnosticCode)
	{
		return default(ProfileReadEnvelope);
	}

	public static ProfileReadEnvelope Unmigrated(ProfileDbModel profile, string sourceTag)
	{
		return default(ProfileReadEnvelope);
	}
}
