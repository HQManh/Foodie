// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$ServeToCustomers
// address: 0x40c7e84
// body: available
// range: 0x40c7e84-0x40c816f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c7f90 to 0x40cbcd0 AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$Capture (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40c815c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c8160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c8164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c8168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c816c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__ServeToCustomers(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  long local_50;
  
  if ((DAT_09515fa3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4250);
    FUN_03f5c2a4(&DAT_091a4258);
    FUN_03f5c2a4(&DAT_091a4260);
    FUN_03f5c2a4(&DAT_091a8610);
    FUN_03f5c2a4(&DAT_091afe18);
    FUN_03f5c2a4(&DAT_091afe20);
    FUN_03f5c2a4(&DAT_091afe30);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515fa3 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_68 = 0;
  lVar2 = AnhPD_FoodOrder_ServeShelfController__get_LineHandle();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x8c) == '\0') {
    lVar4 = *(long *)(param_1 + 0xe8);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
        lVar4 = *(long *)(param_1 + 0xe8);
        if (lVar4 == 0) goto LAB_040c8164;
      }
      FUN_057e0e78(lVar4,*(undefined8 *)(param_1 + 0x90),DAT_091afe18);
      if (*(long *)(param_1 + 0xe8) != 0) {
        FUN_057e185c(&local_80,*(long *)(param_1 + 0xe8),DAT_091afe30);
        puStack_58 = puStack_78;
        local_60 = local_80;
        local_50 = local_70;
        local_80 = 0;
        puStack_78 = &local_60;
        while (uVar3 = FUN_071bd28c(&local_60,DAT_091a4258), lVar4 = local_50, (uVar3 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar3 & 1) != 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(lVar4);
            if ((uVar3 & 1) == 0) {
              if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar3 = FUN_053ebc3c(*(long *)(param_1 + 0x98),lVar4,DAT_091a8610);
              if ((((uVar3 & 1) == 0) &&
                  (fVar6 = (float)UnityEngine_Time__get_time(0), *(float *)(lVar4 + 0x84) <= fVar6))
                 && (uVar3 = AnhPD_FoodOrder_ServeShelfController__IsResultAnimPlaying
                                       (param_1,lVar4), (uVar3 & 1) == 0)) {
                if (*(long *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar3 = AnhPD_FoodOrder_ShelfMergeQueue__HasInbound
                                  (*(long *)(param_1 + 0xa0),lVar4,0);
                if ((uVar3 & 1) == 0) {
                  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar5 = *(undefined8 *)(lVar4 + 0xa8);
                  uVar3 = AnhPD_FoodOrder_FCustomerLineHandle__TryGetServableLine
                                    (lVar2,uVar5,&local_68,0);
                  if ((uVar3 & 1) != 0) {
                    AnhPD_FoodOrder_ServeShelfController__ServePlateTo
                              (param_1,lVar4,uVar5,local_68,0xffffffff);
                  }
                }
              }
            }
          }
        }
        FUN_071bd288(&local_60,DAT_091a4250);
        lVar2 = *(long *)(param_1 + 0xe8);
        if (lVar2 != 0) {
          iVar1 = *(int *)(lVar2 + 0x18);
          *(undefined4 *)(lVar2 + 0x18) = 0;
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
          }
          AnhPD_FoodOrder_ServeShelfController__TryMergeFromSaveMeBag(param_1);
          AnhPD_FoodOrder_ServeShelfController__ScanGridItems(param_1);
          return;
        }
      }
    }
  }
  else {
    lVar2 = AnhPD_FoodOrder_ServeShelfController__get_WholeDish(param_1);
    if (lVar2 != 0) {
      AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Serve(lVar2,0);
      lVar2 = AnhPD_FoodOrder_ServeShelfController__get_WholeDish(param_1);
      if (lVar2 != 0) {
        AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Capture(lVar2,0);
        return;
      }
    }
  }
LAB_040c8164:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

