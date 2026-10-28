// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<AssemblySources>d__106$$MoveNext
// address: 0x4495990
// body: available
// range: 0x4495990-0x4495c87 inclusive
// range: 0x4495cbc-0x4496033 inclusive
// range: 0x44960a4-0x44960b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4495bfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4495c7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4495c80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4495c84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4495f50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496018 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449601c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496020 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496024 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4496028 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449602c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingLevelSimulation_<AssemblySources>d__106__MoveNext(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long local_48;
  
  local_48 = param_1;
  if ((DAT_09518193 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6848);
    FUN_03f5c2a4(&DAT_091c6688);
    FUN_03f5c2a4(&DAT_091ca558);
    FUN_03f5c2a4(&DAT_091cb150);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_091a2758);
    FUN_03f5c2a4(&DAT_091a2760);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178ba8);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091abf18);
    FUN_03f5c2a4(&DAT_091abf28);
    FUN_03f5c2a4(&DAT_091bec10);
    DAT_09518193 = 1;
  }
  plStack_70 = &local_48;
  lVar12 = *(long *)(param_1 + 0x50);
  local_78 = 0;
  if (*(int *)(param_1 + 0x10) == 1) goto LAB_04495e30;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar12 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = System_Linq_Enumerable__Range(0,*(undefined4 *)(*(long *)(lVar12 + 0x90) + 0x18),0);
    uVar5 = thunk_FUN_03f9944c(DAT_09178b98);
    FUN_05315754(uVar5,lVar12,DAT_091c6688,0);
    uVar4 = FUN_04b0c1f0(uVar4,uVar5,DAT_091cb4e8);
    uVar5 = thunk_FUN_03f9944c(DAT_09178ba8);
    FUN_05315970(uVar5,0,DAT_091c6848,0);
    uVar4 = FUN_04af2704(uVar4,uVar5,DAT_091ca558);
    lVar6 = FUN_04b08678(uVar4,DAT_091cb150);
    if (*(int *)(lVar12 + 0x16c) < 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    else {
      CookingGraph_CookingLevelSimulation__get_BagAddress(&local_150,lVar12,0);
      lVar2 = DAT_091abf18;
      uStack_88 = uStack_148;
      local_90 = local_150;
      local_80 = local_140;
      if (lVar6 == 0) {
LAB_04495c7c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_04495c7c;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + 0x28) = uStack_148;
        *(undefined8 *)(lVar10 + 0x20) = local_150;
        *(undefined8 *)(lVar10 + 0x30) = local_140;
        thunk_FUN_03f5d7b8(lVar10 + 0x28,0);
      }
      else {
        FUN_05739aa0(lVar6,&local_150,
                     *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0573a8e0(&local_c0,lVar6,DAT_091abf28);
    local_130 = local_a0;
    uStack_148 = uStack_b8;
    local_150 = local_c0;
    uStack_138 = uStack_a8;
    local_140 = local_b0;
    *(undefined8 *)(local_48 + 0x60) = uStack_b8;
    *(undefined8 *)(local_48 + 0x58) = local_c0;
    *(undefined8 *)(local_48 + 0x70) = uStack_a8;
    *(undefined8 *)(local_48 + 0x68) = local_b0;
    *(undefined8 *)(local_48 + 0x78) = local_a0;
    thunk_FUN_03f5d7b8(local_48 + 0x58,0);
    *(undefined4 *)(local_48 + 0x10) = 0xfffffffd;
LAB_04495cbc:
    uVar7 = FUN_071997ec(local_48 + 0x58,DAT_091a2758);
    if ((uVar7 & 1) != 0) {
      *(undefined8 *)(local_48 + 0x88) = *(undefined8 *)(local_48 + 0x70);
      *(undefined8 *)(local_48 + 0x80) = *(undefined8 *)(local_48 + 0x68);
      *(undefined8 *)(local_48 + 0x90) = *(undefined8 *)(local_48 + 0x78);
      thunk_FUN_03f5d7b8(local_48 + 0x88,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uStack_d8 = *(undefined8 *)(local_48 + 0x88);
      local_e0 = *(undefined8 *)(local_48 + 0x80);
      local_d0 = *(undefined8 *)(local_48 + 0x90);
      uVar7 = CookingGraph_CookingLevelSimulation__Outgoing(lVar12,&local_e0,0);
      if ((uVar7 & 1) != 0) goto code_r0x04495d1c;
      goto LAB_04495d4c;
    }
    CookingGraph_CookingLevelSimulation_<AssemblySources>d__106__<>m__Finally1();
    uVar4 = 0;
    *(undefined8 *)(local_48 + 0x78) = 0;
    *(undefined8 *)(local_48 + 0x60) = 0;
    *(undefined8 *)(local_48 + 0x58) = 0;
    *(undefined8 *)(local_48 + 0x70) = 0;
    *(undefined8 *)(local_48 + 0x68) = 0;
  }
  else {
    uVar4 = 0;
  }
LAB_04495ff0:
  lVar12 = local_78;
  if (local_78 == 0) {
    return uVar4;
  }
  FUN_039b99a8(&plStack_70);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548(lVar12);
code_r0x04495d1c:
  if (*(long *)(lVar12 + 0x180) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *(long *)(*(long *)(lVar12 + 0x180) + 0x48);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(char *)(lVar6 + 0x13) != '\0') && (*(int *)(local_48 + 0x80) == 3)) {
LAB_04495d4c:
    uStack_f8 = *(undefined8 *)(local_48 + 0x88);
    local_100 = *(undefined8 *)(local_48 + 0x80);
    local_f0 = *(undefined8 *)(local_48 + 0x90);
    uVar7 = CookingGraph_CookingLevelSimulation__Incoming(lVar12,&local_100,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(lVar12 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uStack_118 = *(undefined8 *)(local_48 + 0x88);
      local_120 = *(undefined8 *)(local_48 + 0x80);
      local_110 = *(undefined8 *)(local_48 + 0x90);
      plVar8 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                 (*(long *)(lVar12 + 0x178),&local_120);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917a480) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04495e10;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a480,0);
LAB_04495e10:
      uVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      *(undefined8 *)(local_48 + 0x98) = uVar4;
      thunk_FUN_03f5d7b8();
      param_1 = local_48;
LAB_04495e30:
      plVar8 = *(long **)(param_1 + 0x98);
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185b10) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04495e9c;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_04495e9c:
        uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar7 & 1) == 0) goto LAB_04495f54;
        plVar8 = *(long **)(local_48 + 0x98);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917ab28) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04495f08;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917ab28,0);
