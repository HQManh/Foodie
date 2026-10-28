// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$Pick
// address: 0x444f4b4
// body: available
// range: 0x444f4b4-0x445043f inclusive
// range: 0x445055c-0x4450563 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444fb2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445040c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4450410 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4450414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4450418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445041c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4450420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4450424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4450428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445042c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4450430 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4450434 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0444fbb8) */
/* WARNING: Removing unreachable block (ram,0x0445055c) */

undefined8
CookingGraph_CookingLevelSimulation__Pick
          (long param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  ulong local_b0;
  undefined8 local_a8;
  long **pplStack_a0;
  int local_94;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  long *local_70;
  undefined8 uStack_68;
  
  if ((DAT_0951803a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d990);
    FUN_03f5c2a4(&DAT_0919d9a8);
    FUN_03f5c2a4(&DAT_0919e478);
    FUN_03f5c2a4(&DAT_091ca380);
    FUN_03f5c2a4(&DAT_091ca398);
    FUN_03f5c2a4(&DAT_091ca858);
    FUN_03f5c2a4(&DAT_091ca250);
    FUN_03f5c2a4(&DAT_091ca270);
    FUN_03f5c2a4(&DAT_091cadb0);
    FUN_03f5c2a4(&DAT_091cae38);
    FUN_03f5c2a4(&DAT_091caf58);
    FUN_03f5c2a4(&DAT_091cb0b8);
    FUN_03f5c2a4(&DAT_091cb458);
    FUN_03f5c2a4(&DAT_091cb460);
    FUN_03f5c2a4(&DAT_091cb620);
    FUN_03f5c2a4(&DAT_091a1f48);
    FUN_03f5c2a4(&DAT_091a1f50);
    FUN_03f5c2a4(&DAT_091a1f58);
    FUN_03f5c2a4(&DAT_09178748);
    FUN_03f5c2a4(&DAT_09178728);
    FUN_03f5c2a4(&DAT_091782b8);
    FUN_03f5c2a4(&DAT_09179408);
    FUN_03f5c2a4(&DAT_09178720);
    FUN_03f5c2a4(&DAT_09178298);
    FUN_03f5c2a4(&DAT_091793f8);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_091a8338);
    FUN_03f5c2a4(&DAT_091a7ff0);
    FUN_03f5c2a4(&DAT_091a8300);
    FUN_03f5c2a4(&DAT_09179d80);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a840);
    FUN_03f5c2a4(&DAT_0917af40);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b4c0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091b25b0);
    FUN_03f5c2a4(&DAT_091aaa00);
    FUN_03f5c2a4(&DAT_091aa7e0);
    FUN_03f5c2a4(&DAT_091b25a0);
    FUN_03f5c2a4(&DAT_0918f688);
    FUN_03f5c2a4(&DAT_091e7740);
    FUN_03f5c2a4(&DAT_091e7748);
    FUN_03f5c2a4(&DAT_091e7750);
    FUN_03f5c2a4(&DAT_091e7758);
    FUN_03f5c2a4(&DAT_091e7760);
    FUN_03f5c2a4(&DAT_091e7b38);
    FUN_03f5c2a4(&DAT_091e7b40);
    FUN_03f5c2a4(&DAT_091e7b48);
    FUN_03f5c2a4(&DAT_091e7b50);
    FUN_03f5c2a4(&DAT_0918f348);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091fc1a0);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_0951803a = 1;
  }
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_94 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918f348);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass127_0___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
    lVar3 = CookingGraph_CookingLevelSimulation__PlanPick
                      (param_1,param_2,param_3,param_4 & 1,&uStack_68,0);
    if (lVar3 == 0) {
      return 0;
    }
    uVar15 = *(undefined8 *)(lVar3 + 0x10);
    uVar4 = thunk_FUN_03f9944c(DAT_091782b8);
    FUN_0530d910(uVar4,lVar2,DAT_091e7b38,0);
    uVar4 = FUN_04aeee0c(uVar15,uVar4,DAT_091ca270);
    lVar5 = FUN_04b049e4(uVar4,DAT_091caf58);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar11 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar16 = puVar11[0x6e];
    if (lVar16 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar11 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar4 = *puVar11;
      lVar16 = thunk_FUN_03f9944c(DAT_091793f8);
      FUN_05322d94(lVar16,uVar4,DAT_091e7760,0);
      lVar9 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar9 + 0x370) = lVar16;
      thunk_FUN_03f5d7b8(lVar9 + 0x370,lVar16);
    }
    plVar6 = (long *)FUN_04b0cafc(lVar5,lVar16,DAT_091cb620);
    if (plVar6 != (long *)0x0) {
      lVar16 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917a840) {
            puVar11 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0444f954;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar11 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a840,0);
