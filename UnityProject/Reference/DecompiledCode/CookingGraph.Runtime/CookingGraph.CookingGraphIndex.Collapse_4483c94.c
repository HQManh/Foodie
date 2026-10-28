// rea decompile_all
// name: CookingGraph.CookingGraphIndex$$Collapse
// address: 0x4483c94
// body: available
// range: 0x4483c94-0x448491b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4484800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4484804 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4484808 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448480c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4484810 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4484814 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4484818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448481c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4484820 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4484824 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4484828 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448482c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CookingGraph_CookingGraphIndex__Collapse(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  
  if ((DAT_095180c3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182c98);
    FUN_03f5c2a4(&DAT_0919d5c8);
    FUN_03f5c2a4(&DAT_0919d5d8);
    FUN_03f5c2a4(&DAT_091763e8);
    FUN_03f5c2a4(&DAT_091c9920);
    FUN_03f5c2a4(&DAT_091c9c40);
    FUN_03f5c2a4(&DAT_091c9c58);
    FUN_03f5c2a4(&DAT_091ca020);
    FUN_03f5c2a4(&DAT_091ca908);
    FUN_03f5c2a4(&DAT_091ca990);
    FUN_03f5c2a4(&DAT_091ca550);
    FUN_03f5c2a4(&DAT_091ca578);
    FUN_03f5c2a4(&DAT_091cad50);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_091a2618);
    FUN_03f5c2a4(&DAT_091a2620);
    FUN_03f5c2a4(&DAT_091a2628);
    FUN_03f5c2a4(&DAT_09178ba0);
    FUN_03f5c2a4(&DAT_09178610);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_091785c8);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_091785c0);
    FUN_03f5c2a4(&DAT_09178b68);
    FUN_03f5c2a4(&DAT_091a8260);
    FUN_03f5c2a4(&DAT_09179e10);
    FUN_03f5c2a4(&DAT_091abc20);
    FUN_03f5c2a4(&DAT_091e7208);
    FUN_03f5c2a4(&DAT_091e7210);
    FUN_03f5c2a4(&DAT_091e73f8);
    FUN_03f5c2a4(&DAT_091e7400);
    FUN_03f5c2a4(&DAT_091e7418);
    FUN_03f5c2a4(&DAT_091e7420);
    FUN_03f5c2a4(&DAT_091e7428);
    FUN_03f5c2a4(&DAT_0918f248);
    FUN_03f5c2a4(&DAT_091e7430);
    FUN_03f5c2a4(&DAT_0918f250);
    FUN_03f5c2a4(&DAT_091e7438);
    FUN_03f5c2a4(&DAT_091e7440);
    FUN_03f5c2a4(&DAT_091e7448);
    FUN_03f5c2a4(&DAT_0918f258);
    FUN_03f5c2a4(&DAT_0918f178);
    DAT_095180c3 = 1;
  }
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_0918f248);
  System_Object___ctor(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar6 + 0x10),param_1);
    plVar15 = (long *)(lVar6 + 0x18);
    *plVar15 = param_3;
    thunk_FUN_03f5d7b8(plVar15,param_3);
    if (*plVar15 != 0) {
      uVar7 = System_Linq_Enumerable__Range(0,*(undefined4 *)(*plVar15 + 0x18),0);
      uVar7 = FUN_04b0462c(uVar7,DAT_091cae30);
      *(undefined8 *)(lVar6 + 0x20) = uVar7;
      thunk_FUN_03f5d7b8();
      uVar7 = thunk_FUN_03f9944c(DAT_091763e8);
      FUN_06eef750(uVar7,DAT_0919d5c8);
      *(undefined8 *)(lVar6 + 0x28) = uVar7;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x28),uVar7);
      if ((*(long *)(param_1 + 0x88) != 0) &&
         (lVar8 = *(long *)(*(long *)(param_1 + 0x88) + 0x88), lVar8 != 0)) {
        FUN_057e185c(&local_a8,lVar8,DAT_091abc20);
        local_80 = local_98;
        puStack_88 = puStack_a0;
        local_90 = local_a8;
        local_a8 = 0;
        puStack_a0 = &local_90;
        while (uVar9 = FUN_071bd28c(&local_90,DAT_091a2620), (uVar9 & 1) != 0) {
          lVar8 = thunk_FUN_03f9944c(DAT_0918f250);
          System_Object___ctor(lVar8,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(long *)(lVar8 + 0x18) = lVar6;
          thunk_FUN_03f5d7b8((long *)(lVar8 + 0x18),lVar6);
          *(undefined8 *)(lVar8 + 0x10) = local_80;
          thunk_FUN_03f5d7b8();
          lVar10 = thunk_FUN_03f9944c(DAT_0918f258);
          System_Object___ctor(lVar10,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar18 = (long *)(lVar10 + 0x28);
          *plVar18 = lVar8;
          thunk_FUN_03f5d7b8(plVar18,lVar8);
          if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(*plVar18 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar9 = CookingGraph_CookingGraphIndex__Contains
                            (param_1,param_2,*(undefined8 *)(lVar8 + 0x38),0);
          if ((uVar9 & 1) != 0) {
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *(long *)(*plVar18 + 0x10);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar7 = *(undefined8 *)(lVar8 + 0x50);
            if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar12 = *(undefined8 **)(DAT_0918f178 + 0xb8);
            lVar8 = puVar12[0x22];
            if (lVar8 == 0) {
              if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar12 = *(undefined8 **)(DAT_0918f178 + 0xb8);
              }
              uVar16 = *puVar12;
              lVar8 = thunk_FUN_03f9944c(DAT_091785c0);
              FUN_05324070(lVar8,uVar16,DAT_091e7208,0);
              lVar13 = *(long *)(DAT_0918f178 + 0xb8);
              *(long *)(lVar13 + 0x110) = lVar8;
              thunk_FUN_03f5d7b8(lVar13 + 0x110,lVar8);
            }
            uVar7 = FUN_04afac50(uVar7,lVar8,DAT_091ca908);
            uVar16 = thunk_FUN_03f9944c(DAT_09179e10);
            FUN_053eb620(uVar16,uVar7,DAT_091a8260);
            *(undefined8 *)(lVar10 + 0x10) = uVar16;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x10),uVar16);
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *(long *)(*plVar18 + 0x18);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *(long *)(lVar8 + 0x18);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar7 = System_Linq_Enumerable__Range(0,*(undefined4 *)(lVar8 + 0x18),0);
            uVar16 = thunk_FUN_03f9944c(DAT_09178b98);
            FUN_05315754(uVar16,lVar10,DAT_091e7438,0);
            uVar7 = FUN_04b0c1f0(uVar7,uVar16,DAT_091cb4e8);
            lVar8 = FUN_04b0462c(uVar7,DAT_091cae30);
            plVar19 = (long *)(lVar10 + 0x20);
            *plVar19 = lVar8;
            thunk_FUN_03f5d7b8(plVar19);
            lVar8 = *plVar19;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar8 + 0x18) != 0) {
              if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar13 = *(long *)(*plVar18 + 0x18);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar22 = (long *)(lVar13 + 0x38);
              lVar20 = *plVar22;
              if (lVar20 == 0) {
                lVar20 = thunk_FUN_03f9944c(DAT_09178bd0);
                FUN_05315cf4(lVar20,lVar13,DAT_091e7418,0);
                *plVar22 = lVar20;
                thunk_FUN_03f5d7b8(plVar22,lVar20);
              }
              uVar7 = FUN_04af2d4c(lVar8,lVar20,DAT_091ca578);
              if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar12 = *(undefined8 **)(DAT_0918f178 + 0xb8);
              lVar8 = puVar12[0x23];
              if (lVar8 == 0) {
                if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar12 = *(undefined8 **)(DAT_0918f178 + 0xb8);
                }
                uVar16 = *puVar12;
                lVar8 = thunk_FUN_03f9944c(DAT_09178bd0);
                FUN_05315cf4(lVar8,uVar16,DAT_091e7210,0);
                lVar13 = *(long *)(DAT_0918f178 + 0xb8);
                *(long *)(lVar13 + 0x118) = lVar8;
                thunk_FUN_03f5d7b8(lVar13 + 0x118,lVar8);
              }
              uVar7 = FUN_04aea844(uVar7,lVar8,DAT_091ca020);
              uVar7 = FUN_04b0462c(uVar7,DAT_091cae30);
              *(undefined8 *)(lVar10 + 0x18) = uVar7;
              thunk_FUN_03f5d7b8();
              if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *(long *)(*plVar18 + 0x10);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar16 = *(undefined8 *)(lVar8 + 0x50);
              uVar7 = thunk_FUN_03f9944c(DAT_091785c8);
              FUN_05322d94(uVar7,lVar10,DAT_091e7440,0);
              lVar8 = FUN_04ae5fd0(uVar16,uVar7,DAT_091c9c40);
              if (lVar8 == 0) {
                if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar6 = *(long *)(*plVar18 + 0x10);
                if (lVar6 != 0) {
                  lVar6 = *(long *)(lVar6 + 0x28);
                  if (lVar6 != 0) {
                    uVar16 = *(undefined8 *)(lVar6 + 0x18);
                    uVar7 = thunk_FUN_03fc39d4(&DAT_092059c8);
                    uVar7 = System_String__Concat(uVar7,uVar16,0);
                    thunk_FUN_03fc39d4(&DAT_09181548);
                    uVar16 = thunk_FUN_03f9944c();
                    System_ArgumentException___ctor(uVar16,uVar7,0);
                    uVar7 = thunk_FUN_03fc39d4(&DAT_091c6618);
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar16,uVar7);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar13 = *(long *)(*plVar18 + 0x18);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar21 = *plVar19;
              plVar22 = (long *)(lVar13 + 0x48);
              lVar20 = *plVar22;
              if (lVar20 == 0) {
                lVar20 = thunk_FUN_03f9944c(DAT_09178b68);
                FUN_0531612c(lVar20,lVar13,DAT_091e7420,0);
                *plVar22 = lVar20;
                thunk_FUN_03f5d7b8(plVar22,lVar20);
              }
              uVar7 = FUN_04afa8d0(lVar21,lVar20,DAT_091ca990);
              uVar16 = thunk_FUN_03f9944c(DAT_09178b98);
              FUN_05315754(uVar16,lVar10,DAT_091e7448,0);
              uVar7 = FUN_04b0c1f0(uVar7,uVar16,DAT_091cb4e8);
              uVar7 = FUN_04add3a4(uVar7,DAT_091c9920);
              uVar7 = FUN_04b0462c(uVar7,DAT_091cae30);
              if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar10 = *(long *)(*plVar18 + 0x18);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar20 = *plVar19;
              plVar22 = (long *)(lVar10 + 0x50);
              lVar13 = *plVar22;
              if (lVar13 == 0) {
                lVar13 = thunk_FUN_03f9944c(DAT_09178ba0);
                FUN_0531612c(lVar13,lVar10,DAT_091e7428,0);
                *plVar22 = lVar13;
                thunk_FUN_03f5d7b8(plVar22,lVar13);
              }
              uVar16 = FUN_04af36b8(lVar20,lVar13,DAT_091ca550);
              lVar10 = *plVar18;
              uVar11 = thunk_FUN_03f9944c(DAT_09178610);
              FUN_05322d94(uVar11,lVar10,DAT_091e7430,0);
              lVar10 = FUN_04ae5fd0(uVar16,uVar11,DAT_091c9c58);
              lVar13 = *plVar19;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar20 = *(long *)(*plVar18 + 0x18);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar1 = *(uint *)(lVar13 + 0x20);
              lVar13 = *(long *)(lVar20 + 0x28);
              uVar5 = CookingGraph_CookingGraphIndex__Ingredient
                                (param_1,*(undefined8 *)(lVar8 + 0x10));
              if (lVar10 == 0) {
                if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar8 = *(long *)(*plVar18 + 0x18);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar8 = *(long *)(lVar8 + 0x18);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar10 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar16 = 0;
              }
              else {
                uVar16 = *(undefined8 *)(lVar10 + 0x20);
              }
              if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *(long *)(*plVar18 + 0x18);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *(long *)(lVar8 + 0x18);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar17 = *(undefined8 *)(lVar8 + 0x18);
              uVar2 = *(undefined4 *)(lVar10 + 0x14);
              uVar11 = thunk_FUN_03f9944c(DAT_09182c98);
              CookingGraph_Execution_CookingAssemblySlot___ctor
                        (uVar16,uVar11,uVar5,uVar2,uVar7,uVar17,0);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_06ef04f8(lVar13,uVar1,uVar11,DAT_0919d5d8);
              lVar8 = *plVar19;
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar3 = *(uint *)(lVar8 + 0x18);
              if (0 < (int)uVar3) {
                lVar10 = *plVar18;
                uVar14 = 0;
                do {
                  if (uVar3 == uVar14) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar13 = *(long *)(lVar10 + 0x18);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar13 = *(long *)(lVar13 + 0x20);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar4 = *(uint *)(lVar8 + (long)(int)uVar14 * 4 + 0x20);
                  if (*(uint *)(lVar13 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  uVar14 = uVar14 + 1;
                  *(uint *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = uVar1;
                } while ((uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) != uVar14);
              }
            }
          }
        }
        FUN_071bd288(&local_90,DAT_091a2618);
        if (*plVar15 != 0) {
          uVar7 = System_Linq_Enumerable__Range(0,*(undefined4 *)(*plVar15 + 0x18),0);
          uVar16 = thunk_FUN_03f9944c(DAT_09178b98);
          FUN_05315754(uVar16,lVar6,DAT_091e73f8,0);
          uVar7 = FUN_04b0c1f0(uVar7,uVar16,DAT_091cb4e8);
          uVar7 = FUN_04b0462c(uVar7,DAT_091cae30);
          puVar12 = (undefined8 *)(lVar6 + 0x30);
          *puVar12 = uVar7;
          thunk_FUN_03f5d7b8(puVar12,uVar7);
          uVar16 = *puVar12;
          uVar7 = thunk_FUN_03f9944c(DAT_09178ba0);
          FUN_0531612c(uVar7,lVar6,DAT_091e7400,0);
          uVar7 = FUN_04af36b8(uVar16,uVar7,DAT_091ca550);
          FUN_04b049e4(uVar7,DAT_091cad50);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

