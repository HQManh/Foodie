# Recovered Unity project

Recovered from `2b7fd30b-129a-41fc-a56e-29377fd046bd.apk` (Unity IL2CPP build, arm64-v8a).
Only for apps you have the right to examine.

## Open it
1. Install **Unity 6000.3.24f1** (Unity 6.3) through Unity Hub, with the Android build module.
2. Hub > Add > select this folder. The first import is slow (about 19,000 asset files).

## What is real and what is not
- **Recovered well:** 12 scenes, prefabs, textures, sprites, audio, meshes, materials,
  animations, fonts, shaders. `ProjectSettings/EditorBuildSettings.asset` keeps the scene order
  (Boot, InitManagers, SceneLoadingBuffer, NewHome, Miniscene, GameplayHUD, then the map scenes).
- **Not recoverable from an IL2CPP build:** C# method bodies.
  - `Assets/Scripts/Assembly-CSharp` holds class and field definitions only.
  - The other game assemblies (CakeOrder, CookingGraph.Runtime, DaivqUtilities, R1Plugins, ...)
    and third-party SDKs are stub DLLs in `Assets/Plugins`. They keep the scene and prefab
    script references intact but contain no logic. The game will not run as-is.
- **Third-party SDKs** (Firebase, AppsFlyer, AppLovin MAX, Google Mobile Ads, Spine, DOTween,
  Odin) are stubs. Import the real SDKs if you want them working, expect to re-link references.

## Reference/ (outside Assets, Unity ignores it)
- `Reference/DecompiledCode/<Assembly>/*.c` - Ghidra pseudocode for 22,305 native functions,
  named from IL2CPP metadata (`Namespace.Type.Method_<address>.c`). `_index.tsv` maps address,
  assembly, type, method to file.
  - Complete: Assembly-CSharp, CakeOrder, CakeOrder.DataSO / DataModel / System.Base.
  - Partial: CookingGraph.Runtime (967 of 1949).
  - Not decompiled yet: CookOrder.Cooking.Implement, DaivqUtilities, EssentialSystemR1,
    R1Plugins, IapAdsSystemR1, LiveOpsR1, PlatformServicesR1, SceneTransitionR1, UniTask.
  - Addresses in file names are Ghidra addresses = IL2CPP RVA + 0x100000.
- `Reference/il2cpp_method_addresses.tsv` - Ghidra address, kind, `Type$$Method` for 147,485 methods.

## Expect on first open
Compile errors from the stub assemblies and missing SDK native plugins are likely. Rewrite game
logic by hand using the pseudocode as a guide.
