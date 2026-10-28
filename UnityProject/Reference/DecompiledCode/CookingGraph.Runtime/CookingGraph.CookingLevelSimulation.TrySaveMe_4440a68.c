// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$TrySaveMe
// address: 0x4440a68
// body: available
// range: 0x4440a68-0x444141b inclusive
// range: 0x444145c-0x444156f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44412fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4441410 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4441414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4441418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4441564 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444156c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04441568) */
/* WARNING: Removing unreachable block (ram,0x04441380) */

undefined4 CookingGraph_CookingLevelSimulation__TrySaveMe(long param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  long *local_140;
  long **pplStack_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long *local_f0;
  long **pplStack_e8;
  long *local_d0;
  long **pplStack_c8;
  long *local_b0;
  long **pplStack_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  long *local_90;
  long **pplStack_88;
  ulong local_80;
  long *local_70;
  int local_64;
  
  if ((DAT_0951801d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6810);
    FUN_03f5c2a4(&DAT_091c6818);
    FUN_03f5c2a4(&DAT_09182e08);
    FUN_03f5c2a4(&DAT_0917fda0);
    FUN_03f5c2a4(&DAT_0919e468);
    FUN_03f5c2a4(&DAT_0919e470);
    FUN_03f5c2a4(&DAT_091c9428);
    FUN_03f5c2a4(&DAT_091ca970);
    FUN_03f5c2a4(&DAT_091cace0);
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_091a34b8);
    FUN_03f5c2a4(&DAT_091a34c0);
    FUN_03f5c2a4(&DAT_091a34c8);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_091786b0);
    FUN_03f5c2a4(&DAT_09178b50);
    FUN_03f5c2a4(&DAT_091a82b8);
    FUN_03f5c2a4(&DAT_091a82c8);
    FUN_03f5c2a4(&DAT_091a8330);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a828);
    FUN_03f5c2a4(&DAT_0917af28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091add58);
    FUN_03f5c2a4(&DAT_091add50);
    FUN_03f5c2a4(&DAT_091add38);
    FUN_03f5c2a4(&DAT_0917c528);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091e79f8);
    FUN_03f5c2a4(&DAT_091e7f10);
    FUN_03f5c2a4(&DAT_0918f5f0);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_0951801d = 1;
  }
  local_64 = 0;
  local_70 = (long *)0x0;
  local_90 = (long *)0x0;
  pplStack_88 = (long **)0x0;
  local_80 = 0;
  local_98 = 0;
  uVar7 = CookingGraph_CookingLevelSimulation__CanSaveMe(param_1);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  lVar8 = thunk_FUN_03f9944c(DAT_0917c528);
  FUN_0579bb80(lVar8,DAT_091add38);
  iVar1 = *(int *)(param_1 + 0x18c);
  if (iVar1 - 2U < 2) {
    lVar9 = thunk_FUN_03f9944c(DAT_0918f5f0);
    CookingGraph_CookingLevelSimulation_<>c__DisplayClass89_0___ctor(lVar9,0);
    if (lVar9 == 0) goto LAB_04441564;
    *(long *)(lVar9 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar9 + 0x18),param_1);
    uVar10 = CookingGraph_CookingLevelSimulation__GridRescueCells(param_1);
    uVar11 = thunk_FUN_03f9944c(DAT_09178b50);
    FUN_0531612c(uVar11,param_1,DAT_091c6810,0);
    uVar10 = FUN_04afa710(uVar10,uVar11,DAT_091ca970);
    lVar12 = FUN_04b03fcc(uVar10,DAT_091cace0);
    plVar16 = (long *)(lVar9 + 0x10);
    *plVar16 = lVar12;
    thunk_FUN_03f5d7b8(plVar16,lVar12);
    if (*(char *)(param_1 + 0x121) != '\0') {
      CookingGraph_CookingLevelSimulation__CleanTable(param_1,1);
    }
    if (*plVar16 == 0) goto LAB_04441564;
    if ((*(long *)(*plVar16 + 0x18) != 0) && (*(int *)(param_1 + 0x16c) < 0)) {
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_04441564;
      uVar10 = System_Linq_Enumerable__Range(0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0);
      uVar11 = thunk_FUN_03f9944c(DAT_09178b98);
      FUN_05315754(uVar11,lVar9,DAT_091e7f10,0);
      uVar10 = FUN_04b0c1f0(uVar10,uVar11,DAT_091cb4e8);
      uVar5 = System_Linq_Enumerable__Max(uVar10,0);
      *(undefined4 *)(param_1 + 0x16c) = uVar5;
      if ((*(long *)(param_1 + 0x178) == 0) ||
         (lVar9 = CookingGraph_Execution_CookingExecution__ReadSnapshot
                            (*(long *)(param_1 + 0x178),0), lVar9 == 0)) goto LAB_04441564;
      uVar11 = *(undefined8 *)(lVar9 + 0x28);
      uVar10 = thunk_FUN_03f9944c(DAT_091786b0);
      FUN_05322d94(uVar10,param_1,DAT_091c6818,0);
      uVar7 = FUN_04ab6f28(uVar11,uVar10,DAT_091c9428);
      if ((uVar7 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x178);
        CookingGraph_CookingLevelSimulation__get_BagAddress(&local_b0,param_1);
        if (lVar9 == 0) goto LAB_04441564;
        pplStack_c8 = pplStack_a8;
        local_d0 = local_b0;
        CookingGraph_Execution_CookingExecution__RegisterInventory(lVar9,&local_d0,0x7fffffff,0,0);
      }
    }
    lVar9 = *plVar16;
    if (lVar9 == 0) goto LAB_04441564;
    uVar2 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar2) {
      uVar18 = 0;
      do {
        if (uVar2 <= uVar18) {
LAB_04441410:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar8 == 0) goto LAB_04441564;
        lVar12 = lVar9 + (long)(int)uVar18 * 0x20;
        lVar13 = *(long *)(lVar8 + 0x10);
        uVar5 = *(undefined4 *)(lVar12 + 0x20);
        uVar10 = *(undefined8 *)(lVar12 + 0x28);
        uVar2 = *(uint *)(lVar12 + 0x30);
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_04441564;
        uVar4 = *(uint *)(lVar8 + 0x18);
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar4 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20) = uVar10;
        }
        else {
          FUN_0579c40c(lVar8,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_091add50 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(param_1 + 200) == 0) goto LAB_04441564;
        FUN_053e19f4(*(long *)(param_1 + 200),uVar10,DAT_091a8330);
        lVar12 = *(long *)(param_1 + 0x178);
        CookingGraph_CookingLevelSimulation__GridAddress(&local_b0,uVar5);
        if (lVar12 == 0) goto LAB_04441564;
        pplStack_e8 = pplStack_a8;
        local_f0 = local_b0;
        CookingGraph_Execution_CookingExecution__Consume(lVar12,&local_f0,uVar10,0);
        if (*(long *)(param_1 + 0xd0) == 0) goto LAB_04441564;
        uVar7 = FUN_06f4de70(*(long *)(param_1 + 0xd0),uVar10,&local_64,DAT_0919e470);
        iVar6 = local_64;
        if ((uVar7 & 1) == 0) {
          iVar6 = 0;
        }
        if (*(long *)(param_1 + 0xd0) == 0) goto LAB_04441564;
        FUN_06f4d858(*(long *)(param_1 + 0xd0),uVar10,DAT_0919e468);
        if ((*(long *)(param_1 + 0x78) == 0) ||
           (lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0x70), lVar12 == 0)) goto LAB_04441564;
        if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_04441410;
        iVar3 = *(int *)(lVar12 + (long)(int)uVar2 * 4 + 0x20);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar6 = System_Math__Max(0,iVar3 - iVar6,0);
        if ((*(long *)(param_1 + 0x78) == 0) ||
           (lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0x68), lVar12 == 0)) goto LAB_04441564;
        if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_04441410;
        if (0 < iVar6) {
          uVar5 = *(undefined4 *)(lVar12 + (long)(int)uVar2 * 4 + 0x20);
          do {
            lVar17 = *(long *)(param_1 + 0x178);
            CookingGraph_CookingLevelSimulation__get_BagAddress(&local_b0,param_1);
            lVar12 = FUN_03f5c394(DAT_0917fda0,1);
            lVar13 = *(long *)(param_1 + 0x158);
            uStack_120 = 0;
            local_118 = 0;
            *(long *)(param_1 + 0x158) = lVar13 + 1;
            local_128 = 0;
            CookingGraph_Execution_CookingUnit___ctor(&local_128,lVar13,uVar5,0,1,0);
            uStack_108 = uStack_120;
            local_110 = local_128;
            local_100 = local_118;
            if (lVar12 == 0) goto LAB_04441564;
            if (*(int *)(lVar12 + 0x18) == 0) goto LAB_04441410;
            *(undefined8 *)(lVar12 + 0x28) = uStack_120;
            *(undefined8 *)(lVar12 + 0x20) = local_128;
            *(undefined8 *)(lVar12 + 0x30) = local_118;
            if (lVar17 == 0) goto LAB_04441564;
            pplStack_138 = pplStack_a8;
            local_140 = local_b0;
            CookingGraph_Execution_CookingExecution__Produce(lVar17,&local_140,lVar12,0);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar2 = *(uint *)(lVar9 + 0x18);
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)uVar2);
    }
  }
  else {
    if (iVar1 == 4) {
      uVar10 = *(undefined8 *)(param_1 + 0x98);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar14 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar9 = puVar14[0x43];
      if (lVar9 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar14 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar11 = *puVar14;
        lVar9 = thunk_FUN_03f9944c(DAT_09179390);
        FUN_05322d94(lVar9,uVar11,DAT_091e79f8,0);
        lVar12 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar12 + 0x218) = lVar9;
        thunk_FUN_03f5d7b8(lVar12 + 0x218,lVar9);
      }
      plVar16 = (long *)FUN_04b0cafc(uVar10,lVar9,DAT_091cb610);
      if (plVar16 != (long *)0x0) {
        lVar9 = *plVar16;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_0917a828) {
              puVar14 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_044411fc;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar14 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917a828,0);
LAB_044411fc:
        plVar16 = (long *)(*(code *)*puVar14)(plVar16,puVar14[1]);
        pplStack_a8 = &local_70;
        local_b0 = (long *)0x0;
        do {
          local_70 = plVar16;
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *plVar16;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == DAT_09185b10) {
                puVar14 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_04441278;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar14 = (undefined8 *)FUN_03f95da8(plVar16,DAT_09185b10,0);
LAB_04441278:
          uVar7 = (*(code *)*puVar14)(plVar16,puVar14[1]);
          plVar16 = local_70;
          if ((uVar7 & 1) == 0) {
            if (local_70 == (long *)0x0) goto LAB_04441374;
            lVar9 = *local_70;
            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar7 == 0) goto LAB_0444134c;
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_04441334;
          }
          if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *local_70;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == DAT_0917af28) {
                puVar14 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_044412dc;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar14 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917af28,0);
