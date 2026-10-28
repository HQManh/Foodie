// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleIceCream$$AddIng
// address: 0x4149308
// body: available
// range: 0x4149308-0x41494b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41494b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleIceCream__AddIng(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_34;
  
  if ((DAT_09516437 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516437 = 1;
  }
  puVar1 = (undefined8 *)(param_1 + 0x118);
  local_40 = *(undefined8 *)(param_1 + 0x128);
  uStack_48 = *(undefined8 *)(param_1 + 0x120);
  local_50 = *puVar1;
  uVar2 = *(undefined4 *)(param_1 + 0xfc);
  local_34 = 0;
  if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_68 = uStack_48;
  local_70 = local_50;
  local_60 = local_40;
  uVar5 = AnhPD_FoodOrder_IceCreamPieceTable__CanDishAdd(uVar2,&local_70,param_2);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = AnhPD_FoodOrder_IceCreamPieceTable__TryGetPiece(param_2,&local_34);
    uVar2 = local_34;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_50,puVar1,uVar2,1,0);
      lVar4 = DAT_09186a68;
      *(undefined8 *)(param_1 + 0x128) = local_40;
      *(undefined8 *)(param_1 + 0x120) = uStack_48;
      *puVar1 = local_50;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = AnhPD_FoodOrder_IceCreamPieceTable__IsFlavor(uVar2);
      lVar4 = DAT_091adc88;
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x130);
        if (lVar6 == 0) {
LAB_041494b0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_041494b0;
        uVar3 = *(uint *)(lVar6 + 0x18);
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
        }
        else {
          FUN_057971a8(lVar6,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      AnhPD_FoodOrder_FlexibleDragItem__MarkVisualDirty(param_1,0);
    }
  }
  return;
}

