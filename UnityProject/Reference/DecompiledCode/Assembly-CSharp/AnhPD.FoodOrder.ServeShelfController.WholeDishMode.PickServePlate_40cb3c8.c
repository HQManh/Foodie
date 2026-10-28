// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$PickServePlate
// address: 0x40cb3c8
// body: available
// range: 0x40cb3c8-0x40cb71f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40cb710 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb714 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb71c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_ServeShelfController_WholeDishMode__PickServePlate
               (long param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 *puStack_168;
  undefined1 auStack_160 [72];
  undefined8 local_118;
  undefined8 uStack_110;
  long local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515fb8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4250);
    FUN_03f5c2a4(&DAT_091a4258);
    FUN_03f5c2a4(&DAT_091a4260);
    FUN_03f5c2a4(&DAT_091a8610);
    FUN_03f5c2a4(&DAT_091afe30);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515fb8 = 1;
  }
  local_70 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_2 != 0) {
    AnhPD_FoodOrder_FCustomerLine__GetOrderSpec(&local_118,param_2,param_3,0);
    memcpy(&local_b0,&local_118,0x48);
    uVar2 = AnhPD_FoodOrder_OrderSpec__get_IsValid(&local_b0,0);
    if (((uVar2 & 1) == 0) || ((uStack_88 & 1) == 0)) {
      return 0;
    }
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&uStack_a0,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    lVar3 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Find(param_1,param_2,param_3);
    if ((lVar3 == 0) ||
       (uVar2 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__IsMerged(param_1,lVar3,param_4),
       (uVar2 & 1) == 0)) {
      if (param_4 != 0) {
        memcpy(auStack_160,&local_b0,0x48);
        uVar1 = AnhPD_FoodOrder_LevelInfo__DishKeyOfOrder(param_4,auStack_160,0);
        uVar4 = AnhPD_FoodOrder_LevelInfo__SequenceOf(param_4,local_b0,0);
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x90), lVar3 != 0)) {
          FUN_057e185c(&local_118,lVar3,DAT_091afe30);
          uStack_c8 = uStack_110;
          local_d0 = local_118;
          puStack_168 = &local_d0;
          local_c0 = local_108;
          local_170 = 0;
          do {
            do {
              do {
                do {
                  do {
                    uVar2 = FUN_071bd28c(&local_d0,DAT_091a4258);
                    lVar3 = local_c0;
                    if ((uVar2 & 1) == 0) {
                      lVar3 = 0;
                      goto LAB_040cb6d8;
                    }
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
                  } while ((uVar2 & 1) == 0);
                  if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar2 = FUN_053ebc3c(*(long *)(param_1 + 0x88),lVar3,DAT_091a8610);
                } while ((uVar2 & 1) != 0);
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar2 = AnhPD_FoodOrder_ServeShelfController__DishFits
                                  (*(undefined4 *)(lVar3 + 0xb4),uVar1,0);
              } while ((uVar2 & 1) == 0);
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar5 = AnhPD_FoodOrder_ServeShelfController__PlateSequence
                                (*(long *)(param_1 + 0x10),lVar3,param_4,0);
              uVar2 = AnhPD_FoodOrder_LevelInfo__SequenceFits(param_4,uVar1,uVar5,uVar4,0);
            } while ((uVar2 & 1) == 0);
            memcpy(&local_118,&local_b0,0x48);
            uStack_188 = uStack_100;
            local_190 = local_108;
            local_180 = local_f8;
            uVar2 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__IsMergedAs
                              (param_1,lVar3,&local_190,param_4);
          } while (((uVar2 & 1) == 0) ||
                  (uVar2 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__IsServable
                                     (param_1,lVar3,param_2), (uVar2 & 1) == 0));
LAB_040cb6d8:
          FUN_071bd288(&local_d0,DAT_091a4250);
          return lVar3;
        }
      }
    }
    else if (*(long *)(param_1 + 0x88) != 0) {
      uVar2 = FUN_053ebc3c(*(long *)(param_1 + 0x88),*(undefined8 *)(lVar3 + 0x10),DAT_091a8610);
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      uVar2 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__IsServable
                        (param_1,*(undefined8 *)(lVar3 + 0x10),param_2);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      return *(long *)(lVar3 + 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

