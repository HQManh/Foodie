// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$ReevaluateAdaptiveStrategy
// address: 0x4410858
// body: available
// range: 0x4410858-0x4411543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441153c to 0x440d4b8 CookingGraph.CookingEstimatorBot$$Verbose (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4411540 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingEstimatorBot__ReevaluateAdaptiveStrategy(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((DAT_09517eec & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ce0);
    FUN_03f5c2a4(&DAT_0919c7e0);
    FUN_03f5c2a4(&DAT_0919c7e8);
    FUN_03f5c2a4(&DAT_091760d0);
    FUN_03f5c2a4(&DAT_091c93d0);
    FUN_03f5c2a4(&DAT_091c97f8);
    FUN_03f5c2a4(&DAT_091c9798);
    FUN_03f5c2a4(&DAT_091c9920);
    FUN_03f5c2a4(&DAT_091c9a00);
    FUN_03f5c2a4(&DAT_091ca118);
    FUN_03f5c2a4(&DAT_091ca2d0);
    FUN_03f5c2a4(&DAT_091cab28);
    FUN_03f5c2a4(&DAT_091cac08);
    FUN_03f5c2a4(&DAT_091cb0e8);
    FUN_03f5c2a4(&DAT_091cb3e0);
    FUN_03f5c2a4(&DAT_091cb3f8);
    FUN_03f5c2a4(&DAT_09178488);
    FUN_03f5c2a4(&DAT_091784d0);
    FUN_03f5c2a4(&DAT_091784c8);
    FUN_03f5c2a4(&DAT_091784a8);
    FUN_03f5c2a4(&DAT_09178060);
    FUN_03f5c2a4(&DAT_09178058);
    FUN_03f5c2a4(&DAT_09178480);
    FUN_03f5c2a4(&DAT_091a9378);
    FUN_03f5c2a4(&DAT_091ab550);
    FUN_03f5c2a4(&DAT_091ab448);
    FUN_03f5c2a4(&DAT_091ab4d8);
    FUN_03f5c2a4(&DAT_091ab498);
    FUN_03f5c2a4(&DAT_091ab468);
    FUN_03f5c2a4(&DAT_091ab4b0);
    FUN_03f5c2a4(&DAT_091ab568);
    FUN_03f5c2a4(&DAT_091ab518);
    FUN_03f5c2a4(&DAT_0917bd40);
    FUN_03f5c2a4(&DAT_0917bd30);
    FUN_03f5c2a4(&DAT_0917bd58);
    FUN_03f5c2a4(&DAT_0917bd20);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091e6b78);
    FUN_03f5c2a4(&DAT_091e6b80);
    FUN_03f5c2a4(&DAT_091e6ba0);
    FUN_03f5c2a4(&DAT_091e6ba8);
    FUN_03f5c2a4(&DAT_091e6bb0);
    FUN_03f5c2a4(&DAT_091e6bb8);
    FUN_03f5c2a4(&DAT_091e6bc0);
    FUN_03f5c2a4(&DAT_091e6bc8);
    FUN_03f5c2a4(&DAT_091e6bd0);
    FUN_03f5c2a4(&DAT_0918eee0);
    FUN_03f5c2a4(&DAT_091fb4b0);
    DAT_09517eec = 1;
  }
  if ((*(int *)(param_1 + 0xa8) != 7) || (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x88))) {
    return;
  }
  if (param_2 != 0) {
    if ((*(long *)(param_2 + 0x38) == 0) ||
       (lVar14 = *(long *)(*(long *)(param_2 + 0x38) + 0x10), lVar14 == 0)) {
      lVar14 = thunk_FUN_03f9944c(DAT_0917bd30);
      FUN_057e0400(lVar14,DAT_091ab498);
      if (lVar14 == 0) goto LAB_04411540;
    }
    uVar7 = *(undefined4 *)(lVar14 + 0x18);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_Math__Max(1,uVar7,0);
    if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918eee0);
    }
    puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
    lVar12 = puVar11[7];
    if (lVar12 == 0) {
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eee0);
        puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      }
      uVar15 = *puVar11;
      lVar12 = thunk_FUN_03f9944c(DAT_091784a8);
      FUN_05322d94(lVar12,uVar15,DAT_091e6b78,0);
      plVar8 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x38);
      *plVar8 = lVar12;
      thunk_FUN_03f5d7b8(plVar8,lVar12);
    }
    iVar3 = FUN_04adc4d0(lVar14,lVar12,DAT_091c97f8);
    if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918eee0);
    }
    puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
    lVar12 = puVar11[8];
    if (lVar12 == 0) {
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eee0);
        puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      }
      uVar15 = *puVar11;
      lVar12 = thunk_FUN_03f9944c(DAT_091784a8);
      FUN_05322d94(lVar12,uVar15,DAT_091e6b80,0);
      plVar8 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x40);
      *plVar8 = lVar12;
      thunk_FUN_03f5d7b8(plVar8,lVar12);
    }
    iVar4 = FUN_04adc4d0(lVar14,lVar12,DAT_091c97f8);
    lVar14 = *(long *)(param_2 + 0x58);
    if (lVar14 == 0) {
      lVar14 = thunk_FUN_03f9944c(DAT_0917bd20);
      FUN_057e0400(lVar14,DAT_091ab448);
    }
    if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
    lVar12 = puVar11[9];
    if (lVar12 == 0) {
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      }
      uVar15 = *puVar11;
      lVar12 = thunk_FUN_03f9944c(DAT_09178480);
      FUN_05322d94(lVar12,uVar15,DAT_091e6ba0,0);
      plVar8 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x48);
      *plVar8 = lVar12;
      thunk_FUN_03f5d7b8(plVar8,lVar12);
    }
    uVar15 = FUN_04b0cafc(lVar14,lVar12,DAT_091cb3e0);
    lVar14 = FUN_04b08b78(uVar15,DAT_091cb0e8);
    if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918eee0);
    }
    puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
    lVar12 = puVar11[0xc];
    if (lVar12 == 0) {
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eee0);
        puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      }
      uVar15 = *puVar11;
      lVar12 = thunk_FUN_03f9944c(DAT_09178488);
      FUN_053239c8(lVar12,uVar15,DAT_091e6ba8,0);
      plVar8 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x60);
      *plVar8 = lVar12;
      thunk_FUN_03f5d7b8(plVar8,lVar12);
    }
    iVar5 = FUN_04b0264c(lVar14,lVar12,DAT_091cab28);
    if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918eee0);
    }
    puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
    lVar12 = puVar11[0xf];
    if (lVar12 == 0) {
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eee0);
        puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      }
      uVar15 = *puVar11;
      lVar12 = thunk_FUN_03f9944c(DAT_09178480);
      FUN_05322d94(lVar12,uVar15,DAT_091e6bb0,0);
      plVar8 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x78);
      *plVar8 = lVar12;
      thunk_FUN_03f5d7b8(plVar8,lVar12);
    }
    uVar9 = FUN_04ab6f28(lVar14,lVar12,DAT_091c93d0);
    lVar12 = CookingGraph_BotGameStateVisibility__VisiblePreviewOrders(param_2,3);
    if (lVar12 != 0) {
      iVar13 = *(int *)(param_2 + 0x6c);
      iVar1 = *(int *)(lVar12 + 0x18);
      if (iVar13 < 0) {
        if (lVar14 == 0) goto LAB_04411540;
        iVar13 = *(int *)(lVar14 + 0x18) + iVar1;
      }
      lVar12 = *(long *)(param_2 + 0x30);
      if (lVar12 == 0) {
        lVar12 = thunk_FUN_03f9944c(DAT_0917bd40);
        FUN_057e0400(lVar12,DAT_091ab4d8);
      }
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      lVar16 = puVar11[0x10];
      if (lVar16 == 0) {
        if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
        }
        uVar15 = *puVar11;
        lVar16 = thunk_FUN_03f9944c(DAT_091784c8);
        FUN_05322d94(lVar16,uVar15,DAT_091e6bb8,0);
        plVar8 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x80);
        *plVar8 = lVar16;
        thunk_FUN_03f5d7b8(plVar8,lVar16);
      }
      uVar15 = FUN_04b0cafc(lVar12,lVar16,DAT_091cb3f8);
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eee0);
      }
      puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      lVar12 = puVar11[0x11];
      if (lVar12 == 0) {
        if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eee0);
          puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
        }
        uVar17 = *puVar11;
        lVar12 = thunk_FUN_03f9944c(DAT_091784d0);
        FUN_053239c8(lVar12,uVar17,DAT_091e6bc0,0);
        plVar8 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x88);
        *plVar8 = lVar12;
        thunk_FUN_03f5d7b8(plVar8,lVar12);
      }
      uVar15 = FUN_04af6d6c(uVar15,lVar12,DAT_091ca2d0);
      uVar15 = FUN_04add3a4(uVar15,DAT_091c9920);
      iVar6 = FUN_04ad7c28(uVar15,DAT_091c9798);
      lVar12 = *(long *)(param_2 + 0x28);
      if (lVar12 == 0) {
        lVar12 = thunk_FUN_03f9944c(DAT_0917bd58);
        FUN_057e0400(lVar12,DAT_091ab550);
        if (lVar12 == 0) goto LAB_04411540;
      }
      fVar21 = (float)iVar2;
      uVar7 = *(undefined4 *)(lVar12 + 0x18);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_Math__Max(1,uVar7,0);
      fVar18 = (float)System_Math__Min(0x3f800000,(float)iVar6 / (float)iVar2,0);
      iVar2 = System_Math__Max(0,*(undefined4 *)(param_2 + 0x50),0);
      iVar6 = System_Math__Max(0,*(undefined4 *)(param_2 + 0x54),0);
      fVar19 = (float)System_Math__Min(0x3f800000,(float)(iVar6 + iVar2) / fVar21,0);
      if (lVar14 != 0) {
        lVar12 = *(long *)(param_1 + 0xb8);
        fVar20 = 0.0;
        if (iVar13 <= *(int *)(lVar14 + 0x18)) {
          fVar20 = 1.0;
        }
        if (lVar12 == 0) {
          lVar12 = thunk_FUN_03f9944c(DAT_09182ce0);
          CookingGraph_CookingBotFailureKnowledge___ctor();
        }
        lVar16 = thunk_FUN_03f9944c(DAT_091760d0);
        FUN_06f3688c(lVar16,DAT_0919c7e0);
        if ((lVar12 != 0) && (lVar16 != 0)) {
          FUN_06f37628(((float)iVar3 / fVar21) * 3.0 + (float)iVar4 / fVar21 + (float)iVar4 / fVar21
                       + fVar19 + *(float *)(lVar12 + 0x18),lVar16,1,DAT_0919c7e8);
          iVar2 = *(int *)(lVar14 + 0x18);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar19 = (float)System_Math__Min(0x3f800000,(float)iVar5 / 8.0,0);
          FUN_06f37628((float)iVar2 * 0.35 + fVar19 + *(float *)(lVar12 + 0x2c),lVar16,2,
                       DAT_0919c7e8);
          fVar19 = 2.0;
          if ((uVar9 & 1) == 0) {
            fVar19 = 0.0;
          }
          FUN_06f37628(fVar19 + fVar20 + *(float *)(lVar12 + 0x20),lVar16,3,DAT_0919c7e8);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar19 = (float)System_Math__Min(0x40000000,(float)iVar13 * 0.08,0);
          FUN_06f37628((float)iVar1 * 0.2 + fVar19 + *(float *)(lVar12 + 0x28),lVar16,4,DAT_0919c7e8
                      );
          FUN_06f37628((1.0 - fVar18) * 2.5 + *(float *)(lVar12 + 0x24),lVar16,5,DAT_0919c7e8);
          FUN_06f37628(((float)iVar3 / fVar21) * 1.5 + fVar20,lVar16,6,DAT_0919c7e8);
          FUN_06f37628(0x3f000000,lVar16,0,DAT_0919c7e8);
          if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
          lVar14 = puVar11[0x12];
          if (lVar14 == 0) {
            if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
            }
            uVar15 = *puVar11;
            lVar14 = thunk_FUN_03f9944c(DAT_09178060);
            FUN_05305eb0(lVar14,uVar15,DAT_091e6bc8,0);
            plVar8 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x90);
            *plVar8 = lVar14;
            thunk_FUN_03f5d7b8(plVar8,lVar14);
          }
          uVar15 = FUN_04aeb0e4(lVar16,lVar14,DAT_091ca118);
          if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918eee0);
          }
          puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
          lVar14 = puVar11[0x13];
          if (lVar14 == 0) {
            if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918eee0);
              puVar11 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
            }
            uVar17 = *puVar11;
            lVar14 = thunk_FUN_03f9944c(DAT_09178058);
            FUN_05305dfc(lVar14,uVar17,DAT_091e6bd0,0);
            plVar8 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x98);
            *plVar8 = lVar14;
            thunk_FUN_03f5d7b8(plVar8,lVar14);
          }
          uVar15 = FUN_04b02f54(uVar15,lVar14,DAT_091cac08);
          uVar7 = FUN_04aded30(uVar15,DAT_091c9a00);
          *(undefined4 *)(param_1 + 0x84) = uVar7;
          if (*(long *)(param_1 + 0xb8) == 0) {
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_04411540;
            puVar10 = (undefined4 *)(*(long *)(param_1 + 0x20) + 0x6c);
          }
          else {
            puVar10 = (undefined4 *)(*(long *)(param_1 + 0xb8) + 0x50);
          }
          uVar7 = *puVar10;
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar2 = System_Math__Max(1,uVar7,0);
          lVar14 = *(long *)(param_1 + 0x30);
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x50) + iVar2;
          uVar15 = CookingGraph_CookingEstimatorBot__EffectiveSettings(param_1);
          if (lVar14 != 0) {
            CookingGraph_EstimatorBotScorer__SetSettings(lVar14,uVar15);
            CookingGraph_CookingEstimatorBot__Verbose(param_1,1,DAT_091fb4b0,param_2,0,0);
            return;
          }
        }
      }
    }
  }
LAB_04411540:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

