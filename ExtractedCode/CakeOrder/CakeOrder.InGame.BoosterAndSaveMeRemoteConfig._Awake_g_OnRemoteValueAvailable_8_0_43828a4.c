// rea decompile_all
// name: CakeOrder.InGame.BoosterAndSaveMeRemoteConfig$$<Awake>g__OnRemoteValueAvailable|8_0
// address: 0x43828a4
// body: available
// range: 0x43828a4-0x4382a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4382a90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__<Awake>g__OnRemoteValueAvailable_8_0
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((DAT_09517984 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_09202530);
    FUN_03f5c2a4(&DAT_092182d0);
    FUN_03f5c2a4(&DAT_09221ed0);
    FUN_03f5c2a4(&DAT_09218308);
    DAT_09517984 = 1;
  }
  lVar1 = *(long *)(DAT_091b4aa8 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    uVar2 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar1 + 0xb8),DAT_092182d0,0);
    CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__UpdateRemoteConfigBooster(param_1,uVar2);
    lVar1 = *(long *)(DAT_091b4aa8 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    if (**(long **)(lVar1 + 0xb8) != 0) {
      uVar2 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar1 + 0xb8),DAT_09221ed0,0);
      lVar1 = CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__ImportData(uVar2,uVar2);
      if (lVar1 == 0) {
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogWarning(DAT_09202530,0);
      }
      else {
        *(long *)(param_1 + 0x38) = lVar1;
        thunk_FUN_03f5d7b8();
      }
      lVar1 = *(long *)(DAT_091b4aa8 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03f95a6c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03f95a6c();
      }
      if (**(long **)(lVar1 + 0xb8) != 0) {
        uVar2 = IapAdsSystem_RemoteConfigManager__GetString
                          (**(long **)(lVar1 + 0xb8),DAT_09218308,0);
        uVar3 = System_String__IsNullOrEmpty(uVar2,0);
        if ((uVar3 & 1) == 0) {
          uVar2 = CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__ImportPackData(uVar2);
          *(undefined8 *)(param_1 + 0x40) = uVar2;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

