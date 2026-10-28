// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PlanCapture
// address: 0x44606c4
// body: available
// range: 0x44606c4-0x446189b inclusive
// range: 0x44618a0-0x44618a3 inclusive
// range: 0x44618a8-0x44618ab inclusive
// range: 0x44618b0-0x44618b3 inclusive
// range: 0x44618b8-0x44618bb inclusive
// range: 0x44618c0-0x44618c3 inclusive
// range: 0x44618c8-0x44618cb inclusive
// range: 0x4461964-0x44619d3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4461898 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44618a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44618a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44618b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44618b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44618c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44618c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44619d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long CookingGraph_CookingLevelSimulation__PlanCapture
               (long param_1,undefined8 param_2,undefined4 param_3,char *param_4,undefined8 *param_5
               )

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  int iVar21;
  long local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  long local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_210;
  long *plStack_208;
  undefined8 local_200;
  long local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  long *plStack_188;
  undefined8 local_180;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0951807e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6848);
    FUN_03f5c2a4(&DAT_0919c1b0);
    FUN_03f5c2a4(&DAT_091c9298);
    FUN_03f5c2a4(&DAT_091c9458);
    FUN_03f5c2a4(&DAT_091c9ca8);
    FUN_03f5c2a4(&DAT_091ca0c0);
    FUN_03f5c2a4(&DAT_091ca558);
    FUN_03f5c2a4(&DAT_091ca840);
    FUN_03f5c2a4(&DAT_091cac98);
    FUN_03f5c2a4(&DAT_091cb618);
    FUN_03f5c2a4(&DAT_091a2750);
    FUN_03f5c2a4(&DAT_091a2758);
    FUN_03f5c2a4(&DAT_091a2760);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_091793e0);
    FUN_03f5c2a4(&DAT_091793d8);
    FUN_03f5c2a4(&DAT_091793d0);
    FUN_03f5c2a4(&DAT_09178ba8);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_091a82f8);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091abf20);
    FUN_03f5c2a4(&DAT_091ac090);
    FUN_03f5c2a4(&DAT_091abf18);
    FUN_03f5c2a4(&DAT_091abf28);
    FUN_03f5c2a4(&DAT_091abf10);
    FUN_03f5c2a4(&DAT_091ac088);
    FUN_03f5c2a4(&DAT_091ac0b8);
    FUN_03f5c2a4(&DAT_0917bf78);
    FUN_03f5c2a4(&DAT_0917bf20);
    FUN_03f5c2a4(&DAT_091b6bb0);
    FUN_03f5c2a4(&DAT_091b6bb8);
    FUN_03f5c2a4(&DAT_091b6bd0);
    FUN_03f5c2a4(&DAT_091b6bc0);
    FUN_03f5c2a4(&DAT_091b6bd8);
    FUN_03f5c2a4(&DAT_091e7790);
    FUN_03f5c2a4(&DAT_091e7798);
    FUN_03f5c2a4(&DAT_091e77a0);
    FUN_03f5c2a4(&DAT_091e77a8);
    FUN_03f5c2a4(&DAT_091e7dc0);
    FUN_03f5c2a4(&DAT_0918f538);
    FUN_03f5c2a4(&DAT_091e7dc8);
    FUN_03f5c2a4(&DAT_0918f540);
    FUN_03f5c2a4(&DAT_091e7dd0);
    FUN_03f5c2a4(&DAT_0918f548);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_0951807e = 1;
  }
  uStack_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_150 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_0918f538);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass302_0___ctor(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar6 + 0x18),param_1);
    lVar7 = CookingGraph_CookingLevelSimulation__Assembly(param_1,param_2,param_3);
    plVar17 = (long *)(lVar6 + 0x10);
    *plVar17 = lVar7;
    thunk_FUN_03f5d7b8(plVar17,lVar7);
    if (*plVar17 != 0) {
      uVar8 = CookingGraph_Execution_CookingAssemblySnapshot__get_Complete(*plVar17,0);
      if ((uVar8 & 1) != 0) {
        return 0;
      }
      lVar7 = thunk_FUN_03f9944c(DAT_0917bf78);
      FUN_05744974(lVar7,DAT_091ac088);
      uVar9 = thunk_FUN_03f9944c(DAT_09179e20);
      FUN_053e1118(uVar9,DAT_091a82f8);
      *(undefined8 *)(lVar6 + 0x20) = uVar9;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x20),uVar9);
      lVar13 = *(long *)(lVar6 + 0x10);
      if (lVar13 != 0) {
        bVar1 = false;
        bVar2 = 0;
        iVar21 = 0;
        while (plVar18 = *(long **)(lVar13 + 0x28), plVar18 != (long *)0x0) {
          lVar13 = *plVar18;
          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_0917b310) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_04460af8;
              }
              uVar8 = uVar8 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917b310,0);
