using Cysharp.Threading.Tasks;

namespace CakeOrder.Home
{

public class UpgradeRebalanceNotice : NewVersionNotice
{
	// Value read from the static constructor (string literal decoded from the metadata).
	private static readonly string[] MapsWithNewExtraLevels = new string[1] { "burger" };

	private const string LocNewParts = "nv_1_3_new_parts";

	private const string LocExtraLevels = "nv_1_3_extra_levels";

	public override int Order => 0;

	public override string VersionLabel => null;

	public override UniTask<NewVersionNoticeContent> BuildAsync(NewVersionContext context)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<NewVersionNoticeContent>);
	}
}
}
