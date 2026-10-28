// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$SupplyUnits
// address: 0x44641c4
// body: available
// range: 0x44641c4-0x4464923 inclusive
// range: 0x4464928-0x44649b3 inclusive
// range: 0x44649b8-0x44649bb inclusive
// range: 0x4464a08-0x4465027 inclusive
// range: 0x446502c-0x4465133 inclusive
// range: 0x4465138-0x446513b inclusive
// range: 0x4465140-0x4465143 inclusive
// range: 0x446518c-0x446536b inclusive
// range: 0x4465370-0x446540b inclusive
// range: 0x4465410-0x4465413 inclusive
// range: 0x4465450-0x446592f inclusive
// range: 0x4465964-0x4465a67 inclusive
// range: 0x4465b44-0x4465b57 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4464920 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44649b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44649b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4465024 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4465130 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4465138 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4465140 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4465368 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4465408 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4465410 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44659e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44659ec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044659f0) */
/* WARNING: Removing unreachable block (ram,0x044650fc) */
/* WARNING: Removing unreachable block (ram,0x044649a8) */
/* WARNING: Removing unreachable block (ram,0x044649ac) */
/* WARNING: Removing unreachable block (ram,0x044653f0) */
/* WARNING: Removing unreachable block (ram,0x04465100) */
/* WARNING: Removing unreachable block (ram,0x04465a30) */
/* WARNING: Removing unreachable block (ram,0x04465a08) */
/* WARNING: Removing unreachable block (ram,0x04465808) */
/* WARNING: Removing unreachable block (ram,0x044658fc) */
/* WARNING: Removing unreachable block (ram,0x04464a30) */
/* WARNING: Removing unreachable block (ram,0x0446598c) */