LAB_04460af8:
          iVar5 = (*(code *)*puVar10)(plVar18,puVar10[1]);
          if (iVar5 <= iVar21) {
            if (lVar7 != 0) {
              if ((*(int *)(lVar7 + 0x18) != 0 & bVar2) != 1) {
                return 0;
              }
              if (*param_4 != '\0' && !bVar1) {
                return 0;
              }
              return lVar7;
            }
            break;
          }
          lVar13 = thunk_FUN_03f9944c(DAT_0918f540);
          CookingGraph_CookingLevelSimulation_<>c__DisplayClass302_1___ctor(lVar13,0);
          if (lVar13 == 0) break;
          plVar18 = (long *)(lVar13 + 0x18);
          *plVar18 = lVar6;
          thunk_FUN_03f5d7b8(plVar18,lVar6);
          if (((*plVar18 == 0) || (lVar14 = *(long *)(*plVar18 + 0x10), lVar14 == 0)) ||
             (plVar19 = *(long **)(lVar14 + 0x30), plVar19 == (long *)0x0)) break;
          lVar14 = *plVar19;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_0917b498) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_04460bac;
              }
              uVar8 = uVar8 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(plVar19,DAT_0917b498,0);
LAB_04460bac:
          uVar8 = (*(code *)*puVar10)(plVar19,iVar21,puVar10[1]);
          if ((uVar8 & 1) == 0) {
            if (((*plVar18 == 0) || (lVar14 = *(long *)(*plVar18 + 0x10), lVar14 == 0)) ||
               (plVar19 = *(long **)(lVar14 + 0x38), plVar19 == (long *)0x0)) break;
            lVar14 = *plVar19;
            uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar8 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == DAT_0917b498) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_04460c2c;
                }
                uVar8 = uVar8 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_03f95da8(plVar19,DAT_0917b498,0);
LAB_04460c2c:
            uVar8 = (*(code *)*puVar10)(plVar19,iVar21,puVar10[1]);
            if ((uVar8 & 1) != 0) {
              return 0;
            }
            if (((*plVar18 == 0) || (lVar14 = *(long *)(*plVar18 + 0x10), lVar14 == 0)) ||
               (plVar19 = *(long **)(lVar14 + 0x28), plVar19 == (long *)0x0)) break;
            lVar14 = *plVar19;
            uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar8 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == DAT_0917b4b0) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_04460cac;
                }
                uVar8 = uVar8 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_03f95da8(plVar19,DAT_0917b4b0,0);
LAB_04460cac:
            lVar14 = (*(code *)*puVar10)(plVar19,iVar21,puVar10[1]);
            if ((lVar14 == 0) || (lVar20 = *plVar18, lVar20 == 0)) break;
            uVar9 = *(undefined8 *)(lVar14 + 0x28);
            lVar14 = *(long *)(lVar20 + 0x28);
            if (lVar14 == 0) {
              lVar14 = thunk_FUN_03f9944c(DAT_09178b98);
              FUN_05315754(lVar14,lVar20,DAT_091e7dc0,0);
              *(long *)(lVar20 + 0x28) = lVar14;
              thunk_FUN_03f5d7b8((long *)(lVar20 + 0x28),lVar14);
            }
            bVar4 = FUN_04ab2d14(uVar9,lVar14,DAT_091c9298);
            if (((*plVar18 == 0) || (lVar14 = *(long *)(*plVar18 + 0x10), lVar14 == 0)) ||
               (plVar19 = *(long **)(lVar14 + 0x28), plVar19 == (long *)0x0)) break;
            lVar14 = *plVar19;
            uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar8 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == DAT_0917b4b0) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_04460da4;
                }
                uVar8 = uVar8 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_03f95da8(plVar19,DAT_0917b4b0,0);
