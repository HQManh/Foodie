// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PreMerge
// address: 0x445b99c
// body: available
// range: 0x445b99c-0x445c83f inclusive
// range: 0x445c95c-0x445cc2f inclusive
// range: 0x445cc58-0x445cc5b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445c5d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445c5ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445c604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445c61c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445c634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445c690 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445c6a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445c6c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445c6d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445c6f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445c708 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445c720 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__PreMerge(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  long local_290;
  long **pplStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  long local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  long local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long lStack_1e8;
  uint local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  long local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  long local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  long local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long local_150;
  long local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long *local_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f0;
  long **pplStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_0951802d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6868);
    FUN_03f5c2a4(&DAT_0917fda0);
    FUN_03f5c2a4(&DAT_091c9bf8);
    FUN_03f5c2a4(&DAT_091c9b18);
    FUN_03f5c2a4(&DAT_091ca108);
    FUN_03f5c2a4(&DAT_091ca498);
    FUN_03f5c2a4(&DAT_091cad50);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cacd8);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_09178208);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09179358);
    FUN_03f5c2a4(&DAT_09179740);
    FUN_03f5c2a4(&DAT_0918f668);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_091a8330);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a820);
    FUN_03f5c2a4(&DAT_0917af20);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ac090);
    FUN_03f5c2a4(&DAT_091b2520);
    FUN_03f5c2a4(&DAT_091b2530);
    FUN_03f5c2a4(&DAT_091b2538);
    FUN_03f5c2a4(&DAT_091ac088);
    FUN_03f5c2a4(&DAT_091b2560);
    FUN_03f5c2a4(&DAT_0917bf78);
    FUN_03f5c2a4(&DAT_091b76c8);
    FUN_03f5c2a4(&DAT_091b6b88);
    FUN_03f5c2a4(&DAT_091b6b90);
    FUN_03f5c2a4(&DAT_091b76d0);
    FUN_03f5c2a4(&DAT_0918f690);
    FUN_03f5c2a4(&DAT_09180970);
    FUN_03f5c2a4(&DAT_091e7ab0);
    FUN_03f5c2a4(&DAT_091e7ab8);
    FUN_03f5c2a4(&DAT_091e7ac0);
    FUN_03f5c2a4(&DAT_091e7ac8);
    FUN_03f5c2a4(&DAT_0918f2e0);
    FUN_03f5c2a4(&DAT_0921c830);
    DAT_0951802d = 1;
  }
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_78 = 0;
  local_70 = 0;
  local_120 = 0;
  local_118 = (long *)0x0;
  local_130 = 0;
  uStack_128 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_150 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar7 = FUN_057e28a4(*(long *)(param_1 + 0x60),DAT_091b2538), lVar7 != 0)) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar19 = 0;
      uVar13 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar19) goto LAB_0445cc00;
        lVar16 = *(long *)(lVar7 + 0x20 + uVar19 * 8);
        lVar8 = CookingGraph_CookingLevelSimulation__GridAssemblyState(param_1,lVar16);
        if (lVar8 == 0) goto LAB_0445cbe8;
        uVar13 = CookingGraph_Execution_CookingAssemblySnapshot__get_Complete(lVar8,0);
        if ((uVar13 & 1) != 0) {
          if (lVar16 == 0) goto LAB_0445cbe8;
          CookingGraph_CookingLevelSimulation__GridAddress(&local_b0,*(undefined4 *)(lVar16 + 0x10))
          ;
          uStack_108 = CONCAT44(uStack_a4,uStack_a8);
          local_100 = CONCAT44(uStack_9c,uStack_a0);
          local_110 = local_b0;
          if (*(long *)(param_1 + 0x178) == 0) goto LAB_0445cbe8;
          uStack_1a8 = CONCAT44(uStack_a4,uStack_a8);
          local_1a0 = CONCAT44(uStack_9c,uStack_a0);
          local_1b0 = local_b0;
          uVar13 = CookingGraph_Execution_CookingExecution__Consume
                             (*(long *)(param_1 + 0x178),&local_1b0,*(undefined8 *)(lVar16 + 0x18),0
                             );
          if ((uVar13 & 1) == 0) {
            thunk_FUN_03fc39d4(&DAT_091870e0);
            uVar10 = thunk_FUN_03f9944c();
            uVar15 = thunk_FUN_03fc39d4(&DAT_092071c0);
            System_InvalidOperationException___ctor(uVar10,uVar15,0);
            uVar15 = thunk_FUN_03fc39d4(&DAT_091c6860);
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar10,uVar15);
            }
            goto LAB_0445cc58;
          }
          if (*(long *)(lVar16 + 0x28) == 0) goto LAB_0445cbe8;
          lVar8 = *(long *)(param_1 + 0x158);
          uVar5 = *(undefined4 *)(*(long *)(lVar16 + 0x28) + 0x14);
          uStack_a0 = 0;
          uStack_9c = 0;
          *(long *)(param_1 + 0x158) = lVar8 + 1;
          local_b0 = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          CookingGraph_Execution_CookingUnit___ctor(&local_b0,lVar8,uVar5,0,1,0);
          uVar2 = uStack_a8;
          lVar8 = local_b0;
          local_78 = CONCAT44(uStack_a0,uStack_a4);
          lVar18 = *(long *)(param_1 + 0x178);
          local_70 = uStack_9c;
          lVar9 = FUN_03f5c394(DAT_0917fda0,1);
          if (lVar9 == 0) goto LAB_0445cbe8;
          if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0445cc00;
          *(long *)(lVar9 + 0x20) = lVar8;
          *(uint *)(lVar9 + 0x28) = uVar2;
          *(undefined8 *)(lVar9 + 0x2c) = local_78;
          *(undefined4 *)(lVar9 + 0x34) = local_70;
          if (lVar18 == 0) goto LAB_0445cbe8;
          uStack_1c8 = uStack_108;
          local_1d0 = local_110;
          local_1c0 = local_100;
          CookingGraph_Execution_CookingExecution__Produce(lVar18,&local_1d0,lVar9,0);
          local_1dc = local_78;
          local_1d4 = local_70;
          uStack_1f8 = uStack_108;
          local_200 = local_110;
          local_1f0 = local_100;
          lStack_1e8 = lVar8;
          local_1e0 = uVar2;
          CookingGraph_CookingLevelSimulation__RecordGridArrival(param_1,&lStack_1e8,&local_200);
          if ((*(long *)(param_1 + 0x78) == 0) ||
             (lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x58), lVar9 == 0)) goto LAB_0445cbe8;
          if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_0445cc00;
          if (*(char *)(lVar9 + (int)uVar2 + 0x20) == '\0') {
            if (*(long *)(param_1 + 200) == 0) goto LAB_0445cbe8;
            FUN_053e230c(*(long *)(param_1 + 200),lVar8,DAT_091a8308);
          }
          if (*(long *)(param_1 + 0x178) == 0) goto LAB_0445cbe8;
          CookingGraph_Execution_CookingExecution__RemoveGridAssembly
                    (*(long *)(param_1 + 0x178),*(undefined8 *)(lVar16 + 0x20),0);
          if (*(long *)(param_1 + 0x60) == 0) goto LAB_0445cbe8;
          FUN_057e2274(*(long *)(param_1 + 0x60),lVar16,DAT_091b2530);
          *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
          *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
        }
        uVar13 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar19 = uVar19 + 1;
      } while ((long)uVar19 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x40);
      uVar10 = thunk_FUN_03f9944c(DAT_09179358);
      FUN_05324070(uVar10,param_1,DAT_091c6868,0);
      if (*(int *)(DAT_0918f690 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar11 = (long *)FUN_04aeafe8(uVar15,uVar10,**(undefined8 **)(DAT_0918f690 + 0xb8),
                                     DAT_091ca108);
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        uVar19 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar19 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == DAT_0917a820) {
              puVar12 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0445bf00;
            }
            uVar19 = uVar19 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a820,0);
