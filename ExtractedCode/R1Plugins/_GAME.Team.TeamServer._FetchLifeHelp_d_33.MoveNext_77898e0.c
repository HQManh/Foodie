// rea decompile_all
// name: _GAME.Team.TeamServer.<FetchLifeHelp>d__33$$MoveNext
// address: 0x77898e0
// body: available
// range: 0x77898e0-0x7789f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7789f40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7789f44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7789f48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7789f4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7789f54 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07789f3c) */
/* WARNING: Removing unreachable block (ram,0x07789f50) */

void _GAME_Team_TeamServer_<FetchLifeHelp>d__33__MoveNext(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined1 local_60 [16];
  int local_44;
  
  if ((DAT_09522d7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199600);
    FUN_03f5c2a4(&DAT_09199620);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091a59d8);
    FUN_03f5c2a4(&DAT_091a59e0);
    FUN_03f5c2a4(&DAT_091a59e8);
    FUN_03f5c2a4(&DAT_091d1690);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_091b0c38);
    FUN_03f5c2a4(&DAT_091b3da8);
    FUN_03f5c2a4(&DAT_091b0c30);
    FUN_03f5c2a4(&DAT_0917ce00);
    FUN_03f5c2a4(&DAT_0918df00);
    FUN_03f5c2a4(&DAT_0918b960);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522d7c = 1;
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
LAB_07789c04:
    uVar7 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      if (local_60[8] != '\0') goto LAB_07789cb8;
    }
    else {
      uVar5 = local_60._10_2_;
      lVar9 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c(lVar9);
      }
      lVar11 = *(long *)uVar7;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar9) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_07789ca4;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(uVar7,lVar9,0);
LAB_07789ca4:
      uVar6 = (*(code *)*puVar10)(uVar7,uVar5,puVar10[1]);
      if ((uVar6 & 1) != 0) {
LAB_07789cb8:
        lVar9 = *(long *)(param_1 + 0xc);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar9 + 0x30) == 200) {
          uVar7 = *(undefined8 *)(lVar9 + 0x40);
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar9 = FUN_04bd15a4(uVar7,DAT_091d1690);
          if ((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == 0)) {
            lVar11 = thunk_FUN_03f9944c(DAT_0917ce00);
            FUN_057e0400(lVar11,DAT_091b0c30);
            if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0x18) + 0x10);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_057e185c(local_b0,lVar9,DAT_091b3da8);
            local_80 = _local_b0;
            uStack_a8 = &local_44;
            local_70 = local_a0;
            local_a0 = local_80;
            local_b0 = (undefined1  [8])0x0;
            while( true ) {
              uVar6 = FUN_071bd28c(local_80,DAT_091a59e0);
              puVar4 = local_70;
              if ((uVar6 & 1) == 0) break;
              uVar7 = thunk_FUN_03f9944c(DAT_0918b960);
              _GAME_Team_TeamLifeHelpModel___ctor(uVar7,puVar4);
              lVar9 = DAT_091b0c38;
              if (lVar11 == 0) {
LAB_07789f40:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar12 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_07789f40;
              uVar3 = *(uint *)(lVar11 + 0x18);
              if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar3 + 1;
                puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
                *puVar10 = uVar7;
                thunk_FUN_03f5d7b8(puVar10,uVar7);
              }
              else {
                FUN_057e0c68(lVar11,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (local_44 < 0) {
              FUN_071bd288(local_a0,DAT_091a59d8);
            }
            goto LAB_07789d10;
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
    uVar6 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar6 & 1) == 0) {
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
      iVar1 = param_1[8];
      iVar2 = param_1[9];
      uVar14 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
      uVar7 = thunk_FUN_03f9944c(DAT_0918df00);
      _GAME_Team_ABIServerTeamFetchLifeHelpModel_RequestModel___ctor(uVar7,uVar14,iVar1,iVar2);
      uVar14 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom(0);
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar7,0);
      uVar8 = thunk_FUN_03f9944c(DAT_0918cfb8);
      _GAME_BaseGame_WebRequestModel___ctor(uVar8,uVar14,1,10,uVar7,0);
      *(undefined8 *)(param_1 + 0xc) = uVar8;
      thunk_FUN_03f5d7b8(param_1 + 0xc,uVar8);
      auVar16 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                          (*(undefined8 *)(param_1 + 0xc),(char)param_1[10],0,0);
      local_b0 = (undefined1  [8])0x0;
      uStack_a8 = (int *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      _local_b0 = auVar16;
      thunk_FUN_03f5d7b8(local_b0,0);
      local_60 = _local_b0;
      uVar6 = FUN_0430cf0c(local_60,DAT_0919a588);
      if ((uVar6 & 1) == 0) {
        local_44 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_04793194(param_1 + 2,local_60,param_1,DAT_09199600);
        return;
      }
      goto LAB_07789c04;
    }
  }
  lVar11 = 0;
LAB_07789d10:
  *param_1 = -2;
  piVar13 = param_1 + 0xc;
  piVar13[0] = 0;
  piVar13[1] = 0;
  thunk_FUN_03f5d7b8(piVar13,0);
  plVar15 = *(long **)(param_1 + 2);
  if (plVar15 == (long *)0x0) {
    *(long *)(param_1 + 6) = lVar11;
    thunk_FUN_03f5d7b8(param_1 + 6,lVar11);
  }
  else {
    lVar9 = *(long *)(DAT_09199620 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c(lVar9);
    }
    lVar12 = *plVar15;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_07789dd0;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(plVar15,lVar9,2);
LAB_07789dd0:
    (*(code *)*puVar10)(plVar15,lVar11,puVar10[1]);
  }
  return;
}

