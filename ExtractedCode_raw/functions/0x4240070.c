// rea decompile_all
// name: AnhPD.FoodOrder.IngCell$$Arrange
// address: 0x4240070
// body: available
// range: 0x4240070-0x42402cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42402cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngCell__Arrange(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_09516e16 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8090);
    FUN_03f5c2a4(&DAT_091ac6c8);
    FUN_03f5c2a4(&DAT_091ac6d0);
    DAT_09516e16 = 1;
  }
  if (*(long *)(param_3 + 0x30) != 0) {
    iVar1 = *(int *)(*(long *)(param_3 + 0x30) + 0x18);
    iVar2 = AnhPD_FoodOrder_IngCell__get_Layout(param_3);
    if (iVar2 == 2) {
      AnhPD_FoodOrder_IngCell__get_CurrentAnchor(param_3);
      iVar5 = -0x80000000;
      if (param_2 != -INFINITY) {
        iVar5 = (int)-param_2;
      }
    }
    else {
      iVar5 = 0;
    }
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        if (*(long *)(param_3 + 0x30) == 0) goto LAB_042402cc;
        lVar7 = *(long *)(param_3 + 0x38);
        uVar3 = FUN_057e0998(*(long *)(param_3 + 0x30),iVar6,DAT_091ac6d0);
        if (lVar7 == 0) goto LAB_042402cc;
        uVar4 = FUN_053ebc3c(lVar7,uVar3,DAT_091a8090);
        fVar10 = param_2;
        if ((uVar4 & 1) != 0) {
          if ((*(long *)(param_3 + 0x30) == 0) ||
             (lVar7 = FUN_057e0998(*(long *)(param_3 + 0x30),iVar6,DAT_091ac6d0), lVar7 == 0))
          goto LAB_042402cc;
          fVar10 = param_2;
          if (*(char *)(lVar7 + 0xea) == '\0') {
            uVar8 = AnhPD_FoodOrder_IngCell__GetSlotPosition(param_3,iVar6,iVar1);
            if (((*(long *)(param_3 + 0x30) == 0) ||
                (lVar7 = FUN_057e0998(*(long *)(param_3 + 0x30),iVar6,DAT_091ac6d0), lVar7 == 0)) ||
               (lVar7 = AnhPD_FoodOrder_DragItemBase__get_Tf(lVar7,0), lVar7 == 0))
            goto LAB_042402cc;
            fVar9 = param_2;
            UnityEngine_Transform__set_position(uVar8,param_2,0,lVar7,0);
            if ((*(long *)(param_3 + 0x30) == 0) ||
               (lVar7 = FUN_057e0998(*(long *)(param_3 + 0x30),iVar6,DAT_091ac6d0), lVar7 == 0))
            goto LAB_042402cc;
            uVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(lVar7,0);
            DG_Tweening_ShortcutExtensions__DOComplete(uVar3,0,0);
            if ((*(long *)(param_3 + 0x30) == 0) ||
               (lVar7 = FUN_057e0998(*(long *)(param_3 + 0x30),iVar6,DAT_091ac6d0), lVar7 == 0))
            goto LAB_042402cc;
            uVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(lVar7,0);
            AnhPD_APDUtilities__Appear(0x3dcccccd,uVar3,0);
            fVar10 = fVar9;
            if (iVar2 == 2) {
              if ((*(long *)(param_3 + 0x30) == 0) ||
                 (lVar7 = FUN_057e0998(*(long *)(param_3 + 0x30),iVar6,DAT_091ac6d0), lVar7 == 0))
              goto LAB_042402cc;
              AnhPD_FoodOrder_DragItemBase__SetSortingOrder(lVar7,iVar5,0);
              if (*(long *)(param_3 + 0x30) == 0) goto LAB_042402cc;
              lVar7 = FUN_057e0998(*(long *)(param_3 + 0x30),iVar6,DAT_091ac6d0);
              AnhPD_FoodOrder_IngCell__get_CurrentAnchor(param_3);
              fVar10 = fVar9;
              AnhPD_FoodOrder_IngCell__get_CurrentAnchor(param_3);
              if (lVar7 == 0) goto LAB_042402cc;
              AnhPD_FoodOrder_DragItemBase__SetDepthByY(fVar9 - (param_2 - fVar10),lVar7,0);
            }
          }
        }
        iVar6 = iVar6 + 1;
        param_2 = fVar10;
      } while (iVar1 != iVar6);
    }
    return;
  }
LAB_042402cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

