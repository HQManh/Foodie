// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$DrawAutoplayConfigPanel
// address: 0x4295860
// body: available
// range: 0x4295860-0x4296563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4295c58 to 0x86c984c UnityEngine.GUILayout$$EndScrollView (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4295ca4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4296148 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4296560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakePauseMenuInGame__DrawAutoplayConfigPanel(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_78;
  undefined4 local_74;
  
  if ((DAT_095171c9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174948);
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_091c04e8);
    FUN_03f5c2a4(&DAT_091c04f0);
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_0917fd78);
    FUN_03f5c2a4(&DAT_09171328);
    FUN_03f5c2a4(&DAT_09182cf0);
    FUN_03f5c2a4(&DAT_0917fd80);
    FUN_03f5c2a4(&DAT_09171330);
    FUN_03f5c2a4(&DAT_09182d10);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_09185650);
    FUN_03f5c2a4(&DAT_091dc698);
    FUN_03f5c2a4(&DAT_091dc6a0);
    FUN_03f5c2a4(&DAT_091dc6a8);
    FUN_03f5c2a4(&DAT_091dc6b0);
    FUN_03f5c2a4(&DAT_091dc6b8);
    FUN_03f5c2a4(&DAT_0918c338);
    FUN_03f5c2a4(&DAT_091f9600);
    FUN_03f5c2a4(&DAT_09201178);
    FUN_03f5c2a4(&DAT_0920d420);
    FUN_03f5c2a4(&DAT_092130f8);
    FUN_03f5c2a4(&DAT_091fc768);
    FUN_03f5c2a4(&DAT_0920c730);
    FUN_03f5c2a4(&DAT_091f9658);
    FUN_03f5c2a4(&DAT_09208998);
    FUN_03f5c2a4(&DAT_091f9640);
    FUN_03f5c2a4(&DAT_0920a0b8);
    FUN_03f5c2a4(&DAT_0920a808);
    FUN_03f5c2a4(&DAT_09212a78);
    FUN_03f5c2a4(&DAT_09212a70);
    FUN_03f5c2a4(&DAT_091fb4c0);
    FUN_03f5c2a4(&DAT_091f9650);
    FUN_03f5c2a4(&DAT_091f95f0);
    FUN_03f5c2a4(&DAT_09203360);
    DAT_095171c9 = 1;
  }
  lVar3 = DAT_091c01c8;
  uVar11 = *(undefined4 *)(param_1 + 0x214);
  uVar12 = *(undefined4 *)(param_1 + 0x218);
  lVar7 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar7 = *(long *)(lVar3 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  uVar11 = UnityEngine_GUILayout__BeginScrollView(uVar11,**(undefined8 **)(lVar3 + 0xb8),0);
  lVar3 = DAT_0918c338;
  *(undefined4 *)(param_1 + 0x214) = uVar11;
  *(undefined4 *)(param_1 + 0x218) = uVar12;
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x18) == 0) {
    uVar4 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelBodyStyle();
    lVar3 = DAT_091c01c8;
    lVar7 = *(long *)(DAT_091c01c8 + 0x38);
    if (lVar7 == 0) {
      FUN_03f95ac8(DAT_091c01c8);
      lVar7 = *(long *)(lVar3 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    UnityEngine_GUILayout__Label(DAT_09208998,uVar4,**(undefined8 **)(lVar3 + 0xb8),0);
    UnityEngine_GUILayout__EndScrollView(0);
    return;
  }
  CakeOrder_InGame_UICakePauseMenuInGame__DrawPanelSection(DAT_0920a0b8);
  uVar4 = DAT_09171328;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535470);
  }
  lVar3 = System_Enum__GetValues(uVar4,0);
  uVar4 = System_Type__GetTypeFromHandle(DAT_09171328,0);
  uVar4 = System_Enum__GetNames(uVar4,0);
  plVar10 = *(long **)(*(long *)(DAT_0918c338 + 0xb8) + 0x18);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185650) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_04295c6c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185650,2);
