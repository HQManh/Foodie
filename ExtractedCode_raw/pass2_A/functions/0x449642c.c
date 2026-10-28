// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<WholeProcessSources>d__110$$MoveNext
// address: 0x449642c
// body: available
// range: 0x449642c-0x4496a9f inclusive
// range: 0x4496b60-0x4496e63 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4496a58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496a5c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496a60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496a64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496a68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496a6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496a70 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496a74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496a78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496a7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496a80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496a84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingLevelSimulation_<WholeProcessSources>d__110__MoveNext(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  long local_58;
  
  local_58 = param_1;
  if ((DAT_09518198 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c1b0);
    FUN_03f5c2a4(&DAT_091ca840);
    FUN_03f5c2a4(&DAT_091cb150);
    FUN_03f5c2a4(&DAT_091cb618);
    FUN_03f5c2a4(&DAT_091a2758);
    FUN_03f5c2a4(&DAT_091a2760);
    FUN_03f5c2a4(&DAT_091793d8);
    FUN_03f5c2a4(&DAT_091793d0);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917a2f0);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_0917a970);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091abf18);
    FUN_03f5c2a4(&DAT_091abf28);
    FUN_03f5c2a4(&DAT_091e7a08);
    FUN_03f5c2a4(&DAT_091e7a10);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091bec10);
    DAT_09518198 = 1;
  }
  iVar14 = *(int *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x50);
  plStack_b8 = &local_58;
  local_c0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (iVar14 == 2) goto LAB_04496c30;
  if (iVar14 != 1) {
    if (iVar14 != 0) {
      uVar5 = 0;
      goto LAB_04496df4;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = (long *)CookingGraph_CookingLevelSimulation__AssemblySources(lVar12,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a2f0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04496600;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a2f0,0);
LAB_04496600:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    *(undefined8 *)(local_58 + 0x58) = uVar5;
    thunk_FUN_03f5d7b8();
    param_1 = local_58;
  }
  plVar3 = *(long **)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_09185b10) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_04496684;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_04496684:
  uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if ((uVar8 & 1) == 0) {
    CookingGraph_CookingLevelSimulation_<WholeProcessSources>d__110__<>m__Finally1();
    *(undefined8 *)(local_58 + 0x58) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(local_58 + 0x58),0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar12 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = FUN_06e4bd5c(*(long *)(lVar12 + 0xb0),DAT_0919c1b0);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar6 = puVar4[0x5e];
    if (lVar6 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar15 = *puVar4;
      lVar6 = thunk_FUN_03f9944c(DAT_091793d0);
      FUN_05322d94(lVar6,uVar15,DAT_091e7a08,0);
      lVar7 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar7 + 0x2f0) = lVar6;
      thunk_FUN_03f5d7b8(lVar7 + 0x2f0,lVar6);
    }
    uVar5 = FUN_04b0cafc(uVar5,lVar6,DAT_091cb618);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar6 = puVar4[0x5f];
    if (lVar6 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar15 = *puVar4;
      lVar6 = thunk_FUN_03f9944c(DAT_091793d8);
      FUN_0532343c(lVar6,uVar15,DAT_091e7a10,0);
      lVar7 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar7 + 0x2f8) = lVar6;
      thunk_FUN_03f5d7b8(lVar7 + 0x2f8,lVar6);
    }
    uVar5 = FUN_04af5db8(uVar5,lVar6,DAT_091ca840);
    lVar6 = FUN_04b08678(uVar5,DAT_091cb150);
    lVar7 = *(long *)(lVar12 + 0x78);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *(long *)(lVar7 + 0x20);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    for (uVar13 = 0; (int)uVar13 < (int)*(uint *)(lVar9 + 0x18); uVar13 = uVar13 + 1) {
      if (*(uint *)(lVar9 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar9 = *(long *)(lVar9 + (ulong)uVar13 * 8 + 0x20);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar14 = *(int *)(lVar9 + 0x18);
      while( true ) {
        lVar9 = *(long *)(lVar7 + 0x20);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar10 = *(long *)(lVar9 + (ulong)uVar13 * 8 + 0x20);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar10 + 0x1c) + *(int *)(*(long *)(lVar10 + 0x10) + 0x18) <= iVar14) break;
        CookingGraph_CookingLevelSimulation__ToolAddress(&local_f0,uVar13,iVar14,0);
        lVar7 = DAT_091abf18;
        uStack_108 = uStack_e8;
        local_110 = local_f0;
        local_100 = local_e0;
        if (lVar6 == 0) {
LAB_04496a58:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_04496a58;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + 0x28) = uStack_e8;
          *(undefined8 *)(lVar9 + 0x20) = local_f0;
          *(undefined8 *)(lVar9 + 0x30) = local_e0;
          thunk_FUN_03f5d7b8(lVar9 + 0x28,0);
        }
        else {
          FUN_05739aa0(lVar6,&local_f0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        lVar7 = *(long *)(lVar12 + 0x78);
        iVar14 = iVar14 + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_0573a8e0(&local_140,lVar6,DAT_091abf28);
    local_d0 = local_120;
    uStack_e8 = uStack_138;
    local_f0 = local_140;
    uStack_d8 = uStack_128;
    local_e0 = local_130;
    *(undefined8 *)(local_58 + 0x68) = uStack_138;
    *(undefined8 *)(local_58 + 0x60) = local_140;
    *(undefined8 *)(local_58 + 0x78) = uStack_128;
    *(undefined8 *)(local_58 + 0x70) = local_130;
    *(undefined8 *)(local_58 + 0x80) = local_120;
    thunk_FUN_03f5d7b8(local_58 + 0x60,0);
    *(undefined4 *)(local_58 + 0x10) = 0xfffffffc;
LAB_04496b60:
    uVar8 = FUN_071997ec(local_58 + 0x60,DAT_091a2758);
    if ((uVar8 & 1) != 0) {
      *(undefined8 *)(local_58 + 0x90) = *(undefined8 *)(local_58 + 0x78);
      *(undefined8 *)(local_58 + 0x88) = *(undefined8 *)(local_58 + 0x70);
      *(undefined8 *)(local_58 + 0x98) = *(undefined8 *)(local_58 + 0x80);
      thunk_FUN_03f5d7b8(local_58 + 0x90,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar12 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uStack_158 = *(undefined8 *)(local_58 + 0x90);
      local_160 = *(undefined8 *)(local_58 + 0x88);
      local_150 = *(undefined8 *)(local_58 + 0x98);
      plVar3 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                 (*(long *)(lVar12 + 0x178),&local_160);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917a480) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04496c10;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a480,0);
LAB_04496c10:
      uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      *(undefined8 *)(local_58 + 0xa0) = uVar5;
      thunk_FUN_03f5d7b8();
      param_1 = local_58;
LAB_04496c30:
      plVar3 = *(long **)(param_1 + 0xa0);
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffb;
      do {
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04496c9c;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_04496c9c:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) goto LAB_04496d54;
        plVar3 = *(long **)(local_58 + 0xa0);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917ab28) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04496d08;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ab28,0);
LAB_04496d08:
        (*(code *)*puVar4)(&local_f0,plVar3,puVar4[1]);
        uVar15 = local_e0;
        uVar5 = local_f0;
        if (uStack_e8._4_4_ == 0) {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(lVar12 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = (undefined4)uStack_e8;
          uVar8 = CookingGraph_Execution_CookingExecution__IsUnitClaimed
                            (*(long *)(lVar12 + 0x178),local_f0);
          if ((uVar8 & 1) == 0) {
            uStack_138 = *(undefined8 *)(local_58 + 0x90);
            local_140 = *(undefined8 *)(local_58 + 0x88);
            local_130 = *(undefined8 *)(local_58 + 0x98);
            uStack_d8 = 0;
            local_e0 = 0;
            uStack_c8 = 0;
            local_d0 = 0;
            uStack_e8 = 0;
            local_f0 = 0;
            local_78 = uVar5;
            local_70 = uVar2;
            uStack_6c = 0;
            local_68 = uVar15;
            FUN_066bb1a4(&local_f0,&local_140,&local_78,DAT_091bec10);
            *(undefined8 *)(local_58 + 0x20) = uStack_e8;
            *(undefined8 *)(local_58 + 0x18) = local_f0;
            *(undefined8 *)(local_58 + 0x30) = uStack_d8;
            *(undefined8 *)(local_58 + 0x28) = local_e0;
            *(undefined8 *)(local_58 + 0x40) = uStack_c8;
            *(undefined8 *)(local_58 + 0x38) = local_d0;
            thunk_FUN_03f5d7b8(local_58 + 0x20,0);
            uVar5 = 1;
            *(undefined4 *)(local_58 + 0x10) = 2;
            goto LAB_04496df4;
          }
        }
        plVar3 = *(long **)(local_58 + 0xa0);
      } while( true );
    }
    CookingGraph_CookingLevelSimulation_<WholeProcessSources>d__110__<>m__Finally2();
    uVar5 = 0;
    *(undefined8 *)(local_58 + 0x80) = 0;
    *(undefined8 *)(local_58 + 0x68) = 0;
    *(undefined8 *)(local_58 + 0x60) = 0;
    *(undefined8 *)(local_58 + 0x78) = 0;
    *(undefined8 *)(local_58 + 0x70) = 0;
    goto LAB_04496df4;
  }
  plVar3 = *(long **)(local_58 + 0x58);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar12 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_0917a970) {
        puVar4 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_04496a0c;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a970,0);
