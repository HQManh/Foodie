// rea decompile_all
// name: AnhPD.FoodOrder.OrderBoard$$CoverBoardWithList
// address: 0x4228528
// body: available
// range: 0x4228528-0x422872f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4228728 to 0x4229168 AnhPD.FoodOrder.OrderBoard$$SetBoardVisible (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x422872c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderBoard__CoverBoardWithList(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long local_48;
  
  if ((DAT_09516d76 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c58d0);
    FUN_03f5c2a4(&DAT_091cd608);
    FUN_03f5c2a4(&DAT_091ab880);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516d76 = 1;
  }
  local_48 = 0;
  if (param_1[8] == 0) {
LAB_0422872c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = AnhPD_FoodOrder_OrderIngredientList__get_UsesSlots();
  if ((uVar3 & 1) == 0) {
    AnhPD_FoodOrder_OrderBoard__SetBoardVisible(param_1,0);
    return;
  }
  AnhPD_FoodOrder_OrderBoard__SetBoardVisible(param_1,1);
  if ((param_1[0x12] != 0) && (iVar1 = *(int *)(param_1[0x12] + 0x18), 0 < iVar1)) {
    iVar9 = 0;
    do {
      lVar4 = (**(code **)(*param_1 + 0x1d8))(param_1,iVar9,*(undefined8 *)(*param_1 + 0x1e0));
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
      if (((uVar3 & 1) != 0) &&
         (uVar3 = AnhPD_FoodOrder_OrderBoard__InPreview(param_1,iVar9), (uVar3 & 1) != 0)) {
        if (lVar4 == 0) goto LAB_0422872c;
        uVar3 = FUN_04a6b048(lVar4,&local_48,DAT_091c58d0);
        lVar5 = local_48;
        if ((uVar3 & 1) == 0) {
          lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
          if (lVar4 == 0) goto LAB_0422872c;
          lVar5 = FUN_04b7c294(lVar4,DAT_091cd608);
        }
        if (lVar5 == 0) goto LAB_0422872c;
        UnityEngine_CanvasGroup__set_alpha(0,lVar5,0);
        lVar4 = DAT_091ab880;
        lVar6 = param_1[0x15];
        if (lVar6 == 0) goto LAB_0422872c;
        lVar7 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_0422872c;
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          plVar8 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          *plVar8 = lVar5;
          thunk_FUN_03f5d7b8(plVar8,lVar5);
        }
        else {
          FUN_057e0c68(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar1 != iVar9);
  }
  return;
}

