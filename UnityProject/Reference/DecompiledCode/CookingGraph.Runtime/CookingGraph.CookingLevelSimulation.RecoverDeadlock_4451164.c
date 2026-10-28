// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$RecoverDeadlock
// address: 0x4451164
// body: available
// range: 0x4451164-0x445164f inclusive
// range: 0x4451684-0x445192b inclusive
// range: 0x4451968-0x4451dd7 inclusive
// range: 0x4451f40-0x4451f47 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445164c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4451928 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4451d5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4451d60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4451d64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4451d68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4451d70 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4451d74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4451d78 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4451d7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4451d80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4451d84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04451d6c) */
/* WARNING: Removing unreachable block (ram,0x04451634) */
/* WARNING: Removing unreachable block (ram,0x04451da0) */
/* WARNING: Removing unreachable block (ram,0x044518f8) */

undefined8
CookingGraph_CookingLevelSimulation__RecoverDeadlock
          (long param_1,undefined1 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_2b0;
  undefined8 *puStack_2a8;
  ulong local_2a0;
  undefined8 local_298;
  undefined4 *puStack_290;
  long *local_288;
  undefined1 *puStack_280;
  undefined1 *local_278;
  undefined8 *puStack_270;
  long *local_268;
  undefined8 *puStack_260;
  undefined8 *local_258;
  undefined8 *puStack_250;
  undefined8 *local_248;
  uint *puStack_240;
  undefined8 *local_238;
  undefined8 **ppuStack_230;
  undefined8 *local_228;
  undefined8 *puStack_220;
  undefined8 *local_218;
  undefined8 *puStack_210;
  undefined8 *local_208;
  undefined8 *puStack_200;
  undefined8 *local_1f8;
  undefined8 *puStack_1f0;
  undefined8 *local_1e8;
  undefined8 *puStack_1e0;
  undefined8 *local_1d8;
  undefined8 *puStack_1d0;
  undefined8 *local_1c8;
  undefined8 *puStack_1c0;
  undefined8 *local_1b8;
  undefined8 *puStack_1b0;
  undefined8 *local_1a8;
  undefined8 *puStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint local_c4;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  long local_98;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 *local_80;
  undefined1 local_74 [4];
  long local_68;
  
  local_80 = param_3;
  local_74[0] = param_2;
  local_68 = param_1;
  if ((DAT_0951803c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0240);
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_091c9560);
    FUN_03f5c2a4(&DAT_091c9390);
    FUN_03f5c2a4(&DAT_091c9928);
    FUN_03f5c2a4(&DAT_091c9ee0);
    FUN_03f5c2a4(&DAT_091ca8c0);
    FUN_03f5c2a4(&DAT_091ca858);
    FUN_03f5c2a4(&DAT_091caac8);
    FUN_03f5c2a4(&DAT_091cab00);
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_091cae38);
    FUN_03f5c2a4(&DAT_091cb620);
    FUN_03f5c2a4(&DAT_091a1f48);
    FUN_03f5c2a4(&DAT_091a1f50);
    FUN_03f5c2a4(&DAT_091a1f58);
    FUN_03f5c2a4(&DAT_091782a0);
    FUN_03f5c2a4(&DAT_09178290);
    FUN_03f5c2a4(&DAT_09179408);
    FUN_03f5c2a4(&DAT_09178190);
    FUN_03f5c2a4(&DAT_091793f8);
    FUN_03f5c2a4(&DAT_091aaa00);
    FUN_03f5c2a4(&DAT_091b2588);
    FUN_03f5c2a4(&DAT_091aa7d0);
    FUN_03f5c2a4(&DAT_091aa9e8);
    FUN_03f5c2a4(&DAT_091aa7d8);
    FUN_03f5c2a4(&DAT_091b2590);
    FUN_03f5c2a4(&DAT_091aaa10);
    FUN_03f5c2a4(&DAT_091aa7e0);
    FUN_03f5c2a4(&DAT_0917bb18);
    FUN_03f5c2a4(&DAT_091e7918);
    FUN_03f5c2a4(&DAT_091e7920);
    FUN_03f5c2a4(&DAT_091e7928);
    FUN_03f5c2a4(&DAT_091e7930);
    FUN_03f5c2a4(&DAT_091e7938);
    FUN_03f5c2a4(&DAT_091e7b68);
    FUN_03f5c2a4(&DAT_0918f360);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_0951803c = 1;
  }
  local_88 = 0;
  local_8c = 0;
  local_90[0] = 0;
  local_98 = 0;
  local_a0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_b0 = 0;
  local_c4 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_88 = FUN_057e28a4(*(long *)(param_1 + 0x80),DAT_091aa7d0);
  local_8c = *(undefined4 *)(param_1 + 0x188);
  uVar3 = CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Copy_129_0(param_1);
  CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Restore_129_1(param_1,uVar3);
  lVar4 = DAT_091c0240;
  *(undefined4 *)(param_1 + 0x188) = 0;
  local_90[0] = 0;
  lVar7 = *(long *)(lVar4 + 0x38);
  local_98 = 0;
  local_a0 = 0;
  if (lVar7 == 0) {
    FUN_03f95ac8(lVar4);
    lVar7 = *(long *)(lVar4 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  *param_3 = **(undefined8 **)(lVar4 + 0xb8);
  thunk_FUN_03f5d7b8(param_3);
  puStack_290 = &local_8c;
  local_288 = &local_68;
  local_298 = 0;
  puStack_280 = local_90;
  local_278 = local_74;
  puStack_270 = &local_88;
  local_268 = &local_98;
  puStack_260 = &local_a0;
  local_258 = &local_e0;
  puStack_250 = &uStack_e8;
  local_248 = &local_f0;
  puStack_240 = &local_c4;
  local_238 = &local_108;
  ppuStack_230 = &local_80;
  local_228 = &uStack_110;
  puStack_220 = &local_118;
  local_218 = &uStack_120;
  puStack_210 = &local_128;
  local_208 = &uStack_130;
  puStack_200 = &local_138;
  local_1f8 = &uStack_140;
  puStack_1f0 = &local_148;
  local_1e8 = &uStack_150;
  puStack_1e0 = &local_158;
  local_1d8 = &uStack_160;
  puStack_1d0 = &local_168;
  local_1c8 = &uStack_170;
  puStack_1c0 = &local_178;
  local_1b8 = &uStack_180;
  puStack_1b0 = &local_188;
  local_1a8 = &uStack_190;
  puStack_1a0 = &local_198;
  uVar5 = CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Usable_129_2(param_1);
  if ((uVar5 & 1) != 0) {
LAB_0445168c:
    uVar3 = 1;
    local_90[0] = 1;
LAB_04451694:
    FUN_039b87b0(&local_298);
    return uVar3;
  }
  lVar4 = *(long *)(local_68 + 0x80);
  if (lVar4 == 0) {
LAB_04451d68:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = 0;
LAB_04451588:
  if (iVar2 < *(int *)(lVar4 + 0x18)) goto code_r0x04451594;
  uVar5 = CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Usable_129_2();
  if ((uVar5 & 1) == 0) {
    lVar4 = FUN_03f5c394(DAT_0917fc40,2);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = *(uint *)(lVar4 + 0x18);
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined1 *)(lVar4 + 0x20) = 1;
    local_c4 = 0;
    if (0 < (int)uVar6) {
      do {
        if (uVar6 <= local_c4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar7 = *(long *)(local_68 + 0x80);
        if (lVar7 == 0) {
LAB_04451d94:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (0 < *(int *)(lVar7 + 0x18)) {
          iVar2 = 0;
          cVar1 = *(char *)(lVar4 + (int)local_c4 + 0x20);
          do {
            iVar11 = 1;
            while( true ) {
              lVar7 = FUN_057e0998(lVar7,iVar2,DAT_091aa7e0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(int *)(lVar7 + 0x18) <= iVar11) break;
              lVar7 = CookingGraph_CookingLevelSimulation__At(local_68,iVar2,iVar11);
              if (lVar7 != 0) {
                uVar6 = *(uint *)(lVar7 + 0x20);
                if (-1 < (int)uVar6) {
                  lVar10 = *(long *)(local_68 + 0x88);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(uint *)(lVar10 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  if (*(int *)(lVar10 + (ulong)uVar6 * 4 + 0x20) == 1) goto LAB_044517c4;
                }
                if (((cVar1 == '\0') || (((int)uVar6 < 0 && (*(int *)(lVar7 + 0x28) == 1)))) &&
                   (uVar5 = CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Rotate_129_3
                                      (local_68,iVar2,iVar11), (uVar5 & 1) != 0)) goto LAB_0445168c;
              }
LAB_044517c4:
              iVar11 = iVar11 + 1;
              lVar7 = *(long *)(local_68 + 0x80);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
            lVar7 = *(long *)(local_68 + 0x80);
            if (lVar7 == 0) goto LAB_04451d94;
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(lVar7 + 0x18));
        }
        uVar6 = *(uint *)(lVar4 + 0x18);
        local_c4 = local_c4 + 1;
      } while ((int)local_c4 < (int)uVar6);
    }
    lVar4 = *(long *)(local_68 + 0x80);
    if (lVar4 == 0) goto LAB_04451d88;
    iVar2 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar2) {
        lVar4 = thunk_FUN_03f9944c(DAT_0918f360);
        CookingGraph_CookingLevelSimulation_<>c__DisplayClass129_2___ctor(lVar4,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(long *)(lVar4 + 0x18) = local_68;
        thunk_FUN_03f5d7b8();
        *(undefined4 *)(lVar4 + 0x10) = 0;
        lVar7 = *(long *)(local_68 + 0x80);
        if (lVar7 == 0) goto LAB_04451d8c;
        iVar2 = 0;
        do {
          if (*(int *)(lVar7 + 0x18) <= iVar2) {
            iVar2 = 0;
            while (iVar2 < *(int *)(lVar7 + 0x18)) {
              iVar11 = 1;
              while( true ) {
                lVar4 = FUN_057e0998(lVar7,iVar2,DAT_091aa7e0);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(int *)(lVar4 + 0x18) <= iVar11) break;
                lVar4 = CookingGraph_CookingLevelSimulation__At(local_68,iVar2,iVar11);
                if ((lVar4 != 0) &&
                   (uVar5 = CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Rotate_129_3
                                      (local_68,iVar2,iVar11), (uVar5 & 1) != 0)) goto LAB_0445168c;
                iVar11 = iVar11 + 1;
                lVar7 = *(long *)(local_68 + 0x80);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
              }
              iVar2 = iVar2 + 1;
              lVar7 = *(long *)(local_68 + 0x80);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
            uVar3 = 0;
            goto LAB_04451694;
          }
          lVar7 = CookingGraph_CookingLevelSimulation__At(local_68,iVar2,0);
          if (((lVar7 != 0) && (*(char *)(lVar7 + 0x30) == '\0')) && (*(int *)(lVar7 + 0x2c) == 0))
          {
            uVar6 = *(uint *)(lVar7 + 0x20);
            if (-1 < (int)uVar6) {
              lVar10 = *(long *)(local_68 + 0x88);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (*(int *)(lVar10 + (ulong)uVar6 * 4 + 0x20) == 1) goto LAB_04451a14;
            }
            lVar10 = CookingGraph_CookingLevelSimulation__Instance
                               (local_68,*(undefined4 *)(lVar4 + 0x10),0,1);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar12 = puVar8[0x78];
            if (lVar12 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar3 = *puVar8;
              lVar12 = thunk_FUN_03f9944c(DAT_091782a0);
              FUN_0530d4d8(lVar12,uVar3,DAT_091e7918,0);
              lVar9 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar9 + 0x3c0) = lVar12;
              thunk_FUN_03f5d7b8(lVar9 + 0x3c0,lVar12);
            }
            iVar2 = FUN_04ae9ee4(lVar10,lVar12,DAT_091c9ee0);
            uVar3 = thunk_FUN_03f9944c(DAT_09178290);
            FUN_0530cf38(uVar3,lVar4,DAT_091e7b68,0);
            uVar5 = FUN_04ab46c8(lVar10,uVar3,DAT_091c9390);
            if ((uVar5 & 1) == 0) {
              if (*(long *)(local_68 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar3 = FUN_057e0998(*(long *)(local_68 + 0x80),*(undefined4 *)(lVar4 + 0x10),
                                   DAT_091aa7e0);
              uVar3 = FUN_04b020a8(uVar3,iVar2 + 1,DAT_091cab00);
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              lVar12 = puVar8[0x79];
              if (lVar12 == 0) {
                if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                }
                uVar13 = *puVar8;
                lVar12 = thunk_FUN_03f9944c(DAT_091793f8);
                FUN_05322d94(lVar12,uVar13,DAT_091e7920,0);
                lVar9 = *(long *)(DAT_0918f298 + 0xb8);
                *(long *)(lVar9 + 0x3c8) = lVar12;
                thunk_FUN_03f5d7b8(lVar9 + 0x3c8,lVar12);
              }
              uVar5 = FUN_04ab6f28(uVar3,lVar12,DAT_091c9560);
              if ((uVar5 & 1) == 0) {
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if ((*(int *)(lVar10 + 0x18) != 1) || (1 < *(int *)(lVar7 + 0x28))) {
                  uVar3 = CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Copy_129_0
                                    (local_68);
                  *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
                  if (1 < *(int *)(lVar7 + 0x28)) {
                    local_98 = CookingGraph_CookingLevelSimulation__CopyQueueCell(lVar7);
                    if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    local_c4 = 0;
                    *(int *)(local_98 + 0x28) = *(int *)(local_98 + 0x28) + -1;
                    local_a0 = *(undefined8 *)(lVar7 + 0x10);
                    *(undefined4 *)(local_98 + 0x24) = 0;
                    *(undefined8 *)(lVar7 + 0x24) = 0x100000000;
                    if (*(long *)(local_68 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar7 = FUN_057e0998(*(long *)(local_68 + 0x80),*(undefined4 *)(lVar4 + 0x10),
                                         DAT_091aa7e0);
                    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    FUN_057e1b20(lVar7,1,local_98,DAT_091b2588);
                  }
                  uVar5 = CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Usable_129_2
                                    (local_68);
                  if ((uVar5 & 1) != 0) goto LAB_0445168c;
                  local_98 = 0;
                  CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Restore_129_1
                            (local_68,uVar3);
                }
              }
            }
          }
LAB_04451a14:
          local_c4 = *(uint *)(lVar4 + 0x10);
          iVar2 = local_c4 + 1;
          *(int *)(lVar4 + 0x10) = iVar2;
          lVar7 = *(long *)(local_68 + 0x80);
          if (lVar7 == 0) {
LAB_04451d8c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        } while( true );
      }
      lVar4 = CookingGraph_CookingLevelSimulation__At(local_68,iVar2,0);
      if (lVar4 != 0) {
        uVar6 = *(uint *)(lVar4 + 0x20);
        if ((int)uVar6 < 0) goto LAB_04451914;
        lVar7 = *(long *)(local_68 + 0x88);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(int *)(lVar7 + (ulong)uVar6 * 4 + 0x20) != 1) goto LAB_04451914;
        uVar3 = CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Copy_129_0();
        lVar4 = CookingGraph_CookingLevelSimulation__GroupCells
                          (local_68,*(undefined4 *)(lVar4 + 0x20));
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_056aec8c(&local_2b0,lVar4,DAT_091aaa00);
        local_c0 = local_2b0;
        local_2b0 = 0;
        puStack_b8 = puStack_2a8;
        local_b0 = local_2a0;
        puStack_2a8 = &local_c0;
        while (uVar5 = FUN_07188168(&local_c0,DAT_091a1f50), (uVar5 & 1) != 0) {
          lVar4 = CookingGraph_CookingLevelSimulation__At
                            (local_68,local_b0 & 0xffffffff,local_b0._4_4_);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
        }
        FUN_07188164(&local_c0,DAT_091a1f48);
        uVar5 = CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Usable_129_2(local_68);
        if ((uVar5 & 1) == 0) {
          CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Restore_129_1(local_68,uVar3);
          goto LAB_04451914;
        }
        break;
      }
LAB_04451914:
      iVar2 = iVar2 + 1;
      lVar4 = *(long *)(local_68 + 0x80);
      if (lVar4 == 0) {
LAB_04451d88:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while( true );
  }
  goto LAB_0445168c;
code_r0x04451594:
  lVar4 = CookingGraph_CookingLevelSimulation__Instance(local_68,iVar2,0,1);
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_0917bb18);
    FUN_056ad834(lVar4,DAT_091aa9e8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  FUN_056aec8c(&local_2b0,lVar4,DAT_091aaa00);
  local_c0 = local_2b0;
  local_2b0 = 0;
  puStack_b8 = puStack_2a8;
  local_b0 = local_2a0;
  puStack_2a8 = &local_c0;
  while (uVar5 = FUN_07188168(&local_c0,DAT_091a1f50), (uVar5 & 1) != 0) {
    lVar4 = CookingGraph_CookingLevelSimulation__At(local_68,local_b0 & 0xffffffff,local_b0._4_4_);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(lVar4 + 0x24) = 0;
  }
  FUN_07188164(&local_c0,DAT_091a1f48);
  iVar2 = iVar2 + 1;
  lVar4 = *(long *)(local_68 + 0x80);
  if (lVar4 == 0) goto LAB_04451d68;
  goto LAB_04451588;
}

