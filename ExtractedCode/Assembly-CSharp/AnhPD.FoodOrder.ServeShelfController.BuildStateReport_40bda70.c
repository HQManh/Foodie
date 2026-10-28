// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$BuildStateReport
// address: 0x40bda70
// body: available
// range: 0x40bda70-0x40bfac7 inclusive
// range: 0x40bfbe8-0x40bfbeb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40beb5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bf900 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bf918 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bf930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bf948 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bf960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bf978 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bf990 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bf9a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bf9c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bf9d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bf9f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040bfaac) */
/* WARNING: Removing unreachable block (ram,0x040bfac0) */
/* WARNING: Removing unreachable block (ram,0x040bf190) */

void AnhPD_FoodOrder_ServeShelfController__BuildStateReport(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  float fVar24;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  ulong local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8;
  undefined8 local_2c0;
  ulong local_2a0;
  long **pplStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  ulong local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  ulong local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  ulong local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  ulong local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  ulong local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  uint local_1d4;
  ulong local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  ulong local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  long local_68;
  
  lVar19 = tpidr_el0;
  local_68 = *(long *)(lVar19 + 0x28);
  if ((DAT_09515f65 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8610);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a880);
    FUN_03f5c2a4(&DAT_0917af98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b348);
    FUN_03f5c2a4(&DAT_0917b4e0);
    FUN_03f5c2a4(&DAT_09187918);
    FUN_03f5c2a4(&DAT_091adcb0);
    FUN_03f5c2a4(&DAT_091afe38);
    FUN_03f5c2a4(&DAT_091afe50);
    FUN_03f5c2a4(&DAT_091afe58);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b71b8);
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_091b71c8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09220cd8);
    FUN_03f5c2a4(&DAT_091f5c70);
    FUN_03f5c2a4(&DAT_091f8828);
    FUN_03f5c2a4(&DAT_0921dc50);
    FUN_03f5c2a4(&DAT_09221a30);
    FUN_03f5c2a4(&DAT_09221658);
    FUN_03f5c2a4(&DAT_091f5bf0);
    FUN_03f5c2a4(&DAT_0921ae40);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_091f7320);
    FUN_03f5c2a4(&DAT_09214318);
    FUN_03f5c2a4(&DAT_09220040);
    FUN_03f5c2a4(&DAT_092189c8);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_0921d308);
    FUN_03f5c2a4(&DAT_0921e8c0);
    FUN_03f5c2a4(&DAT_09217ae8);
    FUN_03f5c2a4(&DAT_091f88c0);
    FUN_03f5c2a4(&DAT_09223868);
    FUN_03f5c2a4(&DAT_09223f10);
    FUN_03f5c2a4(&DAT_09220750);
    FUN_03f5c2a4(&DAT_09218208);
    FUN_03f5c2a4(&DAT_09226700);
    FUN_03f5c2a4(&DAT_091f5c60);
    FUN_03f5c2a4(&DAT_0920a230);
    FUN_03f5c2a4(&DAT_0921f7d0);
    FUN_03f5c2a4(&DAT_09217490);
    FUN_03f5c2a4(&DAT_09220d40);
    FUN_03f5c2a4(&DAT_0921cae8);
    FUN_03f5c2a4(&DAT_091f5c78);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_09214720);
    FUN_03f5c2a4(&DAT_09222c10);
    FUN_03f5c2a4(&DAT_09219b98);
    FUN_03f5c2a4(&DAT_0921f510);
    FUN_03f5c2a4(&DAT_0921cb68);
    FUN_03f5c2a4(&DAT_091f5b90);
    FUN_03f5c2a4(&DAT_0921f7b8);
    FUN_03f5c2a4(&DAT_09214320);
    DAT_09515f65 = 1;
  }
  uStack_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  local_120 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_88 = 0;
  uStack_81 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_79 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_160 = 0;
  local_158 = (long *)0x0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_a8 = 0;
  uStack_a1 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_99 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    AnhPD_FoodOrder_ShelfSnapshot__MarkDirty(*(long *)(param_1 + 0xa8),0);
    uVar8 = AnhPD_FoodOrder_ServeShelfController__EnsureSnapshot(param_1);
    plVar12 = DAT_09214318;
    if ((uVar8 & 1) == 0) goto LAB_040bf8bc;
    if (*(long *)(param_1 + 0xa8) != 0) {
      AnhPD_FoodOrder_ShelfSnapshot__Solve(*(long *)(param_1 + 0xa8),0);
      plVar9 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(plVar9,0);
      plVar10 = (long *)FUN_03f5c394(DAT_09180318,4);
      plVar12 = plVar10;
      if (*(long *)(param_1 + 0x90) != 0) {
        local_2a0 = CONCAT44(local_2a0._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18));
        plVar11 = (long *)FUN_03f5c42c(DAT_09535420,&local_2a0);
        plVar12 = plVar11;
        if (plVar10 != (long *)0x0) {
          if ((plVar11 == (long *)0x0) ||
             (plVar12 = (long *)thunk_FUN_03f99350(plVar11,*(undefined8 *)(*plVar10 + 0x40)),
             plVar12 != (long *)0x0)) {
            if ((int)plVar10[3] != 0) {
              plVar10[4] = (long)plVar11;
              thunk_FUN_03f5d7b8(plVar10 + 4,plVar11);
              uVar2 = *(uint *)(param_1 + 0x7c);
              uVar1 = *(uint *)(param_1 + 0x78) &
                      ((int)*(uint *)(param_1 + 0x78) >> 0x1f ^ 0xffffffffU);
              local_1a4 = uVar2;
              if ((int)uVar1 <= (int)uVar2) {
                local_1a4 = uVar1;
              }
              if ((int)uVar2 < 1) {
                local_1a4 = uVar1;
              }
              lVar13 = FUN_03f5c42c(DAT_09535420,&local_1a4);
              plVar12 = (long *)0x0;
              if ((lVar13 != 0) &&
                 (plVar12 = (long *)thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar10 + 0x40)),
                 plVar12 == (long *)0x0)) goto LAB_040bfa8c;
              if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
                plVar10[5] = lVar13;
                thunk_FUN_03f5d7b8(plVar10 + 5,lVar13);
                local_1a8 = *(uint *)(param_1 + 0x78);
                lVar13 = FUN_03f5c42c(DAT_09535420,&local_1a8);
                plVar12 = (long *)0x0;
                if ((lVar13 != 0) &&
                   (plVar12 = (long *)thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar10 + 0x40)),
                   plVar12 == (long *)0x0)) goto LAB_040bfa8c;
                if (2 < *(uint *)(plVar10 + 3)) {
                  plVar10[6] = lVar13;
                  thunk_FUN_03f5d7b8(plVar10 + 6,lVar13);
                  local_1ac = *(uint *)(param_1 + 0x7c);
                  lVar13 = FUN_03f5c42c(DAT_09535420,&local_1ac);
                  plVar12 = (long *)0x0;
                  if ((lVar13 != 0) &&
                     (plVar12 = (long *)thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar10 + 0x40)),
                     plVar12 == (long *)0x0)) goto LAB_040bfa8c;
                  if ((*(uint *)(plVar10 + 3) & 0xfffffffc) != 0) {
                    plVar10[7] = lVar13;
                    thunk_FUN_03f5d7b8(plVar10 + 7,lVar13);
                    plVar12 = (long *)System_String__Format(DAT_09214320,plVar10,0);
                    if (plVar9 != (long *)0x0) {
                      plVar12 = (long *)System_Text_StringBuilder__AppendLine(plVar9,plVar12,0);
                      lVar13 = *(long *)(param_1 + 0xa8);
                      if (lVar13 != 0) {
                        uStack_c8 = *(undefined8 *)(lVar13 + 0x40);
                        local_d0 = *(undefined8 *)(lVar13 + 0x38);
                        local_c0 = *(undefined8 *)(lVar13 + 0x48);
                        uStack_2e8 = *(undefined8 *)(lVar13 + 0x40);
                        local_2f0 = *(ulong *)(lVar13 + 0x38);
                        local_2e0 = *(undefined8 *)(lVar13 + 0x48);
                        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uStack_1c8 = uStack_2e8;
                        local_1d0 = local_2f0;
                        local_1c0 = local_2e0;
                        uVar14 = AnhPD_FoodOrder_PieceLedger__PieceNames(&local_1d0,0);
                        uVar14 = System_String__Concat(DAT_09223868,uVar14,0);
                        System_Text_StringBuilder__AppendLine(plVar9,uVar14,0);
                        plVar12 = (long *)0x0;
                        if (*(long *)(param_1 + 0xa8) != 0) {
                          local_1d4 = AnhPD_FoodOrder_ShelfSnapshot__get_OrderCount
                                                (*(long *)(param_1 + 0xa8),0);
                          uVar14 = FUN_03f5c42c(DAT_09535420,&local_1d4);
                          uVar14 = System_String__Format(DAT_09220750,uVar14,0);
                          System_Text_StringBuilder__AppendLine(plVar9,uVar14,0);
                          lVar13 = *(long *)(param_1 + 0xa8);
                          plVar12 = (long *)0x0;
                          if (lVar13 != 0) {
                            iVar21 = 0;
                            puVar22 = (undefined8 *)((ulong)&local_2f0 | 1);
                            puVar23 = (undefined8 *)((ulong)&local_110 | 1);
                            do {
                              iVar5 = AnhPD_FoodOrder_ShelfSnapshot__get_OrderCount(lVar13,0);
                              if (iVar5 <= iVar21) {
                                uVar14 = **(undefined8 **)(DAT_091881a0 + 0xb8);
                                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                  FUN_03f5c424();
                                }
                                plVar12 = (long *)UnityEngine_Object__op_Implicit(uVar14,0);
                                if (((ulong)plVar12 & 1) != 0) {
                                  if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_040beb48;
                                  lVar13 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
                                  if (lVar13 != 0) {
                                    lVar13 = *(long *)(lVar13 + 0x18);
                                    plVar12 = (long *)0x0;
                                    if (lVar13 != 0) {
                                      AnhPD_FoodOrder_LevelPieceBook__OpenOrderMissing
                                                (&local_2f0,lVar13,0);
                                      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                        FUN_03f5c424();
                                      }
                                      uStack_268 = uStack_2e8;
                                      local_270 = local_2f0;
                                      local_260 = local_2e0;
                                      uVar14 = AnhPD_FoodOrder_PieceLedger__PieceNames(&local_270,0)
                                      ;
                                      uVar14 = System_String__Concat(DAT_0921f7b8,uVar14,0);
                                      plVar12 = (long *)System_Text_StringBuilder__AppendLine
                                                                  (plVar9,uVar14,0);
                                    }
                                  }
                                }
                                if (*(long *)(param_1 + 0x90) == 0) goto LAB_040beb48;
                                local_2f0 = CONCAT44(local_2f0._4_4_,
                                                     *(undefined4 *)
                                                      (*(long *)(param_1 + 0x90) + 0x18));
                                uVar14 = FUN_03f5c42c(DAT_09535420,&local_2f0);
                                uVar14 = System_String__Format(DAT_09220d40,uVar14,0);
                                System_Text_StringBuilder__AppendLine(plVar9,uVar14,0);
                                lVar13 = *(long *)(param_1 + 0x90);
                                plVar12 = (long *)0x0;
                                if (lVar13 == 0) goto LAB_040beb48;
                                iVar21 = 0;
                                puVar23 = (undefined8 *)((ulong)&local_2f0 | 1);
                                puVar22 = (undefined8 *)((ulong)&local_90 | 7);
                                goto LAB_040be564;
                              }
                              plVar12 = (long *)0x0;
                              if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040beb48;
                              plVar12 = (long *)AnhPD_FoodOrder_ShelfSnapshot__OrderPieces
                                                          (&local_2f0,*(long *)(param_1 + 0xa8),
                                                           iVar21,0);
                              lVar13 = *(long *)(param_1 + 0x90);
                              uStack_e8 = uStack_2e8;
                              local_f0 = local_2f0;
                              local_e0 = local_2e0;
                              if (lVar13 == 0) goto LAB_040beb48;
                              iVar5 = 0;
                              while (iVar5 < *(int *)(lVar13 + 0x18)) {
                                plVar12 = (long *)0x0;
                                if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040beb48;
                                plVar12 = (long *)AnhPD_FoodOrder_ShelfSnapshot__AssignOf
                                                            (*(long *)(param_1 + 0xa8),iVar5,0);
                                if ((int)plVar12 == iVar21) {
                                  plVar12 = (long *)0x0;
                                  if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040beb48;
                                  AnhPD_FoodOrder_ShelfSnapshot__PlateHas
                                            (&local_2f0,*(long *)(param_1 + 0xa8),iVar5,0);
                                  uVar14 = *(undefined8 *)((long)puVar22 + 0x17);
                                  uVar15 = puVar22[1];
                                  local_b0 = *puVar22;
                                  uStack_99 = (undefined1)uVar14;
                                  uStack_98 = (undefined7)((ulong)uVar14 >> 8);
                                  uStack_a0 = (undefined7)
                                              ((ulong)*(undefined8 *)((long)puVar22 + 0xf) >> 8);
                                  uStack_a8 = (undefined7)uVar15;
                                  uStack_a1 = (undefined1)((ulong)uVar15 >> 0x38);
                                  local_110 = CONCAT71(local_110._1_7_,(char)local_2f0);
                                  puVar23[1] = uVar15;
                                  *puVar23 = local_b0;
                                  *(undefined8 *)((long)puVar23 + 0x17) = uVar14;
                                  *(ulong *)((long)puVar23 + 0xf) = CONCAT71(uStack_a0,uStack_a1);
                                  if ((char)local_2f0 == '\0') goto LAB_040be23c;
                                  FUN_05c33204(&local_2f0,&local_110,DAT_091b71c8);
                                  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                                    FUN_03f5c424();
                                  }
                                  local_1e0 = local_2e0;
                                  uStack_1e8 = uStack_2e8;
                                  local_1f0 = local_2f0;
                                  AnhPD_FoodOrder_PieceSet__Subtract
                                            (&local_1a0,&local_f0,&local_1f0,0);
                                  goto LAB_040be24c;
                                }
                                lVar13 = *(long *)(param_1 + 0x90);
                                iVar5 = iVar5 + 1;
                                if (lVar13 == 0) goto LAB_040beb48;
                              }
                              uStack_88 = 0;
                              uStack_81 = 0;
                              local_90 = 0;
                              uStack_78 = 0;
                              uStack_80 = 0;
                              local_79 = 0;
                              uStack_a0 = 0;
                              local_b0 = 0;
                              uStack_a8 = 0;
                              uStack_a1 = 0;
                              uStack_99 = 0;
                              uStack_98 = 0;
                              uStack_108 = 0;
                              local_110 = 0;
                              uStack_f8 = 0;
                              uStack_100 = 0;
LAB_040be23c:
                              uStack_198 = uStack_e8;
                              local_1a0 = local_f0;
                              local_190 = local_e0;
LAB_040be24c:
                              local_2a0 = CONCAT44(local_2a0._4_4_,iVar21);
                              uStack_128 = uStack_198;
                              local_130 = local_1a0;
                              local_120 = local_190;
                              plVar12 = (long *)FUN_03f5c42c(DAT_09535420,&local_2a0);
                              if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040beb48;
                              local_1a4 = AnhPD_FoodOrder_ShelfSnapshot__OrderDishKey
                                                    (*(long *)(param_1 + 0xa8),iVar21,0);
                              uVar14 = FUN_03f5c42c(DAT_09535420,&local_1a4);
                              uStack_2e8 = uStack_e8;
                              local_2f0 = local_f0;
                              local_2e0 = local_e0;
                              if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              uStack_208 = uStack_2e8;
                              local_210 = local_2f0;
                              local_200 = local_2e0;
                              uVar15 = AnhPD_FoodOrder_PieceLedger__PieceNames(&local_210,0);
                              plVar10 = (long *)System_String__Format
                                                          (DAT_091f5c70,plVar12,uVar14,uVar15,0);
                              plVar12 = plVar10;
                              if (*(long *)(param_1 + 0x90) == 0) goto LAB_040beb48;
                              plVar12 = (long *)0x0;
                              if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040beb48;
                              uVar4 = AnhPD_FoodOrder_ShelfSnapshot__IsOrderCovered
                                                (*(long *)(param_1 + 0xa8),iVar21,
                                                 *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0
                                                );
                              local_1a8 = CONCAT31(local_1a8._1_3_,uVar4) & 0xffffff01;
                              uVar14 = FUN_03f5c42c(DAT_09535400,&local_1a8);
                              uVar14 = System_String__Format(DAT_09219b98,uVar14,0);
                              uStack_228 = uStack_128;
                              local_230 = local_130;
                              local_220 = local_120;
                              uVar15 = AnhPD_FoodOrder_PieceLedger__PieceNames(&local_230,0);
                              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                                FUN_03f5c424(DAT_09189158);
                              }
                              uStack_248 = uStack_128;
                              local_250 = local_130;
                              local_240 = local_120;
                              uVar4 = AnhPD_FoodOrder_PieceSet__Covers(&local_d0,&local_250,0);
                              local_1ac = CONCAT31(local_1ac._1_3_,uVar4) & 0xffffff01;
                              uVar16 = FUN_03f5c42c(DAT_09535400,&local_1ac);
                              uVar15 = System_String__Format(DAT_0921f7d0,uVar15,uVar16,0);
                              uVar14 = System_String__Concat(plVar10,uVar14,uVar15,0);
                              System_Text_StringBuilder__AppendLine(plVar9,uVar14,0);
                              lVar13 = *(long *)(param_1 + 0xa8);
                              iVar21 = iVar21 + 1;
                            } while (lVar13 != 0);
                            plVar12 = (long *)0x0;
                          }
                        }
                      }
                    }
                    goto LAB_040beb48;
                  }
                }
              }
            }