LAB_04460da4:
            lVar14 = (*(code *)*puVar10)(plVar19,iVar21,puVar10[1]);
            if (lVar14 == 0) break;
            bVar2 = bVar4 | bVar2;
            *(undefined4 *)(lVar13 + 0x10) = *(undefined4 *)(lVar14 + 0x10);
            CookingGraph_CookingLevelSimulation__DishAddress(&local_f8,param_2,param_3,iVar21);
            if (*param_4 != '\0' && !bVar1) {
              FUN_05c2bdf0(&local_2f0,param_4,DAT_091b6bd8);
              if ((int)uStack_2e8 == *(int *)(lVar13 + 0x10)) {
                if ((*(long *)(param_1 + 0x180) == 0) ||
                   (lVar14 = *(long *)(*(long *)(param_1 + 0x180) + 0x40), lVar14 == 0)) break;
                if (*(char *)(lVar14 + 0x60) == '\0') {
                  bVar3 = true;
                }
                else {
                  if (((*plVar18 == 0) || (lVar14 = *(long *)(*plVar18 + 0x10), lVar14 == 0)) ||
                     (plVar19 = *(long **)(lVar14 + 0x28), plVar19 == (long *)0x0)) break;
                  lVar14 = *plVar19;
                  uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar8 != 0) {
                    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == DAT_0917b4b0) {
                        puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_04460ea8;
                      }
                      uVar8 = uVar8 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_03f95da8(plVar19,DAT_0917b4b0,0);
LAB_04460ea8:
                  lVar14 = (*(code *)*puVar10)(plVar19,iVar21,puVar10[1]);
                  if ((lVar14 == 0) || (plVar19 = *(long **)(lVar14 + 0x28), plVar19 == (long *)0x0)
                     ) break;
                  lVar14 = *plVar19;
                  uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar8 != 0) {
                    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == DAT_0917b378) {
                        puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_04460f18;
                      }
                      uVar8 = uVar8 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_03f95da8(plVar19,DAT_0917b378,0);
LAB_04460f18:
                  iVar5 = (*(code *)*puVar10)(plVar19,puVar10[1]);
                  bVar3 = iVar5 == 0;
                }
                if (bVar3 || (bVar4 & 1) != 0) {
                  if (*plVar18 != 0) {
                    lVar13 = *(long *)(*plVar18 + 0x20);
                    FUN_05c2bdf0(&local_2f0,param_4,DAT_091b6bd8);
                    if (lVar13 != 0) {
                      FUN_053e230c(lVar13,local_2f0,DAT_091a8308);
                      plStack_188 = (long *)param_5[1];
                      local_190 = *param_5;
                      local_180 = param_5[2];
                      uStack_1a8 = uStack_f0;
                      local_1b0 = local_f8;
                      local_1a0 = local_e8;
                      FUN_05c2bdf0(&local_2f0,param_4,DAT_091b6bd8);
                      plStack_208 = plStack_188;
                      local_210 = local_190;
                      local_200 = local_180;
                      local_1c0 = 0;
                      uStack_1d8 = 0;
                      local_1e0 = 0;
                      uStack_1c8 = 0;
                      uStack_1d0 = 0;
                      uStack_1e8 = 0;
                      local_1f0 = 0;
                      uStack_228 = uStack_1a8;
                      local_230 = local_1b0;
                      local_220 = local_1a0;
                      CookingGraph_Execution_CookingTransferRequest___ctor
                                (&local_1f0,&local_210,&local_230,local_2f0,0);
                      lVar13 = DAT_091ac090;
                      if (lVar7 != 0) {
                        uStack_88 = uStack_1d8;
                        local_90 = local_1e0;
                        uStack_78 = uStack_1c8;
                        local_80 = uStack_1d0;
                        local_70 = local_1c0;
                        uStack_98 = uStack_1e8;
                        local_a0 = local_1f0;
                        lVar14 = *(long *)(lVar7 + 0x10);
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        if (lVar14 != 0) {
                          uVar12 = *(uint *)(lVar7 + 0x18);
                          if (uVar12 < *(uint *)(lVar14 + 0x18)) {
                            lVar14 = lVar14 + (long)(int)uVar12 * 0x38;
                            *(uint *)(lVar7 + 0x18) = uVar12 + 1;
                            *(undefined8 *)(lVar14 + 0x28) = uStack_1e8;
                            *(long *)(lVar14 + 0x20) = local_1f0;
                            *(undefined8 *)(lVar14 + 0x38) = uStack_1d8;
                            *(undefined8 *)(lVar14 + 0x30) = local_1e0;
                            *(undefined8 *)(lVar14 + 0x48) = uStack_1c8;
                            *(undefined8 *)(lVar14 + 0x40) = uStack_1d0;
                            *(undefined8 *)(lVar14 + 0x50) = local_1c0;
                            thunk_FUN_03f5d7b8(lVar14 + 0x28,0);
                          }
                          else {
                            uStack_2e8 = uStack_1e8;
                            local_2f0 = local_1f0;
                            uStack_2d8 = uStack_1d8;
                            local_2e0 = local_1e0;
                            uStack_2c8 = uStack_1c8;
                            local_2d0 = uStack_1d0;
                            local_2c0 = local_1c0;
                            FUN_057452c4(lVar7,&local_2f0,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                          }
                          bVar1 = true;
                          goto LAB_04461884;
                        }
                      }
                    }
                  }
                  break;
                }
              }
            }
            lVar14 = thunk_FUN_03f9944c(DAT_0917bf20);
            FUN_0573917c(lVar14,DAT_091abf10);
            if (-1 < *(int *)(param_1 + 0x16c)) {
              CookingGraph_CookingLevelSimulation__get_BagAddress(&local_a0,param_1);
              lVar20 = DAT_091abf18;
              if (lVar14 == 0) break;
              lVar15 = *(long *)(lVar14 + 0x10);
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar15 == 0) break;
              uVar12 = *(uint *)(lVar14 + 0x18);
              if (uVar12 < *(uint *)(lVar15 + 0x18)) {
                lVar15 = lVar15 + (long)(int)uVar12 * 0x18;
                *(uint *)(lVar14 + 0x18) = uVar12 + 1;
                *(undefined8 *)(lVar15 + 0x30) = local_90;
                *(undefined8 *)(lVar15 + 0x28) = uStack_98;
                *(long *)(lVar15 + 0x20) = local_a0;
                thunk_FUN_03f5d7b8(lVar15 + 0x28,0);
              }
              else {
                uStack_2e8 = uStack_98;
                local_2f0 = local_a0;
                local_2e0 = local_90;
                FUN_05739aa0(lVar14,&local_2f0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (*(long *)(param_1 + 0x90) == 0) break;
            uVar9 = System_Linq_Enumerable__Range
                              (0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0);
            uVar11 = thunk_FUN_03f9944c(DAT_09178ba8);
            FUN_05315970(uVar11,0,DAT_091c6848,0);
            uVar9 = FUN_04af2704(uVar9,uVar11,DAT_091ca558);
            if (lVar14 == 0) break;
            FUN_05739d0c(lVar14,uVar9,DAT_091abf20);
            if (*(long *)(param_1 + 0xb0) == 0) break;
            uVar9 = FUN_06e4bd5c(*(long *)(param_1 + 0xb0),DAT_0919c1b0);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
            }
            puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar20 = puVar10[0xb1];
            if (lVar20 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f298);
                puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar11 = *puVar10;
              lVar20 = thunk_FUN_03f9944c(DAT_091793d0);
              FUN_05322d94(lVar20,uVar11,DAT_091e7790,0);
              lVar15 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar15 + 0x588) = lVar20;
              thunk_FUN_03f5d7b8(lVar15 + 0x588,lVar20);
            }
            uVar9 = FUN_04b0cafc(uVar9,lVar20,DAT_091cb618);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
            }
            puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar20 = puVar10[0xb2];
            if (lVar20 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f298);
                puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar11 = *puVar10;
              lVar20 = thunk_FUN_03f9944c(DAT_091793e0);
              FUN_053239c8(lVar20,uVar11,DAT_091e7798,0);
              lVar15 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar15 + 0x590) = lVar20;
              thunk_FUN_03f5d7b8(lVar15 + 0x590,lVar20);
            }
            uVar9 = FUN_04aeab54(uVar9,lVar20,DAT_091ca0c0);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
            }
            puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar20 = puVar10[0xb3];
            if (lVar20 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f298);
                puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar11 = *puVar10;
              lVar20 = thunk_FUN_03f9944c(DAT_091793e0);
              FUN_053239c8(lVar20,uVar11,DAT_091e77a0,0);
              lVar15 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar15 + 0x598) = lVar20;
              thunk_FUN_03f5d7b8(lVar15 + 0x598,lVar20);
            }
            uVar9 = FUN_04b038e4(uVar9,lVar20,DAT_091cac98);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
            }
            puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar20 = puVar10[0xb4];
            if (lVar20 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f298);
                puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar11 = *puVar10;
              lVar20 = thunk_FUN_03f9944c(DAT_091793d8);
              FUN_0532343c(lVar20,uVar11,DAT_091e77a8,0);
              lVar15 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar15 + 0x5a0) = lVar20;
              thunk_FUN_03f5d7b8(lVar15 + 0x5a0,lVar20);
            }
            uVar9 = FUN_04af5db8(uVar9,lVar20,DAT_091ca840);
            FUN_05739d0c(lVar14,uVar9,DAT_091abf20);
            uStack_118 = 0;
            local_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            FUN_0573a8e0(&local_2f0,lVar14,DAT_091abf28);
            local_190 = 0;
            uStack_168 = uStack_2e8;
            local_170 = local_2f0;
            uStack_158 = uStack_2d8;
            local_160 = local_2e0;
            local_150 = local_2d0;
            plStack_188 = &local_170;
