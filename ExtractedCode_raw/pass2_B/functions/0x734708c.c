// rea decompile_all
// name: Lean.Touch.LeanFingerFilter$$UpdateAndGetFingers
// address: 0x734708c
// body: available
// range: 0x734708c-0x73473bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73473bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Lean_Touch_LeanFingerFilter__UpdateAndGetFingers(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  
  if ((DAT_09520702 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183148);
    FUN_03f5c2a4(&DAT_091ae150);
    FUN_03f5c2a4(&DAT_091ae158);
    FUN_03f5c2a4(&DAT_091ae178);
    FUN_03f5c2a4(&DAT_091ae138);
    FUN_03f5c2a4(&DAT_091ae180);
    FUN_03f5c2a4(&DAT_091ae188);
    FUN_03f5c2a4(&DAT_0917c610);
    DAT_09520702 = 1;
  }
  plVar4 = (long *)(param_1 + 0x30);
  lVar3 = *plVar4;
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_03f9944c(DAT_0917c610);
    FUN_057e0400(lVar3,DAT_091ae138);
    *plVar4 = lVar3;
    thunk_FUN_03f5d7b8(plVar4,lVar3);
    lVar3 = *plVar4;
    if (lVar3 == 0) goto LAB_073473bc;
  }
  iVar6 = *(int *)(lVar3 + 0x18);
  *(undefined4 *)(lVar3 + 0x18) = 0;
  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
  if (0 < iVar6) {
    System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar6,0);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    lVar2 = Lean_Touch_LeanSelectableByFinger__GetFingers
                      (*(undefined1 *)(param_1 + 0x14),0,0,*(undefined8 *)(param_1 + 0x20));
joined_r0x073471bc:
    if (lVar3 == 0) goto LAB_073473bc;
    FUN_057e0e78(lVar3,lVar2,DAT_091ae150);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      lVar3 = *plVar4;
      goto joined_r0x073471bc;
    }
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (iVar6 = *(int *)(*(long *)(param_1 + 0x28) + 0x18), -1 < iVar6 + -1)) {
    do {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_073473bc;
      iVar6 = iVar6 + -1;
      lVar3 = FUN_057e0998(*(long *)(param_1 + 0x28),iVar6,DAT_091ae188);
      if (lVar3 == 0) goto LAB_073473bc;
      if ((*(char *)(lVar3 + 0x18) == '\0') && (*(char *)(lVar3 + 0x19) != '\0')) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_073473bc;
        FUN_057e251c(*(long *)(param_1 + 0x28),iVar6,DAT_091ae178);
      }
    } while (0 < iVar6);
  }
  if ((param_2 & 1) != 0) {
    if (*plVar4 == 0) goto LAB_073473bc;
    iVar6 = *(int *)(*plVar4 + 0x18);
    if (-1 < iVar6 + -1) {
      do {
        if (*plVar4 == 0) goto LAB_073473bc;
        iVar6 = iVar6 + -1;
        lVar3 = FUN_057e0998(*plVar4,iVar6,DAT_091ae188);
        if (lVar3 == 0) goto LAB_073473bc;
        if ((*(char *)(lVar3 + 0x18) == '\0') && (*(char *)(lVar3 + 0x19) != '\0')) {
          if (*plVar4 == 0) goto LAB_073473bc;
          FUN_057e251c(*plVar4,iVar6,DAT_091ae178);
        }
      } while (0 < iVar6);
    }
  }
  if ((*(int *)(param_1 + 0x1c) < 1) ||
     (uVar1 = Lean_Touch_LeanFingerFilter__SimulatedFingersExist(*plVar4), (uVar1 & 1) == 0)) {
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar3 = *plVar4;
      if (lVar3 == 0) {
LAB_073473bc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar6 = *(int *)(lVar3 + 0x18);
      if (iVar6 != *(int *)(param_1 + 0x18)) {
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (0 < iVar6) {
          System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar6,0);
        }
      }
    }
  }
  else {
    uVar5 = 0;
    do {
      if ((*(uint *)(param_1 + 0x1c) >> (ulong)(uVar5 & 0x1f) & 1) != 0) {
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = CW_Common_CwInput__GetMouseIsHeld(uVar5,0);
        if ((uVar1 & 1) == 0) {
          if (*(int *)(DAT_09183148 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = CW_Common_CwInput__GetMouseWentUp(uVar5,0);
          if ((uVar1 & 1) == 0) {
            lVar3 = *plVar4;
            if (lVar3 == 0) goto LAB_073473bc;
            iVar6 = *(int *)(lVar3 + 0x18);
            *(undefined4 *)(lVar3 + 0x18) = 0;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (0 < iVar6) {
              System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar6,0);
            }
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 5);
  }
  return *plVar4;
}

