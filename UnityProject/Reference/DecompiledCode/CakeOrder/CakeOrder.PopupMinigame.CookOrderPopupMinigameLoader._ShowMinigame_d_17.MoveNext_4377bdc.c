// rea decompile_all
// name: CakeOrder.PopupMinigame.CookOrderPopupMinigameLoader.<ShowMinigame>d__17$$MoveNext
// address: 0x4377bdc
// body: available
// range: 0x4377bdc-0x437816b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4378148 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437814c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4378150 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4378154 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4378158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437815c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4378160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4378164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4378168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_CookOrderPopupMinigameLoader_<ShowMinigame>d__17__MoveNext
               (int *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09517915 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_09197810);
    FUN_03f5c2a4(&DAT_091c1308);
    FUN_03f5c2a4(&DAT_091c13b8);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919c358);
    FUN_03f5c2a4(&DAT_0919c370);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b8e18);
    FUN_03f5c2a4(&DAT_0918ee40);
    FUN_03f5c2a4(&DAT_091bc308);
    FUN_03f5c2a4(&DAT_091bc310);
    FUN_03f5c2a4(&DAT_091bcc08);
    FUN_03f5c2a4(&DAT_092055a0);
    FUN_03f5c2a4(&DAT_092025c0);
    DAT_09517915 = 1;
  }
  lVar5 = *(long *)(param_1 + 0xc);
  local_60 = 0;
  local_58 = 0;
  if (*param_1 == 0) {
    local_58 = *(undefined8 *)(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_04377d44:
    FUN_06209cec(&local_58,DAT_091bc308);
    iVar1 = FUN_0640f818(param_1 + 0x12,DAT_09197808);
    if (iVar1 == 1) {
      uVar6 = FUN_0640f7ac(param_1 + 0x12,DAT_09197800);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
      if ((uVar3 & 1) == 0) {
        uVar6 = FUN_0640f7ac(param_1 + 0x12,DAT_09197800);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar6,uVar6);
        }
        lVar5 = CakeOrder_PopupMinigame_CookOrderPopupMinigameLoader__PlayMinigameFromPrefab
                          (lVar5,uVar6,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xe),
                           *(undefined8 *)(param_1 + 0x10));
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_60 = System_Threading_Tasks_Task__GetAwaiter(lVar5,0);
        uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_60,0);
        if ((uVar3 & 1) == 0) {
          *param_1 = 1;
          *(undefined8 *)(param_1 + 0x1a) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04992100(param_1 + 2,&local_60,param_1,DAT_091c13b8);
          return;
        }
        goto LAB_04377d20;
      }
    }
    uVar6 = System_String__Format(DAT_092025c0,*(undefined8 *)(param_1 + 8),0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(uVar6,0);
    lVar4 = *(long *)(param_1 + 10);
    if (lVar4 != 0) {
      uVar6 = CakeOrder_PopupMinigame_MinigameRuntimeData__get_NewData();
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),uVar6,*(undefined8 *)(lVar4 + 0x28))
      ;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar5 + 0x38) = 1;
  }
  else {
    if (*param_1 != 1) {
      plVar2 = *(long **)(param_1 + 8);
      if (plVar2 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
        if ((uVar3 & 1) != 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(char *)(lVar5 + 0x38) == '\0') {
            lVar4 = *(long *)(lVar5 + 0x20);
            lVar5 = thunk_FUN_03f9944c(DAT_0918ee40);
            System_Object___ctor(lVar5,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(param_1 + 8);
            thunk_FUN_03f5d7b8();
            *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(param_1 + 10);
            thunk_FUN_03f5d7b8();
            *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(param_1 + 0xe);
            thunk_FUN_03f5d7b8();
            *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(param_1 + 0x10);
            thunk_FUN_03f5d7b8();
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_05e2cfd8(lVar4,lVar5,DAT_091b8e18);
            goto LAB_04378108;
          }
          *(undefined1 *)(lVar5 + 0x38) = 0;
          if (*(long *)(lVar5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = FUN_06f6d800(*(long *)(lVar5 + 0x28),*(undefined8 *)(param_1 + 8),param_1 + 0x12,
                               DAT_0919c370);
          if ((uVar3 & 1) == 0) {
            uVar6 = *(undefined8 *)(param_1 + 8);
            if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_04b711d8(&local_50,uVar6,DAT_091bf638);
            *(undefined8 *)(param_1 + 0x14) = uStack_48;
            *(undefined8 *)(param_1 + 0x12) = local_50;
            *(undefined8 *)(param_1 + 0x16) = local_40;
            thunk_FUN_03f5d7b8(param_1 + 0x12,0);
            if (*(long *)(lVar5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uStack_48 = *(undefined8 *)(param_1 + 0x14);
            local_50 = *(undefined8 *)(param_1 + 0x12);
            local_40 = *(undefined8 *)(param_1 + 0x16);
            FUN_06f6bb44(*(long *)(lVar5 + 0x28),*(undefined8 *)(param_1 + 8),&local_50,DAT_0919c358
                        );
          }
          lVar4 = FUN_0640f884(param_1 + 0x12,DAT_09197810);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          local_58 = FUN_062ee710(lVar4,DAT_091bcc08);
          uVar3 = FUN_06209cac(&local_58,DAT_091bc310);
          if ((uVar3 & 1) == 0) {
            *param_1 = 0;
            *(undefined8 *)(param_1 + 0x18) = local_58;
            thunk_FUN_03f5d7b8(param_1 + 0x18,0);
            if (*(int *)(DAT_09181780 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_049914e4(param_1 + 2,&local_58,param_1,DAT_091c1308);
            return;
          }
          goto LAB_04377d44;
        }
        uVar6 = *(undefined8 *)(param_1 + 8);
      }
      uVar6 = System_String__Format(DAT_092055a0,uVar6,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(uVar6,0);
      lVar5 = *(long *)(param_1 + 10);
      if (lVar5 != 0) {
        uVar6 = CakeOrder_PopupMinigame_MinigameRuntimeData__get_NewData();
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),uVar6,*(undefined8 *)(lVar5 + 0x28));
      }
      goto LAB_04378108;
    }
    local_60 = *(undefined8 *)(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *param_1 = -1;
LAB_04377d20:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_60,0);
  }
LAB_04378108:
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = -2;
  lVar5 = DAT_09181780;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