LAB_044614ec:
            do {
              uVar8 = FUN_071997ec(&local_170,DAT_091a2758);
              if ((uVar8 & 1) == 0) goto LAB_04461758;
              lVar14 = thunk_FUN_03f9944c(DAT_0918f548);
              CookingGraph_CookingLevelSimulation_<>c__DisplayClass302_2___ctor(lVar14,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(undefined8 *)(lVar14 + 0x20) = local_150;
              *(undefined8 *)(lVar14 + 0x18) = uStack_158;
              *(undefined8 *)(lVar14 + 0x10) = local_160;
              thunk_FUN_03f5d7b8(lVar14 + 0x18,0);
              uVar12 = *(uint *)(lVar14 + 0x10);
              if ((uVar12 | 2) != 3) {
                uStack_248 = *(undefined8 *)(lVar14 + 0x18);
                local_250 = *(undefined8 *)(lVar14 + 0x10);
                local_240 = *(undefined8 *)(lVar14 + 0x20);
                uVar8 = CookingGraph_CookingLevelSimulation__Outgoing(param_1,&local_250);
                if ((uVar8 & 1) != 0) goto LAB_044614ec;
                uVar12 = *(uint *)(lVar14 + 0x10);
                if (uVar12 == 2) {
                  uVar8 = CookingGraph_CookingLevelSimulation__MomentHeld
                                    (param_1,*(undefined4 *)(lVar14 + 0x20));
                  if ((uVar8 & 1) != 0) goto LAB_044614ec;
                  uVar12 = *(uint *)(lVar14 + 0x10);
                }
              }
              if (uVar12 == 3) {
                if (*(long *)(param_1 + 0x180) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar20 = *(long *)(*(long *)(param_1 + 0x180) + 0x48);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(char *)(lVar20 + 0x13) == '\0') {
                  if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar9 = CookingGraph_Execution_CookingExecution__get_Transfers
                                    (*(long *)(param_1 + 0x178),0);
                  uVar11 = thunk_FUN_03f9944c(DAT_09178730);
                  FUN_05322d94(uVar11,lVar14,DAT_091e7dd0,0);
                  uVar8 = FUN_04ab6f28(uVar9,uVar11,DAT_091c9458);
                  if ((uVar8 & 1) != 0) goto LAB_044614ec;
                }
              }
              if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uStack_268 = *(undefined8 *)(lVar14 + 0x18);
              local_270 = *(undefined8 *)(lVar14 + 0x10);
              local_260 = *(undefined8 *)(lVar14 + 0x20);
              uVar9 = CookingGraph_Execution_CookingExecution__UnitsAt
                                (*(long *)(param_1 + 0x178),&local_270,0);
              lVar20 = *(long *)(lVar13 + 0x20);
              if (lVar20 == 0) {
                lVar20 = thunk_FUN_03f9944c(DAT_09178768);
                FUN_053136a4(lVar20,lVar13,DAT_091e7dc8,0);
                *(long *)(lVar13 + 0x20) = lVar20;
                thunk_FUN_03f5d7b8(lVar13 + 0x20,lVar20);
              }
              FUN_04ae5c68(&local_2f0,uVar9,lVar20,DAT_091c9ca8);
              lVar20 = local_2f0;
            } while (local_2f0 == 0);
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar13 = *(long *)(*plVar18 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_053e230c(lVar13,local_2f0,DAT_091a8308);
            uStack_288 = *(undefined8 *)(lVar14 + 0x18);
            local_290 = *(long *)(lVar14 + 0x10);
            local_280 = *(undefined8 *)(lVar14 + 0x20);
            local_70 = 0;
            uStack_2a8 = uStack_f0;
            local_2b0 = local_f8;
            local_2a0 = local_e8;
            uStack_88 = 0;
            local_90 = 0;
            uStack_78 = 0;
            local_80 = 0;
            uStack_98 = 0;
            local_a0 = 0;
            local_1f0 = local_290;
            uStack_1e8 = uStack_288;
            local_1e0 = local_280;
            CookingGraph_Execution_CookingTransferRequest___ctor
                      (&local_a0,&local_290,&local_2b0,lVar20,0);
            uStack_b8 = uStack_78;
            local_c0 = local_80;
            uStack_2e8 = 0;
            local_2f0 = 0;
            uStack_2d8 = 0;
            local_2e0 = 0;
            uStack_2c8 = 0;
            local_2d0 = 0;
            uStack_2b8 = 0;
            local_2c0 = 0;
            uStack_d8 = uStack_98;
            local_e0 = local_a0;
            uStack_c8 = uStack_88;
            uStack_d0 = local_90;
            local_b0 = local_70;
            FUN_05c2b824(&local_2f0,&local_e0,DAT_091b6bb0);
            uStack_138 = uStack_2e8;
            local_140 = local_2f0;
            uStack_128 = uStack_2d8;
            uStack_130 = local_2e0;
            uStack_118 = uStack_2c8;
            local_120 = local_2d0;
            uStack_108 = uStack_2b8;
            uStack_110 = local_2c0;
LAB_04461758:
            FUN_071997e8(&local_170,DAT_091a2750);
            if ((char)local_140 == '\0') {
              return 0;
            }
            FUN_05c2b86c(&local_1f0,&local_140,DAT_091b6bc0);
            lVar13 = DAT_091ac090;
            if (lVar7 == 0) break;
            uStack_88 = uStack_1d8;
            local_90 = local_1e0;
            uStack_78 = uStack_1c8;
            local_80 = uStack_1d0;
            local_70 = local_1c0;
            uStack_98 = uStack_1e8;
            local_a0 = local_1f0;
            lVar14 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar14 == 0) break;
            uVar12 = *(uint *)(lVar7 + 0x18);
            if (uVar12 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar12 * 0x38;
              *(uint *)(lVar7 + 0x18) = uVar12 + 1;
              *(undefined8 *)(lVar14 + 0x28) = uStack_1e8;
              *(long *)(lVar14 + 0x20) = local_1f0;
              *(undefined8 *)(lVar14 + 0x38) = uStack_1d8;
              *(undefined8 *)(lVar14 + 0x30) = local_1e0;
              *(undefined8 *)(lVar14 + 0x48) = uStack_1c8;
              *(undefined8 *)(lVar14 + 0x40) = uStack_1d0;
              *(undefined8 *)(lVar14 + 0x50) = local_1c0;
              thunk_FUN_03f5d7b8(lVar14 + 0x28,0);
            }
            else {
              uStack_2e8 = uStack_1e8;
              local_2f0 = local_1f0;
              uStack_2d8 = uStack_1d8;
              local_2e0 = local_1e0;
              uStack_2c8 = uStack_1c8;
              local_2d0 = uStack_1d0;
              local_2c0 = local_1c0;
              FUN_057452c4(lVar7,&local_2f0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
LAB_04461884:
          iVar21 = iVar21 + 1;
          lVar13 = *plVar17;
          if (lVar13 == 0) break;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