LAB_0445bf00:
        plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        pplStack_288 = &local_118;
        local_290 = 0;
joined_r0x0445bf18:
        local_118 = plVar11;
        if (plVar11 != (long *)0x0) {
          lVar7 = *plVar11;
          uVar19 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar19 != 0) {
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == DAT_09185b10) {
                puVar12 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0445bf8c;
              }
              uVar19 = uVar19 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_0445bf8c:
          uVar19 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if ((uVar19 & 1) == 0) {
            plVar11 = *pplStack_288;
            if (plVar11 == (long *)0x0) goto LAB_0445c9c8;
            lVar7 = *plVar11;
            uVar19 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar19 == 0) goto LAB_0445c9a0;
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_0445c988;
          }
          lVar7 = thunk_FUN_03f9944c(DAT_0918f2e0);
          CookingGraph_CookingLevelSimulation_<>c__DisplayClass109_0___ctor(lVar7,0);
          if (lVar7 == 0) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_0445cc58;
          }
          *(long *)(lVar7 + 0x58) = param_1;
          thunk_FUN_03f5d7b8((long *)(lVar7 + 0x58),param_1);
          plVar11 = local_118;
          if (local_118 == (long *)0x0) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_0445cc58;
          }
          lVar8 = *local_118;
          uVar19 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar19 != 0) {
            piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == DAT_0917af20) {
                puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0445c018;
              }
              uVar19 = uVar19 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_03f95da8(local_118,DAT_0917af20,0);
