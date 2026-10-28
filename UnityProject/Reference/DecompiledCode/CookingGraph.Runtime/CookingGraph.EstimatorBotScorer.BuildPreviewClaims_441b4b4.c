// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$BuildPreviewClaims
// address: 0x441b4b4
// body: available
// range: 0x441b4b4-0x441ba37 inclusive
// range: 0x441ba70-0x441ba9f inclusive
// range: 0x441bac0-0x441bac3 inclusive
// range: 0x441bac8-0x441bacf inclusive
// range: 0x441bb24-0x441bb57 inclusive
// range: 0x441bb5c-0x441bb5f inclusive
// range: 0x441bb64-0x441bb67 inclusive
// range: 0x441bb6c-0x441bb6f inclusive
// range: 0x441bb74-0x441bb77 inclusive
// range: 0x441bb7c-0x441bb7f inclusive
// range: 0x441bbe8-0x441bc33 inclusive
// range: 0x441bc38-0x441bc3b inclusive
// range: 0x441bc9c-0x441bcdb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441ba34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441bac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441bacc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441bb54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441bb5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441bb64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441bb6c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441bb74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441bb7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441bc30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441bc38 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441bcd4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0441ba2c) */
/* WARNING: Removing unreachable block (ram,0x0441ba30) */
/* WARNING: Removing unreachable block (ram,0x0441bac8) */
/* WARNING: Removing unreachable block (ram,0x0441ba9c) */
/* WARNING: Removing unreachable block (ram,0x0441bb4c) */
/* WARNING: Removing unreachable block (ram,0x0441bb50) */

