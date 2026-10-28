// rea decompile_all
// name: AnhPD.FoodOrder.IngDirtyPlateCleaner$$ClearAllTo
// address: 0x4236ad4
// body: available
// range: 0x4236ad4-0x4236d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4236ce0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4236d78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4236d7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4236d80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4236d90 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04236d8c) */

int AnhPD_FoodOrder_IngDirtyPlateCleaner__ClearAllTo
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  
  if ((DAT_09516e4c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a7c8);
    FUN_03f5c2a4(&DAT_0917aec0);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09516e4c = 1;
  }
  if ((*(long *)(param_4 + 0x10) == 0) ||
     (plVar2 = (long *)AnhPD_FoodOrder_IngGridLayout__EnabledCells(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a7c8) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04236bac;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a7c8,0);
LAB_04236bac:
  plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
  if (plVar2 != (long *)0x0) {
    iVar8 = 0;
    do {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04236c2c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_04236c2c:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        if (plVar2 == (long *)0x0) {
          return iVar8;
        }
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_04236d2c;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_04236d14;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917aec0) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04236c90;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917aec0,0);
LAB_04236c90:
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      lVar5 = *(long *)(param_4 + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar4,uVar4);
      }
      uVar4 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),uVar4,*(undefined8 *)(lVar5 + 0x28));
      iVar1 = AnhPD_FoodOrder_IngDirtyPlateCleaner__SweepPlatesIn
                        (param_1,param_2,param_3,param_4,uVar4,iVar8);
      iVar8 = iVar1 + iVar8;
    } while (plVar2 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_04236d14:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04236d48;
    }
  }
LAB_04236d2c:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_04236d48:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return iVar8;
}