LAB_044412dc:
          lVar9 = (*(code *)*puVar14)(plVar16,puVar14[1]);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar9 + 0x28);
          plVar16 = local_70;
        } while( true );
      }
      goto LAB_04441564;
    }
    uVar7 = CookingGraph_CookingLevelSimulation__RecoverDeadlock(param_1,1,&local_98);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    if (lVar8 == 0) goto LAB_04441564;
    FUN_0579c618(lVar8,local_98,DAT_091add58);
  }
  goto LAB_04441490;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar15 = piVar15 + 4;
    if (uVar7 == 0) break;
LAB_04441334:
    if (*(long *)(piVar15 + -2) == DAT_09185a58) {
      puVar14 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_04441368;
    }
  }
LAB_0444134c:
  puVar14 = (undefined8 *)FUN_03f95da8(local_70,DAT_09185a58,0);
LAB_04441368:
  (*(code *)*puVar14)(plVar16,puVar14[1]);
LAB_04441374:
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_04441564;
  FUN_053d79cc(&local_b0,*(long *)(param_1 + 0x50),DAT_091a82c8);
  local_80 = CONCAT44(uStack_9c,local_a0);
  pplStack_88 = pplStack_a8;
  local_90 = local_b0;
  local_b0 = (long *)0x0;
  pplStack_a8 = &local_90;
  while (uVar7 = FUN_071ad430(&local_90,DAT_091a34c0), (uVar7 & 1) != 0) {
    CookingGraph_CookingLevelSimulation__Emit(param_1,0xe,local_80 & 0xffffffff,DAT_091f5700,0);
  }
  FUN_071ad42c(&local_90,DAT_091a34b8);
LAB_04441490:
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(byte *)(param_1 + 0x38) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_04441564;
    FUN_053d74ac(*(long *)(param_1 + 0x50),DAT_091a82b8);
  }
  local_b0 = DAT_09182e08;
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  pplStack_a8 = (long **)0xffffffffffffffff;
  local_a0 = iVar1;
  uVar10 = System_Enum__ToString(&local_b0,0);
  CookingGraph_CookingLevelSimulation__Emit(param_1,10,0xffffffff,uVar10,lVar8);
  if ((param_2 & 1) == 0) {
    if ((*(long *)(param_1 + 0x180) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar8 == 0)) {
LAB_04441564:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar8 + 0x13) != '\0') {
      CookingGraph_CookingLevelSimulation__Settle(param_1);
      CookingGraph_CookingLevelSimulation__CheckEnd(param_1);
    }
  }
  return 1;
}

