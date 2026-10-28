// rea decompile_all
// name: CakeOrder.InGame.InGameUITutorialProcessBooster.<Process>d__38$$MoveNext
// address: 0x42900fc
// body: available
// range: 0x42900fc-0x42902bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42902b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_InGame_InGameUITutorialProcessBooster_<Process>d__38__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  if ((DAT_0951718f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091cfd30);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_0951718f = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  if (iVar1 < 3) {
    if (iVar1 - 1U < 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 == 0) {
LAB_042902b8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(0);
      }
      uVar2 = CakeOrder_InGame_InGameUITutorialProcessBooster__IEShowBoosterFlyAndUnlock(lVar5);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
      uVar4 = 3;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 == 0) goto LAB_042902b8;
      if (*(char *)(lVar5 + 0x38) != '\0') {
        *(undefined1 *)(lVar5 + 0xe8) = 0;
        CakeOrder_InGame_InGameUITutorialProcessBooster__TakeReward(lVar5);
        uVar2 = thunk_FUN_03f9944c(DAT_09177ab8);
        FUN_053007d8(uVar2,lVar5,DAT_091cfd30,0);
        uVar3 = thunk_FUN_03f9944c(DAT_0918cec0);
        UnityEngine_WaitUntil___ctor(uVar3,uVar2,0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      uVar2 = CakeOrder_InGame_InGameUITutorialProcessBooster__IEShowStepOpenBox(lVar5);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
      uVar4 = 2;
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      CakeOrder_TimeControlCakeOrder__ResumeTime(lVar5,0);
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) goto LAB_042902b8;
    uVar2 = CakeOrder_InGame_InGameUITutorialProcessBooster__IEUnlockAndUseBooster(lVar5);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
    uVar4 = 4;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return 1;
}

