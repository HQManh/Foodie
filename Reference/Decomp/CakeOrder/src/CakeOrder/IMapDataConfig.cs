using Cysharp.Threading.Tasks;

namespace CakeOrder;

public interface IMapDataConfig
{
	UniTask SetUpAfterSpawn(string mapId, params string[] remoteConfigStrings);
}