undefined8
CookingGraph_CookingLevelSimulation__SupplyUnits
          (long param_1,undefined4 param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  long **pplVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int *piVar20;
  long lVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long *local_240;
  undefined8 uStack_238;
  ulong local_230;
  long lStack_228;
  long local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  long *local_1f0;
  long **pplStack_1e8;
  ulong local_1e0;
  long *local_1d0;
  long **pplStack_1c8;
  ulong local_1c0;
  undefined8 local_1b0;
  long **pplStack_1a8;
  ulong local_1a0;
  long lStack_198;
  long local_190;
  long *local_180;
  long **pplStack_178;
  ulong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulong local_158;
  long *local_150;
  long **pplStack_148;
  ulong local_140;
  long *local_130;
  long **pplStack_128;
  ulong local_120;
  long lStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  long *local_e8;
  long local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long *local_c8;
  long *local_c0;
  long **pplStack_b8;
  ulong local_b0;
  long lStack_a8;
  long local_a0;
  long *local_90;
  long **pplStack_88;
  ulong local_80;
  undefined8 local_70;
  undefined4 local_68;
  
  local_70 = param_4;
  local_68 = param_5;
  if ((DAT_09518046 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6848);
    FUN_03f5c2a4(&DAT_0919c130);
    FUN_03f5c2a4(&DAT_0919c1a0);
    FUN_03f5c2a4(&DAT_0919c138);
    FUN_03f5c2a4(&DAT_0919e648);
    FUN_03f5c2a4(&DAT_0919e618);
    FUN_03f5c2a4(&DAT_0919e650);
    FUN_03f5c2a4(&DAT_091c9460);
    FUN_03f5c2a4(&DAT_091c9b00);
    FUN_03f5c2a4(&DAT_091ca988);
    FUN_03f5c2a4(&DAT_091ca558);
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_091cb150);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a2750);
    FUN_03f5c2a4(&DAT_091a1f48);
    FUN_03f5c2a4(&DAT_091a50f0);
    FUN_03f5c2a4(&DAT_091a5bd0);
    FUN_03f5c2a4(&DAT_091a5bd8);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a1f50);
    FUN_03f5c2a4(&DAT_091a2758);
    FUN_03f5c2a4(&DAT_091a50f8);
    FUN_03f5c2a4(&DAT_091a5100);
    FUN_03f5c2a4(&DAT_091a2760);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091a1f58);
    FUN_03f5c2a4(&DAT_091a5be0);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_09178ba8);
    FUN_03f5c2a4(&DAT_09178b60);
    FUN_03f5c2a4(&DAT_091a7dd8);
    FUN_03f5c2a4(&DAT_091a7de0);
    FUN_03f5c2a4(&DAT_091a7dd0);
    FUN_03f5c2a4(&DAT_09179cf8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917a478);
    FUN_03f5c2a4(&DAT_0917ab20);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091a92a0);
    FUN_03f5c2a4(&DAT_091a92a8);
    FUN_03f5c2a4(&DAT_091abf18);
    FUN_03f5c2a4(&DAT_091b2528);
    FUN_03f5c2a4(&DAT_091aaa00);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091abf28);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_091b6968);
    FUN_03f5c2a4(&DAT_091b6970);
    FUN_03f5c2a4(&DAT_091e7b98);
    FUN_03f5c2a4(&DAT_091e7ba0);
    FUN_03f5c2a4(&DAT_091e7ba8);
    FUN_03f5c2a4(&DAT_0918f390);
    FUN_03f5c2a4(&DAT_091e7bb0);
    FUN_03f5c2a4(&DAT_0918f398);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_09518046 = 1;
  }
  local_90 = (long *)0x0;
  pplStack_88 = (long **)0x0;
  local_80 = 0;
  local_a0 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  pplStack_b8 = (long **)0x0;
  local_c0 = (long *)0x0;
  lStack_a8 = 0;
  local_b0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (long *)0x0;
  local_100 = 0;
  local_f8 = 0;
  pplStack_128 = (long **)0x0;
  local_130 = (long *)0x0;
  local_150 = (long *)0x0;
  pplStack_148 = (long **)0x0;
  local_140 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  lVar7 = thunk_FUN_03f9944c(DAT_0918f390);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0___ctor(lVar7,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar7 + 0x18),param_1);
    uVar8 = DAT_0917c520;
    *(undefined4 *)(lVar7 + 0x20) = param_2;
    uVar8 = thunk_FUN_03f9944c(uVar8);
    FUN_05796918(uVar8,DAT_091adc70);
    puVar23 = (undefined8 *)(lVar7 + 0x10);
    *puVar23 = uVar8;
    thunk_FUN_03f5d7b8(puVar23,uVar8);
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_057e185c(&local_240,*(long *)(param_1 + 0x60),DAT_091b2528);
      local_80 = local_230;
      pplStack_88 = uStack_238;
      local_90 = local_240;
      local_240 = (long *)0x0;
      uStack_238 = &local_90;
      while (uVar9 = FUN_071bd28c(&local_90,DAT_091a50f8), (uVar9 & 1) != 0) {
        if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(local_80 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Job_0
                  (lVar7,*(undefined4 *)(*(long *)(local_80 + 0x28) + 0x14),1,0);
      }
      FUN_071bd288(&local_90,DAT_091a50f0);
      if (*(long *)(param_1 + 0x90) != 0) {
        uVar8 = System_Linq_Enumerable__Range(0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0)
        ;
        uVar10 = thunk_FUN_03f9944c(DAT_09178ba8);
        FUN_05315970(uVar10,0,DAT_091c6848,0);
        uVar8 = FUN_04af2704(uVar8,uVar10,DAT_091ca558);
        lVar11 = FUN_04b08678(uVar8,DAT_091cb150);
        if (*(int *)(param_1 + 0x16c) < 0) {
          if (lVar11 == 0) goto LAB_044659e8;
        }
        else {
          CookingGraph_CookingLevelSimulation__get_BagAddress(&local_180,param_1);
          lVar14 = DAT_091abf18;
          if (lVar11 == 0) goto LAB_044659e8;
          lVar17 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_044659e8;
          uVar3 = *(uint *)(lVar11 + 0x18);
          if (uVar3 < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)uVar3 * 0x18;
            *(uint *)(lVar11 + 0x18) = uVar3 + 1;
            *(ulong *)(lVar17 + 0x30) = local_170;
            *(long ***)(lVar17 + 0x28) = pplStack_178;
            *(long **)(lVar17 + 0x20) = local_180;
            thunk_FUN_03f5d7b8(lVar17 + 0x28,0);
          }
          else {
            uStack_238 = pplStack_178;
            local_240 = local_180;
            local_230 = local_170;
            FUN_05739aa0(lVar11,&local_240,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_0573a8e0(&local_240,lVar11,DAT_091abf28);
        pplStack_178 = &local_c0;
        local_180 = (long *)0x0;
        pplStack_b8 = uStack_238;
        local_c0 = local_240;
        lStack_a8 = lStack_228;
        local_b0 = local_230;
        local_a0 = local_220;
        while (uVar9 = FUN_071997ec(&local_c0,DAT_091a2758), plVar12 = local_180, (uVar9 & 1) != 0)
        {
          if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lStack_198 = lStack_a8;
          local_1a0 = local_b0;
          local_190 = local_a0;
          plVar12 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                      (*(long *)(param_1 + 0x178),&local_1a0,0);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar11 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar9 != 0) {
            piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == DAT_0917a480) {
                puVar13 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_04464808;
              }
              uVar9 = uVar9 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917a480,0);
LAB_04464808:
          plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
          local_1b0 = 0;
          pplStack_1a8 = &local_c8;
joined_r0x04464820:
          local_c8 = plVar12;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar11 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar9 != 0) {
            piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == DAT_09185b10) {
                puVar13 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_04464870;
              }
              uVar9 = uVar9 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185b10,0);
LAB_04464870:
          uVar9 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          plVar12 = local_c8;
          if ((uVar9 & 1) != 0) {
            if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar11 = *local_c8;
            uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar9 != 0) {
              piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == DAT_0917ab28) {
                  puVar13 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_044648d4;
                }
                uVar9 = uVar9 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar9 != 0);
            }
            puVar13 = (undefined8 *)FUN_03f95da8(local_c8,DAT_0917ab28,0);
