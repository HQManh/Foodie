// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$ObserveRunState
// address: 0x440ec94
// body: available
// range: 0x440ec94-0x440f7e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440f7d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440f7d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440f7dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440f7e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440f7e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingEstimatorBot__ObserveRunState(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  ulong local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong local_80;
  
  if ((DAT_09517ef0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cd8);
    FUN_03f5c2a4(&DAT_0919d5e8);
    FUN_03f5c2a4(&DAT_0919d5f8);
    FUN_03f5c2a4(&DAT_091c97f8);
    FUN_03f5c2a4(&DAT_091c9938);
    FUN_03f5c2a4(&DAT_091ca8e8);
    FUN_03f5c2a4(&DAT_091ca9e0);
    FUN_03f5c2a4(&DAT_091ca2c8);
    FUN_03f5c2a4(&DAT_091cb0e8);
    FUN_03f5c2a4(&DAT_091cb2d0);
    FUN_03f5c2a4(&DAT_091cb3e0);
    FUN_03f5c2a4(&DAT_091cb3e8);
    FUN_03f5c2a4(&DAT_091cb3f0);
    FUN_03f5c2a4(&DAT_091cb5b0);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a2308);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a2310);
    FUN_03f5c2a4(&DAT_091a2318);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091784b0);
    FUN_03f5c2a4(&DAT_09179310);
    FUN_03f5c2a4(&DAT_09178498);
    FUN_03f5c2a4(&DAT_091784a8);
    FUN_03f5c2a4(&DAT_09179080);
    FUN_03f5c2a4(&DAT_091784b8);
    FUN_03f5c2a4(&DAT_09178490);
    FUN_03f5c2a4(&DAT_09178480);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091ab458);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091ab448);
    FUN_03f5c2a4(&DAT_091ab478);
    FUN_03f5c2a4(&DAT_091ab468);
    FUN_03f5c2a4(&DAT_091ab4b0);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917bd20);
    FUN_03f5c2a4(&DAT_0917bd28);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091e6b20);
    FUN_03f5c2a4(&DAT_091e6b28);
    FUN_03f5c2a4(&DAT_091e6b30);
    FUN_03f5c2a4(&DAT_091e6b38);
    FUN_03f5c2a4(&DAT_091e6b40);
    FUN_03f5c2a4(&DAT_091e6b48);
    FUN_03f5c2a4(&DAT_091e6b50);
    FUN_03f5c2a4(&DAT_091e6b58);
    FUN_03f5c2a4(&DAT_091e6b60);
    FUN_03f5c2a4(&DAT_0918eee0);
    DAT_09517ef0 = 1;
  }
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  CookingGraph_CookingEstimatorBot__ObserveServingMode(param_1,param_2);
  if (param_2 != 0) {
    lVar9 = *(long *)(param_2 + 0x78);
    if (lVar9 == 0) {
      lVar9 = thunk_FUN_03f9944c(DAT_0917c520);
      FUN_05796918(lVar9,DAT_091adc70);
      if (lVar9 == 0) goto LAB_0440f7e4;
    }
    FUN_05797d74(&local_c8,lVar9,DAT_091adcc0);
    local_80 = local_b8;
    puStack_88 = puStack_c0;
    local_90 = local_c8;
    local_c8 = 0;
    puStack_c0 = &local_90;
    while (uVar5 = FUN_071ad7a4(&local_90,DAT_091a34d8), (uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_053d8048(*(long *)(param_1 + 0x68),local_80 & 0xffffffff,DAT_091a82b0);
    }
    FUN_071ad7a0(&local_90,DAT_091a34d0);
    lVar9 = *(long *)(param_2 + 0x58);
    if (lVar9 == 0) {
      lVar9 = thunk_FUN_03f9944c(DAT_0917bd20);
      FUN_057e0400(lVar9,DAT_091ab448);
    }
    if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
    lVar10 = puVar8[0x16];
    if (lVar10 == 0) {
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      }
      uVar11 = *puVar8;
      lVar10 = thunk_FUN_03f9944c(DAT_09178480);
      FUN_05322d94(lVar10,uVar11,DAT_091e6b20,0);
      plVar6 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0xb0);
      *plVar6 = lVar10;
      thunk_FUN_03f5d7b8(plVar6,lVar10);
    }
    uVar11 = FUN_04b0cafc(lVar9,lVar10,DAT_091cb3e0);
    lVar9 = FUN_04b08b78(uVar11,DAT_091cb0e8);
    if (lVar9 != 0) {
      if ((0 < *(int *)(lVar9 + 0x18)) || (*(char *)(param_2 + 0x1c) != '\0')) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_0440f7e4;
        FUN_06ef0694(*(long *)(param_1 + 0x70),DAT_0919d5e8);
        if (0 < *(int *)(lVar9 + 0x18)) {
          FUN_057e185c(&local_c8,lVar9,DAT_091ab458);
          local_a0 = local_b8;
          puStack_a8 = puStack_c0;
          local_b0 = local_c8;
          local_c8 = 0;
          puStack_c0 = &local_b0;
          while (uVar7 = FUN_071bd28c(&local_b0,DAT_091a2310), uVar5 = local_a0, (uVar7 & 1) != 0) {
            lVar9 = thunk_FUN_03f9944c(DAT_09182cd8);
            CookingGraph_CookingBotCustomerFailureMemory___ctor();
            if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(uVar5 + 0x10);
            *(undefined4 *)(lVar9 + 0x14) = 1;
            lVar10 = *(long *)(uVar5 + 0x18);
            if (lVar10 == 0) {
              lVar10 = thunk_FUN_03f9944c(DAT_0917bd28);
              FUN_057e0400(lVar10,DAT_091ab478);
            }
            if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
            lVar12 = puVar8[0x17];
            if (lVar12 == 0) {
              if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
              }
              uVar11 = *puVar8;
              lVar12 = thunk_FUN_03f9944c(DAT_09178498);
              FUN_05322d94(lVar12,uVar11,DAT_091e6b40,0);
              plVar6 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0xb8);
              *plVar6 = lVar12;
              thunk_FUN_03f5d7b8(plVar6,lVar12);
            }
            uVar11 = FUN_04b0cafc(lVar10,lVar12,DAT_091cb3e8);
            if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
            lVar10 = puVar8[0x18];
            if (lVar10 == 0) {
              if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
              }
              uVar13 = *puVar8;
              lVar10 = thunk_FUN_03f9944c(DAT_09178490);
              FUN_05324070(lVar10,uVar13,DAT_091e6b48,0);
              plVar6 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0xc0);
              *plVar6 = lVar10;
              thunk_FUN_03f5d7b8(plVar6,lVar10);
            }
            uVar11 = FUN_04afac50(uVar11,lVar10,DAT_091ca8e8);
            if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
            lVar10 = puVar8[0x19];
            if (lVar10 == 0) {
              if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
              }
              uVar13 = *puVar8;
              lVar10 = thunk_FUN_03f9944c(DAT_091784b0);
              FUN_05322d94(lVar10,uVar13,DAT_091e6b50,0);
              plVar6 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 200);
              *plVar6 = lVar10;
              thunk_FUN_03f5d7b8(plVar6,lVar10);
            }
            uVar11 = FUN_04b0cafc(uVar11,lVar10,DAT_091cb3f0);
            if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
            lVar10 = puVar8[0x1a];
            if (lVar10 == 0) {
              if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
              }
              uVar13 = *puVar8;
              lVar10 = thunk_FUN_03f9944c(DAT_091784b8);
              FUN_05324070(lVar10,uVar13,DAT_091e6b58,0);
              plVar6 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0xd0);
              *plVar6 = lVar10;
              thunk_FUN_03f5d7b8(plVar6,lVar10);
            }
            uVar11 = FUN_04af8044(uVar11,lVar10,DAT_091ca2c8);
            if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
            lVar10 = puVar8[0x1b];
            if (lVar10 == 0) {
              if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
              }
              uVar13 = *puVar8;
              lVar10 = thunk_FUN_03f9944c(DAT_09179080);
              FUN_05322d94(lVar10,uVar13,DAT_091e6b60,0);
              plVar6 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0xd8);
              *plVar6 = lVar10;
              thunk_FUN_03f5d7b8(plVar6,lVar10);
            }
            uVar11 = FUN_04b0cafc(uVar11,lVar10,DAT_091cb5b0);
            uVar11 = FUN_04add4b8(uVar11,DAT_091c9938);
            uVar11 = FUN_04b08b78(uVar11,DAT_091cb2d0);
            *(undefined8 *)(lVar9 + 0x18) = uVar11;
            thunk_FUN_03f5d7b8();
            if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_06ef04f8(*(long *)(param_1 + 0x70),*(undefined4 *)(uVar5 + 0x10),lVar9,DAT_0919d5f8)
            ;
          }
          FUN_071bd288(&local_b0,DAT_091a2308);
        }
      }
      if (((*(long *)(param_2 + 0x38) == 0) ||
          (lVar9 = *(long *)(*(long *)(param_2 + 0x38) + 0x10), lVar9 == 0)) ||
         (*(int *)(lVar9 + 0x18) == 0)) {
        return;
      }
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      lVar10 = puVar8[0x1c];
      if (lVar10 == 0) {
        if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
        }
        uVar11 = *puVar8;
        lVar10 = thunk_FUN_03f9944c(DAT_091784a8);
        FUN_05322d94(lVar10,uVar11,DAT_091e6b28,0);
        plVar6 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0xe0);
        *plVar6 = lVar10;
        thunk_FUN_03f5d7b8(plVar6,lVar10);
      }
      iVar2 = FUN_04adc4d0(lVar9,lVar10,DAT_091c97f8);
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eee0);
      }
      puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      lVar10 = puVar8[0x1d];
      if (lVar10 == 0) {
        if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eee0);
          puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
        }
        uVar11 = *puVar8;
        lVar10 = thunk_FUN_03f9944c(DAT_091784a8);
        FUN_05322d94(lVar10,uVar11,DAT_091e6b30,0);
        plVar6 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0xe8);
        *plVar6 = lVar10;
        thunk_FUN_03f5d7b8(plVar6,lVar10);
      }
      iVar3 = FUN_04adc4d0(lVar9,lVar10,DAT_091c97f8);
      uVar14 = *(undefined4 *)(param_1 + 0x48);
      iVar1 = *(int *)(lVar9 + 0x18);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187e80);
      }
      uVar14 = System_Math__Max(uVar14,(float)iVar2 / (float)iVar1,0);
      *(undefined4 *)(param_1 + 0x48) = uVar14;
      uVar14 = System_Math__Max(*(undefined4 *)(param_1 + 0x4c),
                                (float)iVar3 / (float)*(int *)(lVar9 + 0x18),0);
      *(undefined4 *)(param_1 + 0x4c) = uVar14;
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar14 = CookingGraph_EstimatorBotScorer__EstimateCommittedFootprint
                           (*(long *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x48));
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        lVar10 = *(long *)(param_1 + 0x30);
        if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eee0);
        }
        puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
        lVar12 = puVar8[0x1e];
        if (lVar12 == 0) {
          if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918eee0);
            puVar8 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
          }
          uVar13 = *puVar8;
          lVar12 = thunk_FUN_03f9944c(DAT_09179310);
          FUN_05324070(lVar12,uVar13,DAT_091e6b38,0);
          plVar6 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0xf0);
          *plVar6 = lVar12;
          thunk_FUN_03f5d7b8(plVar6,lVar12);
        }
        uVar11 = FUN_04afac50(uVar11,lVar12,DAT_091ca9e0);
        if (lVar10 != 0) {
          uVar4 = CookingGraph_EstimatorBotScorer__EstimateCommittedFootprint(lVar10,uVar11);
          uVar15 = *(undefined4 *)(param_1 + 0x58);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187e80);
          }
          iVar2 = System_Math__Max(uVar14,uVar4,0);
          uVar14 = System_Math__Max(uVar15,(float)iVar2 / (float)*(int *)(lVar9 + 0x18),0);
          *(undefined4 *)(param_1 + 0x58) = uVar14;
          return;
        }
      }
    }
  }
LAB_0440f7e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

