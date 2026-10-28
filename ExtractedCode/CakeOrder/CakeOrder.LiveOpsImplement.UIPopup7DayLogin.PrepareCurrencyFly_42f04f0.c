// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopup7DayLogin$$PrepareCurrencyFly
// address: 0x42f04f0
// body: available
// range: 0x42f04f0-0x42f0ce3 inclusive
// range: 0x42f0d64-0x42f0d67 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f0cc8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f0ccc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f0cd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f0cd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f0cd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f0cdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f0ce0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f0d64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIPopup7DayLogin__PrepareCurrencyFly
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  double local_190;
  double *pdStack_188;
  double local_180;
  double *pdStack_178;
  double local_170;
  long lStack_168;
  double local_158;
  double *pdStack_150;
  double local_148;
  undefined8 local_140;
  double *pdStack_138;
  double local_130;
  double *pdStack_128;
  double local_120;
  double *pdStack_118;
  double local_110;
  long lStack_108;
  double *local_f8;
  double local_f0;
  double *pdStack_e8;
  double local_e0;
  long local_d8;
  double local_d0;
  double *pdStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  double local_b0;
  double *pdStack_a8;
  double local_a0;
  double *pdStack_98;
  
  if ((DAT_095174aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c59c0);
    FUN_03f5c2a4(&DAT_0919f9a0);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919f9d8);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_091a2068);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a2070);
    FUN_03f5c2a4(&DAT_091a2078);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_09185138);
    FUN_03f5c2a4(&DAT_091b3f70);
    FUN_03f5c2a4(&DAT_091aabc8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b3f78);
    FUN_03f5c2a4(&DAT_091aabd0);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091aabc0);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_0917bb78);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bee18);
    DAT_095174aa = 1;
  }
  lVar12 = *(long *)(param_1 + 0x108);
  local_e0 = 0.0;
  local_d8 = 0;
  local_f0 = 0.0;
  pdStack_e8 = (double *)0x0;
  local_f8 = (double *)0x0;
  pdStack_118 = (double *)0x0;
  local_120 = 0.0;
  lStack_108 = 0;
  local_110 = 0.0;
  pdStack_128 = (double *)0x0;
  local_130 = 0.0;
  if (lVar12 != 0) {
    iVar6 = *(int *)(lVar12 + 0x18);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (0 < iVar6) {
      System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar6,0);
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x110,0);
    plVar15 = *(long **)(param_1 + 0xb0);
    if (plVar15 != (long *)0x0) {
      if (((*(byte *)(DAT_09185138 + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
          (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(DAT_09185138 + 0x130) * 8 + -8) ==
           DAT_09185138)) &&
         (uVar8 = CakeOrder_LiveOpsImplement_UIPopup7DayLogin__TryGetMilestone
                            (param_1,param_2,&local_d8), (uVar8 & 1) != 0)) {
        if (*(long *)(param_1 + 0x100) != 0) {
          uVar8 = LiveOpsR1_LiveOpsBehaviorLoginXDaysAbstract__IsCanTakeReward
                            (*(long *)(param_1 + 0x100),param_2,0);
          if ((uVar8 & 1) == 0) {
            return;
          }
          lVar12 = thunk_FUN_03f9944c(DAT_09176b28);
          FUN_06fc96ac(lVar12,DAT_0919f978);
          lVar9 = thunk_FUN_03f9944c(DAT_0917cce8);
          FUN_057e0400(lVar9,DAT_091b0558);
          if ((local_d8 != 0) &&
             (lVar10 = CakeOrder_LiveOpsImplement_LiveOpBehavior7DayLogin_RewardMilestone__GetRewards
                                 (), lVar10 != 0)) {
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (0 < (int)uVar1) {
              uVar14 = 0;
              do {
                if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar16 = *(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
                if ((lVar16 == 0) || (lVar12 == 0)) goto LAB_042f0d64;
                uVar8 = FUN_06fca63c(lVar12,*(undefined8 *)(lVar16 + 0x10),DAT_0919f9a0);
                if ((uVar8 & 1) == 0) {
                  FUN_06fca434(lVar12,*(undefined8 *)(lVar16 + 0x10),0,DAT_0919f9f0);
                  lVar2 = DAT_091b0570;
                  if (lVar9 == 0) goto LAB_042f0d64;
                  lVar13 = *(long *)(lVar9 + 0x10);
                  uVar11 = *(undefined8 *)(lVar16 + 0x10);
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar13 == 0) goto LAB_042f0d64;
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                    thunk_FUN_03f5d7b8();
                  }
                  else {
                    FUN_057e0c68(lVar9,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                }
                uVar11 = *(undefined8 *)(lVar16 + 0x10);
                iVar6 = FUN_06fca3c8(lVar12,uVar11,DAT_0919f9d8);
                FUN_06fca434(lVar12,uVar11,*(int *)(lVar16 + 0x18) + iVar6,DAT_0919f9f0);
                uVar1 = *(uint *)(lVar10 + 0x18);
                uVar14 = uVar14 + 1;
              } while ((int)uVar14 < (int)uVar1);
            }
            if (lVar9 != 0) {
              if (*(int *)(lVar9 + 0x18) == 0) {
                return;
              }
              lVar10 = thunk_FUN_03f9944c(DAT_0917bb78);
              FUN_056c899c(lVar10,DAT_091aabc0);
              FUN_057e185c(&local_190,lVar9,DAT_091b05a8);
              local_e0 = local_180;
              pdStack_138 = &local_f0;
              pdStack_e8 = pdStack_188;
              local_f0 = local_190;
              local_140 = 0;
              while (uVar8 = FUN_071bd28c(&local_f0,DAT_091a45a0), dVar3 = local_e0,
                    (uVar8 & 1) != 0) {
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                iVar6 = FUN_06fca3c8(lVar12,local_e0,DAT_0919f9d8);
                if (iVar6 < 1) {
LAB_042f0a94:
                  FUN_071bd288(&local_f0,DAT_091a4598);
                  return;
                }
                lVar9 = CakeOrder_Home_HomeControllerCookOrder__GetCurrencyCounter(plVar15,dVar3,0);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar8 = UnityEngine_Object__op_Equality(lVar9,0,0);
                if ((uVar8 & 1) != 0) goto LAB_042f0a94;
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar8 = FUN_04a6b048(lVar9,&local_f8,DAT_091c59c0);
                pdVar4 = local_f8;
                if ((uVar8 & 1) == 0) goto LAB_042f0a94;
                uVar7 = FUN_06fca3c8(lVar12,dVar3,DAT_0919f9d8);
                pdStack_150 = (double *)0x0;
                local_148 = 0.0;
                local_158 = dVar3;
                thunk_FUN_03f5d7b8(&local_158,dVar3);
                pdStack_150 = pdVar4;
                thunk_FUN_03f5d7b8(&pdStack_150,pdVar4);
                local_148 = (double)CONCAT44(local_148._4_4_,uVar7);
                pdStack_a8 = pdStack_150;
                local_b0 = local_158;
                pdStack_188 = (double *)0x0;
                local_190 = 0.0;
                pdStack_178 = (double *)0x0;
                local_180 = 0.0;
                local_a0 = local_148;
                FUN_066ddd48(&local_190,&local_b0,lVar9,DAT_091bee18);
                if (lVar10 == 0) {
LAB_042f0cd0:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar9 = *(long *)(lVar10 + 0x10);
                pdStack_c8 = pdStack_188;
                local_d0 = local_190;
                pdStack_b8 = pdStack_178;
                dStack_c0 = local_180;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_042f0cd0;
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  lVar9 = lVar9 + (long)(int)uVar1 * 0x20;
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  *(double **)(lVar9 + 0x28) = pdStack_188;
                  *(double *)(lVar9 + 0x20) = local_190;
                  *(double **)(lVar9 + 0x38) = pdStack_178;
                  *(double *)(lVar9 + 0x30) = local_180;
                  thunk_FUN_03f5d7b8(lVar9 + 0x20,0);
                }
                else {
                  pdStack_a8 = pdStack_188;
                  local_b0 = local_190;
                  pdStack_98 = pdStack_178;
                  local_a0 = local_180;
                  FUN_056c9290(lVar10,&local_b0,
                               *(undefined8 *)
                                (*(long *)(*(long *)(DAT_091aabc8 + 0x20) + 0xc0) + 0x70));
                }
              }
              FUN_071bd288(&local_f0,DAT_091a4598);
              if (lVar10 != 0) {
                FUN_056c9ff4(&local_190,lVar10,DAT_091aabd0);
                pdStack_150 = &local_130;
                local_158 = 0.0;
                pdStack_128 = pdStack_188;
                local_130 = local_190;
                pdStack_118 = pdStack_178;
                local_120 = local_180;
                lStack_108 = lStack_168;
                local_110 = local_170;
                do {
                  uVar8 = FUN_07189da4(&local_130,DAT_091a2070);
                  lVar12 = lStack_108;
                  dVar5 = local_110;
                  pdVar4 = pdStack_118;
                  dVar3 = local_120;
                  if ((uVar8 & 1) == 0) {
                    FUN_07189da0(&local_130,DAT_091a2068);
                    *(undefined8 *)(param_1 + 0x110) = param_3;
                    thunk_FUN_03f5d7b8(param_1 + 0x110,param_3);
                    return;
                  }
                  if (lStack_108 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  fVar19 = *(float *)(lStack_108 + 0x40);
                  if (DAT_09515cf4 == '\0') {
                    FUN_03f5c2a4(&DAT_09187e80);
                    DAT_09515cf4 = '\x01';
                  }
                  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  dVar18 = (double)fVar19;
                  dVar17 = modf(dVar18,&local_190);
                  if (0.0 <= fVar19) {
                    if (dVar17 == 0.5) {
                      dVar17 = local_190 + 1.0;
                      goto LAB_042f0bb8;
                    }
                    dVar18 = (double)(long)(dVar18 + 0.5);
                  }
                  else if (dVar17 == -0.5) {
                    dVar17 = local_190 + -1.0;
LAB_042f0bb8:
                    dVar18 = local_190;
                    if (((long)local_190 & 1U) != 0) {
                      dVar18 = dVar17;
                    }
                  }
                  else {
                    dVar18 = (double)(long)(dVar18 + -0.5);
                  }
                  if (pdVar4 == (double *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  iVar6 = -0x80000000;
                  if (dVar18 != INFINITY) {
                    iVar6 = (int)dVar18;
                  }
                  (**(code **)((long)*pdVar4 + 0x178))
                            (pdVar4,lVar12,iVar6,*(undefined8 *)((long)*pdVar4 + 0x180));
                  lVar12 = DAT_091b3f70;
                  lVar9 = *(long *)(param_1 + 0x108);
                  if (lVar9 == 0) {
LAB_042f0ccc:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar10 = *(long *)(lVar9 + 0x10);
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_042f0ccc;
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    *(double *)(lVar10 + 0x20) = dVar3;
                    *(double **)(lVar10 + 0x28) = pdVar4;
                    *(double *)(lVar10 + 0x30) = dVar5;
                    thunk_FUN_03f5d7b8((double *)(lVar10 + 0x20),0);
                  }
                  else {
                    local_190 = dVar3;
                    pdStack_188 = pdVar4;
                    local_180 = dVar5;
                    FUN_059cfd88(lVar9,&local_190,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                } while( true );
              }
            }
          }
        }
        goto LAB_042f0d64;
      }
    }
    return;
  }
LAB_042f0d64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

