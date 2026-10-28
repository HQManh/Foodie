// rea decompile_all
// name: System.LocalDataStore$$PopulateElement
// address: 0x75e030c
// body: available
// range: 0x75e030c-0x75e053f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e04c4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e04c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e0518 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e051c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e0520 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e0524 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e0528 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e052c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e0530 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e0534 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e0538 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e053c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x075e04c4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 System_LocalDataStore__PopulateElement(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char local_44 [4];
  
  if ((DAT_09521ec5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180258);
    FUN_03f5c2a4(&DAT_09187ac8);
    DAT_09521ec5 = 1;
  }
  local_44[0] = '\0';
  System_Runtime_CompilerServices_RuntimeHelpers__PrepareConstrainedRegions(0);
  System_Threading_Monitor__Enter(*(undefined8 *)(param_1 + 0x18),local_44,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  if ((int)uVar2 < 0) {
    uVar4 = thunk_FUN_03fc39d4(&DAT_092070b8);
    uVar4 = System_Environment__GetResourceString(uVar4,0);
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar6 = thunk_FUN_03f9944c();
    System_InvalidOperationException___ctor(uVar6,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091d2698);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar4);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar7 + 0x18) <= (int)uVar2) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = FUN_03f5c394(DAT_09180258,*(undefined4 *)(lVar7 + 0x18));
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Array__Copy(lVar7,uVar4,*(undefined4 *)(lVar7 + 0x18),0);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar4);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  if (*(uint *)(lVar7 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  lVar1 = lVar7 + (ulong)uVar2 * 8;
  plVar8 = (long *)(lVar1 + 0x20);
  if (*plVar8 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    lVar5 = thunk_FUN_03f9944c(DAT_09187ac8);
    System_Object___ctor(lVar5,0);
    uVar3 = *(uint *)(lVar7 + 0x18);
    *(undefined8 *)(lVar5 + 0x18) = uVar4;
    if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *plVar8 = lVar5;
    thunk_FUN_03f5d7b8(lVar1 + 0x20,lVar5);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  if (uVar2 < *(uint *)(lVar7 + 0x18)) {
    uVar4 = *(undefined8 *)(lVar7 + (ulong)uVar2 * 8 + 0x20);
    if (local_44[0] != '\0') {
      System_Threading_Monitor__Exit(*(undefined8 *)(param_1 + 0x18),0);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