LAB_044648d4:
            (*(code *)*puVar13)(&local_240,plVar12,puVar13[1]);
            pplVar2 = uStack_238;
            plVar12 = local_c8;
            if (uStack_238._4_4_ == 0) {
              if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar9 = CookingGraph_Execution_CookingExecution__IsUnitClaimed
                                (*(long *)(param_1 + 0x178),local_240,0);
              plVar12 = local_c8;
              if ((uVar9 & 1) == 0) {
                CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Piece_1
                          (lVar7,(ulong)pplVar2 & 0xffffffff,0);
                plVar12 = local_c8;
              }
            }
            goto joined_r0x04464820;
          }
          if (local_c8 != (long *)0x0) {
            lVar11 = *local_c8;
            uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar9 != 0) {
              piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == DAT_09185a58) {
                  puVar13 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_04464990;
                }
                uVar9 = uVar9 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar9 != 0);
            }
            puVar13 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185a58,0);
LAB_04464990:
            (*(code *)*puVar13)(plVar12,puVar13[1]);
          }
        }
        FUN_071997e8(pplStack_178,DAT_091a2750);
        if (plVar12 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c548(plVar12);
        }
        lVar11 = thunk_FUN_03f9944c(DAT_09179cf8);
        FUN_053bc804(lVar11,DAT_091a7dd0);
        lVar14 = thunk_FUN_03f9944c(DAT_0918f398);
        CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_1___ctor(lVar14,0);
        if (lVar14 != 0) {
          plVar12 = (long *)(lVar14 + 0x18);
          *plVar12 = lVar7;
          thunk_FUN_03f5d7b8(plVar12);
          *(undefined4 *)(lVar14 + 0x10) = 0;
          lVar17 = *(long *)(param_1 + 0x78);
          if ((lVar17 != 0) && (lVar18 = *(long *)(lVar17 + 0x20), lVar18 != 0)) {
            iVar19 = 0;
LAB_04464aa8:
            if (iVar19 < *(int *)(lVar18 + 0x18)) {
              iVar19 = 0;
LAB_04464ab8:
              lVar18 = *(long *)(lVar17 + 0x20);
              if (lVar18 == 0) goto LAB_044659e8;
              uVar3 = *(uint *)(lVar14 + 0x10);
              if (*(uint *)(lVar18 + 0x18) <= uVar3) goto LAB_044659ec;
              lVar18 = *(long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
              if (lVar18 == 0) goto LAB_044659e8;
              if (*(int *)(lVar18 + 0x18) <= iVar19) goto LAB_0446518c;
              uVar8 = CookingGraph_CookingLevelSimulation__LaneSlots
                                (param_1,(long)(int)uVar3,iVar19);
              lVar17 = *(long *)(lVar14 + 0x20);
              if (lVar17 == 0) {
                lVar17 = thunk_FUN_03f9944c(DAT_09178b60);
                FUN_0531612c(lVar17,lVar14,DAT_091e7bb0,0);
                *(long *)(lVar14 + 0x20) = lVar17;
                thunk_FUN_03f5d7b8(lVar14 + 0x20,lVar17);
              }
              uVar8 = FUN_04afa860(uVar8,lVar17,DAT_091ca988);
              lVar17 = FUN_04b0451c(uVar8,DAT_091cadc0);
              lVar18 = *(long *)(param_1 + 0xb0);
              local_240 = (long *)0x0;
              FUN_066c1fdc(&local_240,*(undefined4 *)(lVar14 + 0x10),iVar19,DAT_091bec98);
              if (lVar18 == 0) goto LAB_044659e8;
              uVar9 = FUN_06e4da10(lVar18,local_240,&local_d0,DAT_0919c1a0);
              if ((uVar9 & 1) == 0) {
                if (lVar17 == 0) goto LAB_044659e8;
                if (*(long *)(lVar17 + 0x18) != 0) goto LAB_04464bc4;
              }
              else {
LAB_04464bc4:
                local_240 = (long *)0x0;
                FUN_066c1fdc(&local_240,*(undefined4 *)(lVar14 + 0x10),iVar19,DAT_091bec98);
                if (lVar11 == 0) goto LAB_044659e8;
                FUN_053bd9f8(lVar11,local_240,DAT_091a7dd8);
                if ((((char)local_70 == '\0') ||
                    (uVar8 = FUN_05c25e54(&local_70,DAT_091b6970),
                    *(int *)(lVar14 + 0x10) != (int)uVar8)) ||
                   (iVar19 != (int)((ulong)uVar8 >> 0x20))) {
                  if ((uVar9 & 1) == 0) {
                    lVar18 = *plVar12;
                    if (lVar18 == 0) goto LAB_044659e8;
                    lVar21 = *(long *)(lVar18 + 0x28);
                    if (lVar21 == 0) {
                      lVar21 = thunk_FUN_03f9944c(DAT_09178768);
                      FUN_053136a4(lVar21,lVar18,DAT_091e7b98,0);
                      *(long *)(lVar18 + 0x28) = lVar21;
                      thunk_FUN_03f5d7b8((long *)(lVar18 + 0x28),lVar21);
                    }
                    uVar9 = FUN_04ab6608(lVar17,lVar21,DAT_091c9460);
                    if ((uVar9 & 1) == 0) {
                      lVar18 = *plVar12;
                      if (lVar18 == 0) goto LAB_044659e8;
                      lVar21 = *(long *)(lVar18 + 0x38);
                      if (lVar21 == 0) {
                        lVar21 = thunk_FUN_03f9944c(DAT_09178768);
                        FUN_053136a4(lVar21,lVar18,DAT_091e7ba8,0);
                        *(long *)(lVar18 + 0x38) = lVar21;
                        thunk_FUN_03f5d7b8((long *)(lVar18 + 0x38),lVar21);
                      }
                      uVar9 = FUN_04ab6608(lVar17,lVar21,DAT_091c9460);
                      if (param_3 == 0) {
LAB_04464ea8:
                        if ((uVar9 & 1) != 0) {
                          uVar6 = *(undefined4 *)(lVar14 + 0x10);
                          uVar8 = CookingGraph_CookingLevelSimulation__LaneOccupants
                                            (param_1,uVar6,iVar19,0,0);
                          lVar18 = CookingGraph_CookingLevelSimulation__LaneRecipe
                                             (param_1,uVar6,uVar8);
                          if (lVar18 != 0) goto LAB_04464ee0;
                          goto LAB_0446511c;
                        }
                        if (lVar17 == 0) goto LAB_044659e8;
                        if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
                          uVar9 = 0;
                          uVar16 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
                          puVar22 = (undefined4 *)(lVar17 + 0x28);
                          do {
                            if (uVar16 <= uVar9) goto LAB_044659ec;
                            if (*plVar12 == 0) goto LAB_044659e8;
                            CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Piece_1
                                      (*plVar12,*puVar22,0);
                            uVar16 = (ulong)*(uint *)(lVar17 + 0x18);
                            uVar9 = uVar9 + 1;
                            puVar22 = puVar22 + 6;
                          } while ((long)uVar9 < (long)(int)*(uint *)(lVar17 + 0x18));
                        }
                        goto LAB_0446511c;
                      }
                      lVar18 = *(long *)(param_3 + 0x18);
                      local_240 = (long *)0x0;
                      FUN_066c1fdc(&local_240,*(undefined4 *)(lVar14 + 0x10),iVar19,DAT_091bec98);
                      if (lVar18 == 0) goto LAB_044659e8;
                      uVar16 = FUN_06e4285c(lVar18,local_240,&local_e0,DAT_0919c138);
                      if (((uVar16 & 1) == 0) || (lVar18 = local_e0, local_e0 == 0))
                      goto LAB_04464ea8;
LAB_04464ee0:
                      lVar17 = *plVar12;
                      if (lVar17 == 0) goto LAB_044659e8;
                      uVar6 = *(undefined4 *)(lVar18 + 0x14);
                      uVar1 = *(undefined4 *)(lVar18 + 0x18);
                    }
                    else {
                      lVar18 = *plVar12;
                      if (lVar18 == 0) goto LAB_044659e8;
                      lVar21 = *(long *)(lVar18 + 0x30);
                      lVar24 = *(long *)(param_1 + 0xb8);
                      if (lVar21 == 0) {
                        lVar21 = thunk_FUN_03f9944c(DAT_09178768);
                        FUN_053136a4(lVar21,lVar18,DAT_091e7ba0,0);
                        *(long *)(lVar18 + 0x30) = lVar21;
                        thunk_FUN_03f5d7b8((long *)(lVar18 + 0x30),lVar21);
                      }
                      FUN_04ae2788(&local_240,lVar17,lVar21,DAT_091c9b00);
                      if (((lVar24 == 0) ||
                          (lVar18 = FUN_06f53330(lVar24,local_240,DAT_0919e650), lVar18 == 0)) ||
                         (lVar17 = *plVar12, lVar17 == 0)) goto LAB_044659e8;
                      uVar6 = *(undefined4 *)(lVar18 + 0x18);
                      uVar1 = *(undefined4 *)(lVar18 + 0x1c);
                    }
LAB_04465114:
                    CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Job_0
                              (lVar17,uVar6,uVar1,0);
                  }
                  else {
                    if (local_d0 == 0) goto LAB_044659e8;
                    if (*(char *)(local_d0 + 0x38) == '\0') {
                      lVar17 = *plVar12;
                      if (lVar17 != 0) {
                        uVar6 = *(undefined4 *)(local_d0 + 0x1c);
                        uVar1 = *(undefined4 *)(local_d0 + 0x20);
                        goto LAB_04465114;
                      }
                      goto LAB_044659e8;
                    }
                    lVar17 = *(long *)(param_1 + 0x178);
                    CookingGraph_CookingLevelSimulation__ToolAddress
                              (&local_240,*(undefined4 *)(lVar14 + 0x10),
                               *(undefined4 *)(local_d0 + 0x18));
                    if (lVar17 == 0) goto LAB_044659e8;
                    pplStack_1c8 = uStack_238;
                    local_1d0 = local_240;
                    local_1c0 = local_230;
                    plVar15 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                                (lVar17,&local_1d0,0);
                    if (plVar15 == (long *)0x0) goto LAB_044659e8;
                    lVar17 = *plVar15;
                    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar9 != 0) {
                      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == DAT_0917a480) {
                          puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                          goto LAB_04464f00;
                        }
                        uVar9 = uVar9 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar9 != 0);
                    }
                    puVar13 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917a480,0);
LAB_04464f00:
                    plVar15 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
                    pplStack_178 = &local_c8;
                    local_180 = (long *)0x0;
joined_r0x04464f1c:
                    local_c8 = plVar15;
                    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar17 = *plVar15;
                    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar9 != 0) {
                      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == DAT_09185b10) {
                          puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                          goto LAB_04464f6c;
                        }
                        uVar9 = uVar9 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar9 != 0);
                    }
                    puVar13 = (undefined8 *)FUN_03f95da8(plVar15,DAT_09185b10,0);
