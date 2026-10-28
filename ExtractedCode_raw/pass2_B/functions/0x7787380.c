// rea decompile_all
// name: _GAME.Team.TeamServer.<CreateTeam>d__4$$MoveNext
// address: 0x7787380
// body: available
// range: 0x7787380-0x7787b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7787b7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7787b80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7787b84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7787b88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7787b8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7787b90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7787b94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamServer_<CreateTeam>d__4__MoveNext(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 local_e0 [16];
  ulong local_d0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  long *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  long *local_80;
  undefined8 uStack_78;
  ulong local_70;
  
  if ((DAT_09522d72 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199ef0);
    FUN_03f5c2a4(&DAT_09199ee8);
    FUN_03f5c2a4(&DAT_09199f80);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a710);
    FUN_03f5c2a4(&DAT_0919a718);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091d1678);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_09193748);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918dee0);
    FUN_03f5c2a4(&DAT_0918b958);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_091bdf18);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522d72 = 1;
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_b8 = 0;
  if (*param_1 == 0) {
    local_70 = *(ulong *)(param_1 + 0x14);
    uStack_78 = *(undefined8 *)(param_1 + 0x12);
    local_80 = *(long **)(param_1 + 0x10);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_077874e0:
    plVar13 = local_80;
    uVar12 = uStack_78;
    if (local_80 != (long *)0x0) {
      uVar10 = local_70 & 0xffff;
      lVar6 = *(long *)(DAT_0919a710 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar8 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07787718;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar13,lVar6,0);
LAB_07787718:
      uVar12 = (*(code *)*puVar7)(plVar13,uVar10,puVar7[1]);
    }
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
    uVar14 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091896c0);
    }
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar15 = *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18);
    uVar16 = *(undefined8 *)(param_1 + 0xc);
    if (*(int *)(DAT_09187300 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar16 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar16,0);
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar18 = *(undefined8 *)(lVar6 + 0x20);
    uVar1 = *(undefined4 *)(lVar6 + 0x1c);
    uVar17 = *(undefined8 *)(lVar6 + 0x40);
    uVar2 = *(undefined4 *)(lVar6 + 0x38);
    iVar3 = *(int *)(**(long **)(DAT_091896c0 + 0xb8) + 0x78);
    uVar5 = thunk_FUN_03f9944c(DAT_0918dee0);
    _GAME_Team_ABIServerTeamCreateModel_RequestModel___ctor
              (uVar5,uVar14,uVar15,uVar16,uVar18,uVar1,uVar12,uVar17,uVar2,(long)iVar3);
    uVar12 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom(0);
    uVar14 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar5,0);
    uVar15 = thunk_FUN_03f9944c(DAT_0918cfb8);
    _GAME_BaseGame_WebRequestModel___ctor(uVar15,uVar12,1,10,uVar14,0);
    *(undefined8 *)(param_1 + 0xe) = uVar15;
    thunk_FUN_03f5d7b8(param_1 + 0xe,uVar15);
    auVar19 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                        (*(undefined8 *)(param_1 + 0xe),(char)param_1[10],0,0);
    local_e0._0_8_ = 0;
    local_e0._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_e0 = auVar19;
    thunk_FUN_03f5d7b8(local_e0,0);
    local_b0 = local_e0;
    uVar10 = FUN_0430cf0c(local_b0,DAT_0919a588);
    if ((uVar10 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x16) = local_b0;
      thunk_FUN_03f5d7b8(param_1 + 0x16,0);
      FUN_04792e34(param_1 + 2,local_b0,param_1,DAT_09199ee8);
      return;
    }
LAB_07787908:
    uVar12 = local_b0._0_8_;
    if ((long *)local_b0._0_8_ == (long *)0x0) {
      if (local_b0[8] != '\0') goto LAB_077879f8;
    }
    else {
      uVar4 = local_b0._10_2_;
      lVar6 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar8 = *(long *)uVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_077879e4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(uVar12,lVar6,0);
LAB_077879e4:
      uVar10 = (*(code *)*puVar7)(uVar12,uVar4,puVar7[1]);
      if ((uVar10 & 1) != 0) {
LAB_077879f8:
        lVar6 = *(long *)(param_1 + 0xe);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar6 + 0x30) == 200) {
          uVar12 = *(undefined8 *)(lVar6 + 0x40);
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = FUN_04bd15a4(uVar12,DAT_091d1678);
          if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == 0)) {
            if (*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x10);
            uVar12 = thunk_FUN_03f9944c(DAT_0918b958);
            _GAME_Team_TeamInfoModel___ctor(uVar12,uVar14);
            goto LAB_07787a4c;
          }
        }
      }
    }
  }
  else {
    if (*param_1 == 1) {
      local_b0 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      goto LAB_07787908;
    }
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
    uVar10 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar14 = **(undefined8 **)(DAT_091896c0 + 0xb8);
      uVar12 = thunk_FUN_03f9944c(DAT_09193748);
      _GAME_Profile_ProfileDbModel_PreviewModel___ctor(uVar12,uVar14,0);
      *(undefined8 *)(param_1 + 0xc) = uVar12;
      thunk_FUN_03f5d7b8(param_1 + 0xc,uVar12);
      lVar6 = *(long *)(param_1 + 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *(long *)(param_1 + 0xc);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(undefined4 *)(lVar6 + 0x1c);
      *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)(lVar6 + 0x20);
      *(undefined4 *)(lVar8 + 0x48) = uVar1;
      thunk_FUN_03f5d7b8();
      _GAME_Profile_ProfileManager__EnsureCountryCode(local_e0,0);
      local_90 = local_d0;
      uStack_98 = local_e0._8_8_;
      local_e0._8_8_ = 0;
      local_d0 = 0;
      local_a0 = (long *)local_e0._0_8_;
      local_e0._0_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bdf18 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_e0._8_8_ = uStack_98;
      local_e0._0_8_ = local_a0;
      local_d0 = local_90;
      thunk_FUN_03f5d7b8(local_e0,0);
      uStack_78 = local_e0._8_8_;
      local_80 = (long *)local_e0._0_8_;
      local_70 = local_d0;
      uVar10 = FUN_041e5390(&local_80,DAT_0919a718);
      if ((uVar10 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x12) = uStack_78;
        *(long **)(param_1 + 0x10) = local_80;
        *(ulong *)(param_1 + 0x14) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        FUN_04794814(param_1 + 2,&local_80,param_1,DAT_09199ef0);
        return;
      }
      goto LAB_077874e0;
    }
  }
  uVar12 = 0;
LAB_07787a4c:
  *param_1 = -2;
  piVar11 = param_1 + 0xc;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_03f5d7b8(piVar11,0);
  piVar11 = param_1 + 0xe;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_03f5d7b8(piVar11,0);
  plVar13 = *(long **)(param_1 + 2);
  if (plVar13 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar12;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar12);
  }
  else {
    lVar6 = *(long *)(DAT_09199f80 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c(lVar6);
    }
    lVar8 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_07787b20;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar13,lVar6,2);
LAB_07787b20:
    (*(code *)*puVar7)(plVar13,uVar12,puVar7[1]);
  }
  return;
}

