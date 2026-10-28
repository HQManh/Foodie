// rea decompile_all
// name: PlatformServiceR1.UIPopupConfirmUseCloudData$$UpdateTitleAndDesc
// address: 0x7736da0
// body: available
// range: 0x7736da0-0x7737263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x773725c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7737260 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void PlatformServiceR1_UIPopupConfirmUseCloudData__UpdateTitleAndDesc(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((DAT_09522a95 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09212900);
    FUN_03f5c2a4(&DAT_0920bee0);
    FUN_03f5c2a4(&DAT_09201c88);
    FUN_03f5c2a4(&DAT_091fff10);
    FUN_03f5c2a4(&DAT_09213978);
    FUN_03f5c2a4(&DAT_091f9068);
    FUN_03f5c2a4(&DAT_091fca28);
    FUN_03f5c2a4(&DAT_0920b730);
    FUN_03f5c2a4(&DAT_091fd840);
    FUN_03f5c2a4(&DAT_0920bee8);
    FUN_03f5c2a4(&DAT_091feaf8);
    FUN_03f5c2a4(&DAT_092128f0);
    FUN_03f5c2a4(&DAT_091f9018);
    FUN_03f5c2a4(&DAT_091f6618);
    FUN_03f5c2a4(&DAT_091f6100);
    FUN_03f5c2a4(&DAT_091f60e0);
    FUN_03f5c2a4(&DAT_09210448);
    DAT_09522a95 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x10);
    if (iVar1 == 2) {
      plVar2 = *(long **)(param_1 + 0x28);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x5e8))(plVar2,DAT_0920bee8,*(undefined8 *)(*plVar2 + 0x5f0));
        plVar2 = *(long **)(param_1 + 0x30);
        lVar4 = FUN_03f5c394(DAT_091805f8,5);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) != 0) {
            *(undefined8 *)(lVar4 + 0x20) = DAT_09213978;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20));
            uVar3 = PlatformServiceR1_UIPopupConfirmUseCloudData__get_TimeCloudText(param_1);
            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar4 + 0x28) = uVar3;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x28),uVar3);
              if (2 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x30) = DAT_091f6100;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x30));
                uVar3 = PlatformServiceR1_UIPopupConfirmUseCloudData__get_TimeLocalText(param_1);
                if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar4 + 0x38) = uVar3;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38),uVar3);
                  if (4 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x40) = DAT_091f9018;
                    thunk_FUN_03f5d7b8();
                    uVar3 = System_String__Concat(lVar4,0);
                    if (plVar2 != (long *)0x0) {
                      (**(code **)(*plVar2 + 0x5e8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5f0));
                      plVar2 = *(long **)(param_1 + 0x48);
                      if (plVar2 != (long *)0x0) {
                        (**(code **)(*plVar2 + 0x5e8))
                                  (plVar2,DAT_0920bee0,*(undefined8 *)(*plVar2 + 0x5f0));
                        plVar2 = *(long **)(param_1 + 0x50);
                        if (plVar2 != (long *)0x0) {
                          puVar5 = &DAT_091fd840;
                          goto LAB_0773722c;
                        }
                      }
                    }
                    goto LAB_0773725c;
                  }
                }
              }
            }
          }
LAB_07737260:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
      }
    }
    else if (iVar1 == 1) {
      plVar2 = *(long **)(param_1 + 0x28);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x5e8))(plVar2,DAT_091fff10,*(undefined8 *)(*plVar2 + 0x5f0));
        plVar2 = *(long **)(param_1 + 0x30);
        lVar4 = FUN_03f5c394(DAT_091805f8,5);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) != 0) {
            *(undefined8 *)(lVar4 + 0x20) = DAT_09210448;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20));
            uVar3 = PlatformServiceR1_UIPopupConfirmUseCloudData__get_TimeCloudText(param_1);
            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar4 + 0x28) = uVar3;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x28),uVar3);
              if (2 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x30) = DAT_091f60e0;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x30));
                uVar3 = PlatformServiceR1_UIPopupConfirmUseCloudData__get_TimeLocalText(param_1);
                if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar4 + 0x38) = uVar3;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38),uVar3);
                  if (4 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x40) = DAT_091f9068;
                    thunk_FUN_03f5d7b8();
                    uVar3 = System_String__Concat(lVar4,0);
                    if (plVar2 != (long *)0x0) {
                      (**(code **)(*plVar2 + 0x5e8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5f0));
                      plVar2 = *(long **)(param_1 + 0x48);
                      if (plVar2 != (long *)0x0) {
                        (**(code **)(*plVar2 + 0x5e8))
                                  (plVar2,DAT_092128f0,*(undefined8 *)(*plVar2 + 0x5f0));
                        plVar2 = *(long **)(param_1 + 0x50);
                        if (plVar2 != (long *)0x0) {
                          puVar5 = &DAT_09212900;
                          goto LAB_0773722c;
                        }
                      }
                    }
                    goto LAB_0773725c;
                  }
                }
              }
            }
          }
          goto LAB_07737260;
        }
      }
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      plVar2 = *(long **)(param_1 + 0x28);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x5e8))(plVar2,DAT_09201c88,*(undefined8 *)(*plVar2 + 0x5f0));
        plVar2 = *(long **)(param_1 + 0x30);
        uVar3 = PlatformServiceR1_UIPopupConfirmUseCloudData__get_TimeCloudText(param_1);
        uVar3 = System_String__Concat(DAT_091feaf8,uVar3,DAT_091f6618,0);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x5e8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5f0));
          plVar2 = *(long **)(param_1 + 0x48);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x5e8))(plVar2,DAT_0920b730,*(undefined8 *)(*plVar2 + 0x5f0));
            plVar2 = *(long **)(param_1 + 0x50);
            if (plVar2 != (long *)0x0) {
              puVar5 = &DAT_091fca28;
LAB_0773722c:
                    /* WARNING: Could not recover jumptable at 0x07737248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar2 + 0x5e8))(plVar2,*puVar5,*(undefined8 *)(*plVar2 + 0x5f0));
              return;
            }
          }
        }
      }
    }
  }
LAB_0773725c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