LAB_04464f6c:
                    uVar9 = (*(code *)*puVar13)(plVar15,puVar13[1]);
                    plVar15 = local_c8;
                    if ((uVar9 & 1) != 0) {
                      if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar17 = *local_c8;
                      uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar9 != 0) {
                        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == DAT_0917ab28) {
                            puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                            goto LAB_04464fd0;
                          }
                          uVar9 = uVar9 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar9 != 0);
                      }
                      puVar13 = (undefined8 *)FUN_03f95da8(local_c8,DAT_0917ab28,0);
LAB_04464fd0:
                      (*(code *)*puVar13)(&local_240,plVar15,puVar13[1]);
                      pplVar2 = uStack_238;
                      plVar15 = local_c8;
                      if (uStack_238._4_4_ == 0) {
                        if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        uVar9 = CookingGraph_Execution_CookingExecution__IsUnitClaimed
                                          (*(long *)(param_1 + 0x178),local_240,0);
                        plVar15 = local_c8;
                        if ((uVar9 & 1) == 0) {
                          if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Piece_1
                                    (*plVar12,(ulong)pplVar2 & 0xffffffff,0);
                          plVar15 = local_c8;
                        }
                      }
                      goto joined_r0x04464f1c;
                    }
                    if (local_c8 != (long *)0x0) {
                      lVar17 = *local_c8;
                      uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar9 != 0) {
                        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == DAT_09185a58) {
                            puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                            goto LAB_044650e0;
                          }
                          uVar9 = uVar9 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar9 != 0);
                      }
                      puVar13 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185a58,0);
