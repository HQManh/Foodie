// rea decompile_all
// name: AnhPD.FoodOrder.TutorialTargetResolver$$FindBeltItemBehindFront
// address: 0x411cfac
// body: available
// range: 0x411cfac-0x411d2b7 inclusive
// range: 0x411d2f8-0x411d38f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411d2a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411d2a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411d2a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411d2b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411d2b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411d38c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0411d38c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long AnhPD_FoodOrder_TutorialTargetResolver__FindBeltItemBehindFront(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  if ((DAT_09516268 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516268 = 1;
  }
  uVar6 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  lVar8 = 0;
  if ((uVar2 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_0411d2a8;
    lVar8 = AnhPD_FoodOrder_MessyController__get_Spawner(**(long **)(DAT_091881a0 + 0xb8),0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar8,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar2 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (((lVar8 != 0) && (*(long *)(lVar8 + 0x1a0) != 0)) &&
     (plVar7 = *(long **)(*(long *)(lVar8 + 0x1a0) + 0x20), plVar7 != (long *)0x0)) {
    lVar8 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917a3f0) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0411d124;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a3f0,0);
LAB_0411d124:
    plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    if (plVar7 != (long *)0x0) {
      iVar10 = 0x7fffffff;
      lVar8 = 0;
LAB_0411d160:
      do {
        lVar4 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0411d1ac;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_0411d1ac:
        uVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
        if ((uVar2 & 1) == 0) {
          if (plVar7 == (long *)0x0) {
            return lVar8;
          }
          lVar4 = *plVar7;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 == 0) goto LAB_0411d33c;
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_0411d324;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_0917aa98) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0411d210;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917aa98,0);
LAB_0411d210:
        lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
        if (lVar4 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)(lVar4 + 0x10);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(lVar9,0);
        if ((uVar2 & 1) != 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((*(char *)(lVar9 + 0xd1) == '\0') &&
             (uVar2 = AnhPD_FoodOrder_TutorialTargetResolver__MatchesIngredient(lVar9,param_1),
             (uVar2 & 1) != 0)) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar1 = 0x7ffffffe;
            if (*(int *)(lVar4 + 0x24) != 0) {
              iVar1 = *(int *)(lVar4 + 0x24);
            }
            if (iVar10 <= iVar1) {
              lVar9 = lVar8;
              iVar1 = iVar10;
            }
            iVar10 = iVar1;
            lVar8 = lVar9;
            if (plVar7 == (long *)0x0) break;
            goto LAB_0411d160;
          }
        }
      } while (plVar7 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0411d2a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_0411d324:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0411d358;
    }
  }
LAB_0411d33c:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_0411d358:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
  return lVar8;
}

