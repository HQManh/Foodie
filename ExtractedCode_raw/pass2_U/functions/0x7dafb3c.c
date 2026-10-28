// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityAsyncExtensions.AssetBundleRequestAllAssetsConfiguredSource$$Cysharp.Threading.Tasks.IUniTaskSource.GetResult
// address: 0x7dafb3c
// body: available
// range: 0x7dafb3c-0x7dafb3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07dafaf0) */

undefined8
Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource__Cysharp_Threading_Tasks_IUniTaskSource_GetResult
          (long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((DAT_09525f21 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091bda48);
    DAT_09525f21 = 1;
  }
  uVar1 = FUN_064163c8(param_1 + 0x50,param_2,DAT_091bda48);
  if (*(char *)(param_1 + 0x48) != '\0') {
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x28,0);
    if ((uVar2 & 1) != 0) {
      return uVar1;
    }
  }
  Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource__TryReturn
            (param_1);
  return uVar1;
}

