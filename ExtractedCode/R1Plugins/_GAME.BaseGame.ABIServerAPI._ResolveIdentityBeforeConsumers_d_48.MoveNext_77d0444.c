// rea decompile_all
// name: _GAME.BaseGame.ABIServerAPI.<ResolveIdentityBeforeConsumers>d__48$$MoveNext
// address: 0x77d0444
// body: available
// range: 0x77d0444-0x77d0b8f inclusive
// range: 0x77d0c08-0x77d18af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77d18ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_ABIServerAPI_<ResolveIdentityBeforeConsumers>d__48__MoveNext(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [8];
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  undefined8 uVar24;
  int iVar25;
  undefined1 auVar26 [16];
  byte local_194 [4];
  undefined1 local_190 [16];
  ulong local_180;
  ulong uStack_178;
  ulong local_170;
  undefined4 local_158;
  undefined1 local_150 [16];
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  undefined1 local_120 [8];
  undefined8 uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  long *local_f0;
  ulong uStack_e8;
  ulong local_e0;
  undefined1 local_d0 [16];
  ulong local_c0;
  undefined1 local_b0 [16];
  ulong local_a0;
  undefined1 local_90 [16];
  long *local_78;
  ulong uStack_70;
  ulong local_68;
  
  if ((DAT_09522fbf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c27d8);
    FUN_03f5c2a4(&DAT_091c27e8);
    FUN_03f5c2a4(&DAT_091c2808);
    FUN_03f5c2a4(&DAT_0919a7d0);
    FUN_03f5c2a4(&DAT_0919a710);
    FUN_03f5c2a4(&DAT_0919a718);
    FUN_03f5c2a4(&DAT_0919a7d8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0918ae28);
    FUN_03f5c2a4(&DAT_091bdf80);
    FUN_03f5c2a4(&DAT_091bdf18);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_09213aa0);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_091ffc00);
    FUN_03f5c2a4(&DAT_091f6438);
    FUN_03f5c2a4(&DAT_09213a90);
    DAT_09522fbf = 1;
  }
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  auVar3 = ZEXT816(0);
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  auVar13 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  local_a0 = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  auVar9 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar26 = ZEXT816(0);
  local_c0 = 0;
  local_e0 = 0;
  local_f0 = (long *)0x0;
  uStack_e8 = 0;
  iVar25 = *param_1;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = (long *)0x0;
  local_120 = (undefined1  [8])0x0;
  auVar12 = ZEXT816(0);
  auVar10 = ZEXT816(0);
  local_130 = 0;
  local_150._8_8_ = 0;
  local_150._0_8_ = 0;
  auVar8 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  uStack_138 = 0;
  uStack_140 = 0;
  local_158 = 0;
  if (iVar25 < 3) {
    if (iVar25 == 0) {
      local_90 = *(undefined1 (*) [16])(param_1 + 0x16);
      iVar25 = -1;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      goto LAB_077d0858;
    }
    if (iVar25 != 1) {
      auVar26 = ZEXT816(0);
      if (iVar25 == 2) goto LAB_077d0c08;
      goto LAB_077d0640;
    }
    local_b0 = *(undefined1 (*) [16])(param_1 + 0x1a);
    local_a0 = *(ulong *)(param_1 + 0x1e);
    iVar25 = -1;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *param_1 = -1;
  }
  else {
    if (iVar25 < 5) {
      if (iVar25 == 3) {
        local_90 = *(undefined1 (*) [16])(param_1 + 0x16);
        iVar25 = -1;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        *param_1 = -1;
        goto LAB_077d1004;
      }
      if (iVar25 == 4) {
        local_90 = *(undefined1 (*) [16])(param_1 + 0x16);
        iVar25 = -1;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        *param_1 = -1;
        local_150 = auVar5;
        local_d0 = auVar6;
        _local_120 = auVar10;
        local_b0 = auVar11;
        goto LAB_077d11b0;
      }
    }
    else {
      if (iVar25 == 5) {
        local_90 = *(undefined1 (*) [16])(param_1 + 0x16);
        iVar25 = -1;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        *param_1 = -1;
        goto LAB_077d125c;
      }
      if (iVar25 == 6) {
        local_90 = *(undefined1 (*) [16])(param_1 + 0x16);
        iVar25 = -1;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        *param_1 = -1;
        goto LAB_077d1404;
      }
    }
LAB_077d0640:
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar16 = _GAME_BaseGame_ABIServerAPI__get_KEY_SAVE_SERVER_ID();
    uVar16 = UnityEngine_PlayerPrefs__GetString(uVar16,DAT_091f5700,0);
    piVar22 = param_1 + 6;
    *(undefined8 *)piVar22 = uVar16;
    thunk_FUN_03f5d7b8(piVar22);
    uVar16 = _GAME_BaseGame_ABIServerAPI__get_KEY_SAVE_SOCIAL_AUTH_ID();
    uVar16 = UnityEngine_PlayerPrefs__GetString(uVar16,DAT_091f5700,0);
    uVar21 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)piVar22,0);
    if (((uVar21 & 1) == 0) &&
       (uVar21 = _GAME_Utils_HelperString__IsNullOrEmpty(uVar16,0), (uVar21 & 1) == 0)) {
      uVar17 = *(undefined8 *)piVar22;
      if (*(int *)(DAT_0918ae28 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar16 = _GAME_BaseGame_SocialAuth__GetAuthKind(uVar16,0);
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_BaseGame_ABIServerAPI__PublishIdentity(uVar17,uVar16);
      goto LAB_077d1840;
    }
    iVar15 = param_1[4];
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_190 = _GAME_BaseGame_ABIServerAPI__WaitForNetwork(iVar15);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    thunk_FUN_03f5d7b8(local_190,0);
    local_90 = local_190;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar16 = local_90._0_8_;
    if ((long *)local_90._0_8_ != (long *)0x0) {
      lVar20 = *(long *)local_90._0_8_;
      uVar23 = local_90._8_8_ & 0xffff;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == DAT_091868c0) {
            puVar18 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_077d0844;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar18 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,0);
LAB_077d0844:
      iVar15 = (*(code *)*puVar18)(uVar16,uVar23,puVar18[1]);
      if (iVar15 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x16) = local_90;
        thunk_FUN_03f5d7b8(param_1 + 0x16,0);
        FUN_049b5a58(param_1 + 2,local_90,param_1,DAT_091c2808);
        return;
      }
    }