LAB_04295c6c:
    uVar12 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    uVar6 = DAT_0917fd78;
    if (lVar3 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = thunk_FUN_03f99350(lVar3,DAT_0917fd78);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar3,uVar6);
      }
    }
    iVar2 = FUN_04ee57a4(lVar7,uVar12,DAT_091c04e8);
    uVar6 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelButtonStyle();
    lVar3 = DAT_091c01c8;
    lVar7 = *(long *)(DAT_091c01c8 + 0x38);
    if (lVar7 == 0) {
      FUN_03f95ac8(DAT_091c01c8);
      lVar7 = *(long *)(lVar3 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    uVar8 = UnityEngine_GUILayout__SelectionGrid
                      (iVar2,uVar4,2,uVar6,**(undefined8 **)(lVar3 + 0xb8),0);
    if ((int)uVar8 != iVar2) {
      CakeOrder_InGame_UICakePauseMenuInGame__OnChangeAutoplayStrategy(uVar8,uVar8 & 0xffffffff);
    }
    CakeOrder_InGame_UICakePauseMenuInGame__DrawPanelSection(DAT_091fc768);
    plVar10 = *(long **)(*(long *)(DAT_0918c338 + 0xb8) + 0x18);
    if (plVar10 != (long *)0x0) {
      lVar3 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185650) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_04295de4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185650,5);
LAB_04295de4:
      uVar12 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      uVar4 = thunk_FUN_03f9944c(DAT_09174948);
      FUN_071c30b0(uVar4,param_1,DAT_091dc6a0,0);
      CakeOrder_InGame_UICakePauseMenuInGame__DrawBotSlider
                (uVar12,0,0x3f800000,DAT_0920d420,0,DAT_091f9640,uVar4);
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_0951720a == '\0') {
        FUN_03f5c2a4(&DAT_09182cc0);
        DAT_0951720a = '\x01';
      }
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = *(int *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x20);
      uVar4 = thunk_FUN_03f9944c(DAT_09174948);
      FUN_071c30b0(uVar4,param_1,DAT_091dc6b0,0);
      CakeOrder_InGame_UICakePauseMenuInGame__DrawBotSlider
                ((float)iVar2,0,0x40a00000,DAT_0920c730,1,DAT_091f95f0,uVar4);
      if (DAT_0951720b == '\0') {
        FUN_03f5c2a4(&DAT_09182cc0);
        DAT_0951720b = '\x01';
      }
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = *(undefined4 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x2c);
      uVar4 = thunk_FUN_03f9944c(DAT_09174948);
      FUN_071c30b0(uVar4,param_1,DAT_091dc6b8,0);
      CakeOrder_InGame_UICakePauseMenuInGame__DrawBotSlider
                (uVar12,0x3f800000,0x40a00000,DAT_09203360,0,DAT_091f9658,uVar4);
      uVar12 = CakeOrder_InGame_CookingBotAutoRetry__get_PickIntervalSeconds(0);
      uVar4 = thunk_FUN_03f9944c(DAT_09174948);
      FUN_071c30b0(uVar4,param_1,DAT_091dc6a8,0);
      CakeOrder_InGame_UICakePauseMenuInGame__DrawBotSlider
                (uVar12,0x3f800000,0x41200000,DAT_0920a808,0,DAT_091f9650,uVar4);
      if (DAT_09516609 == '\0') {
        FUN_03f5c2a4(&DAT_09182cc0);
        DAT_09516609 = '\x01';
      }
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = *(int *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x50);
      uVar4 = thunk_FUN_03f9944c(DAT_09174948);
      FUN_071c30b0(uVar4,param_1,DAT_091dc698,0);
      CakeOrder_InGame_UICakePauseMenuInGame__DrawBotSlider
                ((float)iVar2,0x3f800000,0x41200000,DAT_091fb4c0,1,DAT_091f9600,uVar4);
      CakeOrder_InGame_UICakePauseMenuInGame__DrawPanelSection(DAT_092130f8);
      uVar4 = DAT_09171330;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535470);
      }
      lVar3 = System_Enum__GetValues(uVar4,0);
      uVar4 = System_Type__GetTypeFromHandle(DAT_09171330,0);
      uVar4 = System_Enum__GetNames(uVar4,0);
      if (DAT_09516608 == '\0') {
        FUN_03f5c2a4(&DAT_09182cc0);
        DAT_09516608 = '\x01';
      }
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = DAT_0917fd80;
      uVar12 = *(undefined4 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x70);
      if (lVar3 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = thunk_FUN_03f99350(lVar3,DAT_0917fd80);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar3,uVar6);
        }
      }
      iVar2 = FUN_04ee57a4(lVar7,uVar12,DAT_091c04f0);
      uVar6 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelButtonStyle();
      lVar3 = DAT_091c01c8;
      lVar7 = *(long *)(DAT_091c01c8 + 0x38);
      if (lVar7 == 0) {
        FUN_03f95ac8(DAT_091c01c8);
        lVar7 = *(long *)(lVar3 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      uVar8 = UnityEngine_GUILayout__SelectionGrid
                        (iVar2,uVar4,2,uVar6,**(undefined8 **)(lVar3 + 0xb8),0);
      if ((int)uVar8 != iVar2) {
        CakeOrder_InGame_UICakePauseMenuInGame__OnChangeAutoplayWorkWait(uVar8,uVar8 & 0xffffffff);
      }
      UnityEngine_GUILayout__Space(0x41400000,0);
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_0951660b == '\0') {
        FUN_03f5c2a4(&DAT_09182cc0);
        DAT_0951660b = '\x01';
      }
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = 0x3f51eb85;
      bVar1 = *(char *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x80) == '\0';
      if (!bVar1) {
        uVar12 = 0x3f800000;
      }
      uVar8 = (ulong)bVar1;
      uVar11 = *(undefined4 *)(&DAT_01a8bad0 + uVar8 * 4);
      uVar13 = *(undefined4 *)(&DAT_01a8a908 + uVar8 * 4);
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_GUI__set_backgroundColor(uVar13,uVar12,uVar11,0x3f800000,0);
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_0951660b == '\0') {
        FUN_03f5c2a4(&DAT_09182cc0);
        DAT_0951660b = '\x01';
      }
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar5 = &DAT_09212a70;
      if (*(char *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x80) != '\0') {
        puVar5 = &DAT_09212a78;
      }
      uVar6 = *puVar5;
      uVar4 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelActionButtonStyle();
      lVar3 = DAT_091c01c8;
      lVar7 = *(long *)(DAT_091c01c8 + 0x38);
      if (lVar7 == 0) {
        FUN_03f95ac8(DAT_091c01c8);
        lVar7 = *(long *)(lVar3 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      uVar8 = UnityEngine_GUILayout__Button(uVar6,uVar4,**(undefined8 **)(lVar3 + 0xb8),0);
      if ((uVar8 & 1) != 0) {
        CakeOrder_InGame_UICakePauseMenuInGame__OnClickAutoplayVerbose();
      }
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_GUI__set_backgroundColor(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      plVar10 = *(long **)(*(long *)(DAT_0918c338 + 0xb8) + 0x18);
      if (plVar10 != (long *)0x0) {
        lVar3 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185650) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_04296414;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185650,3);
LAB_04296414:
        local_74 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        uVar4 = FUN_03f5c42c(DAT_09182cf0,&local_74);
        if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182cc0);
        }
        if (DAT_0951720c == '\0') {
          FUN_03f5c2a4(&DAT_09182cc0);
          DAT_0951720c = '\x01';
        }
        if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_78 = *(undefined4 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x40);
        uVar6 = FUN_03f5c42c(DAT_09182d10,&local_78);
        uVar4 = System_String__Format(DAT_09201178,uVar4,uVar6,0);
        uVar6 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelCaptionStyle();
        lVar3 = DAT_091c01c8;
        lVar7 = *(long *)(DAT_091c01c8 + 0x38);
        if (lVar7 == 0) {
          FUN_03f95ac8(DAT_091c01c8);
          lVar7 = *(long *)(lVar3 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03f95a6c();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        UnityEngine_GUILayout__Label(uVar4,uVar6,**(undefined8 **)(lVar3 + 0xb8),0);
        UnityEngine_GUILayout__EndScrollView(0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