LAB_04495f08:
        (*(code *)*puVar9)(&local_150,plVar8,puVar9[1]);
        uVar5 = local_140;
        uVar4 = local_150;
        if (uStack_148._4_4_ == 0) {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(lVar12 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = (undefined4)uStack_148;
          uVar7 = CookingGraph_Execution_CookingExecution__IsUnitClaimed
                            (*(long *)(lVar12 + 0x178),local_150);
          if ((uVar7 & 1) == 0) {
            uStack_b8 = *(undefined8 *)(local_48 + 0x88);
            local_c0 = *(undefined8 *)(local_48 + 0x80);
            local_b0 = *(undefined8 *)(local_48 + 0x90);
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = 0;
            uStack_148 = 0;
            local_150 = 0;
            local_68 = uVar4;
            local_60 = uVar3;
            uStack_5c = 0;
            local_58 = uVar5;
            FUN_066bb1a4(&local_150,&local_c0,&local_68,DAT_091bec10);
            *(undefined8 *)(local_48 + 0x20) = uStack_148;
            *(undefined8 *)(local_48 + 0x18) = local_150;
            *(undefined8 *)(local_48 + 0x30) = uStack_138;
            *(undefined8 *)(local_48 + 0x28) = local_140;
            *(undefined8 *)(local_48 + 0x40) = uStack_128;
            *(undefined8 *)(local_48 + 0x38) = local_130;
            thunk_FUN_03f5d7b8(local_48 + 0x20,0);
            uVar4 = 1;
            *(undefined4 *)(local_48 + 0x10) = 1;
            goto LAB_04495ff0;
          }
        }
        plVar8 = *(long **)(local_48 + 0x98);
      } while( true );
    }
  }
  goto LAB_04495cbc;
LAB_04495f54:
  CookingGraph_CookingLevelSimulation_<AssemblySources>d__106__<>m__Finally2();
  *(undefined8 *)(local_48 + 0x98) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(local_48 + 0x98),0);
  *(undefined8 *)(local_48 + 0x88) = 0;
  *(undefined8 *)(local_48 + 0x90) = 0;
  *(undefined8 *)(local_48 + 0x80) = 0;
  goto LAB_04495cbc;
}

