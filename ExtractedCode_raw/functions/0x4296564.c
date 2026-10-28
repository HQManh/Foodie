// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$DrawLevelSelectPanel
// address: 0x4296564
// body: available
// range: 0x4296564-0x4296fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42968b8 to 0x86c7184 UnityEngine.GUILayout$$Label (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x429699c to 0x42941b4 CakeOrder.InGame.UICakePauseMenuInGame$$OnClickCheatSuperSkip (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4296fb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakePauseMenuInGame__DrawLevelSelectPanel(long *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 local_9c;
  int local_98;
  int local_94;
  
  if ((DAT_095171cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_091c55f0);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4c48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918cf58);
    FUN_03f5c2a4(&DAT_09203c50);
    FUN_03f5c2a4(&DAT_09226060);
    FUN_03f5c2a4(&DAT_091fd290);
    FUN_03f5c2a4(&DAT_09208960);
    FUN_03f5c2a4(&DAT_09226568);
    FUN_03f5c2a4(&DAT_0920e7b0);
    DAT_095171cb = 1;
  }
  local_94 = 0;
  lVar6 = *(long *)(DAT_091b4c48 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar6,0,0);
  lVar8 = DAT_091c01c8;
  if ((uVar7 & 1) != 0) {
    if (lVar6 == 0) goto LAB_04296fb0;
    lVar13 = *(long *)(lVar6 + 0x30);
    if (lVar13 != 0) {
      lVar10 = *(long *)(DAT_091c01c8 + 0x38);
      if (lVar10 == 0) {
        FUN_03f95ac8(DAT_091c01c8);
        lVar10 = *(long *)(lVar8 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar8 + 0xb8),0);
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_GUI__set_backgroundColor(0x3ee66666,0x3f400000,0x3f800000,0x3f800000,0);
      uVar9 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelActionButtonStyle();
      lVar8 = DAT_091c01c8;
      lVar10 = *(long *)(DAT_091c01c8 + 0x38);
      if (lVar10 == 0) {
        FUN_03f95ac8(DAT_091c01c8);
        lVar10 = *(long *)(lVar8 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      uVar7 = UnityEngine_GUILayout__Button(DAT_09203c50,uVar9,**(undefined8 **)(lVar8 + 0xb8),0);
      if ((uVar7 & 1) != 0) {
        CakeOrder_InGame_UICakePauseMenuInGame__CloseCheatPanel(param_1);
                    /* WARNING: Could not recover jumptable at 0x04296818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
        return;
      }
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_GUI__set_backgroundColor(0x3f800000,0x3f3851ec,0x3eb33333,0x3f800000,0);
      uVar9 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelActionButtonStyle();
      lVar8 = DAT_091c01c8;
      lVar10 = *(long *)(DAT_091c01c8 + 0x38);
      if (lVar10 == 0) {
        FUN_03f95ac8(DAT_091c01c8);
        lVar10 = *(long *)(lVar8 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      uVar7 = UnityEngine_GUILayout__Button(DAT_091fd290,uVar9,**(undefined8 **)(lVar8 + 0xb8),0);
      if ((uVar7 & 1) != 0) {
        CakeOrder_InGame_UICakePauseMenuInGame__CloseCheatPanel(param_1);
        CakeOrder_InGame_UICakePauseMenuInGame__OnClickCheatSuperSkip(param_1);
        return;
      }
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar15 = 0x3f800000;
      uVar16 = 0x3f800000;
      UnityEngine_GUI__set_backgroundColor(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      UnityEngine_GUILayout__EndHorizontal(0);
      uVar11 = *(undefined8 *)(lVar13 + 0x10);
      local_98 = *(int *)(lVar13 + 0x1c) + 1;
      uVar9 = FUN_03f5c42c(DAT_09535420,&local_98);
      uVar9 = System_String__Format(DAT_09226060,uVar11,uVar9,0);
      uVar11 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelValueStyle();
      lVar8 = DAT_091c01c8;
      lVar10 = *(long *)(DAT_091c01c8 + 0x38);
      if (lVar10 == 0) {
        FUN_03f95ac8(DAT_091c01c8);
        lVar10 = *(long *)(lVar8 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      UnityEngine_GUILayout__Label(uVar9,uVar11,**(undefined8 **)(lVar8 + 0xb8),0);
      plVar1 = param_1 + 0x45;
      uVar7 = System_String__IsNullOrEmpty(param_1[0x45],0);
      if ((uVar7 & 1) != 0) {
        *plVar1 = *(long *)(lVar13 + 0x10);
        thunk_FUN_03f5d7b8(plVar1);
      }
      uVar7 = CakeOrder_InGame_UICakePauseMenuInGame__DrawLevelSelectMapDropdown(param_1);
      if ((uVar7 & 1) == 0) {
        uVar9 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelCaptionStyle();
        lVar8 = DAT_091c01c8;
        lVar10 = *(long *)(DAT_091c01c8 + 0x38);
        if (lVar10 == 0) {
          FUN_03f95ac8(DAT_091c01c8);
          lVar10 = *(long *)(lVar8 + 0x38);
        }
        lVar10 = *(long *)(lVar10 + 0x10);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03f95a6c();
        }
        if (*(int *)(lVar10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        UnityEngine_GUILayout__Label(DAT_0920e7b0,uVar9,**(undefined8 **)(lVar8 + 0xb8),0);
        uVar3 = System_String__op_Equality(*plVar1,*(undefined8 *)(lVar13 + 0x10),0);
        if ((uVar3 & 1) == 0) {
          lVar6 = 0;
          uVar4 = 100;
        }
        else {
          lVar6 = FUN_04a6a4f8(lVar6,1,DAT_091c55f0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar7 = UnityEngine_Object__op_Inequality(lVar6,0,0);
          if ((uVar7 & 1) == 0) {
            uVar9 = *(undefined8 *)(lVar13 + 0x48);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
            if ((uVar7 & 1) == 0) {
              lVar8 = FUN_039af8ec(DAT_091b4b60);
              if ((lVar8 == 0) ||
                 (lVar8 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO
                                    (lVar8,*(undefined8 *)(lVar13 + 0x10),0), lVar8 == 0))
              goto LAB_04296fb0;
              uVar4 = *(uint *)(lVar8 + 0x4c);
            }
            else {
              if (*(long *)(lVar13 + 0x48) == 0) {
LAB_04296fb0:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar4 = *(uint *)(*(long *)(lVar13 + 0x48) + 0x4c);
            }
          }
          else {
            if (lVar6 == 0) goto LAB_04296fb0;
            uVar4 = CakeOrder_MapLevelMetadataConfig__get_NumLevels(lVar6,0);
          }
          if ((int)uVar4 <= *(int *)(lVar13 + 0x1c) + 1) {
            uVar4 = *(int *)(lVar13 + 0x1c) + 1;
          }
        }
        lVar8 = DAT_091c01c8;
        uVar17 = *(undefined4 *)((long)param_1 + 0x21c);
        uVar14 = (undefined4)param_1[0x44];
        lVar10 = *(long *)(DAT_091c01c8 + 0x38);
        if (lVar10 == 0) {
          FUN_03f95ac8(DAT_091c01c8);
          lVar10 = *(long *)(lVar8 + 0x38);
        }
        lVar10 = *(long *)(lVar10 + 0x10);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03f95a6c();
        }
        if (*(int *)(lVar10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        uVar17 = UnityEngine_GUILayout__BeginScrollView(uVar17,**(undefined8 **)(lVar8 + 0xb8),0);
        *(undefined4 *)((long)param_1 + 0x21c) = uVar17;
        *(undefined4 *)(param_1 + 0x44) = uVar14;
        if (0 < (int)uVar4) {
          uVar12 = 0;
          do {
            lVar8 = DAT_091c01c8;
            uVar2 = (uVar12 / 5) * 5;
            if (uVar2 == uVar12) {
              lVar10 = *(long *)(DAT_091c01c8 + 0x38);
              if (lVar10 == 0) {
                FUN_03f95ac8(DAT_091c01c8);
                lVar10 = *(long *)(lVar8 + 0x38);
              }
              lVar10 = *(long *)(lVar10 + 0x10);
              if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_03f95a6c();
              }
              if (*(int *)(lVar10 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
              if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_03f95a6c();
              }
              UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar8 + 0xb8),0);
            }
            if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar17 = UnityEngine_GUI__get_backgroundColor(0);
            if (((uVar3 & 1) != 0) && (uVar12 == *(uint *)(lVar13 + 0x1c))) {
              if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_GUI__set_backgroundColor(0x3f800000,0x3f47ae14,0x3e3851ec,0x3f800000,0);
            }
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = UnityEngine_Object__op_Inequality(lVar6,0,0);
            if ((uVar7 & 1) == 0) {
LAB_04296e48:
              local_94 = uVar12 + 1;
              uVar9 = System_Int32__ToString(&local_94,0);
            }
            else {
              if (lVar6 == 0) goto LAB_04296fb0;
              iVar5 = CakeOrder_MapLevelMetadataConfig__get_NumLevels(lVar6,0);
              if ((iVar5 <= (int)uVar12) ||
                 (lVar8 = CakeOrder_MapLevelMetadataConfig__GetLevelConfig(lVar6,uVar12,0),
                 lVar8 == 0)) goto LAB_04296e48;
              local_98 = uVar12 + 1;
              uVar9 = FUN_03f5c42c(DAT_09535420,&local_98);
              local_9c = *(undefined4 *)(lVar8 + 0x10);
              uVar11 = FUN_03f5c42c(DAT_0918cf58,&local_9c);
              uVar9 = System_String__Format(DAT_09226568,uVar9,uVar11,0);
            }
            uVar11 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelLevelButtonStyle();
            lVar8 = DAT_091c01c8;
            lVar10 = *(long *)(DAT_091c01c8 + 0x38);
            if (lVar10 == 0) {
              FUN_03f95ac8(DAT_091c01c8);
              lVar10 = *(long *)(lVar8 + 0x38);
            }
            lVar10 = *(long *)(lVar10 + 0x10);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_03f95a6c();
            }
            if (*(int *)(lVar10 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_03f95a6c();
            }
            uVar7 = UnityEngine_GUILayout__Button(uVar9,uVar11,**(undefined8 **)(lVar8 + 0xb8),0);
            if ((uVar7 & 1) != 0) {
              CakeOrder_InGame_UICakePauseMenuInGame__JumpToLevel(param_1,param_1[0x45],uVar12);
              if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_GUI__set_backgroundColor(uVar17,uVar14,uVar15,uVar16,0);
              UnityEngine_GUILayout__EndHorizontal(0);
              break;
            }
            if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_GUI__set_backgroundColor(uVar17,uVar14,uVar15,uVar16,0);
            if ((uVar2 + 4 == uVar12) || (uVar12 - uVar4 == -1)) {
              UnityEngine_GUILayout__EndHorizontal(0);
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar4);
        }
        UnityEngine_GUILayout__EndScrollView(0);
      }
      return;
    }
  }
  uVar9 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelBodyStyle();
  lVar6 = DAT_091c01c8;
  lVar8 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar8 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar8 = *(long *)(lVar6 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03f95a6c();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__Label(DAT_09208960,uVar9,**(undefined8 **)(lVar6 + 0xb8),0);
  return;
}