LAB_0444f954:
      plVar6 = (long *)(*(code *)*puVar11)(plVar6,puVar11[1]);
      pplStack_a0 = &local_70;
      local_a8 = 0;
      do {
        local_70 = plVar6;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar16 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_09185b10) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0444f9e0;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar11 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_0444f9e0:
        uVar12 = (*(code *)*puVar11)(plVar6,puVar11[1]);
        plVar6 = local_70;
        if ((uVar12 & 1) == 0) {
          if (local_70 == (long *)0x0) goto LAB_0444fbac;
          lVar16 = *local_70;
          uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar12 == 0) goto LAB_0444fb84;
          piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_0444fb6c;
        }
        if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar16 = *local_70;
        uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_0917af40) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0444fa44;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar11 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917af40,0);
LAB_0444fa44:
        lVar16 = (*(code *)*puVar11)(plVar6,puVar11[1]);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *(long *)(param_1 + 0xd0);
        lVar18 = *(long *)(param_1 + 0x178);
        CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_d8,lVar16,0);
        puStack_b8 = puStack_d0;
        local_c0 = local_d8;
        local_b0 = local_c8;
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        puStack_e8 = puStack_d0;
        local_f0 = local_d8;
        local_e0 = local_c8;
        plVar6 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar18,&local_f0,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar18 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_0917b4c0) {
              puVar11 = (undefined8 *)(lVar18 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0444faf8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar11 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b4c0,0);
LAB_0444faf8:
        (*(code *)*puVar11)(&local_d8,plVar6,0,puVar11[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06f4c418(lVar9,local_d8,*(undefined4 *)(lVar16 + 0x2c),DAT_0919e478);
        plVar6 = local_70;
      } while( true );
    }
  }
  goto LAB_04450414;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0444fb6c:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar11 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0444fba0;
    }
  }
LAB_0444fb84:
  puVar11 = (undefined8 *)FUN_03f95da8(local_70,DAT_09185a58,0);
LAB_0444fba0:
  (*(code *)*puVar11)(plVar6,puVar11[1]);
