// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$AutoServe
// address: 0x4473f5c
// body: available
// range: 0x4473f5c-0x44748a7 inclusive
// range: 0x44748ac-0x4474937 inclusive
// range: 0x447493c-0x447493f inclusive
// range: 0x4474944-0x4474947 inclusive
// range: 0x447494c-0x447494f inclusive
// range: 0x44749b4-0x4474a4b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44748a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4474934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447493c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4474944 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447494c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4474a1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4474a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4474a24 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4474a28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4474a2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4474a34 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4474a38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0447492c) */
/* WARNING: Removing unreachable block (ram,0x04474930) */
/* WARNING: Removing unreachable block (ram,0x04474a30) */
/* WARNING: Removing unreachable block (ram,0x044749dc) */

void CookingGraph_CookingLevelSimulation__AutoServe(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 local_290;
  ulong uStack_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_210;
  ulong uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  long **pplStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *local_138;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  int local_104;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09518080 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6848);
    FUN_03f5c2a4(&DAT_0919d990);
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_0919d9a8);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091c9458);
    FUN_03f5c2a4(&DAT_091ca558);
    FUN_03f5c2a4(&DAT_091cacf0);
    FUN_03f5c2a4(&DAT_091a2750);
    FUN_03f5c2a4(&DAT_091a2758);
    FUN_03f5c2a4(&DAT_091a2760);
    FUN_03f5c2a4(&DAT_09178ba8);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_091a7ff8);
    FUN_03f5c2a4(&DAT_091a7fe8);
    FUN_03f5c2a4(&DAT_09179d80);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091abf20);
    FUN_03f5c2a4(&DAT_091ac090);
    FUN_03f5c2a4(&DAT_091abf18);
    FUN_03f5c2a4(&DAT_091abf28);
    FUN_03f5c2a4(&DAT_091abf10);
    FUN_03f5c2a4(&DAT_091ac088);
    FUN_03f5c2a4(&DAT_0917bf78);
    FUN_03f5c2a4(&DAT_0917bf20);
    FUN_03f5c2a4(&DAT_091b6be0);
    FUN_03f5c2a4(&DAT_091b6b88);
    FUN_03f5c2a4(&DAT_091b6b90);
    FUN_03f5c2a4(&DAT_091e7dd8);
    FUN_03f5c2a4(&DAT_0918f550);
    DAT_09518080 = 1;
  }
  local_104 = 0;
  local_110 = 0;
  local_138 = (long *)0x0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  if ((*(long *)(param_1 + 0x180) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x180) + 0x40), lVar3 != 0)) {
    uVar4 = CookingGraph_Execution_CookingExecutionConfig__get_WholeDish(lVar3,0);
    if ((uVar4 & 1) == 0) {
      lVar3 = thunk_FUN_03f9944c(DAT_0917bf78);
      FUN_05744974(lVar3,DAT_091ac088);
      lVar6 = thunk_FUN_03f9944c(DAT_09179d80);
      FUN_053d17f8(lVar6,DAT_091a7fe8);
      lVar7 = thunk_FUN_03f9944c(DAT_0917bf20);
      FUN_0573917c(lVar7,DAT_091abf10);
      if (-1 < *(int *)(param_1 + 0x16c)) {
        CookingGraph_CookingLevelSimulation__get_BagAddress(&local_e0,param_1);
        lVar15 = DAT_091abf18;
        if (lVar7 == 0) goto LAB_04474a1c;
        lVar13 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_04474a1c;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = lVar13 + (long)(int)uVar2 * 0x18;
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar13 + 0x30) = local_d0;
          *(ulong *)(lVar13 + 0x28) = uStack_d8;
          *(undefined8 *)(lVar13 + 0x20) = local_e0;
          thunk_FUN_03f5d7b8(lVar13 + 0x28,0);
        }
        else {
          uStack_98 = uStack_d8;
          local_a0 = local_e0;
          local_90 = local_d0;
          FUN_05739aa0(lVar7,&local_a0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        uVar5 = System_Linq_Enumerable__Range(0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0)
        ;
        uVar8 = thunk_FUN_03f9944c(DAT_09178ba8);
        FUN_05315970(uVar8,0,DAT_091c6848,0);
        uVar5 = FUN_04af2704(uVar5,uVar8,DAT_091ca558);
        if (lVar7 != 0) {
          FUN_05739d0c(lVar7,uVar5,DAT_091abf20);
          FUN_0573a8e0(&local_a0,lVar7,DAT_091abf28);
          uStack_128 = uStack_98;
          local_130 = local_a0;
          uStack_118 = uStack_88;
          local_120 = local_90;
          local_110 = local_80;
          local_1a0 = &local_130;
          local_1a8 = 0;
LAB_04474468:
          uVar4 = FUN_071997ec(&local_130,DAT_091a2758);
          lVar7 = local_1a8;
          if ((uVar4 & 1) == 0) {
            FUN_071997e8(local_1a0,DAT_091a2750);
            if (lVar7 == 0) {
              CookingGraph_CookingLevelSimulation__Dispatch(param_1,lVar3,0,0,0,0);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c548(lVar7);
          }
          lVar7 = thunk_FUN_03f9944c(DAT_0918f550);
          CookingGraph_CookingLevelSimulation_<>c__DisplayClass304_0___ctor(lVar7,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(lVar7 + 0x20) = local_110;
          *(undefined8 *)(lVar7 + 0x18) = uStack_118;
          *(undefined8 *)(lVar7 + 0x10) = local_120;
          thunk_FUN_03f5d7b8(lVar7 + 0x18,0);
          if (*(int *)(lVar7 + 0x10) != 3) goto LAB_04474544;
          goto LAB_044744cc;
        }
      }
    }
    else {
      lVar3 = thunk_FUN_03f9944c(DAT_091764a0);
      FUN_06ee539c(lVar3,DAT_0919d948);
      uVar5 = CookingGraph_CookingLevelSimulation__ServingCandidates(param_1);
      lVar6 = FUN_04b040dc(uVar5,DAT_091cacf0);
      if (lVar6 != 0) {
        if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
          uVar4 = 0;
          uVar12 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          puVar16 = (undefined4 *)(lVar6 + 0x28);
          do {
            if (uVar12 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar15 = *(long *)(puVar16 + -2);
            local_190 = 0;
            uStack_188 = 0;
            local_198 = 0;
            uStack_178 = 0;
            local_180 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            lVar7 = CookingGraph_CookingLevelSimulation__PlanCapture
                              (param_1,lVar15,*puVar16,&local_180,&local_198);
            if (lVar7 != 0) {
              if ((lVar15 == 0) || (lVar3 == 0)) goto LAB_04474a1c;
              uVar12 = FUN_06ee7aac(lVar3,*(undefined4 *)(lVar15 + 0x10),&local_104,DAT_0919d990);
              local_a0 = 0;
              iVar11 = local_104;
              if ((uVar12 & 1) == 0) {
                iVar11 = 0;
              }
              FUN_05c30b18(&local_a0,0,DAT_091b6be0);
              CookingGraph_CookingLevelSimulation__Dispatch(param_1,lVar7,0,iVar11,local_a0,0);
              FUN_06ee612c(lVar3,*(undefined4 *)(lVar15 + 0x10),iVar11 + 1,DAT_0919d9a8);
            }
            uVar12 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar4 = uVar4 + 1;
            puVar16 = puVar16 + 4;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
        return;
      }
    }
  }
LAB_04474a1c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_04474544:
  uStack_1b8 = *(undefined8 *)(lVar7 + 0x18);
  local_1c0 = *(undefined8 *)(lVar7 + 0x10);
  local_1b0 = *(undefined8 *)(lVar7 + 0x20);
  uVar4 = CookingGraph_CookingLevelSimulation__Outgoing(param_1,&local_1c0);
  if ((uVar4 & 1) == 0) {
    iVar11 = *(int *)(lVar7 + 0x10);
    if (iVar11 == 2) {
      uVar4 = CookingGraph_CookingLevelSimulation__MomentHeld(param_1,*(undefined4 *)(lVar7 + 0x20))
      ;
      if ((uVar4 & 1) != 0) goto LAB_04474468;
      iVar11 = *(int *)(lVar7 + 0x10);
    }
    if (iVar11 == 3) {
LAB_044744cc:
      if (*(long *)(param_1 + 0x180) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar15 = *(long *)(*(long *)(param_1 + 0x180) + 0x48);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar15 + 0x13) == '\0') {
        if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = CookingGraph_Execution_CookingExecution__get_Transfers(*(long *)(param_1 + 0x178),0)
        ;
        uVar8 = thunk_FUN_03f9944c(DAT_09178730);
        FUN_05322d94(uVar8,lVar7,DAT_091e7dd8,0);
        uVar4 = FUN_04ab6f28(uVar5,uVar8,DAT_091c9458);
        if ((uVar4 & 1) != 0) goto LAB_04474468;
      }
    }
    if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uStack_1d8 = *(undefined8 *)(lVar7 + 0x18);
    local_1e0 = *(undefined8 *)(lVar7 + 0x10);
    local_1d0 = *(undefined8 *)(lVar7 + 0x20);
    plVar9 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                               (*(long *)(param_1 + 0x178),&local_1e0,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar15 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar4 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_0917a480) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0447460c;
        }
        uVar4 = uVar4 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a480,0);
LAB_0447460c:
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    pplStack_1e8 = &local_138;
    local_1f0 = 0;
joined_r0x04474628:
    local_138 = plVar9;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar15 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar4 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_09185b10) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04474678;
        }
        uVar4 = uVar4 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_04474678:
    uVar4 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    plVar9 = local_138;
    if ((uVar4 & 1) != 0) {
      if (local_138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar15 = *local_138;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar4 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_0917ab28) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_044746dc;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(local_138,DAT_0917ab28,0);
LAB_044746dc:
      (*(code *)*puVar10)(&local_250,plVar9,puVar10[1]);
      uVar4 = uStack_248;
      uVar5 = local_250;
      plVar9 = local_138;
      if (uStack_248._4_4_ == 0) {
        if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar12 = CookingGraph_Execution_CookingExecution__IsUnitClaimed
                           (*(long *)(param_1 + 0x178),local_250,0);
        plVar9 = local_138;
        if ((uVar12 & 1) == 0) {
          CookingGraph_CookingLevelSimulation__ServeTarget
                    (&local_250,param_1,uVar4 & 0xffffffff,lVar6);
          uStack_158 = uStack_248;
          local_160 = local_250;
          uVar8 = local_160;
          uStack_148 = uStack_238;
          uStack_150 = local_240;
          local_160._0_1_ = (char)local_250;
          bVar1 = (char)local_160 != '\0';
          plVar9 = local_138;
          if (bVar1) {
            local_160 = uVar8;
            FUN_05c2b3f4(&local_250,&local_160,DAT_091b6b90);
            uStack_208 = uStack_248;
            local_210 = local_250;
            local_200 = local_240;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uStack_f8 = uStack_248;
            local_100 = local_250;
            local_f0 = local_240;
            FUN_053d2af8(lVar6,&local_100,DAT_091a7ff8);
            uStack_f8 = *(undefined8 *)(lVar7 + 0x18);
            local_100 = *(undefined8 *)(lVar7 + 0x10);
            local_f0 = *(undefined8 *)(lVar7 + 0x20);
            FUN_05c2b3f4(&local_250,&local_160,DAT_091b6b90);
            local_220 = 0;
            uStack_288 = uStack_248;
            local_290 = local_250;
            local_280 = local_240;
            uStack_238 = 0;
            local_240 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            uStack_248 = 0;
            local_250 = 0;
            uStack_268 = uStack_f8;
            local_270 = local_100;
            local_260 = local_f0;
            CookingGraph_Execution_CookingTransferRequest___ctor
                      (&local_250,&local_270,&local_290,uVar5,0);
            lVar15 = DAT_091ac090;
            if (lVar3 != 0) {
              local_b0 = local_220;
              uStack_c8 = uStack_238;
              local_d0 = local_240;
              uStack_b8 = uStack_228;
              local_c0 = uStack_230;
              lVar13 = *(long *)(lVar3 + 0x10);
              uStack_d8 = uStack_248;
              local_e0 = local_250;
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar13 != 0) {
                uVar2 = *(uint *)(lVar3 + 0x18);
                if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)uVar2 * 0x38;
                  *(uint *)(lVar3 + 0x18) = uVar2 + 1;
                  *(ulong *)(lVar13 + 0x28) = uStack_248;
                  *(undefined8 *)(lVar13 + 0x20) = local_250;
                  *(undefined8 *)(lVar13 + 0x38) = uStack_238;
                  *(undefined8 *)(lVar13 + 0x30) = local_240;
                  *(undefined8 *)(lVar13 + 0x48) = uStack_228;
                  *(undefined8 *)(lVar13 + 0x40) = uStack_230;
                  *(undefined8 *)(lVar13 + 0x50) = local_220;
                  thunk_FUN_03f5d7b8(lVar13 + 0x28,0);
                  plVar9 = local_138;
                }
                else {
                  uStack_98 = uStack_248;
                  local_a0 = local_250;
                  uStack_88 = uStack_238;
                  local_90 = local_240;
                  uStack_78 = uStack_228;
                  local_80 = uStack_230;
                  local_70 = local_220;
                  FUN_057452c4(lVar3,&local_a0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                  plVar9 = local_138;
                }
                goto joined_r0x04474628;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
      }
      goto joined_r0x04474628;
    }
    if (local_138 != (long *)0x0) {
      lVar7 = *local_138;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_09185a58) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04474914;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(local_138,DAT_09185a58,0);
LAB_04474914:
      (*(code *)*puVar10)(plVar9,puVar10[1]);
    }
  }
  goto LAB_04474468;
}

