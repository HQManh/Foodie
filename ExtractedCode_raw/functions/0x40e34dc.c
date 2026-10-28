// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorIngredientSource$$PromoteToFront
// address: 0x40e34dc
// body: available
// range: 0x40e34dc-0x40e37e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e3720 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e37d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e37e0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040e37dc) */
/* WARNING: Removing unreachable block (ram,0x040e37a4) */

int AnhPD_FoodOrder_ConveyorIngredientSource__PromoteToFront(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09516073 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b3d8);
    DAT_09516073 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b3d8) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_040e35a4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3d8,0);
LAB_040e35a4:
    iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (iVar1 != 0) {
      lVar6 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917a768) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_040e3610;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a768,0);
LAB_040e3610:
      plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        iVar1 = 0;
        do {
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_09185b10) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_040e3694;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_040e3694:
          uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((uVar7 & 1) == 0) {
            if (plVar4 == (long *)0x0) goto LAB_040e3798;
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 == 0) goto LAB_040e3770;
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_040e3758;
          }
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917ae48) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_040e36f8;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917ae48,0);
LAB_040e36f8:
          uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          uVar2 = AnhPD_FoodOrder_ConveyorIngredientSource__TryConsumePending(param_1,uVar5);
          iVar1 = iVar1 + ((uVar2 ^ 0xffffffff) & 1);
        } while (plVar4 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_040e3758:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_040e378c;
    }
  }
LAB_040e3770:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_040e378c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_040e3798:
  AnhPD_FoodOrder_ConveyorIngredientSource__PushFront(param_1,param_2);
  return iVar1;
}

