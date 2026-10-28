// rea decompile_all
// name: PlatformServiceR1.GooglePlaySavedGameBackend.<ReadAsync>d__1$$MoveNext
// address: 0x772f35c
// body: available
// range: 0x772f35c-0x772fa0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x772f9f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x772f9f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x772f9f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x772f9fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x772fa00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x772fa04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x772fa08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void PlatformServiceR1_GooglePlaySavedGameBackend_<ReadAsync>d__1__MoveNext(int *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  long *local_e0;
  long *plStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  undefined4 local_b8;
  long *local_b0;
  long *plStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long *local_90;
  long *plStack_88;
  ulong uStack_80;
  ulong local_78;
  long *local_70;
  long *plStack_68;
  ulong local_60;
  long *local_50;
  long *plStack_48;
  ulong local_40;
  
  if ((DAT_09522a64 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174d68);
    FUN_03f5c2a4(&DAT_09199a38);
    FUN_03f5c2a4(&DAT_09199a40);
    FUN_03f5c2a4(&DAT_09199a60);
    FUN_03f5c2a4(&DAT_0919a5a0);
    FUN_03f5c2a4(&DAT_0919a610);
    FUN_03f5c2a4(&DAT_0919a5a8);
    FUN_03f5c2a4(&DAT_0919a618);
    FUN_03f5c2a4(&DAT_09186538);
    FUN_03f5c2a4(&DAT_091ea6b8);
    FUN_03f5c2a4(&DAT_09190f08);
    FUN_03f5c2a4(&DAT_091bdcd0);
    FUN_03f5c2a4(&DAT_091bdce0);
    FUN_03f5c2a4(&DAT_0917f688);
    FUN_03f5c2a4(&DAT_091bdde8);
    FUN_03f5c2a4(&DAT_091bde58);
    DAT_09522a64 = 1;
  }
  lVar8 = *(long *)(param_1 + 10);
  local_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  local_40 = 0;
  local_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  local_60 = 0;
  plStack_a8 = (long *)0x0;
  local_b0 = (long *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  plStack_88 = (long *)0x0;
  local_90 = (long *)0x0;
  local_78 = 0;
  uStack_80 = 0;
  local_b8 = 0;
  if (*param_1 == 0) {
    local_40 = *(ulong *)(param_1 + 0x14);
    plStack_48 = *(long **)(param_1 + 0x12);
    local_50 = *(long **)(param_1 + 0x10);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_0772f574:
    plVar2 = local_50;
    plVar10 = plStack_48;
    if (local_50 != (long *)0x0) {
      uVar9 = local_40 & 0xffff;
      lVar5 = *(long *)(DAT_0919a610 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c(lVar5);
      }
      lVar4 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0772f66c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,lVar5,0);
LAB_0772f66c:
      plVar10 = (long *)(*(code *)*puVar3)(plVar2,uVar9,puVar3[1]);
    }
    if (plVar10 == (long *)0x0) {
      local_e0 = (long *)0x0;
      plStack_d8 = (long *)0x0;
      thunk_FUN_03f5d7b8(&plStack_d8,0);
      auVar12._8_8_ = plStack_d8;
      auVar12._0_8_ = local_e0;
      goto LAB_0772f904;
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(long *)(lVar8 + 0x10) = (long)plVar10;
    thunk_FUN_03f5d7b8((long *)(lVar8 + 0x10),plVar10);
    lVar8 = *(long *)(param_1 + 0xe);
    uVar1 = thunk_FUN_03f9944c(DAT_0917f688);
    FUN_0643a29c(uVar1,DAT_091bdcd0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar3 = (undefined8 *)(lVar8 + 0x10);
    *puVar3 = uVar1;
    thunk_FUN_03f5d7b8(puVar3,uVar1);
    lVar8 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar2 = (long *)GooglePlayGames_PlayGamesPlatform__get_SavedGame(lVar8,0);
    uVar11 = *(undefined8 *)(param_1 + 0xe);
    uVar1 = thunk_FUN_03f9944c(DAT_09174d68);
    FUN_071cbc6c(uVar1,uVar11,DAT_091ea6b8,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09186538) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0772f778;
        }
        uVar9 = uVar9 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09186538,2);
LAB_0772f778:
    (*(code *)*puVar3)(plVar2,plVar10,uVar1,puVar3[1]);
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0xe) + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_0643a2bc(&local_e0,lVar8,DAT_091bdce0);
    uStack_98 = uStack_c8;
    uStack_a0 = local_d0;
    plStack_a8 = plStack_d8;
    local_b0 = local_e0;
    plStack_d8 = (long *)0x0;
    local_e0 = (long *)0x0;
    uStack_c8 = 0;
    local_d0 = 0;
    if ((*(byte *)(*(long *)(DAT_091bdde8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    plStack_d8 = plStack_a8;
    local_e0 = local_b0;
    uStack_c8 = uStack_98;
    local_d0 = uStack_a0;
    thunk_FUN_03f5d7b8(&local_e0,0);
    plStack_88 = plStack_d8;
    local_90 = local_e0;
    local_78 = uStack_c8;
    uStack_80 = local_d0;
    uVar9 = FUN_06b807b4(&local_90,DAT_0919a5a8);
    if ((uVar9 & 1) == 0) {
      *param_1 = 1;
      *(long **)(param_1 + 0x18) = plStack_88;
      *(long **)(param_1 + 0x16) = local_90;
      *(ulong *)(param_1 + 0x1c) = local_78;
      *(ulong *)(param_1 + 0x1a) = uStack_80;
      thunk_FUN_03f5d7b8(param_1 + 0x16,0);
      FUN_04790b40(param_1 + 2,&local_90,param_1,DAT_09199a38);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      uVar1 = thunk_FUN_03f9944c(DAT_09190f08);
      System_Object___ctor(uVar1,0);
      *(undefined8 *)(param_1 + 0xe) = uVar1;
      uVar1 = thunk_FUN_03f5d7b8(param_1 + 0xe,uVar1);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      PlatformServiceR1_GooglePlaySavedGameBackend__OpenSlotAsync
                (&local_e0,uVar1,*(undefined8 *)(param_1 + 0xc));
      local_60 = local_d0;
      plStack_68 = plStack_d8;
      plStack_d8 = (long *)0x0;
      local_d0 = 0;
      local_70 = local_e0;
      local_e0 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bde58 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      plStack_d8 = plStack_68;
      local_e0 = local_70;
      local_d0 = local_60;
      thunk_FUN_03f5d7b8(&local_e0,0);
      plStack_48 = plStack_d8;
      local_50 = local_e0;
      local_40 = local_d0;
      uVar9 = FUN_041e5390(&local_50,DAT_0919a618);
      if ((uVar9 & 1) == 0) {
        *param_1 = 0;
        *(long **)(param_1 + 0x12) = plStack_48;
        *(long **)(param_1 + 0x10) = local_50;
        *(ulong *)(param_1 + 0x14) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        FUN_04790c60(param_1 + 2,&local_50,param_1,DAT_09199a40);
        return;
      }
      goto LAB_0772f574;
    }
    plStack_88 = *(long **)(param_1 + 0x18);
    local_90 = *(long **)(param_1 + 0x16);
    local_78 = *(ulong *)(param_1 + 0x1c);
    uStack_80 = *(ulong *)(param_1 + 0x1a);
    *param_1 = -1;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  plVar10 = local_90;
  auVar12._8_8_ = uStack_80;
  auVar12._0_8_ = plStack_88;
  if (local_90 != (long *)0x0) {
    uVar9 = local_78 & 0xffff;
    lVar8 = *(long *)(DAT_0919a5a0 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0772f8ec;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar10,lVar8,0);
LAB_0772f8ec:
    auVar12 = (*(code *)*puVar3)(plVar10,uVar9,puVar3[1]);
  }
LAB_0772f904:
  *param_1 = -2;
  piVar7 = param_1 + 0xe;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_03f5d7b8(piVar7,0);
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 == (long *)0x0) {
    *(undefined1 (*) [16])(param_1 + 6) = auVar12;
    thunk_FUN_03f5d7b8(param_1 + 8,0);
  }
  else {
    lVar8 = *(long *)(DAT_09199a60 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar5 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0772f9c8;
        }
        uVar9 = uVar9 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar10,lVar8,2);
LAB_0772f9c8:
    (*(code *)*puVar3)(plVar10,auVar12._0_8_,auVar12._8_8_,puVar3[1]);
  }
  return;
}

