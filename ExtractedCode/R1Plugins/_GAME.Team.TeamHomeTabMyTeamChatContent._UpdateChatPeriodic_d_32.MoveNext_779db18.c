// rea decompile_all
// name: _GAME.Team.TeamHomeTabMyTeamChatContent.<UpdateChatPeriodic>d__32$$MoveNext
// address: 0x779db18
// body: available
// range: 0x779db18-0x779ddab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x779dd9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779dda0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779dda4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779dda8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamHomeTabMyTeamChatContent_<UpdateChatPeriodic>d__32__MoveNext(int *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522dfe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2a78);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bddd8);
    DAT_09522dfe = 1;
  }
  lVar10 = *(long *)(param_1 + 10);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = **(long **)(DAT_0918b978 + 0xb8);
    if (lVar7 == 0) goto LAB_0779dd74;
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar7 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    auVar2._8_8_ = local_50._8_8_;
    auVar2._0_8_ = local_50._0_8_;
    auVar11._8_8_ = local_40._8_8_;
    auVar11._0_8_ = local_40._0_8_;
    if (*(long *)(lVar7 + 0x38) == 0) goto LAB_0779dd74;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_40 = auVar11;
    local_50 = auVar2;
    if (*(char *)(lVar10 + 0xf0) != '\0') goto LAB_0779dd74;
    iVar1 = *(int *)(DAT_0918b978 + 0xe4);
    *(undefined1 *)(lVar10 + 0xf0) = 1;
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    auVar11 = _GAME_Team_TeamManager__FetchChat(0,0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar11;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar5 = FUN_0430cf0c(local_50,DAT_0919a588);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049bb308(param_1 + 2,local_50,param_1,DAT_091c2a78);
      return;
    }
  }
  uVar3 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    if (local_50[8] == '\0') goto LAB_0779dd6c;
LAB_0779dd3c:
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Team_TeamHomeTabMyTeamChatContent__UpdateListChat(lVar10);
  }
  else {
    uVar4 = local_50._10_2_;
    lVar7 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c(lVar7);
    }
    lVar8 = *(long *)uVar3;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0779dd58;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar3,lVar7,0);
LAB_0779dd58:
    uVar5 = (*(code *)*puVar6)(uVar3,uVar4,puVar6[1]);
    if ((uVar5 & 1) != 0) goto LAB_0779dd3c;
LAB_0779dd6c:
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  *(undefined1 *)(lVar10 + 0xf0) = 0;
LAB_0779dd74:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

