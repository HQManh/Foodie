// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineQuery$$PickWorstTimerLine
// address: 0x420a144
// body: available
// range: 0x420a144-0x420a333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420a314 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420a318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420a31c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420a320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420a324 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420a328 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420a330 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_CustomerLineQuery__PickWorstTimerLine(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  long local_78;
  long *plStack_70;
  long local_68;
  long local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_09516c2c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2c60);
    FUN_03f5c2a4(&DAT_091a2c68);
    FUN_03f5c2a4(&DAT_091a2c70);
    FUN_03f5c2a4(&DAT_091acac8);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516c2c = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_78,*(long *)(param_1 + 0x10),DAT_091acac8);
  local_50 = local_68;
  uStack_58 = plStack_70;
  local_60 = local_78;
  local_78 = 0;
  plStack_70 = &local_60;
  lVar2 = 0;
LAB_0420a21c:
  do {
    lVar5 = lVar2;
    uVar3 = FUN_071bd28c(&local_60,DAT_091a2c68);
    lVar1 = local_50;
    lVar2 = local_78;
    if ((uVar3 & 1) == 0) {
      FUN_071bd288(&local_60,DAT_091a2c60);
      if (lVar2 == 0) {
        return lVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar2);
    }
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_50 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = lVar5;
  } while (*(int *)(*(long *)(local_50 + 0x38) + 0x10) != 3);
  if (*(long *)(local_50 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *(long *)(*(long *)(local_50 + 0x30) + 0x60);
  if (lVar4 != 0) goto code_r0x0420a258;
  goto LAB_0420a270;
code_r0x0420a258:
  uVar3 = CakeOrder_InGame_CustomerSpawnData__get_IsCleanDishStaff(lVar4,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(lVar1 + 0x30) != 0) {
LAB_0420a270:
      lVar4 = AnhPD_FoodOrder_CustomerLineController__GetOpenOrderIndices();
      if (lVar4 != 0) {
        if ((*(int *)(lVar4 + 0x18) != 0) &&
           ((param_2 == 0 ||
            (uVar3 = (**(code **)(param_2 + 0x18))
                               (*(undefined8 *)(param_2 + 0x40),lVar1,
                                *(undefined8 *)(param_2 + 0x28)), (uVar3 & 1) != 0)))) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar5,0);
          lVar2 = lVar1;
          if ((uVar3 & 1) != 0) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            fVar6 = (float)AnhPD_FoodOrder_FCustomerLine__get_TimerRate(lVar5);
            fVar7 = (float)AnhPD_FoodOrder_FCustomerLine__get_TimerRate(lVar1);
            lVar2 = lVar5;
            if (fVar6 < fVar7) {
              lVar2 = lVar1;
            }
          }
        }
        goto LAB_0420a21c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_0420a21c;
}

