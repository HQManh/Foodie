// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestManager.<>c__DisplayClass24_0.<<ForceFetchRank>g__FetchProfile|0>d$$MoveNext
// address: 0x77e45ac
// body: available
// range: 0x77e45ac-0x77e4b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e4b7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e4b80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e4b84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e4b88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e4b8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_WeeklyContestManager_<>c__DisplayClass24_0_<<ForceFetchRank>g__FetchProfile_0>d__MoveNext
               (int *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *local_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *local_120;
  ulong uStack_118;
  long *local_110;
  long *plStack_108;
  long *local_100;
  undefined4 local_e8;
  long *local_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *local_c0;
  ulong uStack_b8;
  long *local_b0;
  long *plStack_a8;
  long *local_a0;
  long *plStack_98;
  long *local_90;
  ulong uStack_88;
  long *local_80;
  long *plStack_78;
  long *local_70;
  long *local_60;
  long *plStack_58;
  long *local_50;
  
  if ((DAT_09523083 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c1e88);
    FUN_03f5c2a4(&DAT_0919a6e0);
    FUN_03f5c2a4(&DAT_0919a6e8);
    FUN_03f5c2a4(&DAT_091c4d30);
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091b1d50);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091bdef8);
    FUN_03f5c2a4(&DAT_0918d050);
    FUN_03f5c2a4(&DAT_0918d058);
    FUN_03f5c2a4(&DAT_09213240);
    DAT_09523083 = 1;
  }
  lVar14 = *(long *)(param_1 + 8);
  local_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  local_50 = (long *)0x0;
  local_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  local_70 = (long *)0x0;
  plStack_d8 = (long *)0x0;
  local_e0 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  plStack_d0 = (long *)0x0;
  uStack_b8 = 0;
  local_c0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  local_b0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  local_a0 = (long *)0x0;
  uStack_88 = 0;
  local_90 = (long *)0x0;
  local_e8 = 0;
  local_110 = (long *)0x0;
  plStack_108 = (long *)0x0;
  local_100 = (long *)0x0;
  if (*param_1 == 0) {
    plStack_a8 = *(long **)(param_1 + 0xc);
    local_b0 = *(long **)(param_1 + 10);
    plStack_98 = *(long **)(param_1 + 0x10);
    local_a0 = *(long **)(param_1 + 0xe);
    uStack_88 = *(ulong *)(param_1 + 0x14);
    local_90 = *(long **)(param_1 + 0x12);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_077e4848:
    plVar9 = local_b0;
    plVar7 = local_90;
    plVar13 = plStack_a8;
    plVar15 = local_a0;
    plVar16 = plStack_98;
    if (local_b0 != (long *)0x0) {
      uVar4 = uStack_88 & 0xffff;
      lVar12 = *(long *)(DAT_0919a6e0 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c(lVar12);
      }
      lVar6 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar12) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_077e4948;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar9,lVar12,0);
