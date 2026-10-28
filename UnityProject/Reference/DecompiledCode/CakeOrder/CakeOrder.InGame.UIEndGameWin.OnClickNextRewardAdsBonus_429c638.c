// rea decompile_all
// name: CakeOrder.InGame.UIEndGameWin$$OnClickNextRewardAdsBonus
// address: 0x429c638
// body: available
// range: 0x429c638-0x429c7db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429c7d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIEndGameWin__OnClickNextRewardAdsBonus(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  float fVar4;
  undefined4 uVar5;
  
  if ((DAT_09517203 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09180fe8);
    FUN_03f5c2a4(&DAT_091dc940);
    FUN_03f5c2a4(&DAT_09221b88);
    FUN_03f5c2a4(&DAT_0921afa8);
    FUN_03f5c2a4(&DAT_0921be80);
    DAT_09517203 = 1;
  }
  if (((*(char *)(param_1 + 0x1b9) == '\0') && (*(char *)(param_1 + 0x1ba) == '\0')) &&
     (fVar4 = (float)UnityEngine_Time__get_unscaledTime(0),
     *(float *)(param_1 + 0x118) + 3.0 <= fVar4)) {
    uVar5 = UnityEngine_Time__get_unscaledTime(0);
    plVar3 = *(long **)(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0x118) = uVar5;
    lVar1 = thunk_FUN_03f9944c(DAT_09180fe8);
    IapAdsSystem_AdsRuntimeData___ctor(lVar1,0);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = DAT_09221b88;
      thunk_FUN_03f5d7b8();
      uVar2 = DAT_09221b88;
      *(undefined4 *)(lVar1 + 0x28) = 1;
      *(undefined8 *)(lVar1 + 0x30) = uVar2;
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(lVar1 + 0x38) = DAT_0921afa8;
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(lVar1 + 0x40) = DAT_0921be80;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40));
      uVar2 = DAT_09180e78;
      *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(param_1 + 0x1c8);
      uVar2 = thunk_FUN_03f9944c(uVar2);
      System_Action___ctor(uVar2,param_1,DAT_091dc940,0);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0429c7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x238))(plVar3,lVar1,uVar2,0,*(undefined8 *)(*plVar3 + 0x240));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

