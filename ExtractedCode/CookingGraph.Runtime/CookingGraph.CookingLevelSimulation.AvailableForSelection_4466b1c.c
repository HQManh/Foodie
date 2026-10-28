// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$AvailableForSelection
// address: 0x4466b1c
// body: available
// range: 0x4466b1c-0x4467253 inclusive
// range: 0x4467258-0x446725b inclusive
// range: 0x4467260-0x4467263 inclusive
// range: 0x44672b0-0x446730b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4467250 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4467258 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4467260 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44672f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44672f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44672fc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4467300 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4467308 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044672f8) */
/* WARNING: Removing unreachable block (ram,0x04467248) */

long CookingGraph_CookingLevelSimulation__AvailableForSelection(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  int local_9c;
  long *local_98;
  long local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09518050 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6848);
    FUN_03f5c2a4(&DAT_091c6690);
    FUN_03f5c2a4(&DAT_0919d990);
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_0919c1b0);
    FUN_03f5c2a4(&DAT_0919d9a8);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091ca558);
    FUN_03f5c2a4(&DAT_091ca840);
    FUN_03f5c2a4(&DAT_091cb150);
    FUN_03f5c2a4(&DAT_091cb468);
    FUN_03f5c2a4(&DAT_091cb618);
    FUN_03f5c2a4(&DAT_091a2750);
    FUN_03f5c2a4(&DAT_091a2758);
    FUN_03f5c2a4(&DAT_091a2760);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_091793d8);
    FUN_03f5c2a4(&DAT_091793d0);
    FUN_03f5c2a4(&DAT_09178ba8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091abf20);
    FUN_03f5c2a4(&DAT_091abf18);
    FUN_03f5c2a4(&DAT_091abf28);
    FUN_03f5c2a4(&DAT_091e75a8);
    FUN_03f5c2a4(&DAT_091e75b0);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518050 = 1;
  }
  local_70 = 0;
  local_98 = (long *)0x0;
  local_9c = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_091764a0);
  FUN_06ee539c(lVar2,DAT_0919d948);
  if (*(long *)(param_1 + 0x90) == 0) goto LAB_04467300;
  uVar3 = System_Linq_Enumerable__Range(0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0);
  uVar4 = thunk_FUN_03f9944c(DAT_09178ba8);
  FUN_05315970(uVar4,0,DAT_091c6848,0);
  uVar3 = FUN_04af2704(uVar3,uVar4,DAT_091ca558);
  lVar5 = FUN_04b08678(uVar3,DAT_091cb150);
  if (-1 < *(int *)(param_1 + 0x16c)) {
    CookingGraph_CookingLevelSimulation__get_BagAddress(&local_b8,param_1);
    lVar12 = DAT_091abf18;
    if (lVar5 == 0) goto LAB_04467300;
    lVar9 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_04467300;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + 0x30) = local_a8;
      *(long **)(lVar9 + 0x28) = plStack_b0;
      *(long *)(lVar9 + 0x20) = local_b8;
      thunk_FUN_03f5d7b8(lVar9 + 0x28,0);
    }
    else {
      uStack_d8 = (ulong)plStack_b0;
      local_e0 = local_b8;
      local_d0 = local_a8;
      FUN_05739aa0(lVar5,&local_e0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar3 = FUN_06e4bd5c(*(long *)(param_1 + 0xb0),DAT_0919c1b0);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar12 = puVar10[0x8c];
    if (lVar12 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar4 = *puVar10;
      lVar12 = thunk_FUN_03f9944c(DAT_091793d0);
      FUN_05322d94(lVar12,uVar4,DAT_091e75a8,0);
      lVar9 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar9 + 0x460) = lVar12;
      thunk_FUN_03f5d7b8(lVar9 + 0x460,lVar12);
    }
    uVar3 = FUN_04b0cafc(uVar3,lVar12,DAT_091cb618);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar12 = puVar10[0x8d];
    if (lVar12 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar4 = *puVar10;
      lVar12 = thunk_FUN_03f9944c(DAT_091793d8);
      FUN_0532343c(lVar12,uVar4,DAT_091e75b0,0);
      lVar9 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar9 + 0x468) = lVar12;
      thunk_FUN_03f5d7b8(lVar9 + 0x468,lVar12);
    }
    uVar3 = FUN_04af5db8(uVar3,lVar12,DAT_091ca840);
    if (lVar5 != 0) {
      FUN_05739d0c(lVar5,uVar3,DAT_091abf20);
      FUN_0573a8e0(&local_e0,lVar5,DAT_091abf28);
      plStack_b0 = &local_90;
      local_b8 = 0;
      uStack_88 = uStack_d8;
      local_90 = local_e0;
      uStack_78 = uStack_c8;
      local_80 = local_d0;
      local_70 = local_c0;
LAB_04466fcc:
      uVar6 = FUN_071997ec(&local_90,DAT_091a2758);
      lVar5 = local_b8;
      if ((uVar6 & 1) == 0) {
        FUN_071997e8(plStack_b0,DAT_091a2750);
        if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c548(lVar5);
        }
        return lVar2;
      }
      if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uStack_f8 = uStack_78;
      local_100 = local_80;
      local_f0 = local_70;
      uVar3 = CookingGraph_Execution_CookingExecution__UnitsAt
                        (*(long *)(param_1 + 0x178),&local_100,0);
      uVar4 = thunk_FUN_03f9944c(DAT_09178768);
      FUN_053136a4(uVar4,param_1,DAT_091c6690,0);
      plVar7 = (long *)FUN_04b0beec(uVar3,uVar4,DAT_091cb468);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917a480) {
            puVar10 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_044670ac;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a480,0);
LAB_044670ac:
      local_98 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
      do {
        plVar7 = local_98;
        if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *local_98;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185b10) {
              puVar10 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04467118;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(local_98,DAT_09185b10,0);
LAB_04467118:
        uVar6 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        plVar7 = local_98;
        if ((uVar6 & 1) == 0) goto LAB_044671c8;
        if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *local_98;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917ab28) {
              puVar10 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0446717c;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(local_98,DAT_0917ab28,0);
LAB_0446717c:
        (*(code *)*puVar10)(&local_e0,plVar7,puVar10[1]);
        uVar6 = uStack_d8;
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar8 = FUN_06ee7aac(lVar2,uStack_d8 & 0xffffffff,&local_9c,DAT_0919d990);
        iVar13 = 1;
        if ((uVar8 & 1) != 0) {
          iVar13 = local_9c + 1;
        }
        FUN_06ee612c(lVar2,uVar6 & 0xffffffff,iVar13,DAT_0919d9a8);
      } while( true );
    }
  }
LAB_04467300:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_044671c8:
  if (local_98 != (long *)0x0) {
    lVar5 = *local_98;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185a58) {
          puVar10 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04467230;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(local_98,DAT_09185a58,0);
LAB_04467230:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  goto LAB_04466fcc;
}

