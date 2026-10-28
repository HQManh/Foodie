// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$ReleaseAllLoadedAsset
// address: 0x4397830
// body: available
// range: 0x4397830-0x4397aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4397aa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl__ReleaseAllLoadedAsset(long param_1)

{
  ulong uVar1;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 *puStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09517a6f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_091a1d08);
    FUN_03f5c2a4(&DAT_091a2218);
    FUN_03f5c2a4(&DAT_091a2220);
    FUN_03f5c2a4(&DAT_091a1d10);
    FUN_03f5c2a4(&DAT_091a1d18);
    FUN_03f5c2a4(&DAT_091a2228);
    FUN_03f5c2a4(&DAT_091ab188);
    FUN_03f5c2a4(&DAT_091aa4f8);
    DAT_09517a6f = 1;
  }
  local_70 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_057175b4(&local_130,*(long *)(param_1 + 0x58),DAT_091ab188);
    puStack_138 = &local_90;
    local_140 = 0;
    uStack_88 = uStack_128;
    local_90 = local_130;
    uStack_78 = uStack_118;
    local_80 = local_120;
    local_70 = local_110;
    while (uVar1 = FUN_0718db70(&local_90,DAT_091a2220), (uVar1 & 1) != 0) {
      uStack_a8 = uStack_78;
      local_b0 = local_80;
      local_a0 = local_70;
      uVar1 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__IsValid
                        (&local_b0,0);
      if ((uVar1 & 1) != 0) {
        uStack_128 = uStack_a8;
        local_130 = local_b0;
        local_120 = local_a0;
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_158 = uStack_128;
        local_160 = local_130;
        local_150 = local_120;
        UnityEngine_AddressableAssets_Addressables__Release(&local_160,0);
      }
    }
    FUN_0718db6c(&local_90,DAT_091a2218);
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_0564f950(&local_e0,*(long *)(param_1 + 0x60),DAT_091aa4f8);
      local_140 = 0;
      puStack_138 = &local_e0;
      while (uVar1 = FUN_0717ed58(&local_e0,DAT_091a1d10), (uVar1 & 1) != 0) {
        uStack_f8 = uStack_c8;
        local_100 = local_d0;
        local_f0 = local_c0;
        uVar1 = FUN_0640f598(&local_100,DAT_091977b8);
        if ((uVar1 & 1) != 0) {
          uStack_128 = uStack_f8;
          local_130 = local_100;
          local_120 = local_f0;
          if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_178 = uStack_128;
          local_180 = local_130;
          local_170 = local_120;
          UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&local_180,0);
        }
      }
      FUN_0717ed54(&local_e0,DAT_091a1d08);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