LAB_044650e0:
                      (*(code *)*puVar13)(plVar15,puVar13[1]);
                    }
                  }
                }
              }
LAB_0446511c:
              iVar19 = iVar19 + 1;
              lVar17 = *(long *)(param_1 + 0x78);
              if (lVar17 == 0) goto LAB_044659e8;
              goto LAB_04464ab8;
            }
            if ((*(long *)(param_1 + 0x178) != 0) &&
               (plVar12 = (long *)CookingGraph_Execution_CookingExecution__get_Transfers
                                            (*(long *)(param_1 + 0x178),0), plVar12 != (long *)0x0))
            {
              lVar14 = *plVar12;
              uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar9 != 0) {
                piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == DAT_0917a478) {
                    puVar13 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_044654ec;
                  }
                  uVar9 = uVar9 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar9 != 0);
              }
              puVar13 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917a478,0);
LAB_044654ec:
              plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
              uStack_238 = &local_e8;
              local_240 = (long *)0x0;
              do {
                local_e8 = plVar12;
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar14 = *plVar12;
                uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar9 != 0) {
                  piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == DAT_09185b10) {
                      puVar13 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                      goto LAB_04465578;
                    }
                    uVar9 = uVar9 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar9 != 0);
                }
                puVar13 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185b10,0);
