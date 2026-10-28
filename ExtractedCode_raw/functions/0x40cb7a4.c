// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$RebindForServe
// address: 0x40cb7a4
// body: available
// range: 0x40cb7a4-0x40cb99b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40cb998 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController_WholeDishMode__RebindForServe
               (long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_09515fba & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4398);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515fba = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  local_b0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  lVar1 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Find(param_1,param_3,param_4);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar3,param_2,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Unbind(param_1,lVar1);
  }
  lVar1 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Find(param_1,param_2);
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_040cb998;
    FUN_057e2274(*(long *)(param_1 + 0x18),lVar1,DAT_091b4398);
  }
  if (param_3 != 0) {
    AnhPD_FoodOrder_FCustomerLine__GetOrderSpec(&local_130,param_3,param_4,0);
    uStack_50 = local_f8;
    uStack_58 = uStack_100;
    local_60 = local_108;
    uStack_68 = uStack_110;
    uStack_70 = local_118;
    uStack_78 = uStack_120;
    local_80 = uStack_128;
    uVar3 = local_130;
    puVar4 = (undefined8 *)((ulong)&local_130 | 8);
    local_108 = uStack_100;
    uStack_110 = local_60;
    local_f8 = uStack_f0;
    uStack_100 = uStack_50;
    uStack_128 = uStack_120;
    local_130 = local_80;
    local_118 = uStack_68;
    uStack_120 = uStack_70;
    uStack_48 = uStack_f0;
    lVar1 = AnhPD_FoodOrder_ServeShelfController__get_Info(0);
    if (lVar1 == 0) {
      uStack_b8 = puVar4[1];
      local_c0 = *puVar4;
      local_b0 = puVar4[2];
      uVar3 = **(undefined8 **)(DAT_09535468 + 0xb8);
      puVar4 = &local_c0;
    }
    else {
      uStack_98 = puVar4[1];
      local_a0 = *puVar4;
      local_90 = puVar4[2];
      lVar1 = AnhPD_FoodOrder_ServeShelfController__get_Info(0);
      if (lVar1 == 0) goto LAB_040cb998;
      uVar3 = AnhPD_FoodOrder_LevelInfo__SequenceOf(lVar1,uVar3,0);
      puVar4 = &local_a0;
    }
    uStack_148 = puVar4[1];
    local_150 = *puVar4;
    local_140 = puVar4[2];
    local_e0 = local_150;
    uStack_d8 = uStack_148;
    local_d0 = local_140;
    if (param_1 != 0) {
      AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Bind
                (param_1,param_2,param_3,param_4,&local_150,uVar3);
      return;
    }
  }
LAB_040cb998:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