LAB_077d0858:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar16 = local_90._0_8_;
    if ((long *)local_90._0_8_ != (long *)0x0) {
      lVar20 = *(long *)local_90._0_8_;
      uVar23 = local_90._8_8_ & 0xffff;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == DAT_091868c0) {
            puVar18 = (undefined8 *)(lVar20 + (long)(*piVar22 + 2) * 0x10 + 0x138);
            goto LAB_077d08d0;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar18 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,2);
LAB_077d08d0:
      (*(code *)*puVar18)(uVar16,uVar23,puVar18[1]);
    }
    iVar15 = param_1[4];
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar21 = _GAME_BaseGame_ABIServerAPI__IsSessionAlive(iVar15);
    if ((uVar21 & 1) == 0) goto LAB_077d1840;
    if (*(int *)(DAT_0918ae28 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_BaseGame_SocialAuth__SignInPlatformAuthID(local_190,0);
    local_c0 = local_180;
    local_d0 = local_190;
    local_190._8_8_ = 0;
    local_180 = 0;
    local_190._0_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bdf18 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_180 = local_c0;
    local_190 = local_d0;
    thunk_FUN_03f5d7b8(local_190,0);
    local_a0 = local_180;
    local_b0 = local_190;
    uVar21 = FUN_041e5390(local_b0,DAT_0919a718);
    auVar26 = local_d0;
    auVar3 = local_90;
    if ((uVar21 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x1a) = local_b0;
      *(ulong *)(param_1 + 0x1e) = local_a0;
      thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
      FUN_049b4cb4(param_1 + 2,local_b0,param_1,DAT_091c27d8);
      return;
    }
  }
  uVar16 = local_b0._0_8_;
  uVar17 = local_b0._8_8_;
  if ((long *)local_b0._0_8_ != (long *)0x0) {
    uVar21 = local_a0 & 0xffff;
    lVar20 = *(long *)(DAT_0919a710 + 0x20);
    local_d0 = auVar26;
    local_90 = auVar3;
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = FUN_03f95a6c();
    }
    lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = FUN_03f95a6c(lVar20);
    }
    lVar19 = *(long *)uVar16;
    uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar23 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar20) {
          puVar18 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_077d0a7c;
        }
        uVar23 = uVar23 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar23 != 0);
    }
    puVar18 = (undefined8 *)FUN_03f95da8(uVar16,lVar20,0);
