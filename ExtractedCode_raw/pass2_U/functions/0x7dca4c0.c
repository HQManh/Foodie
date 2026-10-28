// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions$$TryResolveStateMachineMethod
// address: 0x7dca4c0
// body: available
// range: 0x7dca4c0-0x7dca79b inclusive
// range: 0x7dca7a0-0x7dca897 inclusive
// range: 0x7dca89c-0x7dca89f inclusive
// range: 0x7dca8a4-0x7dca8a7 inclusive
// range: 0x7dca8fc-0x7dca937 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dca798 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dca894 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dca89c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dca8a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dca928 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dca930 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dca934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07dca92c) */

bool Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__TryResolveStateMachineMethod
               (long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  
  if ((DAT_0952619c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6e18);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a748);
    FUN_03f5c2a4(&DAT_0917ae28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091871f8);
    DAT_0952619c = 1;
  }
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    *param_2 = lVar3;
    thunk_FUN_03f5d7b8(param_2,lVar3);
    plVar2 = (long *)*param_2;
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar4 = System_Type__op_Equality(plVar2,0,0);
      if ((uVar4 & 1) == 0) {
        if (plVar2 == (long *)0x0) goto LAB_07dca934;
        lVar3 = (**(code **)(*plVar2 + 0x7d8))(plVar2,0x3e,*(undefined8 *)(*plVar2 + 0x7e0));
        if ((lVar3 != 0) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
          bVar1 = false;
          uVar4 = 0;
          uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar10 = *(long **)(lVar3 + uVar4 * 8 + 0x20);
            plVar2 = (long *)FUN_04a7bc70(plVar10,0,DAT_091c6e18);
            if (plVar2 != (long *)0x0) {
              lVar8 = *plVar2;
              uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar7 != 0) {
                piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_0917a748) {
                    puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_07dca680;
                  }
                  uVar7 = uVar7 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a748,0);
LAB_07dca680:
              plVar2 = (long *)(*(code *)*puVar5)(plVar2,puVar5[1]);
              do {
                if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar8 = *plVar2;
                uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar7 != 0) {
                  piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                      puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_07dca6ec;
                    }
                    uVar7 = uVar7 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar7 != 0);
                }
                puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_07dca6ec:
                uVar7 = (*(code *)*puVar5)(plVar2,puVar5[1]);
                if ((uVar7 & 1) == 0) {
                  iVar11 = 6;
                  goto LAB_07dca804;
                }
                if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar8 = *plVar2;
                uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar7 != 0) {
                  piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_0917ae28) {
                      puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_07dca750;
                    }
                    uVar7 = uVar7 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar7 != 0);
                }
                puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917ae28,0);
LAB_07dca750:
                plVar6 = (long *)(*(code *)*puVar5)(plVar2,puVar5[1]);
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar8 = plVar6[2];
                lVar12 = *param_2;
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar7 = System_Type__op_Equality(lVar8,lVar12,0);
              } while ((uVar7 & 1) == 0);
              *param_1 = (long)plVar10;
              thunk_FUN_03f5d7b8(param_1,plVar10);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
              *param_2 = lVar8;
              thunk_FUN_03f5d7b8(param_2);
              iVar11 = 9;
              bVar1 = *plVar6 == DAT_091871f8;
LAB_07dca804:
              if (plVar2 != (long *)0x0) {
                lVar8 = *plVar2;
                uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar7 != 0) {
                  piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
                      puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_07dca864;
                    }
                    uVar7 = uVar7 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar7 != 0);
                }
                puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_07dca864:
                (*(code *)*puVar5)(plVar2,puVar5[1]);
              }
              if ((iVar11 != 6) && (iVar11 != 0)) {
                return bVar1;
              }
            }
            uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
      }
      return false;
    }
  }
LAB_07dca934:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

