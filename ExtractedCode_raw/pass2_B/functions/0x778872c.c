// rea decompile_all
// name: _GAME.Team.TeamServer.<EditTeam>d__5$$MoveNext
// address: 0x778872c
// body: available
// range: 0x778872c-0x7788e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7788e5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7788e60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7788e64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamServer_<EditTeam>d__5__MoveNext(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 local_c0 [16];
  ulong local_b0;
  undefined4 local_98;
  undefined1 local_90 [16];
  long *local_80;
  undefined8 uStack_78;
  ulong local_70;
  long *local_60;
  undefined8 uStack_58;
  ulong local_50;
  
  if ((DAT_09522d78 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199878);
    FUN_03f5c2a4(&DAT_09199820);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a710);
    FUN_03f5c2a4(&DAT_0919a718);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091d1680);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918def0);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_091bdf18);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522d78 = 1;
  }
  local_60 = (long *)0x0;
  uStack_58 = 0;
  uVar1 = *param_1;
  local_50 = 0;
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_98 = 0;
  if (uVar1 < 2) {
LAB_07788890:
    if (uVar1 == 0) {
      local_50 = *(ulong *)(param_1 + 0x12);
      uStack_58 = *(undefined8 *)(param_1 + 0x10);
      local_60 = *(long **)(param_1 + 0xe);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = 0xffffffff;
LAB_077888d4:
      plVar14 = local_60;
      uVar13 = uStack_58;
      if (local_60 != (long *)0x0) {
        uVar6 = local_50 & 0xffff;
        lVar8 = *(long *)(DAT_0919a710 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c(lVar8);
        }
        lVar10 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_07788ac8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar14,lVar8,0);
LAB_07788ac8:
        uVar13 = (*(code *)*puVar9)(plVar14,uVar6,puVar9[1]);
      }
LAB_07788adc:
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
      lVar8 = *(long *)(param_1 + 8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = *(undefined4 *)(lVar8 + 0x1c);
      uVar15 = *(undefined8 *)(lVar8 + 0x40);
      uVar16 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
      uVar3 = *(undefined4 *)(lVar8 + 0x38);
      uVar7 = thunk_FUN_03f9944c(DAT_0918def0);
      _GAME_Team_ABIServerTeamEditModel_RequestModel___ctor(uVar7,uVar16,uVar2,uVar13,uVar15,uVar3);
      uVar13 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom(0);
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar7,0);
      uVar15 = thunk_FUN_03f9944c(DAT_0918cfb8);
      _GAME_BaseGame_WebRequestModel___ctor(uVar15,uVar13,1,10,uVar7,0);
      *(undefined8 *)(param_1 + 0xc) = uVar15;
      thunk_FUN_03f5d7b8(param_1 + 0xc,uVar15);
      auVar17 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                          (*(undefined8 *)(param_1 + 0xc),(char)param_1[10],0,0);
      local_c0._0_8_ = 0;
      local_c0._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_c0 = auVar17;
      thunk_FUN_03f5d7b8(local_c0,0);
      local_90 = local_c0;
      uVar6 = FUN_0430cf0c(local_90,DAT_0919a588);
      if ((uVar6 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_90;
        thunk_FUN_03f5d7b8(param_1 + 0x14,0);
        FUN_0478f26c(param_1 + 2,local_90,param_1,DAT_09199820);
        return;
      }
    }
    else {
      if (uVar1 != 1) {
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
        if ((uVar6 & 1) != 0) goto LAB_07788d8c;
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar13 = _GAME_BaseGame_WebService__NormalizeCountryCode
                           (*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),0);
        uVar6 = _GAME_Utils_HelperString__IsNullOrEmpty(uVar13,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          _GAME_Profile_ProfileManager__EnsureCountryCode(local_c0,0);
          local_70 = local_b0;
          uStack_78 = local_c0._8_8_;
          local_c0._8_8_ = 0;
          local_b0 = 0;
          local_80 = (long *)local_c0._0_8_;
          local_c0._0_8_ = 0;
          if ((*(byte *)(*(long *)(DAT_091bdf18 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          local_c0._8_8_ = uStack_78;
          local_c0._0_8_ = local_80;
          local_b0 = local_70;
          thunk_FUN_03f5d7b8(local_c0,0);
          uStack_58 = local_c0._8_8_;
          local_60 = (long *)local_c0._0_8_;
          local_50 = local_b0;
          uVar6 = FUN_041e5390(&local_60,DAT_0919a718);
          if ((uVar6 & 1) == 0) {
            *param_1 = 0;
            *(undefined8 *)(param_1 + 0x10) = uStack_58;
            *(long **)(param_1 + 0xe) = local_60;
            *(ulong *)(param_1 + 0x12) = local_50;
            thunk_FUN_03f5d7b8(param_1 + 0xe,0);
            FUN_0479010c(param_1 + 2,&local_60,param_1,DAT_09199878);
            return;
          }
          goto LAB_077888d4;
        }
        goto LAB_07788adc;
      }
      local_90 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = 0xffffffff;
    }
    uVar13 = local_90._0_8_;
    if ((long *)local_90._0_8_ == (long *)0x0) {
      if (local_90[8] != '\0') goto LAB_07788d34;
    }
    else {
      uVar4 = local_90._10_2_;
      lVar8 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar10 = *(long *)uVar13;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_07788d20;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(uVar13,lVar8,0);
LAB_07788d20:
      uVar6 = (*(code *)*puVar9)(uVar13,uVar4,puVar9[1]);
      if ((uVar6 & 1) != 0) {
LAB_07788d34:
        lVar8 = *(long *)(param_1 + 0xc);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar8 + 0x30) == 200) {
          uVar13 = *(undefined8 *)(lVar8 + 0x40);
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar8 = FUN_04bd15a4(uVar13,DAT_091d1680);
          if (lVar8 != 0) {
            bVar5 = *(int *)(lVar8 + 0x10) == 0;
            goto LAB_07788d90;
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
    if ((uVar6 & 1) == 0) goto LAB_07788890;
  }
LAB_07788d8c:
  bVar5 = false;
LAB_07788d90:
  plVar14 = *(long **)(param_1 + 2);
  *param_1 = 0xfffffffe;
  if (plVar14 == (long *)0x0) {
    *(bool *)(param_1 + 6) = bVar5;
  }
  else {
    lVar8 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar10 = *plVar14;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_07788e34;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar14,lVar8,2);
LAB_07788e34:
    (*(code *)*puVar9)(plVar14,bVar5,puVar9[1]);
  }
  return;
}

