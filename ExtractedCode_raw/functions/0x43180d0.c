// rea decompile_all
// name: CakeOrder.Home.HomeMapGlobalBackgroundControl$$CleanupOldEffects
// address: 0x43180d0
// body: available
// range: 0x43180d0-0x43181d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeMapGlobalBackgroundControl__CleanupOldEffects(long param_1)

{
  ulong uVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_09517611 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    DAT_09517611 = 1;
  }
  uVar1 = FUN_0640f598(param_1 + 0x50,DAT_091977b8);
  if ((uVar1 & 1) != 0) {
    uStack_38 = *(undefined8 *)(param_1 + 0x58);
    local_40 = *(undefined8 *)(param_1 + 0x50);
    local_30 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_58 = uStack_38;
    local_60 = local_40;
    local_50 = local_30;
    UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&local_60,0);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar1 = FUN_0640f598(param_1 + 0x68,DAT_091977b8);
  if ((uVar1 & 1) != 0) {
    uStack_38 = *(undefined8 *)(param_1 + 0x70);
    local_40 = *(undefined8 *)(param_1 + 0x68);
    local_30 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_78 = uStack_38;
    local_80 = local_40;
    local_70 = local_30;
    UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&local_80,0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}