LAB_040bf8ec:
            if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
          }
          else {
LAB_040bfa8c:
            plVar12 = (long *)thunk_FUN_03fa6ef4();
            if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(plVar12,0);
            }
          }
          goto LAB_040bfbe8;
        }
      }
      goto LAB_040beb48;
    }
  }
LAB_040bfa84:
  plVar12 = (long *)0x0;
  lVar19 = *(long *)(lVar19 + 0x28);
  goto LAB_040beb50;
LAB_040be564:
  do {
    if (*(int *)(lVar13 + 0x18) <= iVar21) {
      plVar12 = (long *)0x0;
      if (*(long *)(param_1 + 0xa0) != 0) {
        uVar6 = AnhPD_FoodOrder_ShelfMergeQueue__get_Count(*(long *)(param_1 + 0xa0),0);
        local_2f0 = CONCAT44(local_2f0._4_4_,uVar6);
        uVar14 = FUN_03f5c42c(DAT_09535420,&local_2f0);
        uVar14 = System_String__Format(DAT_0921f510,uVar14,0);
        plVar12 = (long *)System_Text_StringBuilder__AppendLine(plVar9,uVar14,0);
        if ((*(long *)(param_1 + 0xa0) != 0) &&
           (plVar10 = *(long **)(*(long *)(param_1 + 0xa0) + 0x10), plVar10 != (long *)0x0)) {
          lVar13 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar8 == 0) goto LAB_040bec00;
          piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_040bebe8;
        }
      }
      break;
    }
    lVar13 = FUN_057e0998(lVar13,iVar21,DAT_091afe58);
    lVar17 = FUN_03f5c394(DAT_091805f8,0xb);
    local_2f0 = CONCAT44(local_2f0._4_4_,iVar21);
    uVar14 = FUN_03f5c42c(DAT_09535420,&local_2f0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    plVar12 = (long *)UnityEngine_Object__op_Implicit(lVar13,0);
    uVar15 = DAT_091f5c78;
    if (((ulong)plVar12 & 1) == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      if (lVar13 == 0) break;
      uVar6 = *(undefined4 *)(lVar13 + 0xb4);
    }
    local_2f0 = CONCAT44(local_2f0._4_4_,uVar6);
    uVar16 = FUN_03f5c42c(DAT_09535420,&local_2f0);
    plVar12 = (long *)System_String__Format(uVar15,uVar14,uVar16,0);
    if (lVar17 == 0) break;
    if (*(int *)(lVar17 + 0x18) == 0) goto LAB_040bf8ec;
    *(ulong *)(lVar17 + 0x20) = (ulong)plVar12;
    plVar12 = (long *)thunk_FUN_03f5d7b8((ulong *)(lVar17 + 0x20),plVar12);
    if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto LAB_040bf8ec;
    *(undefined8 *)(lVar17 + 0x28) = DAT_0921dc50;
    thunk_FUN_03f5d7b8();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar12 = (long *)UnityEngine_Object__op_Implicit(lVar13,0);
    plVar10 = DAT_091f8a38;
    if (((ulong)plVar12 & 1) != 0) {
      if (lVar13 == 0) break;
      uVar14 = *(undefined8 *)(lVar13 + 0xa8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar12 = (long *)UnityEngine_Object__op_Implicit(uVar14,0);
      plVar10 = DAT_091f8a38;
      if (((ulong)plVar12 & 1) != 0) {
        plVar10 = *(long **)(lVar13 + 0xa8);
        plVar12 = (long *)0x0;
        if (plVar10 == (long *)0x0) break;
        plVar12 = (long *)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0))
        ;
        plVar10 = plVar12;
      }
    }
    if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_040bf8ec;
    *(ulong *)(lVar17 + 0x30) = (ulong)plVar10;
    plVar12 = (long *)thunk_FUN_03f5d7b8((ulong *)(lVar17 + 0x30));
    if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) goto LAB_040bf8ec;
    *(undefined8 *)(lVar17 + 0x38) = DAT_091f88c0;
    thunk_FUN_03f5d7b8();
    plVar12 = (long *)0x0;
    if (*(long *)(param_1 + 0xa8) == 0) break;
    plVar12 = (long *)AnhPD_FoodOrder_ShelfSnapshot__PlateHas
                                (&local_2f0,*(long *)(param_1 + 0xa8),iVar21,0);
    local_90 = *puVar23;
    uStack_88 = (undefined7)puVar23[1];
    local_79 = (undefined1)*(undefined8 *)((long)puVar23 + 0x17);
    uStack_78 = (undefined7)((ulong)*(undefined8 *)((long)puVar23 + 0x17) >> 8);
    uStack_81 = (undefined1)*(undefined8 *)((long)puVar23 + 0xf);
    uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)puVar23 + 0xf) >> 8);
    plVar10 = DAT_09220040;
    if ((char)local_2f0 != '\0') {
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_288 = puVar22[1];
      local_290 = *puVar22;
      local_280 = puVar22[2];
      plVar12 = (long *)AnhPD_FoodOrder_PieceLedger__PieceNames(&local_290,0);
      plVar10 = plVar12;
    }
    if (*(uint *)(lVar17 + 0x18) < 5) goto LAB_040bf8ec;
    *(ulong *)(lVar17 + 0x40) = (ulong)plVar10;
    plVar12 = (long *)thunk_FUN_03f5d7b8((ulong *)(lVar17 + 0x40));
    if (*(uint *)(lVar17 + 0x18) < 6) goto LAB_040bf8ec;
    *(undefined8 *)(lVar17 + 0x48) = DAT_091f86e8;
    thunk_FUN_03f5d7b8();
    plVar12 = (long *)0x0;
    if (*(long *)(param_1 + 0xa8) == 0) break;
    uVar6 = AnhPD_FoodOrder_ShelfSnapshot__AssignOf(*(long *)(param_1 + 0xa8),iVar21,0);
    local_2f0 = CONCAT44(local_2f0._4_4_,uVar6);
    uVar15 = FUN_03f5c42c(DAT_09535420,&local_2f0);
    uVar14 = DAT_09217ae8;
    if (lVar13 == 0) {
LAB_040be86c:
      plVar12 = (long *)0x0;
    }
    else {
      local_90 = *(undefined8 *)(lVar13 + 0x89);
      uStack_88 = (undefined7)*(undefined8 *)(lVar13 + 0x91);
      local_79 = (undefined1)*(undefined8 *)(lVar13 + 0xa0);
      uStack_78 = (undefined7)((ulong)*(undefined8 *)(lVar13 + 0xa0) >> 8);
      uStack_81 = (undefined1)*(undefined8 *)(lVar13 + 0x98);
      uStack_80 = (undefined7)((ulong)*(undefined8 *)(lVar13 + 0x98) >> 8);
      if (*(char *)(lVar13 + 0x88) == '\0') goto LAB_040be86c;
      uStack_148 = puVar22[1];
      local_150 = *puVar22;
      local_140 = puVar22[2];
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar12 = (long *)AnhPD_FoodOrder_PieceSet__ToString(&local_150,0);
    }
    plVar10 = DAT_091f8a38;
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12;
    }
    plVar12 = (long *)System_String__Format(uVar14,uVar15,plVar10,0);
    if (*(uint *)(lVar17 + 0x18) < 7) goto LAB_040bf8ec;
    *(long **)(lVar17 + 0x50) = plVar12;
    thunk_FUN_03f5d7b8();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar12 = (long *)UnityEngine_Object__op_Implicit(lVar13,0);
    uVar14 = DAT_0921cb68;
    if (((ulong)plVar12 & 1) == 0) {
      bVar3 = false;
    }
    else {
      if (lVar13 == 0) break;
      bVar3 = *(char *)(lVar13 + 0xb0) != '\0';
    }
    local_2f0 = CONCAT71(local_2f0._1_7_,bVar3);
    uVar15 = FUN_03f5c42c(DAT_09535400,&local_2f0);
    plVar12 = (long *)System_String__Format(uVar14,uVar15,0);
    if ((*(uint *)(lVar17 + 0x18) & 0xfffffff8) == 0) goto LAB_040bf8ec;
    *(long **)(lVar17 + 0x58) = plVar12;
    thunk_FUN_03f5d7b8();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar12 = (long *)UnityEngine_Object__op_Implicit(lVar13,0);
    uVar14 = DAT_0921ae40;
    if (((ulong)plVar12 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      if (lVar13 == 0) break;
      uVar4 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(lVar13);
    }
    local_2f0 = CONCAT71(local_2f0._1_7_,uVar4) & 0xffffffffffffff01;
    plVar12 = (long *)FUN_03f5c42c(DAT_09535400,&local_2f0);
    if (*(long *)(param_1 + 0x98) == 0) break;
    uVar4 = FUN_053ebc3c(*(long *)(param_1 + 0x98),lVar13,DAT_091a8610);
    local_2a0 = CONCAT71(local_2a0._1_7_,uVar4) & 0xffffffffffffff01;
    uVar15 = FUN_03f5c42c(DAT_09535400,&local_2a0);
    plVar12 = (long *)System_String__Format(uVar14,plVar12,uVar15,0);
    if (*(uint *)(lVar17 + 0x18) < 9) goto LAB_040bf8ec;
    *(long **)(lVar17 + 0x60) = plVar12;
    thunk_FUN_03f5d7b8();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar12 = (long *)UnityEngine_Object__op_Implicit(lVar13,0);
    uVar14 = DAT_0921cae8;
    if (((ulong)plVar12 & 1) == 0) {
      bVar3 = false;
    }
    else {
      if (lVar13 == 0) break;
      fVar24 = (float)UnityEngine_Time__get_time(0);
      bVar3 = fVar24 < *(float *)(lVar13 + 0x84);
    }
    local_2f0 = CONCAT71(local_2f0._1_7_,bVar3);
    uVar15 = FUN_03f5c42c(DAT_09535400,&local_2f0);
    uVar4 = AnhPD_FoodOrder_ServeShelfController__IsResultAnimPlaying(param_1,lVar13);
    local_2a0 = CONCAT71(local_2a0._1_7_,uVar4) & 0xffffffffffffff01;
    uVar16 = FUN_03f5c42c(DAT_09535400,&local_2a0);
    plVar12 = (long *)System_String__Format(uVar14,uVar15,uVar16,0);
    if (*(uint *)(lVar17 + 0x18) < 10) goto LAB_040bf8ec;
    *(long **)(lVar17 + 0x68) = plVar12;
    thunk_FUN_03f5d7b8();
    plVar12 = (long *)0x0;
    if (*(long *)(param_1 + 0xa0) == 0) break;
    uVar4 = AnhPD_FoodOrder_ShelfMergeQueue__HasInbound(*(long *)(param_1 + 0xa0),lVar13,0);
    local_1a4 = CONCAT31(local_1a4._1_3_,uVar4) & 0xffffff01;
    uVar14 = FUN_03f5c42c(DAT_09535400,&local_1a4);
    plVar12 = (long *)System_String__Format(DAT_0921d308,uVar14,0);
    if (*(uint *)(lVar17 + 0x18) < 0xb) goto LAB_040bf8ec;
    *(long **)(lVar17 + 0x70) = plVar12;
    thunk_FUN_03f5d7b8();
    uVar14 = System_String__Concat(lVar17,0);
    System_Text_StringBuilder__AppendLine(plVar9,uVar14,0);
    lVar13 = *(long *)(param_1 + 0x90);
    iVar21 = iVar21 + 1;
    plVar12 = (long *)0x0;
  } while (lVar13 != 0);
  goto LAB_040beb48;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar20 = piVar20 + 4;
    if (uVar8 == 0) break;
