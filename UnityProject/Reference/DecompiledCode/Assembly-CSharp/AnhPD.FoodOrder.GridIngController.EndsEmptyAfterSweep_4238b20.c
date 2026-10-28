// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$EndsEmptyAfterSweep
// address: 0x4238b20
// body: available
// range: 0x4238b20-0x4238dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4238dac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4238db0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4238db4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4238db8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4238dc0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04238dbc) */

uint AnhPD_FoodOrder_GridIngController__EndsEmptyAfterSweep
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_09516df2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4a8);
    FUN_03f5c2a4(&DAT_0917ab58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ac6a8);
    DAT_09516df2 = 1;
  }
  lVar2 = AnhPD_FoodOrder_GridIngController__TryGetExistingCell(param_1,param_2);
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    plVar7 = *(long **)(lVar2 + 0x30);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917a4a8) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04238c08;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a4a8,0);
LAB_04238c08:
    plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04238c8c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_04238c8c:
      uVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if ((uVar1 & 1) == 0) break;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917ab58) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04238cf4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917ab58,0);
LAB_04238cf4:
      uVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar4,uVar4);
      }
      uVar5 = FUN_057e1004(param_3,uVar4,DAT_091ac6a8);
    } while ((uVar5 & 1) != 0);
    uVar1 = uVar1 ^ 1;
    if (plVar7 != (long *)0x0) {
      lVar2 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185a58) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04238d80;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_04238d80:
      (*(code *)*puVar3)(plVar7,puVar3[1]);
    }
  }
  return uVar1 & 1;
}