LAB_077d0a7c:
    uVar17 = (*(code *)*puVar18)(uVar16,uVar21,puVar18[1]);
    auVar26 = local_d0;
    auVar3 = local_90;
  }
  piVar22 = param_1 + 8;
  *(undefined8 *)piVar22 = uVar17;
  local_d0 = auVar26;
  local_90 = auVar3;
  thunk_FUN_03f5d7b8(piVar22);
  iVar15 = param_1[4];
  if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar21 = _GAME_BaseGame_ABIServerAPI__IsSessionAlive(iVar15);
  if ((uVar21 & 1) != 0) {
    uVar21 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)piVar22,0);
    if ((uVar21 & 1) != 0) {
      uVar21 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 6),0);
      if ((uVar21 & 1) == 0) {
        uVar16 = *(undefined8 *)(param_1 + 6);
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_BaseGame_ABIServerAPI__PublishIdentity(uVar16,DAT_091ffc00);
        goto LAB_077d1840;
      }
    }
    if (*(int *)(DAT_0918ae28 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar16 = _GAME_BaseGame_SocialAuth__GetDeviceAuthID(0);
    *(undefined8 *)(param_1 + 10) = uVar16;
    thunk_FUN_03f5d7b8();
    param_1[0xe] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xc] = 1000;
    param_1[0xd] = 30000;
    while( true ) {
      iVar15 = param_1[4];
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar21 = _GAME_BaseGame_ABIServerAPI__IsSessionAlive(iVar15);
      if ((uVar21 & 1) == 0) break;
      auVar4 = local_d0;
      auVar3 = local_90;
      auVar26 = local_150;
      auVar7 = local_b0;
      if (iVar25 == 2) {
LAB_077d0c08:
        local_150 = auVar26;
        _local_120 = *(undefined1 (*) [16])(param_1 + 0x20);
        uStack_108 = *(ulong *)(param_1 + 0x26);
        local_110 = *(ulong *)(param_1 + 0x24);
        local_100 = *(ulong *)(param_1 + 0x28);
        iVar25 = -1;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        *param_1 = -1;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        auVar26 = local_190;
      }
      else {
        uVar16 = *(undefined8 *)(param_1 + 8);
        uVar17 = *(undefined8 *)(param_1 + 10);
        uVar24 = *(undefined8 *)(param_1 + 6);
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_BaseGame_ABIServerAPI__ResolveServerId(local_190,uVar24,uVar17,uVar16);
        local_130 = local_170;
        auVar26 = local_190;
        local_170 = 0;
        uStack_138 = uStack_178;
        uStack_140 = local_180;
        local_190._8_8_ = 0;
        local_190._0_8_ = 0;
        uStack_178 = 0;
        local_180 = 0;
        local_150 = auVar26;
        if ((*(byte *)(*(long *)(DAT_091bdf80 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_170 = local_130;
        uStack_178 = uStack_138;
        local_180 = uStack_140;
        local_190 = local_150;
        thunk_FUN_03f5d7b8(local_190,0);
        uStack_108 = uStack_178;
        local_110 = local_180;
        local_100 = local_170;
        _local_120 = local_190;
        uVar21 = FUN_06b828c8(local_120,DAT_0919a7d8);
        auVar26 = local_190;
        auVar4 = local_d0;
        auVar3 = local_90;
        auVar7 = local_b0;
        if ((uVar21 & 1) == 0) {
          *param_1 = 2;
          *(undefined1 (*) [16])(param_1 + 0x20) = _local_120;
          *(ulong *)(param_1 + 0x26) = uStack_108;
          *(ulong *)(param_1 + 0x24) = local_110;
          *(ulong *)(param_1 + 0x28) = local_100;
          thunk_FUN_03f5d7b8(param_1 + 0x20,0);
          FUN_049b4ecc(param_1 + 2,local_120,param_1,DAT_091c27e8);
          return;
        }
      }
      auVar14 = local_120;
      uVar21 = uStack_108;
      local_190._0_8_ = uStack_118;
      local_190._8_8_ = local_110;
      if (local_120 != (undefined1  [8])0x0) {
        uVar21 = local_100 & 0xffff;
        lVar20 = *(long *)(DAT_0919a7d0 + 0x20);
        local_190 = auVar26;
        local_d0 = auVar4;
        local_90 = auVar3;
        local_b0 = auVar7;
        if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = FUN_03f95a6c();
        }
        lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = FUN_03f95a6c(lVar20);
        }
        lVar19 = *(long *)auVar14;
        uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar23 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar20) {
              puVar18 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_077d0cd0;
            }
            uVar23 = uVar23 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar23 != 0);
        }
        puVar18 = (undefined8 *)FUN_03f95da8(auVar14,lVar20,0);
LAB_077d0cd0:
        (*(code *)*puVar18)(&local_78,auVar14,uVar21,puVar18[1]);
        uVar21 = local_68;
        local_190._0_8_ = local_78;
        local_190._8_8_ = uStack_70;
        auVar4 = local_d0;
        auVar3 = local_90;
        auVar7 = local_b0;
      }
      *(undefined8 *)(param_1 + 0x12) = local_190._8_8_;
      *(undefined8 *)(param_1 + 0x10) = local_190._0_8_;
      *(ulong *)(param_1 + 0x14) = uVar21;
      local_180 = uVar21;
      local_f0 = (long *)local_190._0_8_;
      uStack_e8 = local_190._8_8_;
      local_e0 = uVar21;
      local_d0 = auVar4;
      local_90 = auVar3;
      local_b0 = auVar7;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      iVar15 = param_1[4];
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar21 = _GAME_BaseGame_ABIServerAPI__IsSessionAlive(iVar15);
      if ((uVar21 & 1) == 0) goto LAB_077d1840;
      uVar21 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x14),0);
      if ((uVar21 & 1) == 0) {
        uVar16 = *(undefined8 *)(param_1 + 0x14);
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_BaseGame_ABIServerAPI__SetIdentityConflict(uVar16);
        iVar15 = param_1[0xd];
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_190 = Cysharp_Threading_Tasks_UniTask__Delay(iVar15,2,8,0,0,0);
        thunk_FUN_03f5d7b8(local_190,0);
        local_90 = local_190;
        if (DAT_095162d4 == '\0') {
          FUN_03f5c2a4(&DAT_0918c610);
          DAT_095162d4 = '\x01';
        }
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095162d5 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d5 = '\x01';
        }
        uVar16 = local_90._0_8_;
        auVar5 = local_150;
        auVar6 = local_d0;
        auVar10 = _local_120;
        auVar11 = local_b0;
        if ((long *)local_90._0_8_ != (long *)0x0) {
          lVar20 = *(long *)local_90._0_8_;
          uVar23 = local_90._8_8_ & 0xffff;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == DAT_091868c0) {
                puVar18 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_077d0ff0;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar18 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,0);
