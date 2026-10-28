// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$Tick
// address: 0x440dfc4
// body: available
// range: 0x440dfc4-0x440ec1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440ebac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440ec14 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440ec18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440ec1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingEstimatorBot__Tick(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  
  if ((DAT_09517ee6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181e98);
    FUN_03f5c2a4(&DAT_09181ed8);
    FUN_03f5c2a4(&DAT_091ca9e0);
    FUN_03f5c2a4(&DAT_091ca9e8);
    FUN_03f5c2a4(&DAT_091cb0e0);
    FUN_03f5c2a4(&DAT_091cb5b0);
    FUN_03f5c2a4(&DAT_091a3380);
    FUN_03f5c2a4(&DAT_091a3388);
    FUN_03f5c2a4(&DAT_091a3390);
    FUN_03f5c2a4(&DAT_09179318);
    FUN_03f5c2a4(&DAT_09179310);
    FUN_03f5c2a4(&DAT_09179080);
    FUN_03f5c2a4(&DAT_091a86b0);
    FUN_03f5c2a4(&DAT_091a7f20);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_091858c8);
    FUN_03f5c2a4(&DAT_091858d0);
    FUN_03f5c2a4(&DAT_091b0578);
    FUN_03f5c2a4(&DAT_091b23b8);
    FUN_03f5c2a4(&DAT_091ab438);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091ada18);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918eef8);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_091e6bf0);
    FUN_03f5c2a4(&DAT_091e6bf8);
    FUN_03f5c2a4(&DAT_091e6c00);
    FUN_03f5c2a4(&DAT_0918eee0);
    FUN_03f5c2a4(&DAT_0920a840);
    FUN_03f5c2a4(&DAT_09203358);
    FUN_03f5c2a4(&DAT_09213180);
    FUN_03f5c2a4(&DAT_09213390);
    FUN_03f5c2a4(&DAT_0920a818);
    FUN_03f5c2a4(&DAT_0920d430);
    FUN_03f5c2a4(&DAT_09203348);
    FUN_03f5c2a4(&DAT_0920d9c0);
    FUN_03f5c2a4(&DAT_0920a838);
    FUN_03f5c2a4(&DAT_09208af8);
    DAT_09517ee6 = 1;
  }
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar16 = thunk_FUN_03f9944c();
    puVar5 = &DAT_091fd4d0;
LAB_0440ebec:
    uVar6 = thunk_FUN_03fc39d4(puVar5);
    System_InvalidOperationException___ctor(uVar16,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091c6430);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar16,uVar6);
  }
  plVar15 = *(long **)(param_1 + 0x10);
  if (plVar15 == (long *)0x0) goto LAB_0440ebac;
  lVar9 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == DAT_091858d0) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0440e260;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar15,DAT_091858d0,0);
LAB_0440e260:
  lVar9 = (*(code *)*puVar4)(plVar15,puVar4[1]);
  if (lVar9 == 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),0);
    uVar6 = 2;
    lVar9 = 0;
    uVar16 = DAT_0920d9c0;
LAB_0440e670:
    lVar7 = 0;
  }
  else {
    CookingGraph_CookingEstimatorBot__ObserveRunState(param_1,lVar9);
    *(undefined1 *)(param_1 + 0xb0) = 0;
    if (*(char *)(lVar9 + 0x1c) == '\0') {
      *(undefined8 *)(param_1 + 0xa0) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),0);
      uVar6 = 3;
      puVar4 = &DAT_0920d430;
      goto LAB_0440e668;
    }
    if (0xfe < (*(uint *)(lVar9 + 0x18) >> 0x17 & 0xff)) {
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar16 = thunk_FUN_03f9944c();
      puVar5 = &DAT_091fce20;
      goto LAB_0440ebec;
    }
    CookingGraph_CookingEstimatorBot__ReconcilePending(param_1,lVar9);
    if (*(float *)(lVar9 + 0x18) + 0.0001 < *(float *)(param_1 + 0x5c)) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),0);
      uVar6 = 5;
      puVar4 = &DAT_09213180;