LAB_0444fbac:
  if (*(long *)(lVar3 + 0x30) != 0) {
    CookingGraph_CookingLevelSimulation__Dispatch
              (param_1,*(undefined8 *)(lVar3 + 0x18),1,0,0,
               *(undefined8 *)(*(long *)(lVar3 + 0x30) + 0x28));
    if (*(long *)(lVar3 + 0x10) != 0) {
      FUN_056aec8c(&local_c0,*(long *)(lVar3 + 0x10),DAT_091aaa00);
      puStack_88 = puStack_b8;
      local_90 = local_c0;
      local_80 = local_b0;
      local_c0 = 0;
      puStack_b8 = &local_90;
      while (uVar12 = FUN_07188168(&local_90,DAT_091a1f50), (uVar12 & 1) != 0) {
        iVar17 = (int)local_80;
        uVar1 = local_80._4_4_;
        lVar16 = FUN_03f5c394(DAT_091801b8,2);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar7 = (int)*(ulong *)(lVar16 + 0x18);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(int *)(lVar16 + 0x20) = iVar17 + -1;
        if (iVar7 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(int *)(lVar16 + 0x24) = iVar17 + 1;
        if (0 < iVar7) {
          uVar12 = 0;
          uVar10 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar9 = CookingGraph_CookingLevelSimulation__At
                              (param_1,*(undefined4 *)(lVar16 + 0x20 + uVar12 * 4),uVar1);
            if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 0x24))) {
              *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + -1;
            }
            uVar10 = (ulong)*(uint *)(lVar16 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar16 + 0x18));
        }
      }
      FUN_07188164(&local_90,DAT_091a1f48);
      uVar15 = *(undefined8 *)(lVar3 + 0x10);
      uVar4 = thunk_FUN_03f9944c(DAT_09178298);
      FUN_0530d154(uVar4,lVar2,DAT_091e7b40,0);
      uVar4 = FUN_04aee4a0(uVar15,uVar4,DAT_091ca250);
      uVar15 = thunk_FUN_03f9944c(DAT_09179d80);
      FUN_053d18e8(uVar15,uVar4,DAT_091a7ff0);
      *(undefined8 *)(lVar2 + 0x18) = uVar15;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x18),uVar15);
      uVar15 = *(undefined8 *)(lVar3 + 0x18);
      uVar4 = thunk_FUN_03f9944c(DAT_09178720);
      FUN_0531308c(uVar4,lVar2,DAT_091e7b48,0);
      uVar4 = FUN_04b0bbe8(uVar15,uVar4,DAT_091cb458);
      uVar4 = FUN_04b04494(uVar4,DAT_091cadb0);
      *(undefined8 *)(lVar2 + 0x20) = uVar4;
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_1 + 0x178) != 0) {
        uVar4 = CookingGraph_Execution_CookingExecution__get_Transfers(*(long *)(param_1 + 0x178),0)
        ;
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar11 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar16 = puVar11[0x6f];
        if (lVar16 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar11 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar15 = *puVar11;
          lVar16 = thunk_FUN_03f9944c(DAT_09178730);
          FUN_05322d94(lVar16,uVar15,DAT_091e7740,0);
          lVar9 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar9 + 0x378) = lVar16;
          thunk_FUN_03f5d7b8(lVar9 + 0x378,lVar16);
        }
        uVar4 = FUN_04b0cafc(uVar4,lVar16,DAT_091cb460);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar11 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar16 = puVar11[0x70];
        if (lVar16 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar11 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar15 = *puVar11;
          lVar16 = thunk_FUN_03f9944c(DAT_09178748);
          FUN_05323c00(lVar16,uVar15,DAT_091e7748,0);
          lVar9 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar9 + 0x380) = lVar16;
          thunk_FUN_03f5d7b8(lVar9 + 0x380,lVar16);
        }
        uVar4 = FUN_04af73b4(uVar4,lVar16,DAT_091ca398);
        uVar15 = thunk_FUN_03f9944c(DAT_09179e20);
        FUN_053e1208(uVar15,uVar4,DAT_091a8300);
        *(undefined8 *)(lVar2 + 0x28) = uVar15;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28),uVar15);
        uVar15 = *(undefined8 *)(lVar2 + 0x20);
        uVar4 = thunk_FUN_03f9944c(DAT_09178720);
        FUN_0531308c(uVar4,lVar2,DAT_091e7b50,0);
        uVar4 = FUN_04b0bbe8(uVar15,uVar4,DAT_091cb458);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar11 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar2 = puVar11[0x71];
        if (lVar2 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar11 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar15 = *puVar11;
          lVar2 = thunk_FUN_03f9944c(DAT_09178728);
          FUN_05313174(lVar2,uVar15,DAT_091e7750,0);
          lVar16 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar16 + 0x388) = lVar2;
          thunk_FUN_03f5d7b8(lVar16 + 0x388,lVar2);
        }
        uVar4 = FUN_04af0ac0(uVar4,lVar2,DAT_091ca380);
        lVar2 = FUN_04b0473c(uVar4,DAT_091cae38);
        if (lVar2 != 0) {
          if (*(long *)(lVar2 + 0x18) == 0) {
            if (*(long *)(lVar3 + 0x10) == 0) goto LAB_04450414;
            FUN_056aec8c(&local_c0,*(long *)(lVar3 + 0x10),DAT_091aaa00);
            puStack_88 = puStack_b8;
            local_90 = local_c0;
            local_80 = local_b0;
            local_c0 = 0;
            puStack_b8 = &local_90;
            while (uVar10 = FUN_07188168(&local_90,DAT_091a1f50), uVar12 = local_80,
                  (uVar10 & 1) != 0) {
              if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar2 = FUN_057e0998(*(long *)(param_1 + 0x80),local_80 & 0xffffffff,DAT_091aa7e0);
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_057e09ec(lVar2,uVar12 >> 0x20,0,DAT_091b25a0);
            }
            FUN_07188164(&local_90,DAT_091a1f48);
          }
          else {
            lVar9 = *(long *)(param_1 + 0xf0);
            lVar16 = thunk_FUN_03f9944c(DAT_0918f688);
            CookingGraph_CookingLevelSimulation_QueueHold___ctor(lVar16,0);
            uVar4 = FUN_04b083f8(*(undefined8 *)(lVar3 + 0x10),DAT_091cb0b8);
            if (lVar16 == 0) goto LAB_04450414;
            *(undefined8 *)(lVar16 + 0x10) = uVar4;
            thunk_FUN_03f5d7b8();
            uVar4 = thunk_FUN_03f9944c(DAT_09179e20);
            FUN_053e1208(uVar4,lVar2,DAT_091a8300);
            *(undefined8 *)(lVar16 + 0x18) = uVar4;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar16 + 0x18),uVar4);
            lVar2 = DAT_091b25b0;
            if (lVar9 == 0) goto LAB_04450414;
            lVar18 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_04450414;
            uVar8 = *(uint *)(lVar9 + 0x18);
            if (uVar8 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar8 + 1;
              plVar6 = (long *)(lVar18 + (long)(int)uVar8 * 8 + 0x20);
              *plVar6 = lVar16;
              thunk_FUN_03f5d7b8(plVar6,lVar16);
            }
            else {
              FUN_057e0c68(lVar9,lVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
          if ((*(long *)(param_1 + 200) != 0) &&
             (FUN_053e231c(*(long *)(param_1 + 200),*(undefined8 *)(lVar3 + 0x20),DAT_091a8338),
             lVar5 != 0)) {
            uVar8 = *(uint *)(lVar5 + 0x18);
            if (0 < (int)uVar8) {
              uVar14 = 0;
              do {
                if (uVar8 <= uVar14) {
LAB_04450410:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar2 = *(long *)(lVar5 + (long)(int)uVar14 * 8 + 0x20);
                if ((lVar2 == 0) || (lVar3 = *(long *)(lVar2 + 0x38), lVar3 == 0))
                goto LAB_04450414;
                if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
                  uVar12 = 0;
                  uVar10 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
                  do {
                    if (uVar10 <= uVar12) goto LAB_04450410;
                    CookingGraph_CookingLevelSimulation__CollectKey
                              (param_1,*(undefined4 *)(lVar3 + 0x20 + uVar12 * 4));
                    uVar10 = (ulong)*(uint *)(lVar3 + 0x18);
                    uVar12 = uVar12 + 1;
                  } while ((long)uVar12 < (long)(int)*(uint *)(lVar3 + 0x18));
                }
                if (*(char *)(lVar2 + 0x30) == '\0') {
                  lVar3 = *(long *)(param_1 + 0xd8);
                  if (lVar3 == 0) goto LAB_04450414;
                  uVar1 = *(undefined4 *)(lVar2 + 0x1c);
                  uVar12 = FUN_06ee7aac(lVar3,uVar1,&local_94,DAT_0919d990);
                  iVar17 = 1;
                  if ((uVar12 & 1) != 0) {
                    iVar17 = local_94 + 1;
                  }
                  FUN_06ee612c(lVar3,uVar1,iVar17,DAT_0919d9a8);
                }
                else {
                  CookingGraph_CookingLevelSimulation__ClearDirty(param_1,1);
                }
                uVar8 = *(uint *)(lVar5 + 0x18);
                uVar14 = uVar14 + 1;
              } while ((int)uVar14 < (int)uVar8);
            }
            CookingGraph_CookingLevelSimulation__ReleaseQueueHolds(param_1);
            CookingGraph_CookingLevelSimulation__Gravity(param_1);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = DAT_091fc1a0;
            puVar11 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar2 = puVar11[0x72];
            if (lVar2 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar11 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar15 = *puVar11;
              lVar2 = thunk_FUN_03f9944c(DAT_09179408);
              FUN_05323c00(lVar2,uVar15,DAT_091e7758,0);
              lVar3 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar3 + 0x390) = lVar2;
              thunk_FUN_03f5d7b8(lVar3 + 0x390,lVar2);
            }
            uVar15 = FUN_04af73b4(lVar5,lVar2,DAT_091ca858);
            if (param_1 != 0) {
              CookingGraph_CookingLevelSimulation__Emit(param_1,0,param_2,uVar4,uVar15);
              CookingGraph_CookingLevelSimulation__Emit(param_1,1,0xffffffff,DAT_091f5700,0);
              CookingGraph_CookingLevelSimulation__Settle(param_1);
              CookingGraph_CookingLevelSimulation__CheckEnd(param_1);
              return 1;
            }
          }
        }
      }
    }
  }
LAB_04450414:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

