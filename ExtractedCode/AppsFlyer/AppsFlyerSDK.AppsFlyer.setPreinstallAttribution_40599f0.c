// rea decompile_all
// name: AppsFlyerSDK.AppsFlyer$$setPreinstallAttribution
// address: 0x40599f0
// body: available
// range: 0x40599f0-0x4059ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_AppsFlyer__setPreinstallAttribution
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if ((DAT_09515b8f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091e6078);
    DAT_09515b8f = 1;
  }
  local_40 = 0;
  uStack_58 = 0;
  auStack_68._8_8_ = 0;
  local_48 = 0;
  local_50 = 0;
  auStack_68._0_8_ = 0;
  local_70 = 0;
  auStack_68 = UnityEngine_Awaitable_AwaitableAsyncMethodBuilder__Create(0);
  thunk_FUN_03f5d7b8((ulong)&local_70 | 8,0);
  uStack_58 = param_1;
  thunk_FUN_03f5d7b8(&uStack_58,param_1);
  local_50 = param_2;
  thunk_FUN_03f5d7b8(&local_50,param_2);
  local_48 = param_3;
  thunk_FUN_03f5d7b8(&local_48,param_3);
  local_70 = CONCAT44(local_70._4_4_,0xffffffff);
  FUN_04071680((ulong)&local_70 | 8,&local_70,DAT_091e6078);
  UnityEngine_Awaitable_AwaitableAsyncMethodBuilder__get_Task((ulong)&local_70 | 8,0);
  return;
}