LAB_077d0ff0:
          iVar15 = (*(code *)*puVar18)(uVar16,uVar23,puVar18[1]);
          auVar5 = local_150;
          auVar6 = local_d0;
          auVar10 = _local_120;
          auVar11 = local_b0;
          if (iVar15 == 0) {
            *param_1 = 3;
            *(undefined1 (*) [16])(param_1 + 0x16) = local_90;
            thunk_FUN_03f5d7b8(param_1 + 0x16,0);
            FUN_049b5a58(param_1 + 2,local_90,param_1,DAT_091c2808);
            return;
          }
        }
LAB_077d1004:
        local_150 = auVar5;
        local_d0 = auVar6;
        _local_120 = auVar10;
        local_b0 = auVar11;
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar16 = local_90._0_8_;
        if ((long *)local_90._0_8_ != (long *)0x0) {
          lVar20 = *(long *)local_90._0_8_;
          uVar23 = local_90._8_8_ & 0xffff;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == DAT_091868c0) {
                puVar18 = (undefined8 *)(lVar20 + (long)(*piVar22 + 2) * 0x10 + 0x138);
                goto LAB_077d107c;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar18 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,2);
LAB_077d107c:
          (*(code *)*puVar18)(uVar16,uVar23,puVar18[1]);
        }
        lVar20 = DAT_09180dc0;
        iVar2 = param_1[4];
        iVar15 = param_1[0xd] * 2;
        if (599999 < param_1[0xd] * 2) {
          iVar15 = 600000;
        }
        param_1[0xd] = iVar15;
        if (*(int *)(lVar20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar26 = _GAME_BaseGame_ABIServerAPI__WaitForNetwork(iVar2);
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_190 = auVar26;
        thunk_FUN_03f5d7b8(local_190,0);
        local_90 = local_190;
        if (DAT_095162d4 == '\0') {
          FUN_03f5c2a4(&DAT_0918c610);
          DAT_095162d4 = '\x01';
        }
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095162d5 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d5 = '\x01';
        }
        uVar16 = local_90._0_8_;
        if ((long *)local_90._0_8_ != (long *)0x0) {
          lVar20 = *(long *)local_90._0_8_;
          uVar23 = local_90._8_8_ & 0xffff;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == DAT_091868c0) {
                puVar18 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_077d119c;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar18 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,0);
LAB_077d119c:
          iVar15 = (*(code *)*puVar18)(uVar16,uVar23,puVar18[1]);
          if (iVar15 == 0) {
            *param_1 = 4;
            *(undefined1 (*) [16])(param_1 + 0x16) = local_90;
            thunk_FUN_03f5d7b8(param_1 + 0x16,0);
            FUN_049b5a58(param_1 + 2,local_90,param_1,DAT_091c2808);
            return;
          }
        }
