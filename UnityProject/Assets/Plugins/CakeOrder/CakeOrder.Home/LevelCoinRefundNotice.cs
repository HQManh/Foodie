using Cysharp.Threading.Tasks;

namespace CakeOrder.Home
{

public class LevelCoinRefundNotice : NewVersionNotice
{
	private const string PastaMapId = "pasta";

	// Values read from the static constructor (string literals decoded from the metadata).
	private static readonly string[] MapsWithOldExtraLevels = new string[4] { "burger", "coffee", "sushi", "pasta" };

	private const string LocUpgradesOpen = "nv_upgrades_open";

	private const string LocNewToolLevels = "nv_new_tool_levels";

	public override int Order => 0;

	public override string VersionLabel => null;

	public override UniTask<NewVersionNoticeContent> BuildAsync(NewVersionContext context)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<NewVersionNoticeContent>);
	}

	private static int LegacyCoinAt(int[] table, int levelIndex)
	{
		return 0;
	}

	private static string MapName(string mapId)
	{
		return null;
	}
}
}
