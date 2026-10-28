// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$TryBuildCustomerScheduleAndIngredientQueue
// address: 0x43943a4
// body: available
// range: 0x43943a4-0x43948af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43946fc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4394700 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4394704 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439474c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4394750 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4394754 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4394758 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439475c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43947ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43947b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43947b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4394804 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_LevelPlayLoadAndSetupControl__TryBuildCustomerScheduleAndIngredientQueue
          (long param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  if ((DAT_09517a4d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183108);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517a4d = 1;
  }
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  *param_2 = 0;
  thunk_FUN_03f5d7b8(param_2,0);
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  *param_4 = 0;
  thunk_FUN_03f5d7b8(param_4,0);
  *param_5 = 0;
  thunk_FUN_03f5d7b8(param_5,0);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar8,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar8,0,0);
      if ((uVar2 & 1) != 0) {
        thunk_FUN_03fc39d4(&DAT_091870e0);
        uVar8 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_09206cc8);
        System_InvalidOperationException___ctor(uVar8,uVar7,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091d2478);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar7);
      }
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
      lVar3 = thunk_FUN_03f9944c(DAT_09183108);
      CakeOrder_InGame_CustomerScheduleBuilder___ctor(lVar3,uVar8,0);
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar4 = (long *)(*(long *)(param_1 + 0x30) + 0xa8);
      *plVar4 = lVar3;
      thunk_FUN_03f5d7b8(plVar4,lVar3);
      uVar2 = FUN_05a8f088(DAT_091b4b68);
      if ((uVar2 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        lVar5 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar8 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetAllCharacterIds
                          (**(long **)(lVar5 + 0xb8),0);
      }
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = CookingGraph_CustomerOrderTranslator__TryParse
                        (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x78),
                         *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),param_2,&local_48,uVar8,0
                        );
      uVar8 = local_48;
      if ((uVar2 & 1) == 0) {
        thunk_FUN_03fc39d4(&DAT_091870e0);
        uVar7 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_09202628);
        System_InvalidOperationException___ctor(uVar7,uVar6,uVar8,0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091d2478);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,uVar8);
      }
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = CookingGraph_IngredientQueueTranslator__TryParse
                        (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90),
                         *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),&local_58,&local_60,0);
      uVar8 = local_60;
      if ((uVar2 & 1) != 0) {
        if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar4 = *(long **)(*(long *)(param_1 + 0x30) + 0x10);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar8 = *(undefined8 *)(*param_2 + 0x10);
        iVar1 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
        if (*(long *)(param_1 + 0x30) != 0) {
          CakeOrder_InGame_CustomerRandomizer__Assign
                    (uVar8,plVar4,*(int *)(*(long *)(param_1 + 0x30) + 0x1c) + iVar1);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = CakeOrder_InGame_CustomerScheduleBuilder__BuildAll
                            (lVar3,*(undefined8 *)(param_1 + 0x30),*param_2,0);
          *param_3 = lVar5;
          thunk_FUN_03f5d7b8(param_3);
          if (*param_3 != 0) {
            lVar3 = CakeOrder_InGame_CustomerScheduleBuilder__BuildIngredientQueue
                              (lVar3,*(undefined8 *)(param_1 + 0x30),local_58,0);
            *param_4 = lVar3;
            thunk_FUN_03f5d7b8(param_4);
            if (*param_4 != 0) {
              return 1;
            }
            thunk_FUN_03fc39d4(&DAT_091870e0);
            uVar8 = thunk_FUN_03f9944c();
            uVar7 = thunk_FUN_03fc39d4(&DAT_091ffad0);
            System_InvalidOperationException___ctor(uVar8,uVar7,0);
            uVar7 = thunk_FUN_03fc39d4(&DAT_091d2478);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar8,uVar7);
          }
          thunk_FUN_03fc39d4(&DAT_091870e0);
          uVar8 = thunk_FUN_03f9944c();
          uVar7 = thunk_FUN_03fc39d4(&DAT_091ffad8);
          System_InvalidOperationException___ctor(uVar8,uVar7,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091d2478);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,uVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar7 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_09202698);
      System_InvalidOperationException___ctor(uVar7,uVar6,uVar8,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091d2478);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar8);
    }
  }
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar8 = thunk_FUN_03f9944c();
  uVar7 = thunk_FUN_03fc39d4(&DAT_09206cc0);
  System_InvalidOperationException___ctor(uVar8,uVar7,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091d2478);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar7);
}

