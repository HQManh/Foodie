// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$TryCapture
// address: 0x40cd308
// body: available
// range: 0x40cd308-0x40cd88f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40cd87c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cd880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cd884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cd888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cd88c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ServeShelfController_WholeDishMode__TryCapture
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,long param_5,
               ulong param_6)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  long local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  long local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  long local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined1 auStack_340 [72];
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  long local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  long local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_288;
  long local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  long local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  long local_230;
  undefined8 local_220;
  undefined8 *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  long local_200;
  undefined1 auStack_1f8 [72];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515fbf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4250);
    FUN_03f5c2a4(&DAT_091a4258);
    FUN_03f5c2a4(&DAT_091a4260);
    FUN_03f5c2a4(&DAT_091afe30);
    FUN_03f5c2a4(&DAT_091b4398);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_091b71c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515fbf = 1;
  }
  uStack_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  lStack_100 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_120 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  memcpy(&local_2d0,param_4,0x48);
  uStack_78 = uStack_2b8;
  local_80 = local_2c0;
  local_70 = local_2b0;
  if (param_5 == 0) {
LAB_040cd880:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = AnhPD_FoodOrder_LevelInfo__SequenceOf(param_5,*param_4,0);
  memcpy(auStack_1f8,param_4,0x48);
  uVar2 = AnhPD_FoodOrder_LevelInfo__DishKeyOfOrder(param_5,auStack_1f8,0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_040cd880;
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x90);
  if (lVar5 == 0) goto LAB_040cd880;
  FUN_057e185c(&local_210,lVar5,DAT_091afe30);
  local_220 = 0;
  local_e0 = local_200;
  local_218 = &local_f0;
  uStack_e8 = uStack_208;
  local_f0 = local_210;
  do {
    do {
      do {
        do {
          do {
            do {
              do {
                do {
                  uVar6 = FUN_071bd28c(&local_f0,DAT_091a4258);
                  lVar5 = local_e0;
                  if ((uVar6 & 1) == 0) {
                    FUN_071bd288(&local_f0,DAT_091a4250);
                    uStack_3e8 = uStack_78;
                    local_3f0 = local_80;
                    uStack_3c8 = 0;
                    local_3d0 = 0;
                    uStack_3b8 = 0;
                    uStack_3c0 = 0;
                    uStack_3a8 = 0;
                    local_3b0 = 0;
                    uStack_398 = 0;
                    uStack_3a0 = 0;
                    uStack_198 = 0;
                    local_1a0 = 0;
                    uStack_188 = 0;
                    uStack_190 = 0;
                    uStack_178 = 0;
                    local_180 = 0;
                    uStack_168 = 0;
                    uStack_170 = 0;
                    uStack_1a8 = 0;
                    local_1b0 = 0;
                    uStack_388 = 0;
                    local_390 = 0;
                    local_3e0 = local_70;
                    uVar3 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Plan
                                      (param_1,&local_3d0,&local_3f0,uVar4,uVar2,param_5,&local_d0);
                    if (((uVar3 & 1) == 0) || ((param_6 & 1) != 0)) goto LAB_040cd844;
                    if (*(long *)(param_1 + 0x10) == 0) goto LAB_040cd880;
                    uVar8 = AnhPD_FoodOrder_ServeShelfController__CreatePlate
                                      (*(long *)(param_1 + 0x10),local_d0._4_4_,0);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_09188ad0);
                    }
                    uVar6 = UnityEngine_Object__op_Implicit(uVar8,0);
                    if ((uVar6 & 1) != 0) {
                      uStack_408 = uStack_78;
                      local_410 = local_80;
                      local_400 = local_70;
                      uVar4 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Bind
                                        (param_1,uVar8,param_2,param_3,&local_410,uVar4);
                      uVar3 = 1;
                      uVar6 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Commit
                                        (param_1,uVar8,1,param_5);
                      if ((uVar6 & 1) != 0) goto LAB_040cd844;
                      if (*(long *)(param_1 + 0x18) == 0) goto LAB_040cd880;
                      FUN_057e2274(*(long *)(param_1 + 0x18),uVar4,DAT_091b4398);
                    }
                    uVar3 = 0;
                    goto LAB_040cd844;
                  }
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar6 = UnityEngine_Object__op_Implicit(lVar5,0);
                } while ((uVar6 & 1) == 0);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar6 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(lVar5,0);
              } while (((uVar6 & 1) != 0) ||
                      (lVar7 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Find
                                         (param_1,lVar5), lVar7 != 0));
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar6 = AnhPD_FoodOrder_ServeShelfController__IsPlateBusy
                                (*(long *)(param_1 + 0x10),lVar5,0);
            } while (((uVar6 & 1) != 0) ||
                    (uVar6 = AnhPD_FoodOrder_ServeShelfController__DishFits
                                       (*(undefined4 *)(lVar5 + 0xb4),uVar2,0), (uVar6 & 1) == 0));
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            AnhPD_FoodOrder_ServeShelfController__PlateHas
                      (&local_2d0,*(long *)(param_1 + 0x10),lVar5,param_5,0);
            uStack_108 = uStack_2c8;
            uStack_f8 = uStack_2b8;
            lStack_100 = local_2c0;
            local_110 = local_2d0;
            uVar8 = local_110;
            local_110._0_1_ = (char)local_2d0;
            bVar1 = (char)local_110 == '\0';
            local_110 = local_2d0;
          } while (bVar1);
          local_110 = uVar8;
          FUN_05c33204(&local_210,&local_110,DAT_091b71c8);
          uStack_2c8 = uStack_208;
          local_2d0 = local_210;
          local_2c0 = local_200;
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_238 = uStack_2c8;
          local_240 = local_2d0;
          local_230 = local_2c0;
          uVar6 = AnhPD_FoodOrder_PieceSet__Covers(&local_80,&local_240,0);
        } while ((uVar6 & 1) == 0);
        FUN_05c33204(&local_2d0,&local_110,DAT_091b71c8);
        uStack_258 = uStack_2c8;
        local_260 = local_2d0;
        local_250 = local_2c0;
        uStack_278 = uStack_78;
        local_280 = local_80;
        local_270 = local_70;
        uVar6 = AnhPD_FoodOrder_LevelInfo__CanStillComplete(param_5,&local_260,&local_280,0);
      } while ((uVar6 & 1) == 0);
      FUN_05c33204(&local_2d0,&local_110,DAT_091b71c8);
      uStack_2e8 = uStack_2c8;
      local_2f0 = local_2d0;
      local_2e0 = local_2c0;
      AnhPD_FoodOrder_ServeShelfController_WholeDishMode__StateOf
                (&local_2d0,param_1,lVar5,&local_2f0,param_5);
      memcpy(&local_160,&local_2d0,0x48);
      uVar8 = local_288;
      uVar6 = AnhPD_FoodOrder_LevelInfo__SequenceFits(param_5,uVar2,local_288,uVar4,0);
    } while ((uVar6 & 1) == 0);
    memcpy(auStack_340,&local_160,0x48);
    local_2f8 = uVar8;
    uStack_358 = uStack_78;
    local_360 = local_80;
    local_350 = local_70;
    uVar6 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Plan
                      (param_1,auStack_340,&local_360,uVar4,uVar2,param_5,&local_1b0);
  } while ((uVar6 & 1) == 0);
  if ((param_6 & 1) == 0) {
    uStack_378 = uStack_78;
    local_380 = local_80;
    local_370 = local_70;
    uVar4 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Bind
                      (param_1,lVar5,param_2,param_3,&local_380,uVar4);
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(int *)(*(long *)(param_1 + 0x30) + 0x18) != 0) &&
       (uVar6 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Commit(param_1,lVar5,0,param_5),
       (uVar6 & 1) == 0)) {
      AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Unbind(param_1,uVar4);
      uVar3 = 0;
      goto LAB_040cd718;
    }
  }
  uVar3 = 1;
LAB_040cd718:
  FUN_071bd288(&local_f0,DAT_091a4250);
LAB_040cd844:
  return uVar3 & 1;
}

