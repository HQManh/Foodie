// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$GridAssemblyDependencies
// address: 0x445ad90
// body: available
// range: 0x445ad90-0x445b897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445b854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445b858 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445b85c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445b860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445b864 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445b868 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445b86c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445b870 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445b874 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445b878 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445b87c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445b880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0445b894) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 CookingGraph_CookingLevelSimulation__GridAssemblyDependencies(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  
  if ((DAT_0951802c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c93c0);
    FUN_03f5c2a4(&DAT_091c9498);
    FUN_03f5c2a4(&DAT_091ca8d8);
    FUN_03f5c2a4(&DAT_091ca490);
    FUN_03f5c2a4(&DAT_091ca2a8);
    FUN_03f5c2a4(&DAT_091ca578);
    FUN_03f5c2a4(&DAT_091cad10);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cb020);
    FUN_03f5c2a4(&DAT_091782a0);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_091783a0);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178970);
    FUN_03f5c2a4(&DAT_091795f0);
    FUN_03f5c2a4(&DAT_091795f8);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a300);
    FUN_03f5c2a4(&DAT_0917a988);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_091aad68);
    FUN_03f5c2a4(&DAT_091aad58);
    FUN_03f5c2a4(&DAT_0917bbd0);
    FUN_03f5c2a4(&DAT_091e7668);
    FUN_03f5c2a4(&DAT_091e7670);
    FUN_03f5c2a4(&DAT_091e7678);
    FUN_03f5c2a4(&DAT_091e7680);
    FUN_03f5c2a4(&DAT_091e7688);
    FUN_03f5c2a4(&DAT_0918f2b8);
    FUN_03f5c2a4(&DAT_091e7a70);
    FUN_03f5c2a4(&DAT_091e7a88);
    FUN_03f5c2a4(&DAT_091e7a90);
    FUN_03f5c2a4(&DAT_0918f2c0);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_0951802c = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918f2b8);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass108_0___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_1);
    plVar15 = (long *)(lVar3 + 0x18);
    *plVar15 = param_2;
    thunk_FUN_03f5d7b8(plVar15,param_2);
    if ((*plVar15 != 0) && (lVar6 = *(long *)(*plVar15 + 0x20), lVar6 != 0)) {
      uVar14 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar6 = puVar7[0x58];
      if (lVar6 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar16 = *puVar7;
        lVar6 = thunk_FUN_03f9944c(DAT_09178970);
        FUN_05324070(lVar6,uVar16,DAT_091e7668,0);
        lVar8 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar8 + 0x2c0) = lVar6;
        thunk_FUN_03f5d7b8(lVar8 + 0x2c0,lVar6);
      }
      uVar14 = FUN_04af8044(uVar14,lVar6,DAT_091ca490);
      uVar14 = FUN_04b049e4(uVar14,DAT_091cad10);
      puVar7 = (undefined8 *)(lVar3 + 0x20);
      *puVar7 = uVar14;
      thunk_FUN_03f5d7b8(puVar7,uVar14);
      plVar15 = (long *)CookingGraph_CookingLevelSimulation__ServingCandidates(param_1);
      if (plVar15 != (long *)0x0) {
        lVar6 = *plVar15;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_0917a300) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0445b108;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917a300,0);
LAB_0445b108:
        plVar15 = (long *)(*(code *)*puVar4)(plVar15,puVar4[1]);
        do {
          do {
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar15;
            uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_09185b10) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0445b184;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar15,DAT_09185b10,0);
LAB_0445b184:
            uVar11 = (*(code *)*puVar4)(plVar15,puVar4[1]);
            if ((uVar11 & 1) == 0) {
              uVar14 = 0;
              iVar13 = 0xd;
              goto LAB_0445b7a8;
            }
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar15;
            uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_0917a988) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0445b1f0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917a988,0);
LAB_0445b1f0:
            auVar20 = (*(code *)*puVar4)(plVar15,puVar4[1]);
            lVar6 = auVar20._0_8_;
            lVar8 = thunk_FUN_03f9944c(DAT_0918f2c0);
            CookingGraph_CookingLevelSimulation_<>c__DisplayClass108_1___ctor(lVar8,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar17 = (long *)(lVar8 + 0x30);
            *plVar17 = lVar3;
            thunk_FUN_03f5d7b8(plVar17,lVar3);
            lVar5 = CookingGraph_CookingLevelSimulation__Assembly
                              (param_1,lVar6,auVar20._8_8_ & 0xffffffff);
            plVar19 = (long *)(lVar8 + 0x10);
            *plVar19 = lVar5;
            thunk_FUN_03f5d7b8(plVar19);
            if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar19 = *(long **)(*plVar19 + 0x28);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = *plVar19;
            uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_0917b310) {
                  puVar4 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0445b2c0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar19,DAT_0917b310,0);
