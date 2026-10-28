// rea decompile_all
// name: _GAME.Team.MemberChatItemUICtrl.<ViewProfile>d__10$$MoveNext
// address: 0x7792174
// body: available
// range: 0x7792174-0x779254b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x779253c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7792540 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7792544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7792548 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_MemberChatItemUICtrl_<ViewProfile>d__10__MoveNext(int *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long *local_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *local_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *local_f0;
  long *plStack_e8;
  long *local_e0;
  long *plStack_d8;
  long *local_d0;
  ulong uStack_c8;
  undefined4 local_b8;
  long *local_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *local_90;
  ulong uStack_88;
  long *local_80;
  long *plStack_78;
  long *local_70;
  long *plStack_68;
  long *local_60;
  ulong uStack_58;
  long *local_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if ((DAT_09522dac & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c2ad8);
    FUN_03f5c2a4(&DAT_0919a6e0);
    FUN_03f5c2a4(&DAT_0919a6e8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bdef8);
    FUN_03f5c2a4(&DAT_092087b8);
    DAT_09522dac = 1;
  }
  lVar8 = *(long *)(param_1 + 10);
  local_b8 = 0;
  plStack_a8 = (long *)0x0;
  local_b0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  uStack_88 = 0;
  local_90 = (long *)0x0;
  plStack_78 = (long *)0x0;
  local_80 = (long *)0x0;
  plStack_68 = (long *)0x0;
  local_70 = (long *)0x0;
  uStack_58 = 0;
  local_60 = (long *)0x0;
  plStack_48 = (long *)0x0;
  local_50 = (long *)0x0;
  plStack_38 = (long *)0x0;
  plStack_40 = (long *)0x0;
  if (*param_1 == 0) {
    plStack_78 = *(long **)(param_1 + 0x10);
    local_80 = *(long **)(param_1 + 0xe);
    plStack_68 = *(long **)(param_1 + 0x14);
    local_70 = *(long **)(param_1 + 0x12);
    uStack_58 = *(ulong *)(param_1 + 0x18);
    local_60 = *(long **)(param_1 + 0x16);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (((*(char *)(lVar8 + 0x60) != '\0') || (*(long *)(lVar8 + 0x58) == 0)) ||
       (uVar2 = _GAME_Utils_HelperString__IsNullOrEmpty
                          (*(undefined8 *)(*(long *)(lVar8 + 0x58) + 0x18),0), (uVar2 & 1) != 0))
    goto LAB_07792500;
    if (*(long *)(lVar8 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    piVar7 = param_1 + 0xc;
    *(undefined8 *)piVar7 = *(undefined8 *)(*(long *)(lVar8 + 0x58) + 0x18);
    thunk_FUN_03f5d7b8(piVar7);
    *(undefined1 *)(lVar8 + 0x60) = 1;
    uVar9 = *(undefined8 *)piVar7;
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Team_TeamManager__LoadMemberProfileDetailEnvelope(&local_f0,uVar9,0);
    uStack_88 = uStack_c8;
    local_90 = local_d0;
    plStack_98 = plStack_d8;
    plStack_a0 = local_e0;
    plStack_d8 = (long *)0x0;
    local_e0 = (long *)0x0;
    uStack_c8 = 0;
    local_d0 = (long *)0x0;
    plStack_a8 = plStack_e8;
    local_b0 = local_f0;
    plStack_e8 = (long *)0x0;
    local_f0 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdef8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_c8 = uStack_88;
    local_d0 = local_90;
    plStack_e8 = plStack_a8;
    local_f0 = local_b0;
    plStack_d8 = plStack_98;
    local_e0 = plStack_a0;
    thunk_FUN_03f5d7b8(&local_f0,0);
    plStack_78 = plStack_e8;
    local_80 = local_f0;
    plStack_68 = plStack_d8;
    local_70 = local_e0;
    uStack_58 = uStack_c8;
    local_60 = local_d0;
    uVar2 = FUN_064167ec(&local_80,DAT_0919a6e8);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(ulong *)(param_1 + 0x18) = uStack_58;
      *(long **)(param_1 + 0x16) = local_60;
      *(long **)(param_1 + 0x10) = plStack_78;
      *(long **)(param_1 + 0xe) = local_80;
      *(long **)(param_1 + 0x14) = plStack_68;
      *(long **)(param_1 + 0x12) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049bded8(param_1 + 2,&local_80,param_1,DAT_091c2ad8);
      return;
    }
  }
  plVar1 = local_80;
  local_110 = plStack_78;
  plStack_108 = local_70;
  plStack_100 = plStack_68;
  plStack_f8 = local_60;
  if (local_80 != (long *)0x0) {
    uVar2 = uStack_58 & 0xffff;
    lVar3 = *(long *)(DAT_0919a6e0 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar5 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07792420;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar1,lVar3,0);
LAB_07792420:
    (*(code *)*puVar4)(&local_f0,plVar1,uVar2,puVar4[1]);
    local_110 = local_f0;
    plStack_108 = plStack_e8;
    plStack_100 = local_e0;
    plStack_f8 = plStack_d8;
  }
  local_50 = local_110;
  plStack_48 = plStack_108;
  plStack_40 = plStack_100;
  plStack_38 = plStack_f8;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined1 *)(lVar8 + 0x60) = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(lVar8,0,0);
  if ((((uVar2 & 1) == 0) &&
      (uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled(lVar8,0), (uVar2 & 1) != 0)) &&
     (*(long *)(lVar8 + 0x58) != 0)) {
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = System_String__Equals
                      (*(long *)(param_1 + 0xc),*(undefined8 *)(*(long *)(lVar8 + 0x58) + 0x18),0);
    if ((uVar2 & 1) != 0) {
      uVar2 = _GAME_Profile_ProfileReadEnvelope__get_HasProfile(&local_50,0);
      if ((uVar2 & 1) == 0) {
        uVar9 = FUN_03eabcb4(DAT_091c0310);
        _GAME_GameUI_ToastController__ShowLocalizeMessage(DAT_092087b8,uVar9,0);
      }
      else {
        plStack_128 = plStack_48;
        local_130 = local_50;
        plStack_118 = plStack_38;
        plStack_120 = plStack_40;
        _GAME_Profile_ProfilePopupRouterFacade__Open(5,*(undefined8 *)(param_1 + 0xc),&local_130,0);
      }
    }
  }
LAB_07792500:
  piVar7 = param_1 + 0xc;
  piVar7[0] = 0;
  piVar7[1] = 0;
  *param_1 = -2;
  thunk_FUN_03f5d7b8(piVar7,0);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

