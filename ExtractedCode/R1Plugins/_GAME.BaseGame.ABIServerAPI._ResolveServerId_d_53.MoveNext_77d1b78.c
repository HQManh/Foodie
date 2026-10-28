// rea decompile_all
// name: _GAME.BaseGame.ABIServerAPI.<ResolveServerId>d__53$$MoveNext
// address: 0x77d1b78
// body: available
// range: 0x77d1b78-0x77d24bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77d24b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d24b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d24b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d24bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_ABIServerAPI_<ResolveServerId>d__53__MoveNext(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *local_160;
  long *plStack_158;
  long *local_150;
  long *plStack_148;
  ulong local_140;
  long *local_130;
  long *plStack_128;
  long *local_120;
  undefined4 local_110;
  long *local_108;
  long *plStack_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  long *local_e0;
  long *local_d0;
  long *plStack_c8;
  long *local_c0;
  long *local_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  ulong local_90;
  long *local_80;
  long *plStack_78;
  long *plStack_70;
  long *local_68;
  ulong local_60;
  long *local_50;
  long *plStack_48;
  long *local_40;
  
  if ((DAT_09522fc0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_0919a0e8);
    FUN_03f5c2a4(&DAT_0919a0f8);
    FUN_03f5c2a4(&DAT_0919a120);
    FUN_03f5c2a4(&DAT_0919a7d0);
    FUN_03f5c2a4(&DAT_0919a550);
    FUN_03f5c2a4(&DAT_0919a558);
    FUN_03f5c2a4(&DAT_0919a7d8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091bdd88);
    FUN_03f5c2a4(&DAT_091bdf80);
    FUN_03f5c2a4(&DAT_091fa120);
    FUN_03f5c2a4(&DAT_09213ab0);
    FUN_03f5c2a4(&DAT_0920db20);
    FUN_03f5c2a4(&DAT_091f6330);
    DAT_09522fc0 = 1;
  }
  iVar2 = *param_1;
  local_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  local_40 = (long *)0x0;
  local_60 = 0;
  local_90 = 0;
  plStack_a8 = (long *)0x0;
  local_b0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  plStack_78 = (long *)0x0;
  local_80 = (long *)0x0;
  local_68 = (long *)0x0;
  plStack_70 = (long *)0x0;
  local_d0 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_f0 = (long *)0x0;
  plStack_e8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_108 = (long *)0x0;
  plStack_100 = (long *)0x0;
  local_f8 = (long *)0x0;
  local_110 = 0;
  local_130 = (long *)0x0;
  plStack_128 = (long *)0x0;
  local_120 = (long *)0x0;
  if (iVar2 == 0) {
    local_60 = *(ulong *)(param_1 + 0x1a);
    plStack_78 = *(long **)(param_1 + 0x14);
    local_80 = *(long **)(param_1 + 0x12);
    local_68 = *(long **)(param_1 + 0x18);
    plStack_70 = *(long **)(param_1 + 0x16);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *param_1 = -1;
LAB_077d1e30:
    plVar16 = local_80;
    plVar10 = local_130;
    plVar3 = plStack_128;
    plVar4 = local_120;
    plVar5 = plStack_78;
    plVar6 = plStack_70;
    plVar7 = local_68;
    if (local_80 != (long *)0x0) {
      uVar17 = local_60 & 0xffff;
      lVar8 = *(long *)(DAT_0919a7d0 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar13 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_077d22f8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar16,lVar8,0);
LAB_077d22f8:
      (*(code *)*puVar9)(&local_160,plVar16,uVar17,puVar9[1]);
      plVar10 = local_130;
      plVar3 = plStack_128;
      plVar4 = local_120;
      plVar5 = local_160;
      plVar6 = plStack_158;
      plVar7 = local_150;
    }
    goto LAB_077d2398;
  }
  if (iVar2 == 1) {
    local_c0 = *(long **)(param_1 + 0x20);
    plStack_c8 = *(long **)(param_1 + 0x1e);
    local_d0 = *(long **)(param_1 + 0x1c);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = -1;
LAB_077d1d80:
    plVar16 = local_d0;
    plVar10 = plStack_c8;
    if (local_d0 != (long *)0x0) {
      uVar17 = (ulong)local_c0 & 0xffff;
      lVar8 = *(long *)(DAT_0919a550 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar13 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_077d20c0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar16,lVar8,0);
LAB_077d20c0:
      plVar10 = (long *)(*(code *)*puVar9)(plVar16,uVar17,puVar9[1]);
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((char)plVar10[2] != '\0') {
      uVar17 = _GAME_BaseGame_ABIServerIDCommandResult__get_IsSuccess(plVar10);
      if ((uVar17 & 1) != 0) {
        uVar17 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x10),0);
        if ((uVar17 & 1) == 0) {
          if (plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar17 = System_String__Equals(plVar10[3],*(undefined8 *)(param_1 + 0x10),0);
          if ((uVar17 & 1) == 0) {
            lVar8 = FUN_03f5c394(DAT_091805f8,5);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_039af17c(lVar8,0,DAT_09213ab0);
            FUN_039af17c(lVar8,1,*(undefined8 *)(param_1 + 0x10));
            FUN_039af17c(lVar8,2,DAT_091f6330);
            FUN_039af17c(lVar8,3,plVar10[3]);
            FUN_039af17c(lVar8,4,DAT_091fa120);
            uVar11 = System_String__Concat(lVar8,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Debug__LogWarning(uVar11,0);
          }
        }
        lVar8 = plVar10[3];
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar16 = (long *)(*(long *)(DAT_09180dc0 + 0xb8) + 0x10);
        *plVar16 = lVar8;
        thunk_FUN_03f5d7b8(plVar16,lVar8);
        local_108 = (long *)plVar10[3];
        plStack_100 = (long *)0x0;
        local_f8 = (long *)0x0;
        thunk_FUN_03f5d7b8(&local_108);
        plVar10 = local_130;
        plVar3 = plStack_128;
        plVar4 = local_120;
        plVar5 = local_108;
        plVar6 = plStack_100;
        plVar7 = local_f8;
        goto LAB_077d2398;
      }
      if (((char)plVar10[2] != '\0') && (*(int *)((long)plVar10 + 0x14) == 2)) {
        uVar17 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x10),0);
        if ((uVar17 & 1) == 0) {
          local_108 = (long *)0x0;
          plStack_100 = (long *)0x0;
          local_f8 = DAT_0920db20;
          thunk_FUN_03f5d7b8(&local_f8);
          plVar10 = local_130;
          plVar3 = plStack_128;
          plVar4 = local_120;
          plVar5 = local_108;
          plVar6 = plStack_100;
          plVar7 = local_f8;
          goto LAB_077d2398;
        }
        _GAME_BaseGame_GenServerID__GenIDDetailed(&local_160,*(undefined8 *)(param_1 + 0xc));
        plStack_e8 = plStack_158;
        local_f0 = local_160;
        local_e0 = local_150;
        FUN_039b5b60(&local_160,&local_f0,DAT_091bdd88);
        plStack_c8 = plStack_158;
        local_d0 = local_160;
        local_c0 = local_150;
        uVar17 = FUN_041e5390(&local_d0,DAT_0919a558);
        if ((uVar17 & 1) == 0) {
          *param_1 = 2;
          *(long **)(param_1 + 0x1e) = plStack_c8;
          *(long **)(param_1 + 0x1c) = local_d0;
          *(long **)(param_1 + 0x20) = local_c0;
          thunk_FUN_03f5d7b8(param_1 + 0x1c,0);
          FUN_04795ff4(param_1 + 2,&local_d0,param_1,DAT_0919a0e8);
          return;
        }
        goto LAB_077d1cd8;
      }
    }
  }
  else {
    if (iVar2 == 2) {
      local_c0 = *(long **)(param_1 + 0x20);
      plStack_c8 = *(long **)(param_1 + 0x1e);
      local_d0 = *(long **)(param_1 + 0x1c);
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      *param_1 = -1;
LAB_077d1cd8:
      plVar16 = local_d0;
      plVar12 = plStack_c8;
      if (local_d0 != (long *)0x0) {
        uVar17 = (ulong)local_c0 & 0xffff;
        lVar8 = *(long *)(DAT_0919a550 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c(lVar8);
        }
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar8) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_077d2330;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar16,lVar8,0);
LAB_077d2330:
        plVar12 = (long *)(*(code *)*puVar9)(plVar16,uVar17,puVar9[1]);
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar17 = _GAME_BaseGame_ABIServerIDCommandResult__get_IsSuccess(plVar12);
      local_108 = (long *)0x0;
      plStack_100 = (long *)0x0;
      local_f8 = (long *)0x0;
      plVar10 = local_108;
      plVar3 = plStack_100;
      plVar4 = local_f8;
      plVar5 = local_108;
      plVar6 = plStack_100;
      plVar7 = local_f8;
      if ((uVar17 & 1) != 0) {
        local_108 = (long *)plVar12[3];
        thunk_FUN_03f5d7b8(&local_108);
        plVar10 = local_108;
        plVar3 = plStack_100;
        plVar4 = local_f8;
        plVar5 = local_108;
        plVar6 = plStack_100;
        plVar7 = local_f8;
      }
      goto LAB_077d2398;
    }
    uVar17 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0xc),0);
    if ((uVar17 & 1) == 0) {
      uVar17 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0xe),0);
      if ((uVar17 & 1) == 0) {
        uVar11 = *(undefined8 *)(param_1 + 0xe);
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        uVar18 = *(undefined8 *)(param_1 + 0xc);
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_BaseGame_ABIServerAPI__ResolveWithPlatform(&local_160,uVar1,uVar18,uVar11);
        local_90 = local_140;
        plStack_98 = plStack_148;
        plStack_a0 = local_150;
        plStack_a8 = plStack_158;
        local_b0 = local_160;
        local_140 = 0;
        plStack_158 = (long *)0x0;
        local_160 = (long *)0x0;
        plStack_148 = (long *)0x0;
        local_150 = (long *)0x0;
        if ((*(byte *)(*(long *)(DAT_091bdf80 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_140 = local_90;
        plStack_158 = plStack_a8;
        local_160 = local_b0;
        plStack_148 = plStack_98;
        local_150 = plStack_a0;
        thunk_FUN_03f5d7b8(&local_160,0);
        plStack_78 = plStack_158;
        local_80 = local_160;
        local_68 = plStack_148;
        plStack_70 = local_150;
        local_60 = local_140;
        uVar17 = FUN_06b828c8(&local_80,DAT_0919a7d8);
        if ((uVar17 & 1) == 0) {
          *param_1 = 0;
          *(ulong *)(param_1 + 0x1a) = local_60;
          *(long **)(param_1 + 0x14) = plStack_78;
          *(long **)(param_1 + 0x12) = local_80;
          *(long **)(param_1 + 0x18) = local_68;
          *(long **)(param_1 + 0x16) = plStack_70;
          thunk_FUN_03f5d7b8(param_1 + 0x12,0);
          FUN_04796368(param_1 + 2,&local_80,param_1,DAT_0919a0f8);
          return;
        }
        goto LAB_077d1e30;
      }
      _GAME_BaseGame_GenServerID__ReadIDDetailed(&local_160,*(undefined8 *)(param_1 + 0xc));
      local_e0 = local_150;
      plStack_e8 = plStack_158;
      plStack_158 = (long *)0x0;
      local_150 = (long *)0x0;
      local_f0 = local_160;
      local_160 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bdd88 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      plStack_158 = plStack_e8;
      local_160 = local_f0;
      local_150 = local_e0;
      thunk_FUN_03f5d7b8(&local_160,0);
      plStack_c8 = plStack_158;
      local_d0 = local_160;
      local_c0 = local_150;
      uVar17 = FUN_041e5390(&local_d0,DAT_0919a558);
      if ((uVar17 & 1) == 0) {
        *param_1 = 1;
        *(long **)(param_1 + 0x1e) = plStack_c8;
        *(long **)(param_1 + 0x1c) = local_d0;
        *(long **)(param_1 + 0x20) = local_c0;
        thunk_FUN_03f5d7b8(param_1 + 0x1c,0);
        FUN_04795ff4(param_1 + 2,&local_d0,param_1,DAT_0919a0e8);
        return;
      }
      goto LAB_077d1d80;
    }
  }
  local_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  local_40 = (long *)0x0;
  plVar10 = local_130;
  plVar3 = plStack_128;
  plVar4 = local_120;
  plVar5 = local_50;
  plVar6 = plStack_48;
  plVar7 = local_40;
LAB_077d2398:
  local_40 = plVar7;
  plStack_48 = plVar6;
  local_50 = plVar5;
  local_120 = plVar4;
  plStack_128 = plVar3;
  local_130 = plVar10;
  plVar16 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar16 == (long *)0x0) {
    *(long **)(param_1 + 8) = plStack_48;
    *(long **)(param_1 + 6) = local_50;
    *(long **)(param_1 + 10) = local_40;
    thunk_FUN_03f5d7b8(param_1 + 6,0);
  }
  else {
    lVar8 = *(long *)(DAT_0919a120 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar13 = *plVar16;
    uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar17 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar8) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_077d2454;
        }
        uVar17 = uVar17 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar16,lVar8,2);
LAB_077d2454:
    plStack_158 = plStack_48;
    local_160 = local_50;
    local_150 = local_40;
    (*(code *)*puVar9)(plVar16,&local_160,puVar9[1]);
  }
  return;
}

