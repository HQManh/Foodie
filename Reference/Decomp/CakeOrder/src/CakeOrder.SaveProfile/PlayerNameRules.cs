namespace CakeOrder.SaveProfile;

public static class PlayerNameRules
{
	public enum Result
	{
		Valid,
		TooShort,
		TooLong,
		IllegalCharacter
	}

	public const int MinLength = 3;

	public const int MaxLength = 16;

	private const string LocTooShort = "toast_name_too_short";

	private const string LocTooLong = "toast_name_too_long";

	private const string LocIllegalCharacter = "toast_name_illegal_chars";

	public static string Normalize(string raw)
	{
		return null;
	}

	public static bool IsAllowedChar(char c)
	{
		return false;
	}

	public static Result Validate(string raw, out string normalized)
	{
		normalized = null;
		return Result.Valid;
	}

	public static bool IsValid(string raw)
	{
		return false;
	}

	public static string GetMessage(Result result)
	{
		return null;
	}

	public static string GenerateDefaultName()
	{
		return null;
	}
}