LAB_077d11b0:
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar16 = local_90._0_8_;
        if ((long *)local_90._0_8_ != (long *)0x0) {
          lVar20 = *(long *)local_90._0_8_;
          uVar23 = local_90._8_8_ & 0xffff;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == DAT_091868c0) {
                puVar18 = (undefined8 *)(lVar20 + (long)(*piVar22 + 2) * 0x10 + 0x138);
                goto LAB_077d1228;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar18 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,2);
LAB_077d1228:
          (*(code *)*puVar18)(uVar16,uVar23,puVar18[1]);
        }
      }
      else {
        uVar21 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x10),0);
        if ((uVar21 & 1) == 0) break;
        uVar1 = param_1[0xe] + 1;
        param_1[0xe] = uVar1;
        if ((uVar1 == 3) || ((3 < (int)uVar1 && ((uVar1 & 3) == 0)))) {
          local_190._0_4_ = uVar1;
          uVar16 = FUN_03f5c42c(DAT_09535420,local_190);
          if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_194[0] = _GAME_BaseGame_ABIServerAPI__get_IsNetworkActive();
          local_194[0] = local_194[0] & 1;
          uVar17 = FUN_03f5c42c(DAT_09535400,local_194);
          uVar16 = System_String__Format(DAT_09213aa0,uVar16,uVar17,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogError(uVar16,0);
        }
        iVar15 = param_1[0xc];
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_190 = Cysharp_Threading_Tasks_UniTask__Delay(iVar15,2,8,0,0,0);
        thunk_FUN_03f5d7b8(local_190,0);
        local_90 = local_190;
        if (DAT_095162d4 == '\0') {
          FUN_03f5c2a4(&DAT_0918c610);
          DAT_095162d4 = '\x01';
        }
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095162d5 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d5 = '\x01';
        }
        uVar16 = local_90._0_8_;
        auVar8 = local_150;
        auVar9 = local_d0;
        auVar12 = _local_120;
        auVar13 = local_b0;
        if ((long *)local_90._0_8_ != (long *)0x0) {
          lVar20 = *(long *)local_90._0_8_;
          uVar23 = local_90._8_8_ & 0xffff;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == DAT_091868c0) {
                puVar18 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_077d1248;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar18 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,0);
