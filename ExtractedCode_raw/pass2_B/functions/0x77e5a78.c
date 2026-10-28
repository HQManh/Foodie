// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestManager.<ForceFetchRank>d__24$$MoveNext
// address: 0x77e5a78
// body: available
// range: 0x77e5a78-0x77e5fff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e5fe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5fe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5fe8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5fec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5ff0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5ff4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5ffc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077e5d00) */
/* WARNING: Removing unreachable block (ram,0x077e5ff8) */

void _GAME_WeeklyContest_WeeklyContestManager_<ForceFetchRank>d__24__MoveNext(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 local_88 [16];
  long **local_78;
  undefined4 local_68;
  undefined1 local_60 [16];
  long *local_50;
  undefined8 uStack_48;
  long **local_40;
  int local_34;
  
  if ((DAT_09523086 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199670);
    FUN_03f5c2a4(&DAT_09199690);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b17f8);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b17f0);
    FUN_03f5c2a4(&DAT_091b1d48);
    FUN_03f5c2a4(&DAT_0917d0d0);
    FUN_03f5c2a4(&DAT_0917d000);
    FUN_03f5c2a4(&DAT_09195fa8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09523086 = 1;
  }
  local_34 = *param_1;
  local_50 = (long *)0x0;
  uStack_48 = 0;
  local_40 = (long **)0x0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = 0;
  if (local_34 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_34 = -1;
    *param_1 = -1;
  }
  else {
    lVar4 = thunk_FUN_03f9944c(DAT_09195fa8);
    System_Object___ctor(lVar4,0);
    plVar13 = (long *)(param_1 + 10);
    *plVar13 = lVar4;
    thunk_FUN_03f5d7b8(plVar13,lVar4);
    lVar4 = *plVar13;
    uVar5 = thunk_FUN_03f9944c(DAT_0917d0d0);
    FUN_057e0400(uVar5,DAT_091b1d48);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar11 = (undefined8 *)(lVar4 + 0x10);
    *puVar11 = uVar5;
    thunk_FUN_03f5d7b8(puVar11,uVar5);
    lVar4 = thunk_FUN_03f9944c(DAT_0917d000);
    FUN_058a14ac(lVar4,DAT_091b17f0);
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(local_88,lVar6,DAT_091b05a8);
    uStack_48 = local_88._8_8_;
    local_50 = (long *)local_88._0_8_;
    local_40 = local_78;
    local_88._8_8_ = &local_34;
    local_88._0_8_ = 0;
    local_78 = &local_50;
    while (uVar7 = FUN_071bd28c(&local_50,DAT_091a45a0), (uVar7 & 1) != 0) {
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar14 = _GAME_WeeklyContest_WeeklyContestManager_<>c__DisplayClass24_0__<ForceFetchRank>g__FetchProfile_0
                          (*plVar13,local_40);
      lVar6 = DAT_091b17f8;
      if (lVar4 == 0) {
LAB_077e5fe0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_077e5fe0;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        pauVar8 = (undefined1 (*) [16])(lVar9 + (long)(int)uVar1 * 0x10 + 0x20);
        *pauVar8 = auVar14;
        thunk_FUN_03f5d7b8(pauVar8,0);
      }
      else {
        FUN_058a1d58(lVar4,auVar14._0_8_,auVar14._8_8_,
                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (local_34 < 0) {
      FUN_071bd288(local_78,DAT_091a4598);
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_88 = Cysharp_Threading_Tasks_UniTask__WhenAll(lVar4,0);
    thunk_FUN_03f5d7b8(local_88,0);
    uVar2 = local_88._8_8_;
    uVar5 = local_88._0_8_;
    local_60 = local_88;
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
    if ((long *)uVar5 != (long *)0x0) {
      lVar4 = *(long *)uVar5;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091868c0) {
            puVar11 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077e5e0c;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)FUN_03f95da8(uVar5,DAT_091868c0,0);
LAB_077e5e0c:
      iVar3 = (*(code *)*puVar11)(uVar5,uVar2 & 0xffffffff,puVar11[1]);
      if (iVar3 == 0) {
        local_34 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_047956fc(param_1 + 2,local_60,param_1,DAT_09199670);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar5 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar4 = *(long *)local_60._0_8_;
    uVar12 = local_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091868c0) {
          puVar11 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077e5ea4;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_077e5ea4:
    (*(code *)*puVar11)(uVar5,uVar12,puVar11[1]);
  }
  lVar4 = *(long *)(param_1 + 10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  *param_1 = -2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  thunk_FUN_03f5d7b8(param_1 + 10,0);
  plVar13 = *(long **)(param_1 + 2);
  if (plVar13 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar5;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar5);
  }
  else {
    lVar4 = *(long *)(DAT_09199690 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar6 = *plVar13;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar11 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077e5f80;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar13,lVar4,2);
LAB_077e5f80:
    (*(code *)*puVar11)(plVar13,uVar5,puVar11[1]);
  }
  return;
}

