// rea decompile_all
// name: Datpt.Cook_Order.CreamOnBeach.LevelCreaamOnBeach1$$RandomeNewIngredient
// address: 0x41c78bc
// body: available
// range: 0x41c78bc-0x41c8023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c7fdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c7fe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c7fe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c7fe8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c7fec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c7ff0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c7ff4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c7ff8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c7ffc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c8000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c8004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c8008 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_CreamOnBeach_LevelCreaamOnBeach1__RandomeNewIngredient(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x1;
  long extraout_x1_00;
  long lVar8;
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_095169e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919caa8);
    FUN_03f5c2a4(&DAT_0919cab0);
    FUN_03f5c2a4(&DAT_0919cab8);
    FUN_03f5c2a4(&DAT_091c9b10);
    FUN_03f5c2a4(&DAT_091a5d98);
    FUN_03f5c2a4(&DAT_091a5da0);
    FUN_03f5c2a4(&DAT_091a5da8);
    FUN_03f5c2a4(&DAT_09178ac8);
    FUN_03f5c2a4(&DAT_091a93c0);
    FUN_03f5c2a4(&DAT_091a93c8);
    FUN_03f5c2a4(&DAT_091ac7f0);
    FUN_03f5c2a4(&DAT_091ecaa0);
    FUN_03f5c2a4(&DAT_09192380);
    FUN_03f5c2a4(&DAT_091ecaa8);
    FUN_03f5c2a4(&DAT_09192388);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_095169e1 = 1;
  }
  puStack_68 = (undefined8 *)0x0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  if (*(char *)((long)param_1 + 0x1b1) == '\0') {
    if (param_1[0x37] == 0) goto LAB_041c7ffc;
    FUN_06f2d6f4(&local_90,param_1[0x37],DAT_0919cab0);
    local_70 = local_90;
    local_90 = 0;
    puStack_68 = puStack_88;
    uStack_58 = uStack_78;
    local_60 = uStack_80;
    puStack_88 = &local_70;
    do {
      uVar7 = FUN_0726063c(&local_70,DAT_091a5da0);
      uVar4 = local_60;
      if ((uVar7 & 1) == 0) {
        FUN_07260744(&local_70,DAT_091a5d98);
        (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
        return;
      }
      if (param_1[0x38] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar2 = local_60._4_4_;
      uVar7 = FUN_06f2d508(param_1[0x38],local_60 & 0xffffffff,DAT_0919caa8);
      if ((uVar7 & 1) == 0) break;
      if (param_1[0x38] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = FUN_06f2d280(param_1[0x38],uVar4 & 0xffffffff,DAT_0919cab8);
    } while (iVar2 <= iVar3);
    lVar5 = param_1[0x3d];
    UnityEngine_Input__get_mousePosition(0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Camera__ScreenToWorldPoint(lVar5,0);
    Datpt_Cook_Order_LevelControlCookOrder__GenerateNewIngredient(param_1,uVar4 & 0xffffffff,0);
  }
  else {
    if (param_1[0x43] == 0) {
LAB_041c7ffc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06f2d6f4(&local_90,param_1[0x43],DAT_0919cab0);
    local_70 = local_90;
    local_90 = 0;
    puStack_68 = puStack_88;
    uStack_58 = uStack_78;
    local_60 = uStack_80;
    puStack_88 = &local_70;
    do {
      do {
        do {
          uVar4 = FUN_0726063c(&local_70,DAT_091a5da0);
          if ((uVar4 & 1) == 0) {
            FUN_07260744(&local_70,DAT_091a5d98);
            if (param_1[0x43] == 0) goto LAB_041c7ffc;
            FUN_06f2d6f4(&local_90,param_1[0x43],DAT_0919cab0);
            puStack_68 = puStack_88;
            local_70 = local_90;
            uStack_58 = uStack_78;
            local_60 = uStack_80;
            local_90 = 0;
            puStack_88 = &local_70;
            goto LAB_041c7c90;
          }
          lVar5 = thunk_FUN_03f9944c(DAT_09192380);
          System_Object___ctor(lVar5,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(ulong *)(lVar5 + 0x10) = local_60;
        } while ((int)(local_60 >> 0x20) < 1);
        if (param_1[0x37] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = FUN_06f2d508(param_1[0x37],local_60,DAT_0919caa8);
      } while ((uVar4 & 1) == 0);
      if (param_1[0x38] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = FUN_06f2d508(param_1[0x38],*(undefined4 *)(lVar5 + 0x10),DAT_0919caa8);
      if ((uVar4 & 1) == 0) break;
      if (param_1[0x38] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar2 = FUN_06f2d280(param_1[0x38],*(undefined4 *)(lVar5 + 0x10),DAT_0919cab8);
      if (param_1[0x37] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = FUN_06f2d280(param_1[0x37],*(undefined4 *)(lVar5 + 0x10),DAT_0919cab8);
    } while (iVar3 <= iVar2);
    lVar8 = param_1[0x2e];
    uVar6 = thunk_FUN_03f9944c(DAT_09178ac8);
    FUN_053150f0(uVar6,lVar5,DAT_091ecaa0,0);
    FUN_04ae2af0(lVar8,uVar6,DAT_091c9b10);
    if (extraout_x1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = *(int *)(extraout_x1 + 0xa0);
    (**(code **)(*param_1 + 0x328))
              (param_1,*(undefined4 *)(lVar5 + 0x10),-iVar2,*(undefined8 *)(*param_1 + 0x330));
    (**(code **)(*param_1 + 0x338))
              (param_1,*(undefined4 *)(lVar5 + 0x10),iVar2,*(undefined8 *)(*param_1 + 0x340));
    (**(code **)(*param_1 + 0x358))
              (param_1,*(undefined4 *)(lVar5 + 0x10),iVar2,*(undefined8 *)(*param_1 + 0x360));
    lVar8 = param_1[0x43];
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Datpt_Utilities__AddToDictionary(lVar8,uVar1,-iVar2,0);
    if (param_1[0x42] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = FUN_05799e5c(param_1[0x42],*(undefined4 *)(lVar5 + 0x10),DAT_091ac7f0);
    if ((uVar4 & 1) == 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x10);
      lVar5 = param_1[0x3d];
      UnityEngine_Input__get_mousePosition(0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Camera__ScreenToWorldPoint(lVar5,0);
      Datpt_Cook_Order_LevelControlCookOrder__GenerateNewIngredient(param_1,uVar1,0);
    }
    else {
      lVar8 = param_1[0x43];
      uVar1 = *(undefined4 *)((long)param_1 + 0x1e4);
      if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Datpt_Utilities__AddToDictionary(lVar8,uVar1,0xffffffff,0);
      (**(code **)(*param_1 + 0x328))
                (param_1,*(undefined4 *)((long)param_1 + 0x1e4),0xffffffff,
                 *(undefined8 *)(*param_1 + 0x330));
      (**(code **)(*param_1 + 0x338))
                (param_1,*(undefined4 *)((long)param_1 + 0x1e4),1,*(undefined8 *)(*param_1 + 0x340))
      ;
      (**(code **)(*param_1 + 0x358))
                (param_1,*(undefined4 *)((long)param_1 + 0x1e4),1,*(undefined8 *)(*param_1 + 0x360))
      ;
      uVar1 = *(undefined4 *)(lVar5 + 0x10);
      lVar5 = param_1[0x3d];
      UnityEngine_Input__get_mousePosition(0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Camera__ScreenToWorldPoint(lVar5,0);
      Datpt_Cook_Order_CreamOnBeach_LevelCreaamOnBeach1__GenerateNewBowlCreamMixed(param_1,uVar1);
    }
  }
  goto LAB_041c7fac;
  while( true ) {
    lVar5 = thunk_FUN_03f9944c(DAT_09192388);
    System_Object___ctor(lVar5,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(ulong *)(lVar5 + 0x10) = local_60;
    if ((0 < (int)(local_60 >> 0x20)) && ((local_60 & 0xffffffff) != 0)) break;
LAB_041c7c90:
    uVar4 = FUN_0726063c(&local_70,DAT_091a5da0);
    if ((uVar4 & 1) == 0) goto LAB_041c7fac;
  }
  lVar8 = param_1[0x2e];
  uVar6 = thunk_FUN_03f9944c(DAT_09178ac8);
  FUN_053150f0(uVar6,lVar5,DAT_091ecaa8,0);
  FUN_04ae2af0(lVar8,uVar6,DAT_091c9b10);
  if (extraout_x1_00 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = *(int *)(extraout_x1_00 + 0xa0);
  (**(code **)(*param_1 + 0x328))
            (param_1,*(undefined4 *)(lVar5 + 0x10),-iVar2,*(undefined8 *)(*param_1 + 0x330));
  (**(code **)(*param_1 + 0x338))
            (param_1,*(undefined4 *)(lVar5 + 0x10),iVar2,*(undefined8 *)(*param_1 + 0x340));
  (**(code **)(*param_1 + 0x358))
            (param_1,*(undefined4 *)(lVar5 + 0x10),iVar2,*(undefined8 *)(*param_1 + 0x360));
  lVar8 = param_1[0x43];
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Datpt_Utilities__AddToDictionary(lVar8,uVar1,-iVar2,0);
  if (param_1[0x42] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = FUN_05799e5c(param_1[0x42],*(undefined4 *)(lVar5 + 0x10),DAT_091ac7f0);
  if ((uVar4 & 1) == 0) {
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    lVar5 = param_1[0x3d];
    UnityEngine_Input__get_mousePosition(0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Camera__ScreenToWorldPoint(lVar5,0);
    Datpt_Cook_Order_LevelControlCookOrder__GenerateNewIngredient(param_1,uVar1,0);
  }
  else {
    lVar8 = param_1[0x43];
    uVar1 = *(undefined4 *)((long)param_1 + 0x1e4);
    if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Datpt_Utilities__AddToDictionary(lVar8,uVar1,0xffffffff,0);
    (**(code **)(*param_1 + 0x328))
              (param_1,*(undefined4 *)((long)param_1 + 0x1e4),0xffffffff,
               *(undefined8 *)(*param_1 + 0x330));
    (**(code **)(*param_1 + 0x338))
              (param_1,*(undefined4 *)((long)param_1 + 0x1e4),1,*(undefined8 *)(*param_1 + 0x340));
    (**(code **)(*param_1 + 0x358))
              (param_1,*(undefined4 *)((long)param_1 + 0x1e4),1,*(undefined8 *)(*param_1 + 0x360));
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    lVar5 = param_1[0x3d];
    UnityEngine_Input__get_mousePosition(0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Camera__ScreenToWorldPoint(lVar5,0);
    Datpt_Cook_Order_CreamOnBeach_LevelCreaamOnBeach1__GenerateNewBowlCreamMixed(param_1,uVar1);
  }
LAB_041c7fac:
  FUN_07260744(&local_70,DAT_091a5d98);
  return;
}

