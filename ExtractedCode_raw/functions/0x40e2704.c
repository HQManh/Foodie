// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorIngredientSource$$AddToStack
// address: 0x40e2704
// body: available
// range: 0x40e2704-0x40e29d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e2938 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e29c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e29c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e29d0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040e29cc) */

void AnhPD_FoodOrder_ConveyorIngredientSource__AddToStack(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_0951606c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5a0);
    FUN_03f5c2a4(&DAT_0917ac50);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b8b68);
    FUN_03f5c2a4(&DAT_091b8b50);
    FUN_03f5c2a4(&DAT_0917e328);
    DAT_0951606c = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  plVar7 = (long *)(param_1 + 0x10);
  if (*plVar7 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_0917e328);
    FUN_05e2ca0c(lVar1,DAT_091b8b50);
    *plVar7 = lVar1;
    thunk_FUN_03f5d7b8(plVar7,lVar1);
  }
  lVar1 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_0917a5a0) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_040e281c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a5a0,0);
LAB_040e281c:
  plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
  do {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_040e28a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_040e28a0:
    uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar1 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 == 0) goto LAB_040e2984;
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917ac50) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_040e2904;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ac50,0);
LAB_040e2904:
    lVar1 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if (lVar1 != 0) {
      lVar1 = *plVar7;
      uVar4 = AnhPD_FoodOrder_ConveyorIngredientSource__SingleBundle();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar4,uVar4);
      }
      FUN_05e2cfd8(lVar1,uVar4,DAT_091b8b68);
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_040e29a0;
    }
  }
LAB_040e2984:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_040e29a0:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}