LAB_04465578:
                uVar9 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                plVar12 = local_e8;
                if ((uVar9 & 1) == 0) {
                  if (local_e8 == (long *)0x0) goto LAB_044657fc;
                  lVar14 = *local_e8;
                  uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar9 == 0) goto LAB_044657d4;
                  piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  goto LAB_044657bc;
                }
                if (local_e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar14 = *local_e8;
                uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar9 != 0) {
                  piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == DAT_0917ab20) {
                      puVar13 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                      goto LAB_044655dc;
                    }
                    uVar9 = uVar9 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar9 != 0);
                }
                puVar13 = (undefined8 *)FUN_03f95da8(local_e8,DAT_0917ab20,0);
LAB_044655dc:
                lVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar12 = local_e8;
                if (*(int *)(lVar14 + 0x34) == 0) {
                  uVar6 = *(undefined4 *)(lVar14 + 0x30);
                  iVar19 = *(int *)(lVar14 + 0x58);
                  if (iVar19 - 2U < 2) {
                    CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Piece_1
                              (lVar7,uVar6,0);
                    plVar12 = local_e8;
                  }
                  else if (iVar19 == 1) {
                    uStack_208 = *(undefined8 *)(lVar14 + 0x60);
                    local_210 = *(undefined8 *)(lVar14 + 0x58);
                    local_200 = *(undefined8 *)(lVar14 + 0x68);
                    uVar8 = *(undefined8 *)(lVar14 + 0x28);
                    uVar3 = CookingGraph_CookingLevelSimulation__ToolOf(&local_210);
                    plVar12 = local_e8;
                    if (-1 < (int)uVar3) {
                      if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      uVar4 = FUN_06f54e88(*(long *)(param_1 + 0xb8),uVar8,&local_f0,DAT_0919e648);
                      if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      uVar5 = FUN_06f54e88(*(long *)(param_1 + 0xc0),uVar8,&local_f8,DAT_0919e618);
                      if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar17 = *(long *)(*(long *)(param_1 + 0x78) + 0x20);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      if (*(uint *)(lVar17 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c558();
                      }
                      lVar17 = *(long *)(lVar17 + (ulong)uVar3 * 8 + 0x20);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar17 = *(long *)(lVar17 + 0x10);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      if ((((uVar4 | uVar5) & 1) == 0) ||
                         (*(int *)(lVar17 + 0x18) <= *(int *)(lVar14 + 0x68))) {
                        CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Piece_1
                                  (lVar7,uVar6,0);
                        plVar12 = local_e8;
                      }
                      else {
                        uVar6 = CookingGraph_CookingLevelSimulation__LaneOf(param_1,uVar3);
                        FUN_066c1fdc(&local_100,uVar3,uVar6,DAT_091bec98);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        uVar9 = FUN_053bcf10(lVar11,local_100,DAT_091a7de0);
                        plVar12 = local_e8;
                        if ((uVar9 & 1) == 0) {
                          FUN_053bd9f8(lVar11,local_100,DAT_091a7dd8);
                          if ((uVar4 & 1) == 0) {
                            if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Job_0
                                      (lVar7,*(undefined4 *)(local_f8 + 0x14),
                                       *(undefined4 *)(local_f8 + 0x18),0);
                            plVar12 = local_e8;
                          }
                          else {
                            if (local_f0 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Job_0
                                      (lVar7,*(undefined4 *)(local_f0 + 0x18),
                                       *(undefined4 *)(local_f0 + 0x1c),0);
                            plVar12 = local_e8;
                          }
                        }
                      }
                    }
                  }
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  goto LAB_044659e8;
LAB_0446518c:
  if (*(long *)(lVar18 + 0x10) == 0) goto LAB_044659e8;
  iVar19 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18);
LAB_04465198:
  lVar18 = *(long *)(lVar17 + 0x20);
  if (lVar18 == 0) goto LAB_044659e8;
  uVar3 = *(uint *)(lVar14 + 0x10);
  if (*(uint *)(lVar18 + 0x18) <= uVar3) {
LAB_044659ec:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  lVar21 = *(long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
  if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) goto LAB_044659e8;
  if (iVar19 < *(int *)(lVar21 + 0x1c) + *(int *)(*(long *)(lVar21 + 0x10) + 0x18)) {
    lVar17 = *(long *)(param_1 + 0x178);
    CookingGraph_CookingLevelSimulation__ToolAddress(&local_240,(long)(int)uVar3,iVar19);
    if (lVar17 != 0) {
      pplStack_1e8 = uStack_238;
      local_1f0 = local_240;
      local_1e0 = local_230;
      plVar15 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar17,&local_1f0,0);
      if (plVar15 != (long *)0x0) {
        lVar17 = *plVar15;
        uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar9 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == DAT_0917a480) {
              puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0446526c;
            }
            uVar9 = uVar9 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917a480,0);
LAB_0446526c:
        plVar15 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
        pplStack_178 = &local_c8;
        local_180 = (long *)0x0;
        do {
          local_c8 = plVar15;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar17 = *plVar15;
          uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar9 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == DAT_09185b10) {
                puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_044652d8;
              }
              uVar9 = uVar9 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_03f95da8(plVar15,DAT_09185b10,0);
LAB_044652d8:
          uVar9 = (*(code *)*puVar13)(plVar15,puVar13[1]);
          plVar15 = local_c8;
          if ((uVar9 & 1) == 0) goto LAB_04465370;
          if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar17 = *local_c8;
          uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar9 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == DAT_0917ab28) {
                puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_0446533c;
              }
              uVar9 = uVar9 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_03f95da8(local_c8,DAT_0917ab28,0);
LAB_0446533c:
          (*(code *)*puVar13)(&local_240,plVar15,puVar13[1]);
          if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Piece_1
                    (*plVar12,(ulong)uStack_238 & 0xffffffff,0);
          plVar15 = local_c8;
        } while( true );
      }
    }
    goto LAB_044659e8;
  }
  iVar19 = uVar3 + 1;
  *(int *)(lVar14 + 0x10) = iVar19;
  goto LAB_04464aa8;
