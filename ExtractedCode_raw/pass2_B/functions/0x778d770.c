// rea decompile_all
// name: _GAME.Team.TeamServer.<GetTopTeam>d__16$$MoveNext
// address: 0x778d770
// body: available
// range: 0x778d770-0x778dd9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x778dd84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778dd88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778dd8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778dd90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778dd94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778dd9c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0778dd80) */
/* WARNING: Removing unreachable block (ram,0x0778dd98) */

void _GAME_Team_TeamServer_<GetTopTeam>d__16__MoveNext(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined1 local_60 [16];
  int local_44;
  
  if ((DAT_09522d92 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091995b0);
    FUN_03f5c2a4(&DAT_091995e8);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091a59c0);
    FUN_03f5c2a4(&DAT_091a59c8);
    FUN_03f5c2a4(&DAT_091a59d0);
    FUN_03f5c2a4(&DAT_091d16b8);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_091b0c18);
    FUN_03f5c2a4(&DAT_091b3da0);
    FUN_03f5c2a4(&DAT_091b0c10);
    FUN_03f5c2a4(&DAT_0917cdf8);
    FUN_03f5c2a4(&DAT_0918df28);
    FUN_03f5c2a4(&DAT_0918b958);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522d92 = 1;
  }
  local_44 = *param_1;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_70 = (undefined1 *)0x0;
  local_88 = 0;
  if (local_44 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    local_44 = -1;
    *param_1 = -1;
LAB_0778da44:
    uVar12 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      if (local_60[8] != '\0') goto LAB_0778daf8;
    }
    else {
      uVar3 = local_60._10_2_;
      lVar5 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c(lVar5);
      }
      lVar9 = *(long *)uVar12;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar5) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0778dae4;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(uVar12,lVar5,0);
LAB_0778dae4:
      uVar4 = (*(code *)*puVar8)(uVar12,uVar3,puVar8[1]);
      if ((uVar4 & 1) != 0) {
LAB_0778daf8:
        lVar5 = *(long *)(param_1 + 0xc);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar5 + 0x30) == 200) {
          uVar12 = *(undefined8 *)(lVar5 + 0x40);
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = FUN_04bd15a4(uVar12,DAT_091d16b8);
          if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == 0)) {
            lVar9 = thunk_FUN_03f9944c(DAT_0917cdf8);
            FUN_057e0400(lVar9,DAT_091b0c10);
            if (*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0x18) + 0x18);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_057e185c(local_b0,lVar5,DAT_091b3da0);
            local_80 = _local_b0;
            uStack_a8 = &local_44;
            local_70 = local_a0;
            local_a0 = local_80;
            local_b0 = (undefined1  [8])0x0;
            while( true ) {
              uVar4 = FUN_071bd28c(local_80,DAT_091a59c8);
              puVar2 = local_70;
              if ((uVar4 & 1) == 0) break;
              uVar12 = thunk_FUN_03f9944c(DAT_0918b958);
              _GAME_Team_TeamInfoModel___ctor(uVar12,puVar2,0);
              lVar5 = DAT_091b0c18;
              if (lVar9 == 0) {
LAB_0778dd84:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar10 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_0778dd84;
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                *puVar8 = uVar12;
                thunk_FUN_03f5d7b8(puVar8,uVar12);
              }
              else {
                FUN_057e0c68(lVar9,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (local_44 < 0) {
              FUN_071bd288(local_a0,DAT_091a59c0);
            }
            goto LAB_0778db50;
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
    uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar4 & 1) == 0) {
      uVar12 = *(undefined8 *)(param_1 + 8);
      lVar5 = thunk_FUN_03f9944c(DAT_0918df28);
      _GAME_Team_ABIServerTeamGetTopModel_RequestModel___ctor(lVar5,uVar12,0);
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom(0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = _GAME_Team_ABIServerTeamGetTopModel_RequestModel__ToJson(lVar5,0);
      uVar7 = thunk_FUN_03f9944c(DAT_0918cfb8);
      _GAME_BaseGame_WebRequestModel___ctor(uVar7,uVar12,1,10,uVar6,0);
      *(undefined8 *)(param_1 + 0xc) = uVar7;
      thunk_FUN_03f5d7b8(param_1 + 0xc,uVar7);
      auVar14 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                          (*(undefined8 *)(param_1 + 0xc),(char)param_1[10],0,0);
      local_b0 = (undefined1  [8])0x0;
      uStack_a8 = (int *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      _local_b0 = auVar14;
      thunk_FUN_03f5d7b8(local_b0,0);
      local_60 = _local_b0;
      uVar4 = FUN_0430cf0c(local_60,DAT_0919a588);
      if ((uVar4 & 1) == 0) {
        local_44 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_04793734(param_1 + 2,local_60,param_1,DAT_091995b0);
        return;
      }
      goto LAB_0778da44;
    }
  }
  lVar9 = 0;
LAB_0778db50:
  *param_1 = -2;
  piVar11 = param_1 + 0xc;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_03f5d7b8(piVar11,0);
  plVar13 = *(long **)(param_1 + 2);
  if (plVar13 == (long *)0x0) {
    *(long *)(param_1 + 6) = lVar9;
    thunk_FUN_03f5d7b8(param_1 + 6,lVar9);
  }
  else {
    lVar5 = *(long *)(DAT_091995e8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar10 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar5) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0778dc10;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar13,lVar5,2);
LAB_0778dc10:
    (*(code *)*puVar8)(plVar13,lVar9,puVar8[1]);
  }
  return;
}

