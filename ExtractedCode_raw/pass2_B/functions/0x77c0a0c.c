// rea decompile_all
// name: _GAME.Leaderboard.LeaderboardServer.<ReadLeaderboard>d__0$$MoveNext
// address: 0x77c0a0c
// body: available
// range: 0x77c0a0c-0x77c0ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c0eb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c0eb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c0eb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Leaderboard_LeaderboardServer_<ReadLeaderboard>d__0__MoveNext(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09522f1e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_0919a138);
    FUN_03f5c2a4(&DAT_0919a158);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091d1650);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_0918deb0);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522f1e = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_077c0cb8:
    uVar12 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      if (local_60[8] != '\0') goto LAB_077c0d6c;
    }
    else {
      uVar4 = local_60._10_2_;
      lVar6 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar9 = *(long *)uVar12;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077c0d58;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(uVar12,lVar6,0);
LAB_077c0d58:
      uVar5 = (*(code *)*puVar8)(uVar12,uVar4,puVar8[1]);
      if ((uVar5 & 1) != 0) {
LAB_077c0d6c:
        lVar6 = *(long *)(param_1 + 0xc);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar6 + 0x30) == 200) {
          uVar12 = *(undefined8 *)(lVar6 + 0x40);
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = FUN_04bd15a4(uVar12,DAT_091d1650);
          if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == 0)) {
            uVar12 = *(undefined8 *)(lVar6 + 0x18);
            goto LAB_077c0dc0;
          }
        }
      }
    }
  }
  else {
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522cb0 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522cb0 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = _GAME_BaseGame_R1ServerConfig__get_Current(0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = *(undefined4 *)(lVar6 + 0x48);
      if (DAT_09522cb0 == '\0') {
        FUN_03f5c2a4(&DAT_09180dc0);
        DAT_09522cb0 = '\x01';
      }
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = *(undefined8 *)(param_1 + 8);
      iVar1 = param_1[10];
      iVar2 = param_1[0xb];
      uVar13 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
      lVar6 = thunk_FUN_03f9944c(DAT_0918deb0);
      _GAME_Leaderboard_ABIServerReadLeaderBoardModel_RequestModel___ctor
                (lVar6,uVar3,uVar13,uVar12,iVar1,iVar2);
      uVar12 = _GAME_BaseGame_ABIServerAPI__get_UrlSvProfile();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar13 = _GAME_Leaderboard_ABIServerReadLeaderBoardModel_RequestModel__ToJson(lVar6);
      uVar7 = thunk_FUN_03f9944c(DAT_0918cfb8);
      _GAME_BaseGame_WebRequestModel___ctor(uVar7,uVar12,1,10,uVar13,0);
      piVar10 = param_1 + 0xc;
      *(undefined8 *)piVar10 = uVar7;
      thunk_FUN_03f5d7b8(piVar10,uVar7);
      auVar14 = _GAME_BaseGame_ABIServerAPI__SendWebRequest(*(undefined8 *)piVar10,0,0);
      local_50._0_8_ = 0;
      local_50._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_50 = auVar14;
      thunk_FUN_03f5d7b8(local_50,0);
      local_60 = local_50;
      uVar5 = FUN_0430cf0c(local_60,DAT_0919a588);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_04792894(param_1 + 2,local_60,param_1,DAT_0919a138);
        return;
      }
      goto LAB_077c0cb8;
    }
  }
  uVar12 = 0;
LAB_077c0dc0:
  *param_1 = -2;
  piVar10 = param_1 + 0xc;
  piVar10[0] = 0;
  piVar10[1] = 0;
  thunk_FUN_03f5d7b8(piVar10,0);
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar12;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar12);
  }
  else {
    lVar6 = *(long *)(DAT_0919a158 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c(lVar6);
    }
    lVar9 = *plVar11;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077c0e80;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar11,lVar6,2);
LAB_077c0e80:
    (*(code *)*puVar8)(plVar11,uVar12,puVar8[1]);
  }
  return;
}

