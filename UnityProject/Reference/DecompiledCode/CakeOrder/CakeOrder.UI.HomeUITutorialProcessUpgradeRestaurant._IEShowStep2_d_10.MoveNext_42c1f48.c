// rea decompile_all
// name: CakeOrder.UI.HomeUITutorialProcessUpgradeRestaurant.<IEShowStep2>d__10$$MoveNext
// address: 0x42c1f48
// body: available
// range: 0x42c1f48-0x42c235b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c21c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_UI_HomeUITutorialProcessUpgradeRestaurant_<IEShowStep2>d__10__MoveNext(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  undefined4 uVar8;
  
  if ((DAT_0951732b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174e30);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091ceaf8);
    FUN_03f5c2a4(&DAT_091cead8);
    FUN_03f5c2a4(&DAT_091b10f0);
    FUN_03f5c2a4(&DAT_091b10f8);
    FUN_03f5c2a4(&DAT_0918ce98);
    FUN_03f5c2a4(&DAT_0918cec0);
    FUN_03f5c2a4(&DAT_092244b0);
    DAT_0951732b = 1;
  }
  iVar7 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  lVar1 = 0;
  if (iVar7 < 2) {
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (((lVar5 == 0) || (*(long *)(lVar5 + 0x30) == 0)) ||
         (lVar3 = *(long *)(*(long *)(lVar5 + 0x30) + 0x10), lVar3 == 0)) goto LAB_042c21c4;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar3 + 0xa8);
      lVar1 = thunk_FUN_03f5d7b8();
    }
    else {
      if (iVar7 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x28) + 0xd8) == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar8 = 1;
      }
      else {
        if (lVar5 == 0) goto LAB_042c21c4;
        uVar8 = *(undefined4 *)(lVar5 + 0x40);
        uVar2 = thunk_FUN_03f9944c(DAT_0918ce98);
        UnityEngine_WaitForSecondsRealtime___ctor(uVar8,uVar2,0);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
        uVar8 = 2;
      }
LAB_042c2340:
      *(undefined4 *)(param_1 + 0x10) = uVar8;
      return 1;
    }
  }
  else if (iVar7 - 2U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0xd8);
      if ((lVar1 == 0) || (*(int *)(lVar1 + 0x18) == 0)) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar8 = 3;
        goto LAB_042c2340;
      }
      plVar6 = (long *)(param_1 + 0x30);
      *plVar6 = lVar1;
      thunk_FUN_03f5d7b8(plVar6);
      lVar1 = 0;
      if (*plVar6 != 0) {
        uVar2 = FUN_057e0998(*plVar6,0,DAT_091b10f8);
        if (*(int *)(DAT_09182278 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182278);
        }
        lVar1 = CakeOrder_Localization_CakeLocalization__Tr(DAT_092244b0,0);
        if (lVar5 != 0) {
          CakeOrder_UI_UITutorialProcessBase__ShowTutInstruct(lVar5,uVar2,lVar1);
          lVar3 = *plVar6;
          lVar1 = 0;
          if (lVar3 != 0) {
            iVar7 = 1;
            do {
              if (*(int *)(lVar3 + 0x18) <= iVar7) {
                *(undefined8 *)(lVar5 + 0x48) = 0;
                *(undefined1 *)(lVar5 + 0x44) = 0;
                lVar1 = thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x48),0);
                if (*(long *)(lVar5 + 0x30) == 0) goto LAB_042c21c4;
                lVar3 = *(long *)(*(long *)(lVar5 + 0x30) + 0x18);
                uVar2 = thunk_FUN_03f9944c(DAT_09174e30);
                lVar1 = FUN_071cd244(uVar2,lVar5,DAT_091ceaf8,0);
                if (lVar3 == 0) goto LAB_042c21c4;
                CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__add_onHomeBuildingItemBought
                          (lVar3,uVar2,0);
                uVar2 = thunk_FUN_03f9944c(DAT_09177ab8);
                FUN_053007d8(uVar2,lVar5,DAT_091cead8,0);
                uVar4 = thunk_FUN_03f9944c(DAT_0918cec0);
                UnityEngine_WaitUntil___ctor(uVar4,uVar2,0);
                *(undefined8 *)(param_1 + 0x18) = uVar4;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar4);
                uVar8 = 4;
                goto LAB_042c2340;
              }
              lVar1 = FUN_057e0998(lVar3,iVar7,DAT_091b10f8);
              if ((*(long *)(lVar5 + 0x20) == 0) || (lVar1 == 0)) goto LAB_042c21c4;
              CakeOrder_Home_TutorialReferenceGroupUI__SetFocus
                        (lVar1,*(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x10),0);
              lVar3 = *plVar6;
              iVar7 = iVar7 + 1;
            } while (lVar3 != 0);
            lVar1 = 0;
          }
        }
      }
    }
  }
  else {
    if (iVar7 != 4) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x30) != 0)) {
      lVar3 = *(long *)(*(long *)(lVar5 + 0x30) + 0x18);
      uVar2 = thunk_FUN_03f9944c(DAT_09174e30);
      lVar1 = FUN_071cd244(uVar2,lVar5,DAT_091ceaf8,0);
      if (lVar3 != 0) {
        CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__remove_onHomeBuildingItemBought
                  (lVar3,uVar2,0);
        lVar1 = 0;
        if (*(long *)(param_1 + 0x30) != 0) {
          uVar2 = FUN_057e0998(*(long *)(param_1 + 0x30),0,DAT_091b10f8);
          CakeOrder_UI_UITutorialProcessBase__HideTutInstruct(lVar5,uVar2);
          lVar5 = *(long *)(param_1 + 0x30);
          lVar1 = 0;
          if (lVar5 != 0) {
            iVar7 = 1;
            do {
              if (*(int *)(lVar5 + 0x18) <= iVar7) {
                return 0;
              }
              lVar5 = FUN_057e0998(lVar5,iVar7,DAT_091b10f8);
              lVar1 = 0;
              if (lVar5 == 0) break;
              CakeOrder_Home_TutorialReferenceGroupUI__ReturnToParent(lVar5,0);
              lVar5 = *(long *)(param_1 + 0x30);
              iVar7 = iVar7 + 1;
              lVar1 = 0;
            } while (lVar5 != 0);
          }
        }
      }
    }
  }
LAB_042c21c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(lVar1);
}