LAB_04465370:
  if (local_c8 != (long *)0x0) {
    lVar17 = *local_c8;
    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar9 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == DAT_09185a58) {
          puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_044653d8;
        }
        uVar9 = uVar9 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar9 != 0);
    }
    puVar13 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185a58,0);
LAB_044653d8:
    (*(code *)*puVar13)(plVar15,puVar13[1]);
  }
  iVar19 = iVar19 + 1;
  lVar17 = *(long *)(param_1 + 0x78);
  if (lVar17 == 0) goto LAB_044659e8;
  goto LAB_04465198;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar20 = piVar20 + 4;
    if (uVar9 == 0) break;
LAB_044657bc:
    if (*(long *)(piVar20 + -2) == DAT_09185a58) {
      puVar13 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_044657f0;
    }
  }
LAB_044657d4:
  puVar13 = (undefined8 *)FUN_03f95da8(local_e8,DAT_09185a58,0);
LAB_044657f0:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_044657fc:
  if (param_3 == 0) {
LAB_04465b4c:
    return *puVar23;
  }
  if (*(long *)(param_3 + 0x18) != 0) {
    FUN_06e4127c(&local_240,*(long *)(param_3 + 0x18),DAT_0919c130);
    pplStack_128 = uStack_238;
    local_130 = local_240;
    lStack_118 = lStack_228;
    local_120 = local_230;
    pplStack_178 = &local_130;
    uStack_108 = uStack_218;
    local_110 = local_220;
    local_180 = (long *)0x0;
    while (uVar9 = FUN_0723d8c4(&local_130,DAT_091a5bd8), lVar14 = lStack_118, plVar12 = local_180,
          (uVar9 & 1) != 0) {
      if (lStack_118 == 0) {
        if (local_110 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_056aec8c(&local_240,local_110,DAT_091aaa00);
        local_150 = local_240;
        local_240 = (long *)0x0;
        pplStack_148 = uStack_238;
        local_140 = local_230;
        uStack_238 = &local_150;
        while (uVar9 = FUN_07188168(&local_150,DAT_091a1f50), (uVar9 & 1) != 0) {
          CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Piece_1
                    (lVar7,local_140 & 0xffffffff,0);
        }
        FUN_07188164(&local_150,DAT_091a1f48);
      }
      else {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar9 = FUN_053bcf10(lVar11,local_120,DAT_091a7de0);
        if ((uVar9 & 1) == 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Job_0
                    (lVar7,*(undefined4 *)(lVar14 + 0x14),*(undefined4 *)(lVar14 + 0x18),0);
        }
      }
    }
    FUN_0723da00(pplStack_178,DAT_091a5bd0);
    if (plVar12 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(plVar12);
    }
    if (*(long *)(param_3 + 0x20) != 0) {
      FUN_05797d74(&local_168,*(long *)(param_3 + 0x20),DAT_091adcc0);
      local_240 = (long *)0x0;
      uStack_238 = (long **)&local_168;
      while (uVar9 = FUN_071ad7a4(&local_168,DAT_091a34d8), (uVar9 & 1) != 0) {
        CookingGraph_CookingLevelSimulation_<>c__DisplayClass145_0__<SupplyUnits>g__Piece_1
                  (lVar7,local_158 & 0xffffffff,0);
      }
      FUN_039afa7c(&local_240);
      goto LAB_04465b4c;
    }
  }
LAB_044659e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