long CookingGraph_EstimatorBotScorer__BuildPreviewClaims
               (long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  long local_170;
  undefined8 *local_168;
  long local_160;
  undefined8 *local_158;
  long local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  
  if ((DAT_09517f06 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d090);
    FUN_03f5c2a4(&DAT_0919d0c0);
    FUN_03f5c2a4(&DAT_0919d0b8);
    FUN_03f5c2a4(&DAT_0919d0c8);
    FUN_03f5c2a4(&DAT_091762d8);
    FUN_03f5c2a4(&DAT_091a2600);
    FUN_03f5c2a4(&DAT_091a51f8);
    FUN_03f5c2a4(&DAT_091a5e28);
    FUN_03f5c2a4(&DAT_091a3380);
    FUN_03f5c2a4(&DAT_091a2608);
    FUN_03f5c2a4(&DAT_091a5e30);
    FUN_03f5c2a4(&DAT_091a3388);
    FUN_03f5c2a4(&DAT_091a5200);
    FUN_03f5c2a4(&DAT_091a3390);
    FUN_03f5c2a4(&DAT_091a2610);
    FUN_03f5c2a4(&DAT_091a5e38);
    FUN_03f5c2a4(&DAT_091a5208);
    FUN_03f5c2a4(&DAT_091a8258);
    FUN_03f5c2a4(&DAT_09179e10);
    FUN_03f5c2a4(&DAT_091a9418);
    FUN_03f5c2a4(&DAT_091a9420);
    FUN_03f5c2a4(&DAT_091b29b8);
    FUN_03f5c2a4(&DAT_091abbf0);
    FUN_03f5c2a4(&DAT_091ada18);
    FUN_03f5c2a4(&DAT_091abbd0);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_091ab518);
    FUN_03f5c2a4(&DAT_091ab520);
    FUN_03f5c2a4(&DAT_0917be78);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517f06 = 1;
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_110 = 0;
  uStack_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  local_138 = 0;
  local_140 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_091762d8);
  FUN_06ffa298(lVar3,DAT_0919d0b8);
  lVar4 = CookingGraph_BotGameStateVisibility__VisiblePreviewOrders(param_2,3);
  if (lVar4 == 0) {
LAB_0441bcd8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < *(int *)(lVar4 + 0x18)) {
    iVar9 = 0;
    do {
      lVar5 = FUN_057e0998(lVar4,iVar9,DAT_091ab520);
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0x14) == '\0')) {
        lVar11 = *(long *)(lVar5 + 0x18);
        if (lVar11 == 0) {
          lVar11 = thunk_FUN_03f9944c(DAT_0917be78);
          FUN_057e0400(lVar11,DAT_091abbd0);
          if (lVar11 == 0) goto LAB_0441bcd8;
        }
        FUN_057e185c(&local_198,lVar11,DAT_091abbf0);
        local_b0 = local_188;
        local_148 = &local_c0;
        local_150 = 0;
        uStack_b8 = uStack_190;
        local_c0 = local_198;
        while (uVar6 = FUN_071bd28c(&local_c0,DAT_091a2608), lVar10 = local_b0, lVar11 = local_150,
              (uVar6 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = UnityEngine_Object__op_Equality(lVar10,0,0);
          if ((uVar6 & 1) == 0) {
            lVar11 = CookingGraph_EstimatorBotScorer__SlotsOf(param_1,lVar10);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_057e185c(&local_198,lVar11,DAT_091b29b8);
            local_d0 = local_188;
            local_158 = &local_e0;
            uStack_d8 = uStack_190;
            local_e0 = local_198;
            local_160 = 0;
            while (uVar6 = FUN_071bd28c(&local_e0,DAT_091a5200), lVar11 = local_d0, (uVar6 & 1) != 0
                  ) {
              if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(long *)(local_d0 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              iVar2 = *(int *)(*(long *)(local_d0 + 0x18) + 0x18);
              if (iVar2 != 0) {
                lVar10 = *(long *)(param_1 + 0x28);
                if (*(char *)(local_d0 + 0x11) == '\0') {
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  fVar14 = *(float *)(lVar10 + 0x2c) * 0.45;
                }
                else {
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  fVar14 = *(float *)(lVar10 + 0x2c);
                }
                fVar16 = *(float *)(lVar10 + 0x44);
                lVar1 = 0x1c;
                if (*(char *)(local_d0 + 0x10) != '\0') {
                  lVar1 = 0x14;
                }
                fVar15 = *(float *)(lVar10 + lVar1);
                fVar12 = (float)CookingGraph_EstimatorBotScorer__PreviewFailurePriority
                                          (param_1,*(undefined4 *)(lVar5 + 0x10));
                if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_057e185c(&local_198,*(long *)(lVar11 + 0x18),DAT_091ada18);
                local_f0 = local_188;
                local_168 = &local_100;
                local_170 = 0;
                uStack_f8 = uStack_190;
                local_100 = local_198;
                while (uVar6 = FUN_071bd28c(&local_100,DAT_091a3388), lVar11 = local_f0,
                      (uVar6 & 1) != 0) {
                  uVar7 = thunk_FUN_03f9944c(DAT_09179e10);
                  FUN_053eb530(uVar7,DAT_091a8258);
                  lVar11 = CookingGraph_EstimatorBotScorer__RawRequirements(param_1,lVar11,uVar7);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  FUN_06fe2efc(&local_198,lVar11,DAT_0919d090);
                  uStack_128 = uStack_190;
                  local_130 = local_198;
                  local_118 = uStack_180;
                  local_120 = local_188;
                  local_110 = local_178;
                  while (uVar6 = FUN_07276bd0(&local_130,DAT_091a5e30), lVar11 = local_120,
                        (uVar6 & 1) != 0) {
                    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    fVar13 = (float)local_118;
                    uVar8 = FUN_06ffcacc(lVar3,local_120,&local_140,DAT_0919d0c0);
                    uVar6 = local_140;
                    fVar13 = fVar12 * (((fVar14 * fVar15) /
                                       (fVar16 * (float)(iVar9 + param_3) + 1.0)) / (float)iVar2) *
                             fVar13;
                    if ((uVar8 & 1) == 0) {
                      local_140 = (ulong)(uint)(fVar13 + (float)local_140);
LAB_0441b9e0:
                      local_140 = CONCAT44(*(undefined4 *)(lVar5 + 0x10),(float)local_140);
                    }
                    else {
                      local_140 = CONCAT44(local_140._4_4_,fVar13 + (float)local_140);
                      if ((long)uVar6 < 0) goto LAB_0441b9e0;
                    }
                    FUN_06ffb020(lVar3,lVar11,local_140,local_138,DAT_0919d0c8);
                  }
                  FUN_07276cfc(&local_130,DAT_091a5e28);
                }
                FUN_071bd288(local_168,DAT_091a3380);
                if (local_170 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c548();
                }
              }
            }
            FUN_071bd288(local_158,DAT_091a51f8);
            if (local_160 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c548();
            }
          }
        }
        FUN_071bd288(local_148,DAT_091a2600);
        if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c548(lVar11);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(lVar4 + 0x18));
  }
  return lVar3;
}

