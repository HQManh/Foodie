// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$CountFreeCells
// address: 0x42356ac
// body: available
// range: 0x42356ac-0x423594b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4235938 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423593c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4235940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4235948 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04235944) */

int AnhPD_FoodOrder_GridIngController__CountFreeCells(undefined8 param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  if ((DAT_09516de2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a7c8);
    FUN_03f5c2a4(&DAT_0917aec0);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09516de2 = 1;
  }
  lVar1 = AnhPD_FoodOrder_GridIngController__get_Layout(param_1);
  if ((lVar1 == 0) ||
     (plVar2 = (long *)AnhPD_FoodOrder_IngGridLayout__EnabledCells(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_0917a7c8) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0423577c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a7c8,0);
LAB_0423577c:
  plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
  iVar8 = 0;
  if (param_2 < 2) {
    param_2 = 1;
  }
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0423580c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0423580c:
    uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    iVar7 = iVar8;
    if ((uVar5 & 1) == 0) break;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917aec0) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04235870;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917aec0,0);
LAB_04235870:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar1 = AnhPD_FoodOrder_GridIngController__TryGetExistingCell(param_1,uVar4);
  } while (((lVar1 != 0) && (uVar5 = AnhPD_FoodOrder_IngCell__get_IsEmpty(), (uVar5 & 1) == 0)) ||
          (iVar8 = iVar8 + 1, iVar7 = param_2, iVar8 != param_2));
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185a58) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0423590c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_0423590c:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  return iVar7;
}