LAB_077d1248:
          iVar15 = (*(code *)*puVar18)(uVar16,uVar23,puVar18[1]);
          auVar8 = local_150;
          auVar9 = local_d0;
          auVar12 = _local_120;
          auVar13 = local_b0;
          if (iVar15 == 0) {
            *param_1 = 5;
            *(undefined1 (*) [16])(param_1 + 0x16) = local_90;
            thunk_FUN_03f5d7b8(param_1 + 0x16,0);
            FUN_049b5a58(param_1 + 2,local_90,param_1,DAT_091c2808);
            return;
          }
        }
LAB_077d125c:
        local_150 = auVar8;
        local_d0 = auVar9;
        _local_120 = auVar12;
        local_b0 = auVar13;
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar16 = local_90._0_8_;
        if ((long *)local_90._0_8_ != (long *)0x0) {
          lVar20 = *(long *)local_90._0_8_;
          uVar23 = local_90._8_8_ & 0xffff;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == DAT_091868c0) {
                puVar18 = (undefined8 *)(lVar20 + (long)(*piVar22 + 2) * 0x10 + 0x138);
                goto LAB_077d12d4;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar18 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,2);
LAB_077d12d4:
          (*(code *)*puVar18)(uVar16,uVar23,puVar18[1]);
        }
        lVar20 = DAT_09180dc0;
        iVar2 = param_1[4];
        iVar15 = param_1[0xc] * 2;
        if (59999 < iVar15) {
          iVar15 = 60000;
        }
        param_1[0xc] = iVar15;
        if (*(int *)(lVar20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar26 = _GAME_BaseGame_ABIServerAPI__WaitForNetwork(iVar2);
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_190 = auVar26;
        thunk_FUN_03f5d7b8(local_190,0);
        local_90 = local_190;
        if (DAT_095162d4 == '\0') {
          FUN_03f5c2a4(&DAT_0918c610);
          DAT_095162d4 = '\x01';
        }
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095162d5 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d5 = '\x01';
        }
        uVar16 = local_90._0_8_;
        auVar8 = local_150;
        auVar9 = local_d0;
        auVar12 = _local_120;
        auVar13 = local_b0;
        if ((long *)local_90._0_8_ != (long *)0x0) {
          lVar20 = *(long *)local_90._0_8_;
          uVar23 = local_90._8_8_ & 0xffff;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == DAT_091868c0) {
                puVar18 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_077d13f0;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar18 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,0);
LAB_077d13f0:
          iVar15 = (*(code *)*puVar18)(uVar16,uVar23,puVar18[1]);
          auVar8 = local_150;
          auVar9 = local_d0;
          auVar12 = _local_120;
          auVar13 = local_b0;
          if (iVar15 == 0) {
            *param_1 = 6;
            *(undefined1 (*) [16])(param_1 + 0x16) = local_90;
            thunk_FUN_03f5d7b8(param_1 + 0x16,0);
            FUN_049b5a58(param_1 + 2,local_90,param_1,DAT_091c2808);
            return;
          }
        }
