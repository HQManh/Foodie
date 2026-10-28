// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ReplanWaitingLanes
// address: 0x444398c
// body: available
// range: 0x444398c-0x4444063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444405c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4444060 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__ReplanWaitingLanes(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long local_98;
  undefined8 local_90;
  undefined8 local_68;
  
  if ((DAT_09517ff6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c67b8);
    FUN_03f5c2a4(&DAT_0919c190);
    FUN_03f5c2a4(&DAT_091c92d8);
    FUN_03f5c2a4(&DAT_091c9460);
    FUN_03f5c2a4(&DAT_091c9558);
    FUN_03f5c2a4(&DAT_091c9390);
    FUN_03f5c2a4(&DAT_091ca988);
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_09178290);
    FUN_03f5c2a4(&DAT_091793e8);
    FUN_03f5c2a4(&DAT_09178b60);
    FUN_03f5c2a4(&DAT_091e7990);
    FUN_03f5c2a4(&DAT_091e7d20);
    FUN_03f5c2a4(&DAT_0918f498);
    FUN_03f5c2a4(&DAT_091e7d28);
    FUN_03f5c2a4(&DAT_0918f4a0);
    FUN_03f5c2a4(&DAT_091e7d30);
    FUN_03f5c2a4(&DAT_0918f4a8);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_09517ff6 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918f498);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass25_0___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_1);
    lVar10 = *(long *)(param_1 + 0x78);
    *(undefined4 *)(lVar3 + 0x10) = 0;
    if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x20), lVar10 != 0)) {
      iVar2 = 0;
LAB_04443b1c:
      if (*(int *)(lVar10 + 0x18) <= iVar2) {
        return;
      }
      lVar4 = thunk_FUN_03f9944c(DAT_0918f4a0);
      CookingGraph_CookingLevelSimulation_<>c__DisplayClass25_1___ctor(lVar4,0);
      if (lVar4 != 0) {
        plVar14 = (long *)(lVar4 + 0x18);
        *plVar14 = lVar3;
        thunk_FUN_03f5d7b8(plVar14,lVar3);
        lVar10 = *(long *)(param_1 + 0x78);
        *(undefined4 *)(lVar4 + 0x10) = 0;
        if (lVar10 != 0) {
          iVar2 = 0;
          do {
            if ((*plVar14 == 0) || (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0)) break;
            uVar1 = *(uint *)(*plVar14 + 0x10);
            if (*(uint *)(lVar10 + 0x18) <= uVar1) {
LAB_04444060:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar12 = *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            if (lVar12 == 0) break;
            if (*(int *)(lVar12 + 0x18) <= iVar2) goto LAB_0444402c;
            lVar10 = *(long *)(param_1 + 0xb0);
            local_68 = 0;
            FUN_066c1fdc(&local_68,(long)(int)uVar1,iVar2,DAT_091bec98);
            if (lVar10 == 0) break;
            uVar5 = FUN_06e4c14c(lVar10,local_68,DAT_0919c190);
            if ((uVar5 & 1) == 0) {
              if (*plVar14 == 0) break;
              uVar6 = CookingGraph_CookingLevelSimulation__LaneSlots
                                (param_1,*(undefined4 *)(*plVar14 + 0x10),
                                 *(undefined4 *)(lVar4 + 0x10));
              lVar10 = *(long *)(lVar4 + 0x18);
              if (lVar10 == 0) break;
              lVar12 = *(long *)(lVar10 + 0x20);
              if (lVar12 == 0) {
                lVar12 = thunk_FUN_03f9944c(DAT_09178b60);
                FUN_0531612c(lVar12,lVar10,DAT_091e7d20,0);
                *(long *)(lVar10 + 0x20) = lVar12;
                thunk_FUN_03f5d7b8((long *)(lVar10 + 0x20),lVar12);
              }
              uVar6 = FUN_04afa860(uVar6,lVar12,DAT_091ca988);
              lVar10 = FUN_04b0451c(uVar6,DAT_091cadc0);
              if (lVar10 == 0) break;
              if (*(long *)(lVar10 + 0x18) != 0) {
                uVar6 = thunk_FUN_03f9944c(DAT_09178768);
                FUN_053136a4(uVar6,param_1,DAT_091c67b8,0);
                uVar5 = FUN_04ab6608(lVar10,uVar6,DAT_091c9460);
                if ((uVar5 & 1) == 0) {
                  if (*plVar14 == 0) break;
                  uVar6 = CookingGraph_CookingLevelSimulation__LaneOccupants
                                    (param_1,*(undefined4 *)(*plVar14 + 0x10),
                                     *(undefined4 *)(lVar4 + 0x10),0,0);
                  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_0918f298);
                  }
                  puVar13 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                  lVar10 = puVar13[9];
                  if (lVar10 == 0) {
                    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_0918f298);
                      puVar13 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                    }
                    uVar15 = *puVar13;
                    lVar10 = thunk_FUN_03f9944c(DAT_091793e8);
                    FUN_0532a53c(lVar10,uVar15,DAT_091e7990,0);
                    plVar7 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x48);
                    *plVar7 = lVar10;
                    thunk_FUN_03f5d7b8(plVar7,lVar10);
                  }
                  uVar5 = FUN_04ab7924(uVar6,lVar10,DAT_091c9558);
                  if ((uVar5 & 1) == 0) {
                    if (*plVar14 == 0) break;
                    lVar10 = CookingGraph_CookingLevelSimulation__LaneRecipe
                                       (param_1,*(undefined4 *)(*plVar14 + 0x10),uVar6);
                    if (lVar10 != 0) {
                      if (*plVar14 == 0) break;
                      uVar5 = CookingGraph_CookingLevelSimulation__LaneMayHandOver
                                        (param_1,*(undefined4 *)(*plVar14 + 0x10),uVar6);
                      if ((uVar5 & 1) != 0) {
                        local_90 = CookingGraph_CookingLevelSimulation__ProcessFulfillmentPriority
                                             (param_1,lVar10);
                        if (((*(long *)(param_1 + 0x78) == 0) || (*plVar14 == 0)) ||
                           (lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0x30), lVar12 == 0))
                        break;
                        uVar1 = *(uint *)(*plVar14 + 0x10);
                        if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_04444060;
                        lVar12 = *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                        if (lVar12 == 0) break;
                        local_98 = lVar10;
                        if (0 < *(int *)(lVar12 + 0x18)) {
                          uVar5 = 0;
                          do {
                            lVar8 = thunk_FUN_03f9944c(DAT_0918f4a8);
                            CookingGraph_CookingLevelSimulation_<>c__DisplayClass25_2___ctor
                                      (lVar8,0);
                            if (*(uint *)(lVar12 + 0x18) <= uVar5) goto LAB_04444060;
                            if (lVar8 == 0) goto LAB_0444405c;
                            plVar7 = (long *)(lVar8 + 0x10);
                            *plVar7 = *(long *)(lVar12 + 0x20 + uVar5 * 8);
                            thunk_FUN_03f5d7b8(plVar7);
                            lVar11 = *plVar7;
                            if (lVar11 != lVar10) {
                              if (lVar11 == 0) goto LAB_0444405c;
                              lVar16 = *(long *)(lVar4 + 0x20);
                              uVar15 = *(undefined8 *)(lVar11 + 0x30);
                              if (lVar16 == 0) {
                                lVar16 = thunk_FUN_03f9944c(DAT_09178290);
                                FUN_0530cf38(lVar16,lVar4,DAT_091e7d28,0);
                                *(long *)(lVar4 + 0x20) = lVar16;
                                thunk_FUN_03f5d7b8(lVar4 + 0x20,lVar16);
                              }
                              uVar9 = FUN_04ab46c8(uVar15,lVar16,DAT_091c9390);
                              if ((uVar9 & 1) == 0) {
                                uVar15 = thunk_FUN_03f9944c(DAT_091793e8);
                                FUN_0532a53c(uVar15,lVar8,DAT_091e7d30,0);
                                uVar9 = FUN_04ab36f8(uVar6,uVar15,DAT_091c92d8);
                                if (((uVar9 & 1) != 0) &&
                                   (uVar9 = CookingGraph_CookingLevelSimulation__OutputNeeded
                                                      (param_1,*plVar7,0,0), (uVar9 & 1) != 0)) {
                                  uVar15 = CookingGraph_CookingLevelSimulation__ProcessFulfillmentPriority
                                                     (param_1,*plVar7);
                                  iVar2 = CookingGraph_CookingLevelSimulation__CompareRank
                                                    (uVar15,local_90);
                                  if (iVar2 < 0) {
                                    local_98 = *plVar7;
                                    local_90 = uVar15;
                                  }
                                }
                              }
                            }
                            uVar5 = uVar5 + 1;
                          } while ((long)uVar5 < (long)*(int *)(lVar12 + 0x18));
                        }
                        if (local_98 != lVar10) {
                          if (*plVar14 == 0) break;
                          CookingGraph_CookingLevelSimulation__PinLane
                                    (param_1,*(undefined4 *)(*plVar14 + 0x10),
                                     *(undefined4 *)(lVar4 + 0x10));
                          *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
                          *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar10 = *(long *)(param_1 + 0x78);
            iVar2 = *(int *)(lVar4 + 0x10) + 1;
            *(int *)(lVar4 + 0x10) = iVar2;
            if (lVar10 == 0) break;
          } while( true );
        }
      }
    }
  }
LAB_0444405c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_0444402c:
  iVar2 = *(int *)(lVar3 + 0x10) + 1;
  *(int *)(lVar3 + 0x10) = iVar2;
  goto LAB_04443b1c;
}

