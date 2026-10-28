namespace _GAME.Profile;

public readonly struct LegacyProfilePopupOpenArgs
{
	public bool AllowCustomRoomNavigation { get; }

	public ProfileOpenSource Source { get; }

	public int Generation { get; }

	public static LegacyProfilePopupOpenArgs Default => default(LegacyProfilePopupOpenArgs);

	public LegacyProfilePopupOpenArgs(bool allowCustomRoomNavigation, ProfileOpenSource source, int generation = 0)
	{
		AllowCustomRoomNavigation = false;
		Source = ProfileOpenSource.Unknown;
		Generation = 0;
	}
}