LAB_077d1404:
        local_150 = auVar8;
        local_d0 = auVar9;
        _local_120 = auVar12;
        local_b0 = auVar13;
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar16 = local_90._0_8_;
        if ((long *)local_90._0_8_ != (long *)0x0) {
          lVar20 = *(long *)local_90._0_8_;
          uVar23 = local_90._8_8_ & 0xffff;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == DAT_091868c0) {
                puVar18 = (undefined8 *)(lVar20 + (long)(*piVar22 + 2) * 0x10 + 0x138);
                goto LAB_077d147c;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar18 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,2);
LAB_077d147c:
          (*(code *)*puVar18)(uVar16,uVar23,puVar18[1]);
        }
      }
    }
    iVar25 = param_1[4];
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar21 = _GAME_BaseGame_ABIServerAPI__IsSessionAlive(iVar25);
    if ((uVar21 & 1) != 0) {
      uVar21 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x10),0);
      if ((uVar21 & 1) == 0) {
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_077d6d24(DAT_091f5700,0);
        uVar21 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 6),0);
        if ((uVar21 & 1) == 0) {
          if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar21 = System_String__Equals(*(long *)(param_1 + 6),*(undefined8 *)(param_1 + 0x10),0);
          if ((uVar21 & 1) == 0) {
            uVar16 = System_String__Concat
                               (DAT_09213a90,*(undefined8 *)(param_1 + 6),DAT_091f6438,
                                *(undefined8 *)(param_1 + 0x10),0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Debug__LogWarning(uVar16,0);
            uVar16 = *(undefined8 *)(param_1 + 6);
            if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            _GAME_BaseGame_ABIServerAPI__AddServerIdHistory(uVar16);
          }
        }
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar16 = _GAME_BaseGame_ABIServerAPI__get_KEY_SAVE_SERVER_ID();
        UnityEngine_PlayerPrefs__SetString(uVar16,*(undefined8 *)(param_1 + 0x10),0);
        uVar21 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x12),0);
        if ((uVar21 & 1) == 0) {
          if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar16 = _GAME_BaseGame_ABIServerAPI__get_KEY_SAVE_SOCIAL_AUTH_ID();
          UnityEngine_PlayerPrefs__SetString(uVar16,*(undefined8 *)(param_1 + 0x12),0);
        }
        UnityEngine_PlayerPrefs__Save(0);
        uVar16 = *(undefined8 *)(param_1 + 0x10);
        uVar21 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x12),0);
        uVar17 = DAT_091ffc00;
        if ((uVar21 & 1) == 0) {
          uVar17 = *(undefined8 *)(param_1 + 0x12);
          if (*(int *)(DAT_0918ae28 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar17 = _GAME_BaseGame_SocialAuth__GetAuthKind(uVar17,0);
        }
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_BaseGame_ABIServerAPI__PublishIdentity(uVar16,uVar17);
      }
    }
  }
LAB_077d1840:
  *param_1 = -2;
  piVar22 = param_1 + 6;
  piVar22[0] = 0;
  piVar22[1] = 0;
  thunk_FUN_03f5d7b8(piVar22,0);
  piVar22 = param_1 + 8;
  piVar22[0] = 0;
  piVar22[1] = 0;
  thunk_FUN_03f5d7b8(piVar22,0);
  piVar22 = param_1 + 10;
  piVar22[0] = 0;
  piVar22[1] = 0;
  thunk_FUN_03f5d7b8(piVar22,0);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_042dada8(param_1 + 2,0);
  return;
}

