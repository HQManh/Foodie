// rea decompile_all
// name: AnhPD.FoodOrder.IngCellFinder$$TryGetCellNearest
// address: 0x4239d64
// body: available
// range: 0x4239d64-0x4239fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4239fb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_IngCellFinder__TryGetCellNearest
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4,long *param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((DAT_09516e36 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09178ab8);
    FUN_03f5c2a4(&DAT_091eb8f8);
    FUN_03f5c2a4(&DAT_091eb910);
    FUN_03f5c2a4(&DAT_09191700);
    FUN_03f5c2a4(&DAT_091916f0);
    DAT_09516e36 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09191700);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar6 = (long *)(lVar2 + 0x10);
    *plVar6 = param_4;
    thunk_FUN_03f5d7b8(plVar6,param_4);
    *param_5 = 0;
    thunk_FUN_03f5d7b8(param_5,0);
    if (*(long *)(param_3 + 0x10) != 0) {
      uVar3 = AnhPD_FoodOrder_IngGridLayout__AnyEnabledCell();
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        if ((*plVar6 == 0) || (lVar4 = AnhPD_FoodOrder_DragItemBase__get_Tf(*plVar6,0), lVar4 == 0))
        goto LAB_04239fb0;
        uVar8 = UnityEngine_Transform__get_position(lVar4,0);
        lVar4 = AnhPD_FoodOrder_IngCellFinder__FindNearest(param_3,0);
        if ((lVar4 == 0) ||
           (uVar3 = AnhPD_FoodOrder_IngCell__CanAccept(lVar4,*plVar6), (uVar3 & 1) == 0)) {
          if (*(int *)(DAT_091916f0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar5 = *(undefined8 **)(DAT_091916f0 + 0xb8);
          lVar4 = puVar5[2];
          if (lVar4 == 0) {
            if (*(int *)(DAT_091916f0 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar5 = *(undefined8 **)(DAT_091916f0 + 0xb8);
            }
            uVar7 = *puVar5;
            lVar4 = thunk_FUN_03f9944c(DAT_09178ab8);
            FUN_05322d94(lVar4,uVar7,DAT_091eb8f8,0);
            plVar6 = (long *)(*(long *)(DAT_091916f0 + 0xb8) + 0x10);
            *plVar6 = lVar4;
            thunk_FUN_03f5d7b8(plVar6,lVar4);
          }
          lVar4 = AnhPD_FoodOrder_IngCellFinder__FindNearest(uVar8,param_2,param_3,lVar4);
          *param_5 = lVar4;
          thunk_FUN_03f5d7b8(param_5,lVar4);
          if (*param_5 == 0) {
            uVar7 = thunk_FUN_03f9944c(DAT_09178ab8);
            FUN_05322d94(uVar7,lVar2,DAT_091eb910,0);
            lVar2 = AnhPD_FoodOrder_IngCellFinder__FindNearest(uVar8,param_2,param_3,uVar7);
            *param_5 = lVar2;
            thunk_FUN_03f5d7b8(param_5,lVar2);
            return *param_5 != 0;
          }
        }
        else {
          *param_5 = lVar4;
          thunk_FUN_03f5d7b8(param_5,lVar4);
        }
        bVar1 = true;
      }
      return bVar1;
    }
  }
LAB_04239fb0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

