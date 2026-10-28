// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.BinaryArray$$Write
// address: 0x74b8d20
// body: available
// range: 0x74b8d20-0x74b8ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b8fe8 to 0x74b62d8 System.Runtime.Serialization.Formatters.Binary.BinaryConverter$$WriteTypeInfo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74b8fec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b8ff0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b8ff4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_BinaryArray__Write(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  ulong uVar7;
  
  if ((DAT_09521452 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187008);
    DAT_09521452 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0x11) {
    if ((param_2 == 0) || (plVar3 = *(long **)(param_2 + 0x30), plVar3 == (long *)0x0))
    goto LAB_074b8fec;
    lVar6 = *plVar3;
    uVar5 = 0x11;
  }
  else {
    if (iVar1 != 0x10) {
      if (iVar1 != 0xf) {
        if ((param_2 != 0) && (plVar3 = *(long **)(param_2 + 0x30), plVar3 != (long *)0x0)) {
          (**(code **)(*plVar3 + 0x1e8))(plVar3,iVar1,*(undefined8 *)(*plVar3 + 0x1f0));
          plVar3 = *(long **)(param_2 + 0x30);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x278))
                      (plVar3,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)(*plVar3 + 0x280));
            plVar3 = *(long **)(param_2 + 0x30);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x1e8))
                        (plVar3,*(undefined4 *)(param_1 + 0x40),*(undefined8 *)(*plVar3 + 0x1f0));
              plVar3 = *(long **)(param_2 + 0x30);
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x278))
                          (plVar3,*(undefined4 *)(param_1 + 0x14),*(undefined8 *)(*plVar3 + 0x280));
                if (0 < *(int *)(param_1 + 0x14)) {
                  uVar7 = 0;
                  do {
                    lVar6 = *(long *)(param_1 + 0x18);
                    if (lVar6 == 0) goto LAB_074b8fec;
                    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_074b8ff0;
                    plVar3 = *(long **)(param_2 + 0x30);
                    if (plVar3 == (long *)0x0) goto LAB_074b8fec;
                    (**(code **)(*plVar3 + 0x278))
                              (plVar3,*(undefined4 *)(lVar6 + uVar7 * 4 + 0x20),
                               *(undefined8 *)(*plVar3 + 0x280));
                    uVar7 = uVar7 + 1;
                  } while ((long)uVar7 < (long)*(int *)(param_1 + 0x14));
                  if ((0xfffffffc < *(int *)(param_1 + 0x40) - 6U) && (0 < *(int *)(param_1 + 0x14))
                     ) {
                    uVar7 = 0;
                    do {
                      lVar6 = *(long *)(param_1 + 0x20);
                      if (lVar6 == 0) goto LAB_074b8fec;
                      if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_074b8ff0;
                      plVar3 = *(long **)(param_2 + 0x30);
                      if (plVar3 == (long *)0x0) goto LAB_074b8fec;
                      (**(code **)(*plVar3 + 0x278))
                                (plVar3,*(undefined4 *)(lVar6 + uVar7 * 4 + 0x20),
                                 *(undefined8 *)(*plVar3 + 0x280));
                      uVar7 = uVar7 + 1;
                    } while ((long)uVar7 < (long)*(int *)(param_1 + 0x14));
                  }
                }
                plVar3 = *(long **)(param_2 + 0x30);
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x1e8))
                            (plVar3,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(*plVar3 + 0x1f0)
                            );
                  System_Runtime_Serialization_Formatters_Binary_BinaryConverter__WriteTypeInfo
                            (*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                             *(undefined4 *)(param_1 + 0x38),param_2);
                  return;
                }
              }
            }
          }
        }
        goto LAB_074b8fec;
      }
      if ((param_2 == 0) || (plVar3 = *(long **)(param_2 + 0x30), plVar3 == (long *)0x0))
      goto LAB_074b8fec;
      (**(code **)(*plVar3 + 0x1e8))(plVar3,0xf,*(undefined8 *)(*plVar3 + 0x1f0));
      plVar3 = *(long **)(param_2 + 0x30);
      if (plVar3 == (long *)0x0) goto LAB_074b8fec;
      (**(code **)(*plVar3 + 0x278))
                (plVar3,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)(*plVar3 + 0x280));
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 == 0) goto LAB_074b8fec;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_074b8ff0;
      plVar3 = *(long **)(param_2 + 0x30);
      if (plVar3 == (long *)0x0) goto LAB_074b8fec;
      (**(code **)(*plVar3 + 0x278))
                (plVar3,*(undefined4 *)(lVar6 + 0x20),*(undefined8 *)(*plVar3 + 0x280));
      if (*(long **)(param_1 + 0x30) == (long *)0x0) goto LAB_074b8fec;
      if (*(long *)(**(long **)(param_1 + 0x30) + 0x40) != *(long *)(DAT_09187008 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar4 = (undefined4 *)thunk_FUN_03f99594();
      plVar3 = *(long **)(param_2 + 0x30);
      if (plVar3 == (long *)0x0) goto LAB_074b8fec;
      uVar2 = *puVar4;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x1e8);
      uVar5 = *(undefined8 *)(*plVar3 + 0x1f0);
      goto LAB_074b8e90;
    }
    if ((param_2 == 0) || (plVar3 = *(long **)(param_2 + 0x30), plVar3 == (long *)0x0))
    goto LAB_074b8fec;
    lVar6 = *plVar3;
    uVar5 = 0x10;
  }
  (**(code **)(lVar6 + 0x1e8))(plVar3,uVar5,*(undefined8 *)(lVar6 + 0x1f0));
  plVar3 = *(long **)(param_2 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x278))
              (plVar3,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)(*plVar3 + 0x280));
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_074b8ff0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar3 = *(long **)(param_2 + 0x30);
      if (plVar3 != (long *)0x0) {
        uVar2 = *(undefined4 *)(lVar6 + 0x20);
        uVar5 = *(undefined8 *)(*plVar3 + 0x280);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x278);
LAB_074b8e90:
                    /* WARNING: Could not recover jumptable at 0x074b8e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar3,uVar2,uVar5);
        return;
      }
    }
  }
LAB_074b8fec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