LAB_040bebe8:
    if (*(long *)(piVar20 + -2) == DAT_0917a880) {
      puVar22 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_040bec1c;
    }
  }
LAB_040bec00:
  puVar22 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a880,0);
LAB_040bec1c:
  plVar12 = (long *)(*(code *)*puVar22)(plVar10,puVar22[1]);
  pplStack_298 = &local_158;
  local_2a0 = 0;
  local_158 = plVar12;
  while (plVar10 = local_158, local_158 != (long *)0x0) {
    lVar13 = *local_158;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == DAT_09185b10) {
          puVar22 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_040beca0;
        }
        uVar8 = uVar8 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar8 != 0);
    }
    puVar22 = (undefined8 *)FUN_03f95da8(local_158,DAT_09185b10,0);
LAB_040beca0:
    plVar12 = (long *)(*(code *)*puVar22)(plVar10,puVar22[1]);
    plVar10 = local_158;
    if (((ulong)plVar12 & 1) == 0) {
      if (local_158 == (long *)0x0) goto LAB_040bf180;
      lVar13 = *local_158;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 == 0) goto LAB_040bf158;
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      goto LAB_040bf140;
    }
    if (local_158 == (long *)0x0) {
      if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_040bfbe8;
    }
    lVar13 = *local_158;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == DAT_0917af98) {
          puVar22 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_040bed0c;
        }
        uVar8 = uVar8 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar8 != 0);
    }
    puVar22 = (undefined8 *)FUN_03f95da8(local_158,DAT_0917af98,0);