LAB_04496a0c:
  (*(code *)*puVar4)(&local_f0,plVar3,puVar4[1]);
  uStack_88 = uStack_c8;
  local_90 = local_d0;
  uStack_a8 = uStack_e8;
  local_b0 = local_f0;
  uStack_98 = uStack_d8;
  local_a0 = local_e0;
  *(undefined8 *)(local_58 + 0x20) = uStack_e8;
  *(undefined8 *)(local_58 + 0x18) = local_f0;
  *(undefined8 *)(local_58 + 0x30) = uStack_d8;
  *(undefined8 *)(local_58 + 0x28) = local_e0;
  *(undefined8 *)(local_58 + 0x40) = uStack_c8;
  *(undefined8 *)(local_58 + 0x38) = local_d0;
  thunk_FUN_03f5d7b8(local_58 + 0x20,0);
  uVar5 = 1;
  *(undefined4 *)(local_58 + 0x10) = 1;
LAB_04496df4:
  lVar12 = local_c0;
  if (local_c0 == 0) {
    return uVar5;
  }
  FUN_039b99b4(&plStack_b8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548(lVar12);
LAB_04496d54:
  CookingGraph_CookingLevelSimulation_<WholeProcessSources>d__110__<>m__Finally3();
  *(undefined8 *)(local_58 + 0xa0) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(local_58 + 0xa0),0);
  *(undefined8 *)(local_58 + 0x90) = 0;
  *(undefined8 *)(local_58 + 0x98) = 0;
  *(undefined8 *)(local_58 + 0x88) = 0;
  goto LAB_04496b60;
}

