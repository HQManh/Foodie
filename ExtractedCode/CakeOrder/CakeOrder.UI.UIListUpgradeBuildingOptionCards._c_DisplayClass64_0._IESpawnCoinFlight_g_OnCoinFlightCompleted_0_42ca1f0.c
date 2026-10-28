// rea decompile_all
// name: CakeOrder.UI.UIListUpgradeBuildingOptionCards.<>c__DisplayClass64_0$$<IESpawnCoinFlight>g__OnCoinFlightCompleted|0
// address: 0x42ca1f0
// body: available
// range: 0x42ca1f0-0x42ca35f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ca358 to 0x42c95ec CakeOrder.UI.UIListUpgradeBuildingOptionCards$$FinishUpgradeAnimation (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ca35c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIListUpgradeBuildingOptionCards_<>c__DisplayClass64_0__<IESpawnCoinFlight>g__OnCoinFlightCompleted_0
               (undefined4 param_1,undefined4 param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09517368 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af760);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517368 = 1;
  }
  if (((*(long *)(param_3 + 0x10) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_3 + 0x10) + 0x138), lVar2 != 0)) &&
     (FUN_057e2274(lVar2,param_4,DAT_091af760), param_4 != 0)) {
    uVar3 = UnityEngine_Component__get_gameObject(param_4,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    UnityEngine_Object__Destroy(uVar3,0);
    if ((param_5 & 1) != 0) {
      lVar2 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if ((*(long *)(param_3 + 0x10) == 0) || (**(long **)(lVar2 + 0xb8) == 0)) goto LAB_042ca35c;
      CakeOrder_AudioManagerCakeOrder__PlaySfx
                (0x3f800000,**(long **)(lVar2 + 0xb8),
                 *(undefined8 *)(*(long *)(param_3 + 0x10) + 0xe0),3,0);
    }
    iVar1 = *(int *)(param_3 + 0x18) + -1;
    *(int *)(param_3 + 0x18) = iVar1;
    if (iVar1 != 0) {
      return;
    }
    if (*(long *)(param_3 + 0x10) != 0) {
      CakeOrder_UI_UIListUpgradeBuildingOptionCards__FinishUpgradeAnimation
                (param_1,param_2,*(long *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
      return;
    }
  }
LAB_042ca35c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

