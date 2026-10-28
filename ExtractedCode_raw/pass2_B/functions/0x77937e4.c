// rea decompile_all
// name: _GAME.Team.NotiChatItemUICtrl$$SetChatMessage
// address: 0x77937e4
// body: available
// range: 0x77937e4-0x7793b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7793b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7793b3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_NotiChatItemUICtrl__SetChatMessage(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_38;
  
  if ((DAT_09522db3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09207ac0);
    FUN_03f5c2a4(&DAT_0921cb20);
    FUN_03f5c2a4(&DAT_09207ac8);
    FUN_03f5c2a4(&DAT_09207ad0);
    DAT_09522db3 = 1;
  }
  local_38 = 0;
  plVar5 = (long *)(param_1 + 0x38);
  *plVar5 = param_2;
  thunk_FUN_03f5d7b8(plVar5,param_2);
  if (*plVar5 != 0) {
    plVar6 = *(long **)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(*plVar5 + 0x38);
    if (*(int *)(DAT_09185080 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_38 = _GAME_Utils_HelperTime__UnixTimeMillisecondsToDateTime(uVar7,0);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    local_38 = System_DateTime__ToLocalTime(&local_38,0);
    uVar7 = System_DateTime__ToString(&local_38,DAT_0921cb20,0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x558))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x560));
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        iVar1 = *(int *)(lVar2 + 0x28);
        lVar4 = *(long *)(param_1 + 0x30);
        if (iVar1 != 3) {
          if (iVar1 == 2) {
            lVar2 = FUN_03f5c394(DAT_091805f8,1);
            if (*plVar5 == 0) goto LAB_07793b38;
            uVar7 = *(undefined8 *)(*plVar5 + 0x20);
            if (*(int *)(DAT_09189998 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = _GAME_Bridge_R1UserTextSupport__ForDisplay(uVar7,0);
            if (lVar2 == 0) goto LAB_07793b38;
            if (*(int *)(lVar2 + 0x18) == 0) goto LAB_07793b3c;
            *(undefined8 *)(lVar2 + 0x20) = uVar7;
            thunk_FUN_03f5d7b8();
            puVar3 = &DAT_09207ad0;
          }
          else {
            if (iVar1 != 1) {
              uVar7 = *(undefined8 *)(lVar2 + 0x30);
              if (*(int *)(DAT_09189998 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar7 = _GAME_Bridge_R1UserTextSupport__ForDisplay(uVar7,0);
              if (lVar4 != 0) {
                TMPro_TMP_Text__SetText(lVar4,uVar7,0);
                return;
              }
              goto LAB_07793b38;
            }
            lVar2 = FUN_03f5c394(DAT_091805f8,1);
            if (*plVar5 == 0) goto LAB_07793b38;
            uVar7 = *(undefined8 *)(*plVar5 + 0x20);
            if (*(int *)(DAT_09189998 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = _GAME_Bridge_R1UserTextSupport__ForDisplay(uVar7,0);
            if (lVar2 == 0) goto LAB_07793b38;
            if (*(int *)(lVar2 + 0x18) == 0) goto LAB_07793b3c;
            *(undefined8 *)(lVar2 + 0x20) = uVar7;
            thunk_FUN_03f5d7b8();
            puVar3 = &DAT_09207ac0;
          }
          uVar7 = *puVar3;
LAB_07793adc:
          _GAME_Localize_LocalizeHelper__SetTextLocalizedByKey(lVar4,uVar7,lVar2,0);
          return;
        }
        lVar2 = FUN_03f5c394(DAT_091805f8,2);
        if (*plVar5 != 0) {
          uVar7 = *(undefined8 *)(*plVar5 + 0x30);
          if (*(int *)(DAT_09189998 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = _GAME_Bridge_R1UserTextSupport__ForDisplay(uVar7,0);
          if (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x18) == 0) {
LAB_07793b3c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            *(undefined8 *)(lVar2 + 0x20) = uVar7;
            thunk_FUN_03f5d7b8();
            if (*plVar5 == 0) goto LAB_07793b38;
            uVar7 = _GAME_Bridge_R1UserTextSupport__ForDisplay(*(undefined8 *)(*plVar5 + 0x20),0);
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_07793b3c;
            *(undefined8 *)(lVar2 + 0x28) = uVar7;
            thunk_FUN_03f5d7b8();
            uVar7 = DAT_09207ac8;
            goto LAB_07793adc;
          }
        }
      }
    }
  }
LAB_07793b38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