LAB_0440e668:
      uVar16 = *puVar4;
      goto LAB_0440e670;
    }
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
    lVar7 = puVar4[2];
    if (lVar7 == 0) {
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      }
      uVar6 = *puVar4;
      lVar7 = thunk_FUN_03f9944c(DAT_09179318);
      FUN_05324070(lVar7,uVar6,DAT_091e6bf0,0);
      plVar15 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x10);
      *plVar15 = lVar7;
      thunk_FUN_03f5d7b8(plVar15,lVar7);
    }
    uVar16 = FUN_04afac50(uVar16,lVar7,DAT_091ca9e8);
    if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918b378);
    }
    if (DAT_09516ea3 == '\0') {
      FUN_03f5c2a4(&DAT_0918b378);
      DAT_09516ea3 = '\x01';
    }
    if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar17 = *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x10);
    uVar6 = thunk_FUN_03f9944c(DAT_09179ee0);
    FUN_053eb66c(uVar6,uVar16,uVar17,DAT_091a86b0);
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
    lVar7 = puVar4[3];
    if (lVar7 == 0) {
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      }
      uVar17 = *puVar4;
      lVar7 = thunk_FUN_03f9944c(DAT_09179310);
      FUN_05324070(lVar7,uVar17,DAT_091e6bf8,0);
      plVar15 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x18);
      *plVar15 = lVar7;
      thunk_FUN_03f5d7b8(plVar15,lVar7);
    }
    uVar16 = FUN_04afac50(uVar16,lVar7,DAT_091ca9e0);
    uVar16 = FUN_04b08b78(uVar16,DAT_091cb0e0);
    uVar13 = CookingGraph_CookingEstimatorBot__ShouldWaitForWorkCompletion(param_1,lVar9);
    if ((uVar13 & 1) != 0) {
      uVar3 = *(undefined4 *)(lVar9 + 0x54);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_Math__Max(0,uVar3,0);
      if (iVar2 == 0) {
        uVar3 = *(undefined4 *)(lVar9 + 0x50);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = System_Math__Max(0,uVar3,0);
        if (0 < iVar2) {
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_0440ebac;
          lVar7 = CookingGraph_EstimatorBotScorer__WorkBarrierEscapeOptions
                            (*(long *)(param_1 + 0x30),lVar9,uVar6,uVar16);
          if ((lVar7 != 0) && (*(int *)(lVar7 + 0x20) != 0)) {
            CookingGraph_CookingEstimatorBot__Verbose(param_1,7,DAT_09213390,lVar9,0,0);
            goto LAB_0440e574;
          }
        }
      }
      *(undefined8 *)(param_1 + 0xa0) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),0);
      puVar4 = &DAT_0920a818;
      *(undefined1 *)(param_1 + 0xb0) = 1;
      uVar6 = 6;
      goto LAB_0440e668;
    }
    lVar7 = 0;