LAB_0445c018:
          lVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          plVar17 = (long *)(lVar7 + 0x10);
          *plVar17 = lVar8;
          thunk_FUN_03f5d7b8(plVar17);
          uVar19 = CookingGraph_CookingLevelSimulation__OutputNeeded(param_1,*plVar17,0,0,0);
          plVar11 = local_118;
          if ((uVar19 & 1) != 0) {
            uVar10 = CookingGraph_CookingLevelSimulation__GridAssemblyDependencies(param_1,*plVar17)
            ;
            *(undefined8 *)(lVar7 + 0x18) = uVar10;
            thunk_FUN_03f5d7b8();
            if (*plVar17 == 0) {
              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_0445cc58;
            }
            lVar8 = *(long *)(*plVar17 + 0x30);
            if (lVar8 == 0) {
              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_0445cc58;
            }
            uVar10 = System_Linq_Enumerable__Range(0,*(undefined4 *)(lVar8 + 0x18),0);
            uVar15 = thunk_FUN_03f9944c(DAT_09178b98);
            FUN_05315754(uVar15,lVar7,DAT_091e7ab0,0);
            uVar10 = FUN_04b0c1f0(uVar10,uVar15,DAT_091cb4e8);
            uVar10 = FUN_04b0462c(uVar10,DAT_091cae30);
            puVar12 = (undefined8 *)(lVar7 + 0x20);
            *puVar12 = uVar10;
            thunk_FUN_03f5d7b8(puVar12);
            uVar10 = CookingGraph_CookingLevelSimulation__AssemblySources(param_1);
            uVar15 = thunk_FUN_03f9944c(DAT_09178208);
            FUN_0530bff4(uVar15,lVar7,DAT_091e7ab8,0);
            FUN_04ae5254(&local_f0,uVar10,uVar15,DAT_091c9bf8);
            uStack_88 = uStack_c8;
            local_90 = local_d0;
            uStack_a8 = (uint)pplStack_e8;
            uStack_a4 = (undefined4)((ulong)pplStack_e8 >> 0x20);
            local_b0 = local_f0;
            uStack_98 = uStack_d8;
            uStack_a0 = (undefined4)local_e0;
            uStack_9c = (undefined4)((ulong)local_e0 >> 0x20);
            *(long ***)(lVar7 + 0x30) = pplStack_e8;
            *(long *)(lVar7 + 0x28) = local_f0;
            *(undefined8 *)(lVar7 + 0x40) = uStack_d8;
            *(undefined8 *)(lVar7 + 0x38) = local_e0;
            *(undefined8 *)(lVar7 + 0x50) = uStack_c8;
            *(undefined8 *)(lVar7 + 0x48) = local_d0;
            thunk_FUN_03f5d7b8(lVar7 + 0x30,0);
            plVar11 = local_118;
            if (*(long *)(lVar7 + 0x40) != 0) {
              uVar15 = *puVar12;
              uVar10 = thunk_FUN_03f9944c(DAT_09178b98);
              FUN_05315754(uVar10,lVar7,DAT_091e7ac0,0);
              uVar4 = FUN_04ae2e30(uVar15,uVar10,DAT_091c9b18);
              uVar5 = *(undefined4 *)(lVar7 + 0x48);
              lVar8 = FUN_03f5c394(DAT_09180970,1);
              if (lVar8 == 0) {
                if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_0445cc58;
              }
              if (*(int *)(lVar8 + 0x18) == 0) {
                if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                goto LAB_0445cc58;
              }
              *(long *)(lVar8 + 0x20) = *plVar17;
              thunk_FUN_03f5d7b8();
              uVar19 = CookingGraph_CookingLevelSimulation__PreferDirectServing
                                 (param_1,uVar5,lVar8,0,0);
              plVar11 = local_118;
              if ((uVar19 & 1) == 0) {
                CookingGraph_CookingLevelSimulation__RouteProcess
                          (&local_b0,param_1,*(undefined4 *)(lVar7 + 0x48),0,0,0,0);
                uStack_128 = CONCAT44(uStack_a4,uStack_a8);
                local_120 = CONCAT44(uStack_9c,uStack_a0);
                local_130 = local_b0;
                lVar8 = local_130;
                local_130._0_1_ = (char)local_b0;
                bVar1 = (char)local_130 != '\0';
                local_130 = lVar8;
                if ((bVar1) && (lVar8 = FUN_05c3c1f8(&local_130,DAT_091b76d0), lVar8 != 0)) {
                  FUN_05c3c1f8(&local_130,DAT_091b76d0);
                  if (-1 < extraout_x1) {
                    FUN_05c3c1f8(&local_130,DAT_091b76d0);
                    FUN_05c3c1f8(&local_130,DAT_091b76d0);
                    FUN_05c3c1f8(&local_130,DAT_091b76d0);
                    uVar5 = CookingGraph_CookingLevelSimulation__LaneOf
                                      (param_1,extraout_x1_01 & 0xffffffff,extraout_x1_02 >> 0x20);
                    lVar8 = CookingGraph_CookingLevelSimulation__LaneOccupants
                                      (param_1,extraout_x1_00 & 0xffffffff,uVar5,0,0);
                    if (lVar8 == 0) {
                      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0445cc58;
                    }
                    plVar11 = local_118;
                    if (0 < *(int *)(lVar8 + 0x18)) goto joined_r0x0445bf18;
                  }
                  uVar10 = FUN_05c3c1f8(&local_130,DAT_091b76d0);
                  uVar10 = CookingGraph_CookingLevelSimulation__ProcessFulfillmentPriority
                                     (param_1,uVar10);
                  uVar15 = CookingGraph_CookingLevelSimulation__ProcessFulfillmentPriority
                                     (param_1,*plVar17);
                  iVar6 = CookingGraph_CookingLevelSimulation__CompareRank(uVar10,uVar15);
                  plVar11 = local_118;
                  if (iVar6 < 0) goto joined_r0x0445bf18;
                }
                local_150 = *(long *)(param_1 + 0x158);
                *(long *)(param_1 + 0x158) = local_150 + 1;
                if (*plVar17 == 0) {
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_0445cc58;
                }
                CookingGraph_Execution_CookingUnit___ctor
                          (&local_148,local_150,*(undefined4 *)(*plVar17 + 0x14),2,1,0);
                local_150 = local_148;
                uVar10 = System_Int64__ToString(&local_150,0);
                uVar10 = System_String__Concat(DAT_0921c830,uVar10,0);
                if (*plVar17 == 0) {
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_0445cc58;
                }
                lVar8 = *(long *)(*plVar17 + 0x20);
                if (lVar8 == 0) {
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_0445cc58;
                }
                uVar20 = *(undefined8 *)(lVar8 + 0x28);
                uVar15 = thunk_FUN_03f9944c(DAT_09179740);
                FUN_05330e2c(uVar15,lVar7,DAT_091e7ac8,0);
                uVar15 = FUN_04af8368(uVar20,uVar15,DAT_091ca498);
                uVar15 = FUN_04b049e4(uVar15,DAT_091cad50);
                if (*(long *)(param_1 + 0x178) == 0) {
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_0445cc58;
                }
                CookingGraph_Execution_CookingExecution__RegisterDish
                          (*(long *)(param_1 + 0x178),uVar10,0,uVar15,0);
                if (*(long *)(param_1 + 0x178) == 0) {
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_0445cc58;
                }
                local_210 = *(undefined8 *)(lVar7 + 0x38);
                uStack_218 = *(undefined8 *)(lVar7 + 0x30);
                local_220 = *(undefined8 *)(lVar7 + 0x28);
                uVar19 = CookingGraph_Execution_CookingExecution__Consume
                                   (*(long *)(param_1 + 0x178),&local_220,
                                    *(undefined8 *)(lVar7 + 0x40),0);
                if ((uVar19 & 1) == 0) {
                  thunk_FUN_03fc39d4(&DAT_091870e0);
                  uVar10 = thunk_FUN_03f9944c();
                  uVar15 = thunk_FUN_03fc39d4(&DAT_091fc038);
                  System_InvalidOperationException___ctor(uVar10,uVar15,0);
                  uVar15 = thunk_FUN_03fc39d4(&DAT_091c6860);
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar10,uVar15);
                  }
                  goto LAB_0445cc58;
                }
                if (*(long *)(param_1 + 200) == 0) {
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_0445cc58;
                }
                FUN_053e19f4(*(long *)(param_1 + 200),*(undefined8 *)(lVar7 + 0x40),DAT_091a8330);
                local_b0 = *(long *)(lVar7 + 0x28);
                lVar16 = *(long *)(param_1 + 0x178);
                uStack_a8 = (uint)*(undefined8 *)(lVar7 + 0x30);
                uStack_a4 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x30) >> 0x20);
                uStack_a0 = (undefined4)*(undefined8 *)(lVar7 + 0x38);
                uStack_9c = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x38) >> 0x20);
                lVar8 = FUN_03f5c394(DAT_0917fda0,1);
                if (lVar8 != 0) {
                  if (*(int *)(lVar8 + 0x18) == 0) {
                    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    goto LAB_0445cc58;
                  }
                  *(undefined8 *)(lVar8 + 0x30) = local_138;
                  *(undefined8 *)(lVar8 + 0x28) = uStack_140;
                  *(long *)(lVar8 + 0x20) = local_148;
                  if (lVar16 != 0) {
                    uStack_238 = CONCAT44(uStack_a4,uStack_a8);
                    local_230 = CONCAT44(uStack_9c,uStack_a0);
                    local_240 = local_b0;
                    CookingGraph_Execution_CookingExecution__Produce(lVar16,&local_240,lVar8,0);
                    lVar16 = *(long *)(param_1 + 0x60);
                    lVar8 = thunk_FUN_03f9944c(DAT_0918f668);
                    CookingGraph_CookingLevelSimulation_GridAssembly___ctor(lVar8,0);
                    if (lVar8 == 0) {
                      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0445cc58;
                    }
                    uVar5 = *(undefined4 *)(lVar7 + 0x38);
                    *(undefined8 *)(lVar8 + 0x20) = uVar10;
                    *(undefined4 *)(lVar8 + 0x10) = uVar5;
                    *(long *)(lVar8 + 0x18) = local_148;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x20),uVar10);
                    *(long *)(lVar8 + 0x28) = *plVar17;
                    thunk_FUN_03f5d7b8();
                    lVar7 = DAT_091b2520;
                    if (lVar16 != 0) {
                      lVar9 = *(long *)(lVar16 + 0x10);
                      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                      if (lVar9 != 0) {
                        uVar2 = *(uint *)(lVar16 + 0x18);
                        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                          *(uint *)(lVar16 + 0x18) = uVar2 + 1;
                          plVar11 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                          *plVar11 = lVar8;
                          thunk_FUN_03f5d7b8(plVar11,lVar8);
                        }
                        else {
                          FUN_057e0c68(lVar16,lVar8,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                        }
                        if (*(long *)(param_1 + 0x178) == 0) {
                          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_0445cc58;
                        }
                        CookingGraph_Execution_CookingExecution__SeedAssemblyBase
                                  (*(long *)(param_1 + 0x178),uVar10,uVar4,0);
                        *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
                        *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
                        plVar11 = local_118;
                        goto joined_r0x0445bf18;
                      }
                    }
                    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_0445cc58;
                  }
                }
                if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_0445cc58;
              }
            }
          }
          goto joined_r0x0445bf18;
        }
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_0445cc58;
      }
    }
  }
  goto LAB_0445cbe8;