LAB_040bed0c:
    lVar13 = (*(code *)*puVar22)(plVar10,puVar22[1]);
    if (lVar13 == 0) {
      plVar12 = (long *)0x0;
      if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_040bfbe8;
    }
    if (*(long *)(param_1 + 0x90) == 0) {
      plVar12 = (long *)0x0;
      if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_040bfbe8;
    }
    uVar6 = FUN_057e1a08(*(long *)(param_1 + 0x90),*(undefined8 *)(lVar13 + 0x10),DAT_091afe38);
    plVar10 = *(long **)(lVar13 + 0x18);
    lVar17 = FUN_03f5c394(DAT_091805f8,9);
    local_2f0 = CONCAT44(local_2f0._4_4_,uVar6);
    uVar14 = FUN_03f5c42c(DAT_09535420,&local_2f0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar12 = (long *)UnityEngine_Object__op_Implicit(plVar10,0);
    uVar15 = DAT_091f5bf0;
    plVar11 = DAT_09220040;
    if (((ulong)plVar12 & 1) != 0) {
      if (plVar10 == (long *)0x0) {
        if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_040bfbe8;
      }
      plVar11 = (long *)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    }
    plVar12 = (long *)System_String__Format(uVar15,uVar14,plVar11,0);
    if (lVar17 == 0) {
      if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_040bfbe8;
    }
    if (*(int *)(lVar17 + 0x18) == 0) {
      if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_040bfbe8;
    }
    *(long **)(lVar17 + 0x20) = plVar12;
    plVar12 = (long *)thunk_FUN_03f5d7b8();
    plVar11 = DAT_091f5700;
    if (*(char *)(lVar13 + 0x36) != '\0') {
      uStack_2e8 = *(undefined8 *)(lVar13 + 0x48);
      local_2f0 = *(ulong *)(lVar13 + 0x40);
      local_2e0 = *(undefined8 *)(lVar13 + 0x50);
      uVar15 = *(undefined8 *)(lVar13 + 0x38);
      uVar14 = FUN_03f5c42c(DAT_09189158,&local_2f0);
      plVar12 = (long *)System_String__Format(DAT_0920a230,uVar15,uVar14,0);
      plVar11 = plVar12;
    }
    if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
LAB_040bf904:
      if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_040bfbe8;
    }
    *(long **)(lVar17 + 0x28) = plVar11;
    thunk_FUN_03f5d7b8();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar12 = (long *)UnityEngine_Object__op_Implicit(plVar10,0);
    uVar14 = DAT_09217490;
    if (((ulong)plVar12 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      if (plVar10 == (long *)0x0) {
        if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_040bfbe8;
      }
      lVar18 = UnityEngine_Component__get_gameObject(plVar10,0);
      if (lVar18 == 0) {
        plVar12 = (long *)0x0;
        if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_040bfbe8;
      }
      uVar4 = UnityEngine_GameObject__get_activeInHierarchy(lVar18,0);
    }
    local_2f0 = CONCAT71(local_2f0._1_7_,uVar4) & 0xffffffffffffff01;
    uVar15 = FUN_03f5c42c(DAT_09535400,&local_2f0);
    plVar12 = (long *)System_String__Format(uVar14,uVar15,0);
    if (*(uint *)(lVar17 + 0x18) < 3) {
      if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_040bfbe8;
    }
    *(long **)(lVar17 + 0x30) = plVar12;
    plVar12 = (long *)thunk_FUN_03f5d7b8();
    if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
      if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_040bfbe8;
    }
    *(undefined8 *)(lVar17 + 0x38) = DAT_092189c8;
    thunk_FUN_03f5d7b8();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar12 = (long *)UnityEngine_Object__op_Implicit(plVar10,0);
    plVar11 = DAT_091f8a38;
    if (((ulong)plVar12 & 1) != 0) {
      if (plVar10 == (long *)0x0) {
        if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_040bfbe8;
      }
      if (plVar10[0x14] != 0) {
        local_160 = *(undefined8 *)(plVar10[0x14] + 0x10);
        plVar12 = (long *)FUN_040c8e48(&local_160,0,0,0);
        plVar11 = plVar12;
      }
    }
    if (*(uint *)(lVar17 + 0x18) < 5) goto LAB_040bf904;
    *(long **)(lVar17 + 0x40) = plVar11;
    plVar12 = (long *)thunk_FUN_03f5d7b8();
    if (*(uint *)(lVar17 + 0x18) < 6) {
      if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_040bfbe8;
    }
    *(undefined8 *)(lVar17 + 0x48) = DAT_091f86e8;
    thunk_FUN_03f5d7b8();
    uVar16 = *(undefined8 *)(lVar13 + 0x20);
    local_1a4 = CONCAT31(local_1a4._1_3_,*(undefined1 *)(lVar13 + 0x2c));
    uVar14 = FUN_03f5c42c(DAT_09535400,&local_1a4);
    local_1a8 = CONCAT31(local_1a8._1_3_,*(undefined1 *)(lVar13 + 0x34));
    uVar15 = FUN_03f5c42c(DAT_09535400,&local_1a8);
    plVar12 = (long *)System_String__Format(DAT_09221a30,uVar16,uVar14,uVar15,0);
    if (*(uint *)(lVar17 + 0x18) < 7) {
      if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_040bfbe8;
    }
    *(long **)(lVar17 + 0x50) = plVar12;
    thunk_FUN_03f5d7b8();
    fVar24 = (float)UnityEngine_Time__get_time(0);
    local_2f0 = CONCAT44(local_2f0._4_4_,fVar24 - *(float *)(lVar13 + 0x28));
    uVar14 = FUN_03f5c42c(DAT_09535450,&local_2f0);
    plVar12 = (long *)System_String__Format(DAT_09218208,uVar14,0);
    if ((*(uint *)(lVar17 + 0x18) & 0xfffffff8) == 0) {
      if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_040bfbe8;
    }
    *(long **)(lVar17 + 0x58) = plVar12;
    plVar12 = (long *)thunk_FUN_03f5d7b8();
    plVar10 = DAT_091f5700;
    if (*(char *)(lVar13 + 0x2c) != '\0') {
      fVar24 = (float)UnityEngine_Time__get_time(0);
      local_2f0 = CONCAT44(local_2f0._4_4_,fVar24 - *(float *)(lVar13 + 0x30));
      uVar14 = FUN_03f5c42c(DAT_09535450,&local_2f0);
      plVar12 = (long *)System_String__Format(DAT_091f8828,uVar14,0);
      plVar10 = plVar12;
    }
    if (*(uint *)(lVar17 + 0x18) < 9) goto LAB_040bf904;
    *(long **)(lVar17 + 0x60) = plVar10;
    thunk_FUN_03f5d7b8();
    uVar14 = System_String__Concat(lVar17,0);
    plVar12 = (long *)System_Text_StringBuilder__AppendLine(plVar9,uVar14,0);
  }
  if (*(long *)(lVar19 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_040bfbe8;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar20 = piVar20 + 4;
    if (uVar8 == 0) break;
LAB_040bf140:
    if (*(long *)(piVar20 + -2) == DAT_09185a58) {
      puVar22 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_040bf174;
    }
  }
LAB_040bf158:
  puVar22 = (undefined8 *)FUN_03f95da8(local_158,DAT_09185a58,0);
LAB_040bf174:
  (*(code *)*puVar22)(plVar10,puVar22[1]);
LAB_040bf180:
  lVar13 = AnhPD_FoodOrder_ServeShelfController__get_LineHandle();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  plVar12 = (long *)UnityEngine_Object__op_Implicit(lVar13,0);
  if (((ulong)plVar12 & 1) == 0) {
LAB_040bf888:
    if (*(char *)(param_1 + 0x8c) != '\0') {
      lVar13 = AnhPD_FoodOrder_ServeShelfController__get_WholeDish(param_1);
      if (lVar13 == 0) goto LAB_040bfa84;
      AnhPD_FoodOrder_ServeShelfController_WholeDishMode__AppendReport(lVar13,plVar9,0);
    }
    plVar12 = (long *)(**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
LAB_040bf8bc:
    if (*(long *)(lVar19 + 0x28) == local_68) {
      return;
    }
    goto LAB_040bfbe8;
  }
  if ((lVar13 != 0) && (plVar10 = *(long **)(lVar13 + 0xe8), plVar10 != (long *)0x0)) {
    lVar13 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == DAT_0917b348) {
          puVar22 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_040bf220;
        }
        uVar8 = uVar8 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar8 != 0);
    }
    puVar22 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b348,0);