LAB_0440e574:
    CookingGraph_CookingEstimatorBot__ReevaluateAdaptiveStrategy(param_1,lVar9);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0440ebac;
    lVar7 = CookingGraph_EstimatorBotScorer__Decide
                      (*(undefined4 *)(param_1 + 0xac),*(long *)(param_1 + 0x30),lVar9,uVar6,uVar16,
                       *(undefined8 *)(param_1 + 0x38),lVar7);
    *(long *)(param_1 + 0xa0) = lVar7;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0xa0),lVar7);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) {
      uVar6 = 8;
      puVar4 = &DAT_09208af8;
      goto LAB_0440e668;
    }
    *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(param_1 + 0xa8);
    uVar3 = CookingGraph_CookingEstimatorBot__ResolveWorkWaitStrategy(param_1);
    *(undefined4 *)(lVar7 + 0x2c) = uVar3;
    *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(param_1 + 0xac);
    lVar8 = CookingGraph_CookingEstimatorBot__EffectiveSettings(param_1);
    uVar6 = DAT_0920a840;
    if (lVar8 == 0) goto LAB_0440ebac;
    fVar21 = *(float *)(lVar8 + 0x68);
    *(float *)(lVar7 + 0x34) = fVar21;
    CookingGraph_CookingEstimatorBot__Verbose(param_1,9,uVar6,lVar9,lVar7,0);
    uVar13 = CookingGraph_CookingEstimatorBot__ShouldDeferForGridCapacity
                       (param_1,lVar9,lVar7,uVar16);
    if ((uVar13 & 1) == 0) {
      lVar8 = thunk_FUN_03f9944c(DAT_09181ed8);
      *(undefined4 *)(lVar8 + 0x44) = 0x3f800000;
      System_Object___ctor(lVar8,0);
      lVar10 = *(long *)(param_1 + 0x40);
      *(long *)(param_1 + 0x40) = lVar10 + 1;
      *(long *)(lVar8 + 0x10) = lVar10;
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar9 + 0x10);
      lVar10 = *(long *)(lVar7 + 0x10);
      if (lVar10 == 0) {
LAB_0440ebac:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = *(undefined4 *)(lVar10 + 0x10);
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined4 *)(lVar8 + 0x20) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x28));
      *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(lVar7 + 0x18);
      *(undefined1 *)(lVar8 + 0x34) = *(undefined1 *)(lVar7 + 0x1c);
      *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(param_1 + 0x84);
      *(undefined4 *)(lVar8 + 0x3c) = *(undefined4 *)(param_1 + 0xa8);
      uVar3 = CookingGraph_CookingEstimatorBot__ResolveWorkWaitStrategy(param_1);
      *(undefined4 *)(lVar8 + 0x40) = uVar3;
      *(undefined4 *)(lVar8 + 0x44) = *(undefined4 *)(param_1 + 0xac);
      *(float *)(lVar8 + 0x48) = fVar21;
      plVar15 = *(long **)(param_1 + 0x18);
      if (plVar15 == (long *)0x0) goto LAB_0440ebac;
      lVar10 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_091858c8) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0440e810;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar15,DAT_091858c8,0);
