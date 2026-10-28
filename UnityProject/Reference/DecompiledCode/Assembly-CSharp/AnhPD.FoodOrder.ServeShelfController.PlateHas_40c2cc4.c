// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$PlateHas
// address: 0x40c2cc4
// body: available
// range: 0x40c2cc4-0x40c2e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c2e5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__PlateHas
               (undefined8 *param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09515f94 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b71b0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515f94 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_3,0);
  if ((uVar2 & 1) == 0) {
LAB_040c2e3c:
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_09189158 + 0xb8);
    uStack_78 = puVar4[1];
    local_80 = *puVar4;
    local_70 = puVar4[2];
    if (param_3 == 0) goto LAB_040c2e5c;
    uVar2 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(param_3);
    if ((uVar2 & 1) == 0) {
      if (param_4 == 0) goto LAB_040c2e5c;
      lVar3 = AnhPD_FoodOrder_LevelInfo__GetItemPieceOffer
                        (param_4,*(undefined8 *)(param_3 + 0xa8),0);
      if (lVar3 == 0) goto LAB_040c2e3c;
      uStack_78 = *(undefined8 *)(lVar3 + 0x18);
      local_80 = *(undefined8 *)(lVar3 + 0x10);
      local_70 = *(undefined8 *)(lVar3 + 0x20);
    }
    if (*(long *)(param_2 + 0xa0) == 0) {
LAB_040c2e5c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    AnhPD_FoodOrder_ShelfMergeQueue__InboundPieces
              (&local_98,*(long *)(param_2 + 0xa0),param_3,param_4,0);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_c0 = local_88;
    uStack_c8 = uStack_90;
    local_d0 = local_98;
    AnhPD_FoodOrder_PieceSet__Add(&local_b0,&local_80,&local_d0,0);
    uVar1 = DAT_091b71b0;
    uStack_58 = uStack_a8;
    local_60 = local_b0;
    local_50 = local_a0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    FUN_05c331e0(param_1,&local_60,uVar1);
  }
  return;
}