LAB_0445cc00:
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  goto LAB_0445cc58;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar14 = piVar14 + 4;
    if (uVar19 == 0) break;
LAB_0445c988:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar12 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0445c9bc;
    }
  }
LAB_0445c9a0:
  puVar12 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185a58,0);
LAB_0445c9bc:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_0445c9c8:
  if (local_290 != 0) {
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548();
    }
    goto LAB_0445cc58;
  }
  uVar10 = CookingGraph_CookingLevelSimulation__AssemblySources(param_1);
  lVar7 = FUN_04b03f44(uVar10,DAT_091cacd8);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar19 = 0;
      uVar13 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      puVar21 = (undefined4 *)(lVar7 + 0x40);
      do {
        if (uVar13 <= uVar19) goto LAB_0445cc00;
        local_160 = *(undefined8 *)(puVar21 + -4);
        uVar10 = *(undefined8 *)(puVar21 + -2);
        uStack_168 = *(undefined8 *)(puVar21 + -6);
        local_170 = *(undefined8 *)(puVar21 + -8);
        CookingGraph_CookingLevelSimulation__GridAssemblyTarget(&local_b0,param_1,*puVar21,0);
        uStack_188 = CONCAT44(uStack_a4,uStack_a8);
        uStack_180 = CONCAT44(uStack_9c,uStack_a0);
        local_190 = local_b0;
        lVar8 = local_190;
        uStack_178 = uStack_98;
        local_190._0_1_ = (char)local_b0;
        bVar1 = (char)local_190 != '\0';
        local_190 = lVar8;
        if (bVar1) {
          lVar16 = thunk_FUN_03f9944c(DAT_0917bf78);
          FUN_05744974(lVar16,DAT_091ac088);
          FUN_05c2b3f4(&local_258,&local_190,DAT_091b6b90);
          uStack_2a8 = uStack_168;
          local_2b0 = local_170;
          local_2a0 = local_160;
          local_260 = 0;
          uStack_278 = 0;
          local_280 = 0;
          uStack_268 = 0;
          uStack_270 = 0;
          pplStack_288 = (long **)0x0;
          local_290 = 0;
          uStack_2c8 = uStack_250;
          local_2d0 = local_258;
          local_2c0 = local_248;
          CookingGraph_Execution_CookingTransferRequest___ctor
                    (&local_290,&local_2b0,&local_2d0,uVar10,0);
          lVar8 = DAT_091ac090;
          if (lVar16 == 0) goto LAB_0445cbe8;
          local_c0 = local_260;
          uStack_d8 = uStack_278;
          local_e0 = local_280;
          uStack_c8 = uStack_268;
          local_d0 = uStack_270;
          lVar9 = *(long *)(lVar16 + 0x10);
          pplStack_e8 = pplStack_288;
          local_f0 = local_290;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_0445cbe8;
          uVar2 = *(uint *)(lVar16 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar2 * 0x38;
            *(uint *)(lVar16 + 0x18) = uVar2 + 1;
            *(long ***)(lVar9 + 0x28) = pplStack_288;
            *(long *)(lVar9 + 0x20) = local_290;
            *(undefined8 *)(lVar9 + 0x38) = uStack_278;
            *(undefined8 *)(lVar9 + 0x30) = local_280;
            *(undefined8 *)(lVar9 + 0x48) = uStack_268;
            *(undefined8 *)(lVar9 + 0x40) = uStack_270;
            *(undefined8 *)(lVar9 + 0x50) = local_260;
            thunk_FUN_03f5d7b8(lVar9 + 0x28,0);
          }
          else {
            uStack_a8 = (uint)pplStack_288;
            uStack_a4 = (undefined4)((ulong)pplStack_288 >> 0x20);
            local_b0 = local_290;
            uStack_98 = uStack_278;
            uStack_a0 = (undefined4)local_280;
            uStack_9c = (undefined4)((ulong)local_280 >> 0x20);
            uStack_88 = uStack_268;
            local_90 = uStack_270;
            local_80 = local_260;
            FUN_057452c4(lVar16,&local_b0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          CookingGraph_CookingLevelSimulation__Dispatch(param_1,lVar16,0,0,0,0);
        }
        uVar13 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar19 = uVar19 + 1;
        puVar21 = puVar21 + 0xc;
      } while ((long)uVar19 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
    goto LAB_0445cc58;
  }
LAB_0445cbe8:
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0445cc58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

