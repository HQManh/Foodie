// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$RefreshOwned
// address: 0x422c860
// body: available
// range: 0x422c860-0x422ca7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422ca60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__RefreshOwned(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09516d9e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af058);
    FUN_03f5c2a4(&DAT_091ae380);
    FUN_03f5c2a4(&DAT_091ae388);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516d9e = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uVar4 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  lVar5 = 0;
  if ((uVar1 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_0422ca60;
    lVar5 = AnhPD_FoodOrder_MessyController__get_ServeShelf(**(long **)(DAT_091881a0 + 0xb8),0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar5,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (lVar5 != 0) {
    AnhPD_FoodOrder_ServeShelfController__GetPotentialPieces
              (lVar5,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),0);
    lVar5 = *(long *)(param_1 + 0x80);
    if (lVar5 != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(lVar5 + 0x18) <= iVar3) {
          return;
        }
        lVar5 = *(long *)(param_1 + 0x70);
        if (lVar5 == 0) break;
        if (*(int *)(lVar5 + 0x18) <= iVar3) {
          return;
        }
        lVar5 = FUN_057e0998(lVar5,iVar3,DAT_091ae388);
        if (*(long *)(param_1 + 0x80) == 0) break;
        FUN_057f79cc(&local_b8,*(long *)(param_1 + 0x80),iVar3,DAT_091af060);
        if ((param_2 & 1) == 0) {
          uVar6 = *(undefined4 *)(param_1 + 0x44);
          uStack_78 = uStack_b0;
          local_80 = local_b8;
          local_70 = local_a8;
          puVar2 = &local_80;
        }
        else {
          uVar6 = 0;
          local_50 = local_a8;
          puVar2 = &local_60;
          uStack_58 = uStack_b0;
          local_60 = local_b8;
        }
        uStack_98 = puVar2[1];
        local_a0 = *puVar2;
        local_90 = puVar2[2];
        if (lVar5 == 0) break;
        local_d0 = local_a0;
        uStack_c8 = uStack_98;
        local_c0 = local_90;
        AnhPD_FoodOrder_ListIngredientBoardView__ApplyOwned
                  (*(undefined4 *)(param_1 + 0x40),uVar6,lVar5,&local_d0);
        lVar5 = *(long *)(param_1 + 0x80);
        iVar3 = iVar3 + 1;
      } while (lVar5 != 0);
    }
  }
LAB_0422ca60:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