LAB_077e4948:
      (*(code *)*puVar5)(&local_140,plVar9,uVar4,puVar5[1]);
      plVar7 = plStack_128;
      plVar13 = local_140;
      plVar15 = plStack_138;
      plVar16 = plStack_130;
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 6);
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
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = System_String__Equals(lVar12,**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar4 & 1) == 0) {
      _GAME_Profile_ProfileServer__ReadProfileEnvelope(&local_140,*(undefined8 *)(param_1 + 6),0,0);
      uStack_b8 = uStack_118;
      local_c0 = local_120;
      plStack_c8 = plStack_128;
      plStack_d0 = plStack_130;
      plStack_128 = (long *)0x0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      local_120 = (long *)0x0;
      plStack_d8 = plStack_138;
      local_e0 = local_140;
      plStack_138 = (long *)0x0;
      local_140 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bdef8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uStack_118 = uStack_b8;
      local_120 = local_c0;
      plStack_138 = plStack_d8;
      local_140 = local_e0;
      plStack_128 = plStack_c8;
      plStack_130 = plStack_d0;
      thunk_FUN_03f5d7b8(&local_140,0);
      plStack_a8 = plStack_138;
      local_b0 = local_140;
      plStack_98 = plStack_128;
      local_a0 = plStack_130;
      uStack_88 = uStack_118;
      local_90 = local_120;
      uVar4 = FUN_064167ec(&local_b0,DAT_0919a6e8);
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        *(ulong *)(param_1 + 0x14) = uStack_88;
        *(long **)(param_1 + 0x12) = local_90;
        *(long **)(param_1 + 0xc) = plStack_a8;
        *(long **)(param_1 + 10) = local_b0;
        *(long **)(param_1 + 0x10) = plStack_98;
        *(long **)(param_1 + 0xe) = local_a0;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049afaa8(param_1 + 2,&local_b0,param_1,DAT_091c1e88);
        return;
      }
      goto LAB_077e4848;
    }
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar12 = **(long **)(DAT_091896c0 + 0xb8);
    if (lVar12 == 0) {
      plVar13 = (long *)0x0;
      local_110 = (long *)0x0;
      plStack_108 = (long *)0x0;
      local_100 = (long *)0x0;
      plVar7 = local_100;
      plVar15 = local_110;
      plVar16 = plStack_108;
    }
    else {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar12 = **(long **)(DAT_091896c0 + 0xb8);
      }
      _GAME_Profile_ProfileReadEnvelope__LocalAuthoritative(&local_140,lVar12,DAT_09213240,0);
      plStack_108 = plStack_130;
      local_110 = plStack_138;
      local_100 = plStack_128;
      plVar7 = plStack_128;
      plVar13 = local_140;
      plVar15 = plStack_138;
      plVar16 = plStack_130;
    }
  }
  local_80 = plVar15;
  plStack_78 = plVar16;
  local_70 = plVar7;
  local_60 = plVar15;
  plStack_58 = plVar16;
  local_50 = plVar7;
  if (plVar13 == (long *)0x0) {
LAB_077e4ad0:
    cVar2 = DAT_095162d8;
    *param_1 = -2;
    if (cVar2 == '\0') {
      FUN_03f5c2a4(&DAT_091866a8);
      DAT_095162d8 = '\x01';
    }
    plVar9 = *(long **)(param_1 + 2);
    if (plVar9 != (long *)0x0) {
      lVar14 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_091866a8) {
            puVar5 = (undefined8 *)(lVar14 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_077e4b58;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_077e4b58:
      (*(code *)*puVar5)(plVar9,puVar5[1]);
    }
    return;
  }
  plVar9 = plVar13 + 0x15;
  if (*plVar9 == 0) {
    lVar12 = thunk_FUN_03f9944c(DAT_091764a0);
    FUN_06ee539c(lVar12,DAT_0919d948);
    *plVar9 = lVar12;
    thunk_FUN_03f5d7b8(plVar9,lVar12);
  }
  lVar12 = thunk_FUN_03f9944c(DAT_0918d058);
  System_Object___ctor(lVar12,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(param_1 + 6);
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(lVar12 + 0x20) = plVar13;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar12 + 0x20),plVar13);
  *(undefined8 *)(lVar12 + 0x28) = plVar13;
  *(long **)(lVar12 + 0x38) = plStack_58;
  *(long **)(lVar12 + 0x30) = local_60;
  *(long **)(lVar12 + 0x40) = local_50;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar12 + 0x28),0);
  if (**(long **)(DAT_0918d050 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = FUN_04a5f8ac(*plVar9,*(undefined4 *)(**(long **)(DAT_0918d050 + 0xb8) + 0x14),DAT_091c4d30
                      );
  *(undefined4 *)(lVar12 + 0x1c) = uVar3;
  lVar6 = DAT_091b1d50;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if (lVar14 != 0) {
    lVar8 = *(long *)(lVar14 + 0x10);
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar14 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
        plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar9 = lVar12;
        thunk_FUN_03f5d7b8(plVar9,lVar12);
      }
      else {
        FUN_057e0c68(lVar14,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                    );
      }
      goto LAB_077e4ad0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