LAB_0440e810:
      uVar13 = (*(code *)*puVar4)(plVar15,lVar8,puVar4[1]);
      if ((uVar13 & 1) != 0) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        if (*(char *)(lVar7 + 0x1c) != '\0') {
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        }
        uVar16 = DAT_0918eef8;
        fVar20 = *(float *)(lVar9 + 0x18);
        *(float *)(param_1 + 0x5c) = fVar21 + fVar20;
        *(float *)(param_1 + 0x60) = fVar20;
        lVar10 = thunk_FUN_03f9944c(uVar16);
        CookingGraph_CookingEstimatorBot_PendingPick___ctor();
        if (lVar10 != 0) {
          *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
          lVar11 = *(long *)(lVar7 + 0x10);
          if (lVar11 != 0) {
            lVar18 = *(long *)(lVar11 + 0x20);
            if ((lVar18 == 0) || (*(int *)(lVar18 + 0x18) < 1)) {
              uVar13 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar11 + 0x18),0);
              if ((uVar13 & 1) == 0) {
                if ((*(long *)(lVar7 + 0x10) == 0) || (*(long *)(lVar10 + 0x18) == 0))
                goto LAB_0440ebac;
                FUN_039b0ea8(*(long *)(lVar10 + 0x18),
                             *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x18),DAT_091b0570);
              }
            }
            else {
              lVar11 = *(long *)(lVar10 + 0x18);
              if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar4 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
              lVar19 = puVar4[4];
              if (lVar19 == 0) {
                if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar4 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
                }
                uVar16 = *puVar4;
                lVar19 = thunk_FUN_03f9944c(DAT_09179080);
                FUN_05322d94(lVar19,uVar16,DAT_091e6c00,0);
                plVar15 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x20);
                *plVar15 = lVar19;
                thunk_FUN_03f5d7b8(plVar15,lVar19);
              }
              uVar16 = FUN_04b0cafc(lVar18,lVar19,DAT_091cb5b0);
              if (lVar11 == 0) goto LAB_0440ebac;
              FUN_057e0e78(lVar11,uVar16,DAT_091b0578);
            }
            if ((*(long *)(lVar7 + 0x10) != 0) &&
               (((lVar11 = *(long *)(*(long *)(lVar7 + 0x10) + 0x28), lVar11 != 0 &&
                 (0 < *(int *)(lVar11 + 0x18))) ||
                (lVar11 = CookingGraph_CookingEstimatorBot__IngredientFromVisibleQueue(lVar9),
                lVar11 != 0)))) {
              FUN_057e185c(&local_a8,lVar11,DAT_091ada18);
              puStack_88 = puStack_a0;
              local_90 = local_a8;
              puStack_a0 = &local_90;
              local_80 = local_98;
              local_a8 = 0;
LAB_0440ea10:
              uVar13 = FUN_071bd28c(&local_90,DAT_091a3388);
              uVar16 = local_80;
              if ((uVar13 & 1) != 0) {
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar13 = UnityEngine_Object__op_Inequality(uVar16,0,0);
                if ((uVar13 & 1) != 0) {
                  lVar18 = *(long *)(lVar10 + 0x20);
                  lVar11 = thunk_FUN_03f9944c(DAT_09181e98);
                  *(undefined4 *)(lVar11 + 0x18) = 0x3f800000;
                  System_Object___ctor(lVar11,0);
                  *(undefined8 *)(lVar11 + 0x10) = uVar16;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar11 + 0x10),uVar16);
                  *(undefined4 *)(lVar11 + 0x18) = 0x3f800000;
                  if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x18);
                  thunk_FUN_03f5d7b8();
                  lVar19 = DAT_091ab438;
                  if (lVar18 != 0) {
                    lVar12 = *(long *)(lVar18 + 0x10);
                    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                    if (lVar12 != 0) {
                      uVar1 = *(uint *)(lVar18 + 0x18);
                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar18 + 0x18) = uVar1 + 1;
                        plVar15 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar15 = lVar11;
                        thunk_FUN_03f5d7b8(plVar15,lVar11);
                      }
                      else {
                        FUN_057e0c68(lVar18,lVar11,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                      }
                      goto LAB_0440ea10;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_0440ea10;
              }
              FUN_071bd288(&local_90,DAT_091a3380);
              lVar11 = DAT_091b23b8;
              lVar18 = *(long *)(param_1 + 0x28);
              if (lVar18 != 0) {
                lVar19 = *(long *)(lVar18 + 0x10);
                *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                if (lVar19 != 0) {
                  uVar1 = *(uint *)(lVar18 + 0x18);
                  if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                    *(uint *)(lVar18 + 0x18) = uVar1 + 1;
                    plVar15 = (long *)(lVar19 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar15 = lVar10;
                    thunk_FUN_03f5d7b8(plVar15,lVar10);
                  }
                  else {
                    FUN_057e0c68(lVar18,lVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  CookingGraph_CookingEstimatorBot__Verbose
                            (param_1,0xc,DAT_09203348,lVar9,lVar7,lVar8);
                  return 1;
                }
              }
            }
          }
        }
        goto LAB_0440ebac;
      }
      uVar6 = 0xb;
      uVar16 = DAT_09203358;
      goto LAB_0440e678;
    }
    uVar6 = 10;
    uVar16 = DAT_0920a838;
  }
  lVar8 = 0;
LAB_0440e678:
  CookingGraph_CookingEstimatorBot__Verbose(param_1,uVar6,uVar16,lVar9,lVar7,lVar8);
  return 0;
}