LAB_040bf220:
    uVar6 = (*(code *)*puVar22)(plVar10,puVar22[1]);
    local_2f0 = CONCAT44(local_2f0._4_4_,uVar6);
    uVar14 = FUN_03f5c42c(DAT_09535420,&local_2f0);
    uVar14 = System_String__Format(DAT_0921e8c0,uVar14,0);
    System_Text_StringBuilder__AppendLine(plVar9,uVar14,0);
    iVar21 = 0;
    do {
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == DAT_0917b348) {
            puVar22 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_040bf2cc;
          }
          uVar8 = uVar8 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar8 != 0);
      }
      puVar22 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b348,0);
LAB_040bf2cc:
      iVar5 = (*(code *)*puVar22)(plVar10,puVar22[1]);
      if (iVar5 <= iVar21) goto LAB_040bf888;
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == DAT_0917b4e0) {
            puVar22 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_040bf334;
          }
          uVar8 = uVar8 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar8 != 0);
      }
      puVar22 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b4e0,0);
LAB_040bf334:
      lVar13 = (*(code *)*puVar22)(plVar10,iVar21,puVar22[1]);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar8 = UnityEngine_Object__op_Implicit(lVar13,0);
      if ((uVar8 & 1) != 0) {
        local_2f0 = CONCAT44(local_2f0._4_4_,iVar21);
        plVar12 = (long *)FUN_03f5c42c(DAT_09535420,&local_2f0);
        if (lVar13 == 0) break;
        uVar6 = AnhPD_FoodOrder_FCustomerLine__get_State(lVar13,0);
        local_2a0 = CONCAT44(local_2a0._4_4_,uVar6);
        uVar14 = FUN_03f5c42c(DAT_09187918,&local_2a0);
        uVar15 = AnhPD_FoodOrder_FCustomerLine__DebugRevealState(lVar13,0);
        uVar14 = System_String__Format(DAT_091f5c60,plVar12,uVar14,uVar15,0);
        uVar4 = AnhPD_FoodOrder_FCustomerLine__get_isShowingCustomer(lVar13,0);
        local_1a4 = CONCAT31(local_1a4._1_3_,uVar4) & 0xffffff01;
        uVar15 = FUN_03f5c42c(DAT_09535400,&local_1a4);
        uVar4 = AnhPD_FoodOrder_FCustomerLine__get_IsCustomerReady(lVar13,0);
        local_1a8 = CONCAT31(local_1a8._1_3_,uVar4) & 0xffffff01;
        uVar16 = FUN_03f5c42c(DAT_09535400,&local_1a8);
        uVar15 = System_String__Format(DAT_09222c10,uVar15,uVar16,0);
        uVar4 = AnhPD_FoodOrder_FCustomerLine__get_IsTimerSatisfied(lVar13,0);
        local_1ac = CONCAT31(local_1ac._1_3_,uVar4) & 0xffffff01;
        plVar11 = (long *)FUN_03f5c42c(DAT_09535400,&local_1ac);
        plVar12 = plVar11;
        if (**(long **)(DAT_091881a0 + 0xb8) == 0) break;
        lVar17 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x180);
        plVar12 = (long *)0x0;
        if (lVar17 == 0) break;
        uVar4 = AnhPD_FoodOrder_ServeService__HasReservation(lVar17,lVar13,0);
        local_1d4 = CONCAT31(local_1d4._1_3_,uVar4) & 0xffffff01;
        uVar16 = FUN_03f5c42c(DAT_09535400,&local_1d4);
        uVar16 = System_String__Format(DAT_09223f10,plVar11,uVar16,0);
        uVar14 = System_String__Concat(uVar14,uVar15,uVar16,0);
        System_Text_StringBuilder__Append(plVar9,uVar14,0);
        lVar17 = *(long *)(param_1 + 0x90);
        plVar12 = (long *)0x0;
        if (lVar17 == 0) break;
        iVar5 = 0;
        while (iVar5 < *(int *)(lVar17 + 0x18)) {
          uVar14 = FUN_057e0998(lVar17,iVar5,DAT_091afe58);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar8 = UnityEngine_Object__op_Implicit(uVar14,0);
          plVar11 = (long *)0x0;
          if ((uVar8 & 1) != 0) {
            plVar12 = (long *)0x0;
            if (*(long *)(param_1 + 0x90) == 0) goto LAB_040beb48;
            lVar17 = FUN_057e0998(*(long *)(param_1 + 0x90),iVar5,DAT_091afe58);
            plVar12 = (long *)0x0;
            if (lVar17 == 0) goto LAB_040beb48;
            plVar11 = *(long **)(lVar17 + 0xa8);
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar12 = (long *)UnityEngine_Object__op_Implicit(plVar11,0);
          if (((ulong)plVar12 & 1) != 0) {
            if (plVar11 == (long *)0x0) goto LAB_040beb48;
            uVar14 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
            uVar4 = AnhPD_FoodOrder_FCustomerLine__CanAccept(lVar13,plVar11,0,0);
            local_2f0 = CONCAT71(local_2f0._1_7_,uVar4) & 0xffffffffffffff01;
            uVar15 = FUN_03f5c42c(DAT_09535400,&local_2f0);
            uVar14 = System_String__Format(DAT_09226700,uVar14,uVar15,0);
            System_Text_StringBuilder__Append(plVar9,uVar14,0);
          }
          lVar17 = *(long *)(param_1 + 0x90);
          iVar5 = iVar5 + 1;
          if (lVar17 == 0) {
            plVar12 = (long *)0x0;
            goto LAB_040beb48;
          }
        }
        System_Text_StringBuilder__AppendLine(plVar9,DAT_09214720,0);
        lVar17 = AnhPD_FoodOrder_FCustomerLine__GetOpenOrderIndices(lVar13,0);
        iVar5 = AnhPD_FoodOrder_FCustomerLine__get_OrderCount(lVar13,0);
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            AnhPD_FoodOrder_FCustomerLine__GetOrderSpec(&local_2f0,lVar13,iVar5,0);
            uVar15 = local_2c0;
            uVar4 = local_2c8;
            uVar14 = uStack_2e8;
            uVar8 = local_2f0;
            uStack_178 = uStack_2d8;
            local_180 = local_2e0;
            local_170 = local_2d0;
            lVar18 = FUN_03f5c394(DAT_091805f8,5);
            local_2f0 = CONCAT44(local_2f0._4_4_,iVar5);
            uVar16 = FUN_03f5c42c(DAT_09535420,&local_2f0);
            plVar12 = (long *)System_String__Format(DAT_091f5b90,uVar16,uVar8,uVar14,0);
            if (lVar18 == 0) goto LAB_040beb48;
            if (*(int *)(lVar18 + 0x18) == 0) goto LAB_040bf8ec;
            *(long **)(lVar18 + 0x20) = plVar12;
            thunk_FUN_03f5d7b8();
            if (*(int *)(DAT_09189140 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_308 = uStack_178;
            local_310 = local_180;
            local_300 = local_170;
            uVar14 = AnhPD_FoodOrder_PieceLedger__PieceNames(&local_310,0);
            local_2a0 = CONCAT71(local_2a0._1_7_,uVar4) & 0xffffffffffffff01;
            plVar12 = (long *)FUN_03f5c42c(DAT_09535400,&local_2a0);
            if (lVar17 == 0) goto LAB_040beb48;
            uVar4 = FUN_05797528(lVar17,iVar5,DAT_091adcb0);
            local_1a4 = CONCAT31(local_1a4._1_3_,uVar4) & 0xffffff01;
            uVar16 = FUN_03f5c42c(DAT_09535400,&local_1a4);
            plVar12 = (long *)System_String__Format(DAT_09220cd8,uVar14,plVar12,uVar16,0);
            if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) == 0) goto LAB_040bf8ec;
            *(ulong *)(lVar18 + 0x28) = (ulong)plVar12;
            plVar12 = (long *)thunk_FUN_03f5d7b8((ulong *)(lVar18 + 0x28),plVar12);
            if (*(uint *)(lVar18 + 0x18) < 3) goto LAB_040bf8ec;
            *(undefined8 *)(lVar18 + 0x30) = DAT_09221658;
            plVar12 = (long *)thunk_FUN_03f5d7b8((undefined8 *)(lVar18 + 0x30));
            if ((*(uint *)(lVar18 + 0x18) & 0xfffffffc) == 0) goto LAB_040bf8ec;
            *(undefined8 *)(lVar18 + 0x38) = uVar15;
            plVar12 = (long *)thunk_FUN_03f5d7b8((undefined8 *)(lVar18 + 0x38),uVar15);
            if (*(uint *)(lVar18 + 0x18) < 5) goto LAB_040bf8ec;
            *(undefined8 *)(lVar18 + 0x40) = DAT_091f7320;
            thunk_FUN_03f5d7b8();
            uVar14 = System_String__Concat(lVar18,0);
            System_Text_StringBuilder__AppendLine(plVar9,uVar14,0);
            iVar5 = iVar5 + 1;
            iVar7 = AnhPD_FoodOrder_FCustomerLine__get_OrderCount(lVar13,0);
          } while (iVar5 < iVar7);
        }
      }
      iVar21 = iVar21 + 1;
    } while( true );
  }
LAB_040beb48:
  lVar19 = *(long *)(lVar19 + 0x28);
LAB_040beb50:
  if (lVar19 == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_040bfbe8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar12);
}

