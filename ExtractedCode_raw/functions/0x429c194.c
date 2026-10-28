// rea decompile_all
// name: CakeOrder.InGame.UIEndGameWin$$ApplyBonusAndPlayAnimHardCurrencyFlyAndNext
// address: 0x429c194
// body: available
// range: 0x429c194-0x429c5ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429c260 to 0x429c7dc CakeOrder.InGame.UIEndGameWin$$<ApplyBonusAndPlayAnimHardCurrencyFlyAndNext>g__OnDoneAnim|43_0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x429c5f8 to 0x4278400 CakeOrder.SaveProfile.CakeItemCurrencyDataAccess$$SaveData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x429c5fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIEndGameWin__ApplyBonusAndPlayAnimHardCurrencyFlyAndNext
               (long param_1,uint param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_09517204 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091dc938);
    DAT_09517204 = 1;
  }
  if (*(char *)(param_1 + 0x1b9) != '\0') {
    return;
  }
  *(undefined2 *)(param_1 + 0x1b9) = 0x101;
  if (((int)param_2 < 1) && (param_3 < 1)) {
    CakeOrder_InGame_UIEndGameWin__<ApplyBonusAndPlayAnimHardCurrencyFlyAndNext>g__OnDoneAnim_43_0
              (param_1);
    return;
  }
  lVar8 = *(long *)(param_1 + 0x128);
  uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar6,param_1,DAT_091dc938,0);
  uVar6 = CakeOrder_InGame_UIEndGameWin__IEFinishClaimIfAnimationStops(param_1,uVar6);
  if (lVar8 != 0) {
    UnityEngine_MonoBehaviour__StartCoroutine(lVar8,uVar6,0);
    if ((*(long *)(param_1 + 0x130) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0x130) + 0x28), lVar8 != 0)) {
      Utilities_UINumberCounterAbstract__DisableSyncData(lVar8,0);
      if (0 < (int)param_2) {
        lVar8 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_0429c5fc;
        lVar9 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x40);
        lVar8 = *(long *)(DAT_091b4b48 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        if ((lVar9 == 0) || (**(long **)(lVar8 + 0xb8) == 0)) goto LAB_0429c5fc;
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                  (**(long **)(lVar8 + 0xb8),*(undefined8 *)(lVar9 + 0x18),param_2,param_5,0,0);
        lVar8 = *(long *)(param_1 + 0x130);
        if ((lVar8 == 0) ||
           ((*(long *)(param_1 + 0x110) == 0 ||
            (plVar7 = *(long **)(lVar8 + 0x38), plVar7 == (long *)0x0)))) goto LAB_0429c5fc;
        (**(code **)(*plVar7 + 0x178))
                  (plVar7,*(undefined8 *)(lVar8 + 0x28),
                   *(undefined4 *)(*(long *)(param_1 + 0x110) + 0x44),
                   *(undefined8 *)(*plVar7 + 0x180));
        if (*(long *)(param_1 + 0x130) == 0) goto LAB_0429c5fc;
        lVar8 = *(long *)(*(long *)(param_1 + 0x130) + 0x38);
        uVar1 = *(uint *)(param_1 + 0x158);
        uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar6,param_1,DAT_091dc938,0);
        if (lVar8 == 0) goto LAB_0429c5fc;
        if ((int)uVar1 < 2) {
          uVar1 = 1;
        }
        uVar5 = 0;
        if (uVar1 != 0) {
          uVar5 = param_2 / uVar1;
        }
        if (param_2 != uVar5 * uVar1) {
          uVar5 = uVar5 + 1;
        }
        Utilities_UIImageFlyToCounter__ShowCurrencyFly(0,lVar8,param_2,uVar5,param_4,uVar6,0);
      }
      if (0 < param_3) {
        lVar8 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_0429c5fc;
        lVar9 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x48);
        lVar8 = *(long *)(DAT_091b4b48 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        if ((lVar9 == 0) || (**(long **)(lVar8 + 0xb8) == 0)) goto LAB_0429c5fc;
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                  (**(long **)(lVar8 + 0xb8),*(undefined8 *)(lVar9 + 0x18),param_3,param_5,0,0);
        lVar8 = *(long *)(param_1 + 0x130);
        if ((lVar8 == 0) ||
           ((*(long *)(param_1 + 0x110) == 0 ||
            (plVar7 = *(long **)(lVar8 + 0x30), plVar7 == (long *)0x0)))) goto LAB_0429c5fc;
        (**(code **)(*plVar7 + 0x178))
                  (plVar7,*(undefined8 *)(lVar8 + 0x20),
                   *(undefined4 *)(*(long *)(param_1 + 0x110) + 0x38),
                   *(undefined8 *)(*plVar7 + 0x180));
        lVar8 = *(long *)(param_1 + 0x130);
        if ((int)param_2 < 1) {
          if (lVar8 == 0) goto LAB_0429c5fc;
          lVar8 = *(long *)(lVar8 + 0x30);
          iVar2 = *(int *)(param_1 + 0x150);
          iVar3 = *(int *)(param_1 + 0x154);
          uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar6,param_1,DAT_091dc938,0);
          if (lVar8 == 0) goto LAB_0429c5fc;
          iVar4 = 0;
          if (iVar2 != 0) {
            iVar4 = param_3 / iVar2;
          }
          if (param_3 != iVar4 * iVar2) {
            iVar4 = iVar4 + 1;
          }
          if (iVar3 <= iVar4) {
            iVar4 = iVar3;
          }
        }
        else {
          if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x30), lVar8 == 0)) goto LAB_0429c5fc;
          iVar2 = *(int *)(param_1 + 0x150);
          uVar6 = 0;
          iVar4 = 0;
          if (iVar2 != 0) {
            iVar4 = param_3 / iVar2;
          }
          if (param_3 != iVar4 * iVar2) {
            iVar4 = iVar4 + 1;
          }
          if (*(int *)(param_1 + 0x154) <= iVar4) {
            iVar4 = *(int *)(param_1 + 0x154);
          }
        }
        Utilities_UIImageFlyToCounter__ShowCurrencyFly(0,lVar8,param_3,iVar4,param_4,uVar6,0);
      }
      lVar8 = *(long *)(DAT_091b4b48 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      if (**(long **)(lVar8 + 0xb8) != 0) {
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar8 + 0xb8),0);
        return;
      }
    }
  }
LAB_0429c5fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

