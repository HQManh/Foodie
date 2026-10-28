// rea decompile_all
// name: System.DefaultBinder$$ReorderArgumentArray
// address: 0x75e8900
// body: available
// range: 0x75e8900-0x75e8c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e8be0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75e8bfc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e8c00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e8c0c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e8c18 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e8c20 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e8c2c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DefaultBinder__ReorderArgumentArray(undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  if ((DAT_09521ee3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09190008);
    FUN_03f5c2a4(&DAT_09183868);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521ee3 = 1;
  }
  if (param_3 != (long *)0x0) {
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(DAT_09190008 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_09190008 + 0x130) * 8 + -8) !=
        DAT_09190008)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_3);
    }
    lVar8 = param_3[2];
    lVar9 = *param_2;
    if (*(int *)(DAT_09183868 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_DefaultBinder__ReorderParams(lVar8,lVar9);
    uVar5 = DAT_09180318;
    plVar10 = (long *)*param_2;
    if (*(char *)((long)param_3 + 0x1c) == '\0') {
      if (plVar10 != (long *)0x0) {
        if ((int)plVar10[3] <= (int)param_3[3]) {
          return;
        }
        plVar7 = (long *)FUN_03f5c394(DAT_09180318);
        System_Array__Copy(*param_2,0,plVar7,0,(int)param_3[3],0);
        *param_2 = (long)plVar7;
LAB_075e8bcc:
        thunk_FUN_03f5d7b8(param_2,plVar7);
        return;
      }
    }
    else if (plVar10 != (long *)0x0) {
      iVar1 = (int)plVar10[3];
      uVar2 = iVar1 - 1;
      if ((int)param_3[3] == iVar1) {
        if (iVar1 == 0) {
LAB_075e8bfc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar8 = plVar10[(long)(int)uVar2 + 4];
        if (lVar8 != 0) {
          lVar9 = thunk_FUN_03f99350(lVar8,DAT_09180318);
          uVar3 = DAT_09180318;
          if (lVar9 != 0) {
            lVar9 = thunk_FUN_03f99350(lVar8,DAT_09180318);
            uVar5 = uVar3;
            if (lVar9 != 0) {
              if (*(int *)(lVar9 + 0x18) != 0) {
                plVar7 = *(long **)(lVar9 + 0x20);
                if ((plVar7 != (long *)0x0) &&
                   (lVar8 = thunk_FUN_03f99350(plVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)
                   ) {
LAB_075e8c10:
                  uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar5,0);
                }
                if (uVar2 < *(uint *)(plVar10 + 3)) {
                  param_2 = plVar10 + (long)(int)uVar2 + 4;
                  plVar10[(long)(int)uVar2 + 4] = (long)plVar7;
                  goto LAB_075e8bcc;
                }
              }
              goto LAB_075e8bfc;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar8,uVar5);
        }
      }
      else {
        plVar7 = (long *)FUN_03f5c394(DAT_09180318);
        System_Array__Copy(*param_2,0,plVar7,0,uVar2,0);
        if (plVar7 != (long *)0x0) {
          if ((int)uVar2 < (int)plVar7[3]) {
            lVar9 = (long)(int)uVar2;
            lVar8 = 0;
            plVar10 = plVar7 + lVar9 + 4;
            do {
              uVar5 = DAT_09180318;
              lVar6 = *param_2;
              if (lVar6 == 0) goto LAB_075e8c00;
              if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_075e8bfc;
              lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_075e8c00;
              lVar4 = thunk_FUN_03f99350(lVar6,DAT_09180318);
              uVar3 = DAT_09180318;
              if (lVar4 == 0) {
LAB_075e8c04:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(lVar6,uVar5);
              }
              lVar4 = thunk_FUN_03f99350(lVar6,DAT_09180318);
              uVar5 = uVar3;
              if (lVar4 == 0) goto LAB_075e8c04;
              uVar11 = (uint)lVar8;
              if (*(uint *)(lVar4 + 0x18) <= uVar11) goto LAB_075e8bfc;
              lVar6 = *(long *)(lVar4 + (long)(int)uVar11 * 8 + 0x20);
              if ((lVar6 != 0) &&
                 (lVar4 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
              goto LAB_075e8c10;
              if (*(uint *)(plVar7 + 3) <= uVar2 + uVar11) goto LAB_075e8bfc;
              *plVar10 = lVar6;
              thunk_FUN_03f5d7b8(plVar10,lVar6);
              lVar8 = lVar8 + 1;
              plVar10 = plVar10 + 1;
            } while (lVar9 + lVar8 < (long)(int)plVar7[3]);
          }
          *param_2 = (long)plVar7;
          goto LAB_075e8bcc;
        }
      }
    }
  }
LAB_075e8c00:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

