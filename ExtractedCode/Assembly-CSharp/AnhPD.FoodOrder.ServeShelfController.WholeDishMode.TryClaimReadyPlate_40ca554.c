// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$TryClaimReadyPlate
// address: 0x40ca554
// body: available
// range: 0x40ca554-0x40ca79f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ca788 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca78c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca790 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca794 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca798 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca79c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ServeShelfController_WholeDishMode__TryClaimReadyPlate
               (long param_1,void *param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined1 auStack_c8 [72];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09515fb4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4250);
    FUN_03f5c2a4(&DAT_091a4258);
    FUN_03f5c2a4(&DAT_091a4260);
    FUN_03f5c2a4(&DAT_091a8600);
    FUN_03f5c2a4(&DAT_091a8610);
    FUN_03f5c2a4(&DAT_091afe30);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515fb4 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (param_3 != 0) {
    memcpy(auStack_c8,param_2,0x48);
    uVar1 = AnhPD_FoodOrder_LevelInfo__DishKeyOfOrder(param_3,auStack_c8,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x90);
      if (lVar3 != 0) {
        FUN_057e185c(&local_120,lVar3,DAT_091afe30);
        local_70 = local_110;
        puStack_d0 = &local_80;
        uStack_78 = uStack_118;
        local_80 = local_120;
        local_d8 = 0;
        do {
          do {
            do {
              do {
                do {
                  uVar2 = FUN_071bd28c(&local_80,DAT_091a4258);
                  lVar3 = local_70;
                  if ((uVar2 & 1) == 0) goto LAB_040ca758;
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
                } while ((uVar4 & 1) == 0);
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
              } while (*(char *)(lVar3 + 0xb1) != '\0');
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x98);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar4 = FUN_053ebc3c(lVar5,lVar3,DAT_091a8610);
            } while ((uVar4 & 1) != 0);
            if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = FUN_053ebc3c(*(long *)(param_1 + 0x78),lVar3,DAT_091a8610);
          } while (((uVar4 & 1) != 0) ||
                  (uVar4 = AnhPD_FoodOrder_ServeShelfController__DishFits
                                     (*(undefined4 *)(lVar3 + 0xb4),uVar1,0), (uVar4 & 1) == 0));
          memcpy(&local_120,param_2,0x48);
          uStack_138 = uStack_108;
          local_140 = local_110;
          local_130 = local_100;
          uVar4 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__IsMergedAs
                            (param_1,lVar3,&local_140,param_3);
        } while ((uVar4 & 1) == 0);
        if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053ec72c(*(long *)(param_1 + 0x78),lVar3,DAT_091a8600);
LAB_040ca758:
        FUN_071bd288(&local_80,DAT_091a4250);
        return uVar2 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

