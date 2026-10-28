// rea decompile_all
// name: System.Diagnostics.StackTrace$$ConvertAsyncStateMachineMethod
// address: 0x754fb50
// body: available
// range: 0x754fb50-0x754fdf3 inclusive
// range: 0x754fdf8-0x754fed3 inclusive
// range: 0x754fed8-0x754fedb inclusive
// range: 0x754fee0-0x754fee3 inclusive
// range: 0x754ff38-0x754ff67 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x754fdf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754fed0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754fed8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754fee0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754ff58 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754ff60 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754ff64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0754ff5c) */

void System_Diagnostics_StackTrace__ConvertAsyncStateMachineMethod
               (undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  
  if ((DAT_09521929 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6df0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a358);
    FUN_03f5c2a4(&DAT_0917a9e0);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09521929 = 1;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
LAB_0754ff64:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar1 = (long *)(**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar2 = System_Type__op_Equality(plVar1,0,0);
  if ((uVar2 & 1) == 0) {
    if (plVar1 == (long *)0x0) goto LAB_0754ff64;
    lVar3 = (**(code **)(*plVar1 + 0x7d8))(plVar1,0x3e,*(undefined8 *)(*plVar1 + 0x7e0));
    if ((lVar3 != 0) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
      uVar2 = 0;
      uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar8 = *(long **)(lVar3 + uVar2 * 8 + 0x20);
        plVar1 = (long *)FUN_04a7bbc0(plVar8,DAT_091c6df0);
        if (plVar1 != (long *)0x0) {
          lVar6 = *plVar1;
          uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917a358) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0754fcd8;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917a358,0);
LAB_0754fcd8:
          plVar1 = (long *)(*(code *)*puVar4)(plVar1,puVar4[1]);
          do {
            if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar1;
            uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar5 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_0754fd44;
                }
                uVar5 = uVar5 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185b10,0);
LAB_0754fd44:
            uVar5 = (*(code *)*puVar4)(plVar1,puVar4[1]);
            if ((uVar5 & 1) == 0) {
              iVar10 = 6;
              goto LAB_0754fe40;
            }
            if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar1;
            uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar5 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917a9e0) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_0754fda8;
                }
                uVar5 = uVar5 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917a9e0,0);
LAB_0754fda8:
            lVar6 = (*(code *)*puVar4)(plVar1,puVar4[1]);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar9 = *(undefined8 *)(lVar6 + 0x10);
            lVar6 = *param_2;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_095354b8);
            }
            uVar5 = System_Type__op_Equality(uVar9,lVar6,0);
          } while ((uVar5 & 1) == 0);
          *param_1 = plVar8;
          thunk_FUN_03f5d7b8(param_1,plVar8);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
          *param_2 = lVar6;
          thunk_FUN_03f5d7b8(param_2);
          iVar10 = 9;
LAB_0754fe40:
          if (plVar1 != (long *)0x0) {
            lVar6 = *plVar1;
            uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar5 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09185a58) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_0754fea0;
                }
                uVar5 = uVar5 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185a58,0);
LAB_0754fea0:
            (*(code *)*puVar4)(plVar1,puVar4[1]);
          }
          if ((iVar10 != 6) && (iVar10 != 0)) {
            return;
          }
        }
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
  }
  return;
}

