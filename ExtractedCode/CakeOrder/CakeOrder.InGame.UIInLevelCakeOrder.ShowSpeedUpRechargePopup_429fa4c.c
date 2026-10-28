// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder$$ShowSpeedUpRechargePopup
// address: 0x429fa4c
// body: available
// range: 0x429fa4c-0x429feb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429fea0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429fea4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429feb0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder__ShowSpeedUpRechargePopup(long param_1)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((DAT_09517226 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174bc0);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09195790);
    FUN_03f5c2a4(&DAT_091b4948);
    FUN_03f5c2a4(&DAT_091b4950);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8590);
    FUN_03f5c2a4(&DAT_091dcc58);
    FUN_03f5c2a4(&DAT_091dcc18);
    FUN_03f5c2a4(&DAT_091dcc20);
    FUN_03f5c2a4(&DAT_09223098);
    FUN_03f5c2a4(&DAT_09223088);
    DAT_09517226 = 1;
  }
  if (*(char *)(param_1 + 0x118) == '\0') {
    uVar11 = *(undefined8 *)(param_1 + 0x110);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar11,0);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_05a8eda4(DAT_091b4950), (uVar3 & 1) != 0)) {
      lVar4 = *(long *)(DAT_091b4948 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (**(long **)(lVar4 + 0xb8) != 0) {
        lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x40);
        *(undefined1 *)(param_1 + 0x118) = 1;
        if ((*(long *)(param_1 + 0xc0) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x58), lVar5 != 0)) {
          Utilities_BoolModifierWithRegisteredSource__AddModifier(lVar5,0x7d1,0);
          CakeOrder_TimeControlCakeOrder__StopTime(0x7d1,0);
          lVar5 = thunk_FUN_03f9944c(DAT_09195790);
          System_Object___ctor(lVar5,0);
          if ((*(long *)(param_1 + 0xc0) != 0) &&
             ((lVar10 = *(long *)(*(long *)(param_1 + 0xc0) + 0x38), lVar10 != 0 && (lVar5 != 0))))
          {
            uVar11 = *(undefined8 *)(lVar10 + 0x18);
            *(undefined1 *)(lVar5 + 0x1c) = 0;
            *(undefined8 *)(lVar5 + 0x10) = uVar11;
            *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(lVar10 + 0x20);
            if (lVar4 != 0) {
              iVar1 = *(int *)(lVar4 + 0x20);
              *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar4 + 0x1c);
              if (iVar1 == 1) {
                bVar2 = CakeOrder_InGame_UIInLevelCakeOrder__get_CanWatchBoosterOrSaveMeRewardAds
                                  (param_1);
              }
              else {
                bVar2 = 0;
              }
              *(byte *)(lVar5 + 0x24) = bVar2 & 1;
              plVar6 = (long *)FUN_03f5c394(DAT_09180318,2);
              local_44 = *(undefined4 *)(lVar4 + 0x10);
              lVar10 = FUN_03f5c42c(DAT_09535420,&local_44);
              if (plVar6 != (long *)0x0) {
                if ((lVar10 != 0) &&
                   (lVar7 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                {
LAB_0429fea8:
                  uVar11 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar11,0);
                }
                if ((int)plVar6[3] != 0) {
                  plVar6[4] = lVar10;
                  thunk_FUN_03f5d7b8(plVar6 + 4,lVar10);
                  local_48 = *(undefined4 *)(lVar4 + 0x18);
                  lVar4 = FUN_03f5c42c(DAT_09535420,&local_48);
                  if ((lVar4 != 0) &&
                     (lVar10 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                     lVar10 == 0)) goto LAB_0429fea8;
                  if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                    plVar6[5] = lVar4;
                    thunk_FUN_03f5d7b8(plVar6 + 5,lVar4);
                    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar11 = CakeOrder_Localization_CakeLocalization__TrFormat
                                       (DAT_09223098,plVar6,0);
                    *(undefined8 *)(lVar5 + 0x38) = uVar11;
                    thunk_FUN_03f5d7b8();
                    *(undefined8 *)(lVar5 + 0x48) = DAT_09223088;
                    *(undefined4 *)(lVar5 + 0x40) = 5;
                    thunk_FUN_03f5d7b8();
                    lVar4 = FUN_04d445d0(param_1,*(undefined8 *)(param_1 + 0x110),0,0,DAT_091d8590);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_09188ad0);
                    }
                    uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
                    if ((uVar3 & 1) == 0) {
                      CakeOrder_InGame_UIInLevelCakeOrder__<ShowSpeedUpRechargePopup>g__CloseAndResume_91_2
                                (param_1);
                      return;
                    }
                    uVar12 = *(undefined8 *)(param_1 + 0xd8);
                    uVar11 = thunk_FUN_03f9944c(DAT_09174bc0);
                    FUN_070a8c30(uVar11,param_1,DAT_091dcc20,0);
                    uVar8 = thunk_FUN_03f9944c(DAT_09180e78);
                    System_Action___ctor(uVar8,param_1,DAT_091dcc18,0);
                    uVar9 = thunk_FUN_03f9944c(DAT_09174980);
                    FUN_070a8c30(uVar9,param_1,DAT_091dcc58,0);
                    if (lVar4 != 0) {
                      CakeOrder_InGame_UIPopupBoosterSaveMeBase__SetUpDataAndEventListeners
                                (lVar4,uVar12,lVar5,uVar11,uVar8,uVar9);
                      CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack(param_1,lVar4,0,0,0);
                      return;
                    }
                    goto LAB_0429fea0;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
            }
          }
        }
      }
LAB_0429fea0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