LAB_0445b2c0:
            uVar2 = (*(code *)*puVar4)(plVar19,puVar4[1]);
            uVar14 = System_Linq_Enumerable__Range(0,uVar2,0);
            uVar16 = thunk_FUN_03f9944c(DAT_09178b98);
            FUN_05315754(uVar16,lVar8,DAT_091e7a70,0);
            uVar11 = FUN_04ab6928(uVar14,uVar16,DAT_091c9498);
          } while ((uVar11 & 1) == 0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(lVar6 + 0x50);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(lVar6 + 0x18) <= auVar20._8_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar6 = *(long *)(lVar6 + (long)(int)auVar20._8_4_ * 8 + 0x20);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar6 + 0x28);
          thunk_FUN_03f5d7b8();
          uVar14 = thunk_FUN_03f9944c(DAT_09179e18);
          FUN_053d6e00(uVar14,DAT_091a8298);
          *(undefined8 *)(lVar8 + 0x20) = uVar14;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x20),uVar14);
          lVar6 = thunk_FUN_03f9944c(DAT_0917bbd0);
          FUN_057e0400(lVar6,DAT_091aad58);
          if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *(long *)(*plVar17 + 0x18);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *(long *)(lVar5 + 0x30);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
            uVar11 = 0;
            uVar9 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
            do {
              if (uVar9 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar14 = CookingGraph_CookingGraphIndex__SelectionLeaves
                                 (*(long *)(param_1 + 0x78),
                                  *(undefined8 *)(lVar5 + 0x20 + uVar11 * 8),0);
              lVar18 = *(long *)(lVar8 + 0x38);
              if (lVar18 == 0) {
                lVar18 = thunk_FUN_03f9944c(DAT_09178bd0);
                FUN_05315cf4(lVar18,lVar8,DAT_091e7a90,0);
                *(long *)(lVar8 + 0x38) = lVar18;
                thunk_FUN_03f5d7b8(lVar8 + 0x38,lVar18);
              }
              uVar14 = FUN_04af2d4c(uVar14,lVar18,DAT_091ca578);
              uVar14 = FUN_04b0462c(uVar14,DAT_091cae30);
              lVar18 = DAT_091aad68;
              if (lVar6 == 0) {
LAB_0445b854:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar10 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_0445b854;
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar6,uVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
              uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)*(uint *)(lVar5 + 0x18));
          }
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          lVar5 = puVar4[0x5a];
          if (lVar5 == 0) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            }
            uVar14 = *puVar4;
            lVar5 = thunk_FUN_03f9944c(DAT_091783a0);
            FUN_05322d94(lVar5,uVar14,DAT_091e7670,0);
            lVar18 = *(long *)(DAT_0918f298 + 0xb8);
            *(long *)(lVar18 + 0x2d0) = lVar5;
            thunk_FUN_03f5d7b8(lVar18 + 0x2d0,lVar5);
          }
          uVar11 = FUN_04ab6f28(lVar6,lVar5,DAT_091c93c0);
        } while ((uVar11 & 1) != 0);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar3 = puVar4[0x5b];
        if (lVar3 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar14 = *puVar4;
          lVar3 = thunk_FUN_03f9944c(DAT_091795f0);
          FUN_05330e2c(lVar3,uVar14,DAT_091e7678,0);
          lVar5 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar5 + 0x2d8) = lVar3;
          thunk_FUN_03f5d7b8(lVar5 + 0x2d8,lVar3);
        }
        uVar14 = FUN_04afa940(lVar6,lVar3,DAT_091ca8d8);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar3 = puVar4[0x5c];
        if (lVar3 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar16 = *puVar4;
          lVar3 = thunk_FUN_03f9944c(DAT_091782a0);
          FUN_0530d4d8(lVar3,uVar16,DAT_091e7680,0);
          lVar5 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar5 + 0x2e0) = lVar3;
          thunk_FUN_03f5d7b8(lVar5 + 0x2e0,lVar3);
        }
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar5 = puVar4[0x5d];
        if (lVar5 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar16 = *puVar4;
          lVar5 = thunk_FUN_03f9944c(DAT_091782a0);
          FUN_0530d4d8(lVar5,uVar16,DAT_091e7688,0);
          lVar18 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar18 + 0x2e8) = lVar5;
          thunk_FUN_03f5d7b8(lVar18 + 0x2e8,lVar5);
        }
        uVar14 = FUN_04b05028(uVar14,lVar3,lVar5,DAT_091cb020);
        *(undefined8 *)(lVar8 + 0x28) = uVar14;
        thunk_FUN_03f5d7b8();
        uVar14 = thunk_FUN_03f9944c(DAT_091795f8);
        FUN_05330e2c(uVar14,lVar8,DAT_091e7a88,0);
        uVar14 = FUN_04af8368(lVar6,uVar14,DAT_091ca2a8);
        uVar14 = FUN_04b049e4(uVar14,DAT_091cad10);
        iVar13 = 0xc;
LAB_0445b7a8:
        if (plVar15 != (long *)0x0) {
          lVar3 = *plVar15;
          uVar11 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_09185a58) {
                puVar4 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0445b808;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar15,DAT_09185a58,0);
LAB_0445b808:
          (*(code *)*puVar4)(plVar15,puVar4[1]);
        }
        if ((iVar13 == 0xd) || (iVar13 == 0)) {
          uVar14 = *puVar7;
        }
        return uVar14;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

