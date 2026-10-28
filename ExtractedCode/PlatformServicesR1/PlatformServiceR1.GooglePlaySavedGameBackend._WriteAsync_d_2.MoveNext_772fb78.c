// rea decompile_all
// name: PlatformServiceR1.GooglePlaySavedGameBackend.<WriteAsync>d__2$$MoveNext
// address: 0x772fb78
// body: available
// range: 0x772fb78-0x77302b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7730298 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x773029c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77302a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77302a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77302a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77302ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77302b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77302b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void PlatformServiceR1_GooglePlaySavedGameBackend_<WriteAsync>d__2__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 local_120 [16];
  long *local_110;
  long lStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  long lStack_d8;
  ulong local_d0;
  long *local_c0;
  long lStack_b8;
  ulong local_b0;
  long *local_a0;
  long lStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  ulong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_09522a66 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174d70);
    FUN_03f5c2a4(&DAT_091997a8);
    FUN_03f5c2a4(&DAT_09199850);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a610);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_0919a618);
    FUN_03f5c2a4(&DAT_09186538);
    FUN_03f5c2a4(&DAT_091ea6c0);
    FUN_03f5c2a4(&DAT_09190f10);
    FUN_03f5c2a4(&DAT_091bdcb8);
    FUN_03f5c2a4(&DAT_091bdcc8);
    FUN_03f5c2a4(&DAT_0917f680);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_091bde58);
    DAT_09522a66 = 1;
  }
  lVar14 = *(long *)(param_1 + 8);
  local_c0 = (long *)0x0;
  lStack_b8 = 0;
  local_b0 = 0;
  local_e0 = (long *)0x0;
  lStack_d8 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  lStack_98 = 0;
  local_a0 = (long *)0x0;
  local_d0 = 0;
  lStack_108 = 0;
  local_110 = (long *)0x0;
  local_120._0_8_ = 0;
  local_120._8_8_ = 0;
  if (*param_1 == 0) {
    local_b0 = *(ulong *)(param_1 + 0x18);
    lStack_b8 = *(long *)(param_1 + 0x16);
    local_c0 = *(long **)(param_1 + 0x14);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_0772fcdc:
    plVar13 = local_c0;
    lVar8 = lStack_b8;
    if (local_c0 != (long *)0x0) {
      uVar10 = local_b0 & 0xffff;
      lVar8 = *(long *)(DAT_0919a610 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar7 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0772fe8c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar13,lVar8,0);
LAB_0772fe8c:
      lVar8 = (*(code *)*puVar6)(plVar13,uVar10,puVar6[1]);
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar13 = (long *)(lVar14 + 0x10);
    *plVar13 = lVar8;
    thunk_FUN_03f5d7b8(plVar13);
    if (*plVar13 == 0) {
      bVar3 = 0;
      goto LAB_077301b8;
    }
LAB_0772febc:
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    lStack_108 = 0;
    local_110 = (long *)0x0;
    GooglePlayGames_BasicApi_SavedGame_SavedGameMetadataUpdate_Builder__WithUpdatedPlayedTime
              (local_70,&local_110,*(undefined8 *)(param_1 + 0xc),0);
    uStack_e8 = uStack_48;
    local_f0 = local_50;
    lStack_108 = local_70._8_8_;
    local_110 = (long *)local_70._0_8_;
    uStack_f8 = uStack_58;
    local_100 = local_60;
    GooglePlayGames_BasicApi_SavedGame_SavedGameMetadataUpdate_Builder__WithUpdatedDescription
              (local_70,&local_110,*(undefined8 *)(param_1 + 0xe),0);
    uStack_e8 = uStack_48;
    local_f0 = local_50;
    lStack_108 = local_70._8_8_;
    local_110 = (long *)local_70._0_8_;
    uStack_f8 = uStack_58;
    local_100 = local_60;
    GooglePlayGames_BasicApi_SavedGame_SavedGameMetadataUpdate_Builder__Build(local_70,&local_110,0)
    ;
    lVar8 = *(long *)(param_1 + 0x10);
    lStack_98 = local_70._8_8_;
    local_a0 = (long *)local_70._0_8_;
    uStack_88 = uStack_58;
    local_90 = local_60;
    uStack_78 = uStack_48;
    local_80 = local_50;
    uVar4 = thunk_FUN_03f9944c(DAT_0917f680);
    FUN_064398e4(uVar4,DAT_091bdcb8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar6 = (undefined8 *)(lVar8 + 0x18);
    *puVar6 = uVar4;
    thunk_FUN_03f5d7b8(puVar6,uVar4);
    lVar8 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar13 = (long *)GooglePlayGames_PlayGamesPlatform__get_SavedGame(lVar8,0);
    uVar12 = *(undefined8 *)(lVar14 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x12);
    uVar5 = thunk_FUN_03f9944c(DAT_09174d70);
    FUN_071cbc6c(uVar5,uVar4,DAT_091ea6c0,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar14 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09186538) {
          puVar6 = (undefined8 *)(lVar14 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_0773001c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09186538,4);
LAB_0773001c:
    uStack_48 = uStack_78;
    local_50 = local_80;
    local_70._8_8_ = lStack_98;
    local_70._0_8_ = local_a0;
    uStack_58 = uStack_88;
    local_60 = local_90;
    (*(code *)*puVar6)(plVar13,uVar12,local_70,uVar1,uVar5,puVar6[1]);
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar14 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar15 = FUN_06439904(lVar14,DAT_091bdcc8);
    local_70._0_8_ = 0;
    local_70._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_70 = auVar15;
    thunk_FUN_03f5d7b8(local_70,0);
    local_120 = local_70;
    uVar10 = FUN_0430cf0c(local_120,DAT_0919a588);
    if ((uVar10 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x1a) = local_120;
      thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
      FUN_0478e18c(param_1 + 2,local_120,param_1,DAT_091997a8);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      lVar8 = thunk_FUN_03f9944c(DAT_09190f10);
      System_Object___ctor(lVar8,0);
      plVar13 = (long *)(param_1 + 0x10);
      *plVar13 = lVar8;
      thunk_FUN_03f5d7b8(plVar13,lVar8);
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(*plVar13 + 0x10) = *(undefined8 *)(param_1 + 8);
      uVar4 = thunk_FUN_03f5d7b8();
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        PlatformServiceR1_GooglePlaySavedGameBackend__OpenSlotAsync
                  (local_70,uVar4,*(undefined8 *)(param_1 + 10));
        local_d0 = local_60;
        lStack_d8 = local_70._8_8_;
        local_70._8_8_ = 0;
        local_60 = 0;
        local_e0 = (long *)local_70._0_8_;
        local_70._0_8_ = 0;
        if ((*(byte *)(*(long *)(DAT_091bde58 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_70._8_8_ = lStack_d8;
        local_70._0_8_ = local_e0;
        local_60 = local_d0;
        thunk_FUN_03f5d7b8(local_70,0);
        lStack_b8 = local_70._8_8_;
        local_c0 = (long *)local_70._0_8_;
        local_b0 = local_60;
        uVar10 = FUN_041e5390(&local_c0,DAT_0919a618);
        if ((uVar10 & 1) == 0) {
          *param_1 = 0;
          *(long *)(param_1 + 0x16) = lStack_b8;
          *(long **)(param_1 + 0x14) = local_c0;
          *(ulong *)(param_1 + 0x18) = local_b0;
          thunk_FUN_03f5d7b8(param_1 + 0x14,0);
          FUN_0478fa4c(param_1 + 2,&local_c0,param_1,DAT_09199850);
          return;
        }
        goto LAB_0772fcdc;
      }
      goto LAB_0772febc;
    }
    local_120 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = -1;
  }
  uVar4 = local_120._0_8_;
  if ((long *)local_120._0_8_ == (long *)0x0) {
    bVar3 = local_120[8] != '\0';
  }
  else {
    uVar2 = local_120._10_2_;
    lVar14 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c(lVar14);
    }
    lVar8 = *(long *)uVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar14) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_077301a4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar4,lVar14,0);
LAB_077301a4:
    bVar3 = (*(code *)*puVar6)(uVar4,uVar2,puVar6[1]);
  }
LAB_077301b8:
  *param_1 = -2;
  piVar11 = param_1 + 0x10;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_03f5d7b8(piVar11,0);
  plVar13 = *(long **)(param_1 + 2);
  if (plVar13 == (long *)0x0) {
    *(byte *)(param_1 + 6) = bVar3 & 1;
  }
  else {
    lVar14 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c(lVar14);
    }
    lVar8 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar14) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_07730270;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar13,lVar14,2);
LAB_07730270:
    (*(code *)*puVar6)(plVar13,bVar3 & 1,puVar6[1]);
  }
  return;
}

