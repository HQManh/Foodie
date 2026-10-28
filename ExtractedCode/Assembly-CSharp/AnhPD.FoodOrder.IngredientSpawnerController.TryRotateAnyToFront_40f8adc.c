// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$TryRotateAnyToFront
// address: 0x40f8adc
// body: available
// range: 0x40f8adc-0x40f8d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f8c68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_IngredientSpawnerController__TryRotateAnyToFront
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  
  if ((DAT_0951611e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091abe60);
    FUN_03f5c2a4(&DAT_091abe68);
    FUN_03f5c2a4(&DAT_091abe88);
    FUN_03f5c2a4(&DAT_091abe98);
    FUN_03f5c2a4(&DAT_091abea0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951611e = 1;
  }
  lVar7 = *(long *)(param_1 + 0x220);
  if (lVar7 != 0) {
    iVar10 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar10) {
      System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar10,0);
    }
    lVar7 = *(long *)(param_1 + 0x1a0);
    if (lVar7 != 0) {
      iVar10 = 1;
      do {
        iVar3 = AnhPD_FoodOrder_ConveyorGrid__get_Capacity(lVar7,0);
        if (iVar3 <= iVar10) goto LAB_040f8c7c;
        if (*(long *)(param_1 + 0x1a0) == 0) break;
        lVar7 = AnhPD_FoodOrder_ConveyorGrid__SlotAt(*(long *)(param_1 + 0x1a0),param_2,iVar10,0);
        if ((lVar7 != 0) && (iVar10 == *(int *)(lVar7 + 0x24))) {
          uVar11 = *(undefined8 *)(lVar7 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Implicit(uVar11,0);
          lVar2 = DAT_091abe60;
          if ((uVar5 & 1) != 0) {
            lVar6 = *(long *)(param_1 + 0x220);
            if (lVar6 == 0) break;
            lVar8 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 == 0) break;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *plVar9 = lVar7;
              thunk_FUN_03f5d7b8(plVar9,lVar7);
            }
            else {
              FUN_057e0c68(lVar6,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        lVar7 = *(long *)(param_1 + 0x1a0);
        iVar10 = iVar10 + 1;
      } while (lVar7 != 0);
    }
  }
LAB_040f8c68:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar4 = UnityEngine_Random__Range(0,iVar10,0);
    if (*(long *)(param_1 + 0x220) == 0) goto LAB_040f8c68;
    lVar7 = FUN_057e0998(*(long *)(param_1 + 0x220),uVar4,DAT_091abea0);
    if (((*(long *)(param_1 + 0x220) == 0) ||
        (FUN_057e251c(*(long *)(param_1 + 0x220),uVar4,DAT_091abe88), lVar7 == 0)) ||
       (*(long *)(lVar7 + 0x10) == 0)) goto LAB_040f8c68;
    AnhPD_FoodOrder_IngredientConveyorItem__ClearFreeze();
    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_040f8c68;
    uVar5 = AnhPD_FoodOrder_ConveyorGrid__TryRotateToFront(*(long *)(param_1 + 0x1a0),lVar7,0);
    if ((uVar5 & 1) != 0) break;
LAB_040f8c7c:
    if (*(long *)(param_1 + 0x220) == 0) goto LAB_040f8c68;
    iVar10 = *(int *)(*(long *)(param_1 + 0x220) + 0x18);
    if (iVar10 < 1) break;
  }
  return 0 < iVar10;
}

