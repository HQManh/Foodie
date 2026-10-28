// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$ShowInterOnQuitMidGame
// address: 0x4396aec
// body: available
// range: 0x4396aec-0x4396bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4396bc4 to 0x4396940 CakeOrder.InGame.LevelPlayLoadAndSetupControl$$ShowInterOnLeaveLevel (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4396bc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl__ShowInterOnQuitMidGame
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_09517a5f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b48b0);
    FUN_03f5c2a4(&DAT_091b48b8);
    DAT_09517a5f = 1;
  }
  uVar3 = FUN_05a8eda4(DAT_091b48b8);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *(long *)(DAT_091b48b0 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    iVar1 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__LevelAccumulatedOf
                      (*(undefined8 *)(param_1 + 0x30));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = IapAdsSystem_AdsManager__IsAllowInterQuitMidgame(lVar4,iVar1 + 1,0);
  }
  CakeOrder_InGame_LevelPlayLoadAndSetupControl__ShowInterOnLeaveLevel
            (param_1,param_2,uVar2 & 1,param_3);
  return;
}

