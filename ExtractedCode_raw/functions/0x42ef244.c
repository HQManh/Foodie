// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopup7DayLogin$$SetUpOnCreate
// address: 0x42ef244
// body: available
// range: 0x42ef244-0x42ef687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ef42c to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ef67c to 0x42ef9f4 CakeOrder.LiveOpsImplement.UIPopup7DayLogin$$RefreshClaimButton (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ef680 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ef684 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIPopup7DayLogin__SetUpOnCreate(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_095174a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a88);
    FUN_03f5c2a4(&DAT_091747c0);
    FUN_03f5c2a4(&DAT_09174d00);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b1450);
    FUN_03f5c2a4(&DAT_091b1458);
    FUN_03f5c2a4(&DAT_091d2680);
    FUN_03f5c2a4(&DAT_091b4a18);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcea8);
    FUN_03f5c2a4(&DAT_091dceb0);
    FUN_03f5c2a4(&DAT_091dcec0);
    FUN_03f5c2a4(&DAT_091dcec8);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_09206ef8);
    DAT_095174a1 = 1;
  }
  CakeOrder_BaseUI_UICakePopup__SetUpOnCreate(param_1,param_2,0);
  lVar3 = *(long *)(DAT_091b4a18 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uVar4 = FUN_04bfb090(**(long **)(lVar3 + 0xb8),DAT_091d2680);
    *(undefined8 *)(param_1 + 0x100) = uVar4;
    thunk_FUN_03f5d7b8(param_1 + 0x100,uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if ((uVar5 & 1) == 0) {
      lVar3 = *(long *)(param_1 + 0x100);
      uVar4 = thunk_FUN_03f9944c(DAT_091747c0);
      FUN_070a7580(uVar4,param_1,DAT_091dcec8,0);
      if (lVar3 != 0) {
        LiveOpsR1_LiveOpsBehaviorLoginXDaysAbstract__add_onTakedReward(lVar3,uVar4,0);
        lVar3 = *(long *)(param_1 + 0x100);
        uVar4 = thunk_FUN_03f9944c(DAT_09174d00);
        FUN_071cba50(uVar4,param_1,DAT_091dcec0,0);
        if (lVar3 != 0) {
          CakeOrder_LiveOpsImplement_LiveOpBehavior7DayLogin__add_onReceiveReward(lVar3,uVar4);
          plVar6 = *(long **)(param_1 + 0x100);
          if (plVar6 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
            if (*(long *)(param_1 + 0xc0) != 0) {
              uVar2 = *(uint *)(*(long *)(param_1 + 0xc0) + 0x18);
              if ((int)uVar2 <= (int)uVar1) {
                uVar1 = uVar2;
              }
              if (0 < (int)uVar1) {
                uVar5 = 0;
                do {
                  if (*(long *)(param_1 + 0xc0) == 0) goto LAB_042ef680;
                  lVar3 = FUN_057e0998(*(long *)(param_1 + 0xc0),uVar5 & 0xffffffff,DAT_091b1458);
                  lVar8 = *(long *)(param_1 + 0x100);
                  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x38) == 0)) ||
                     (lVar9 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10), lVar9 == 0))
                  goto LAB_042ef680;
                  if (*(uint *)(lVar9 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  uVar4 = *(undefined8 *)(lVar9 + uVar5 * 8 + 0x20);
                  uVar7 = LiveOpsR1_LiveOpsBehaviorLoginXDaysAbstract__IsTakedReward
                                    (lVar8,uVar5 & 0xffffffff,0);
                  if ((uVar7 & 1) == 0) {
                    if (*(long *)(param_1 + 0x100) == 0) goto LAB_042ef680;
                    uVar2 = LiveOpsR1_LiveOpsBehaviorLoginXDaysAbstract__IsCanTakeReward
                                      (*(long *)(param_1 + 0x100),uVar5 & 0xffffffff,0);
                    uVar2 = uVar2 & 1;
                  }
                  else {
                    uVar2 = 2;
                  }
                  lVar8 = 0xd0;
                  if (uVar1 - 1 != uVar5) {
                    lVar8 = 200;
                  }
                  uVar10 = *(undefined8 *)(param_1 + lVar8);
                  uVar4 = CakeOrder_LiveOpsImplement_UIPopup7DayLogin__BuildRewardViews(uVar4);
                  if (lVar3 == 0) goto LAB_042ef680;
                  CakeOrder_LiveOpsImplement_UIItemLoginDayReward__Setup
                            (lVar3,uVar10,uVar5 & 0xffffffff,uVar4,uVar2);
                  uVar4 = thunk_FUN_03f9944c(DAT_09174a88);
                  FUN_070a8c30(uVar4,param_1,DAT_091dceb0,0);
                  CakeOrder_LiveOpsImplement_UIItemLoginDayReward__add_onClicked(lVar3,uVar4);
                  uVar5 = uVar5 + 1;
                } while (uVar1 != uVar5);
              }
              uVar4 = *(undefined8 *)(param_1 + 0xe8);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
              if ((uVar5 & 1) == 0) {
LAB_042ef660:
                CakeOrder_LiveOpsImplement_UIPopup7DayLogin__RefreshClaimButton(param_1);
                return;
              }
              if (*(long *)(param_1 + 0xe8) != 0) {
                lVar3 = *(long *)(*(long *)(param_1 + 0xe8) + 0x100);
                uVar4 = thunk_FUN_03f9944c(DAT_0918c678);
                UnityEngine_Events_UnityAction___ctor(uVar4,param_1,DAT_091dcea8,0);
                if (lVar3 != 0) {
                  UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar4,0);
                  goto LAB_042ef660;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_09206ef8,0);
      lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
      if (lVar3 != 0) {
        UnityEngine_GameObject__SetActive(lVar3,0,0);
        return;
      }
    }
  }
LAB_042ef680:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

