// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$FindBoundPlateForOrder
// address: 0x40c73dc
// body: available
// range: 0x40c73dc-0x40c76f7 inclusive
// range: 0x40c7798-0x40c779b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c76e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c76f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c7798 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
AnhPD_FoodOrder_ServeShelfController__FindBoundPlateForOrder
          (long param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char local_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_09515f9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4250);
    FUN_03f5c2a4(&DAT_091a4258);
    FUN_03f5c2a4(&DAT_091a4260);
    FUN_03f5c2a4(&DAT_091afe30);
    FUN_03f5c2a4(&DAT_091b71b8);
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515f9a = 1;
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_81 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_79 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uVar7 = puVar5[1];
  uVar4 = *puVar5;
  param_4[2] = puVar5[2];
  param_4[1] = uVar7;
  *param_4 = uVar4;
  if (*(long *)(param_1 + 0x90) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    FUN_057e185c(&local_140,*(long *)(param_1 + 0x90),DAT_091afe30);
    local_a0 = CONCAT71(uStack_12f,local_130);
    uStack_a8 = CONCAT71(uStack_137,uStack_138);
    local_b0 = CONCAT71(uStack_13f,local_140);
    puVar5 = (undefined8 *)((ulong)&local_90 | 7);
    puStack_d8 = &local_b0;
    local_e0 = 0;
    do {
      do {
        do {
          do {
            uVar3 = FUN_071bd28c(&local_b0,DAT_091a4258);
            lVar2 = local_a0;
            if ((uVar3 & 1) == 0) {
              uVar6 = 0;
              goto LAB_040c7644;
            }
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
          } while ((uVar3 & 1) == 0);
          if (lVar2 == 0) {
            if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_040c7798;
          }
          local_90 = *(undefined8 *)(lVar2 + 0x89);
          uStack_88 = (undefined7)*(undefined8 *)(lVar2 + 0x91);
          local_79 = (undefined1)*(undefined8 *)(lVar2 + 0xa0);
          uStack_78 = (undefined7)((ulong)*(undefined8 *)(lVar2 + 0xa0) >> 8);
          uStack_81 = (undefined1)*(undefined8 *)(lVar2 + 0x98);
          uStack_80 = (undefined7)((ulong)*(undefined8 *)(lVar2 + 0x98) >> 8);
        } while (*(char *)(lVar2 + 0x88) == '\0');
        uStack_138 = (undefined1)param_2[1];
        uStack_137 = (undefined7)((ulong)param_2[1] >> 8);
        local_140 = (char)*param_2;
        uStack_13f = (undefined7)((ulong)*param_2 >> 8);
        local_130 = (undefined1)param_2[2];
        uStack_12f = (undefined7)((ulong)param_2[2] >> 8);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_f8 = puVar5[1];
        local_100 = *puVar5;
        local_f0 = puVar5[2];
        uStack_118 = CONCAT71(uStack_137,uStack_138);
        local_120 = CONCAT71(uStack_13f,local_140);
        local_110 = CONCAT71(uStack_12f,local_130);
        uVar3 = AnhPD_FoodOrder_PieceSet__op_Inequality(&local_100,&local_120,0);
      } while ((uVar3 & 1) != 0);
      uVar3 = AnhPD_FoodOrder_ServeShelfController__IsPlateBusy(param_1,lVar2);
      if ((uVar3 & 1) != 0) {
        uVar6 = 2;
        goto LAB_040c7644;
      }
      uVar3 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(lVar2);
    } while ((uVar3 & 1) != 0);
    *param_3 = lVar2;
    thunk_FUN_03f5d7b8(param_3,lVar2);
    uVar4 = AnhPD_FoodOrder_ServeShelfController__get_Info();
    AnhPD_FoodOrder_ServeShelfController__PlateHas(&local_140,param_1,lVar2,uVar4);
    local_90 = CONCAT17(uStack_138,uStack_13f);
    uStack_88 = uStack_137;
    local_79 = (undefined1)uStack_128;
    uStack_78 = (undefined7)((ulong)uStack_128 >> 8);
    uStack_81 = local_130;
    uStack_80 = uStack_12f;
    if (local_140 == '\0') {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
      uStack_c8 = puVar5[1];
      local_d0 = *puVar5;
      local_c0 = puVar5[2];
    }
    else {
      uStack_c8 = puVar5[1];
      local_d0 = *puVar5;
      local_c0 = puVar5[2];
    }
    param_4[2] = local_c0;
    param_4[1] = uStack_c8;
    *param_4 = local_d0;
    uVar6 = 1;
LAB_040c7644:
    FUN_071bd288(&local_b0,DAT_091a4250);
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return uVar6;
    }
  }
LAB_040c7798:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

