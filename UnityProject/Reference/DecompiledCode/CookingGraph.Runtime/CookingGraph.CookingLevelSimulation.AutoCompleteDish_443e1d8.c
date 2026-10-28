// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$AutoCompleteDish
// address: 0x443e1d8
// body: available
// range: 0x443e1d8-0x443f2db inclusive
// range: 0x443f2e0-0x443f303 inclusive
// range: 0x443f308-0x443f32b inclusive
// range: 0x443f330-0x443f347 inclusive
// range: 0x443f34c-0x443f363 inclusive
// range: 0x443f368-0x443f37f inclusive
// range: 0x443f400-0x443fd07 inclusive
// range: 0x443fd0c-0x443fdab inclusive
// range: 0x443fdb0-0x443fdc7 inclusive
// range: 0x443fe14-0x444010f inclusive
// range: 0x44401c4-0x44401df inclusive
// range: 0x4440264-0x4440267 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x443e748 to 0x4449bb4 CookingGraph.CookingLevelSimulation$$AutoCompleteDishAtomic (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x443f2d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443f300 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443f328 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443f344 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443f360 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443f37c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443fd04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443fda8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443fdc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443ff80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443ff98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an inde
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0443fd8c) */
/* WARNING: Removing unreachable block (ram,0x0443fd90) */
/* WARNING: Removing unreachable block (ram,0x044400f4) */
/* WARNING: Removing unreachable block (ram,0x04440108) */
/* WARNING: Removing unreachable block (ram,0x0443fe40) */

undefined8
CookingGraph_CookingLevelSimulation__AutoCompleteDish
          (long param_1,long param_2,undefined4 param_3,uint param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  int iVar20;
  long *local_330;
  long **pplStack_328;
  long local_320;
  long *local_310;
  long **pplStack_308;
  long local_300;
  long *local_2f0;
  long **pplStack_2e8;
  long local_2e0;
  long *local_2d0;
  long **pplStack_2c8;
  long local_2c0;
  long *local_2b8;
  long **pplStack_2b0;
  long local_2a8;
  long local_2a0;
  long **local_298;
  long local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  long *local_270;
  long **pplStack_268;
  long local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  long local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  long *local_1f0;
  long **pplStack_1e8;
  long local_1e0;
  long *local_1d8;
  long *local_1d0;
  long **pplStack_1c8;
  long local_1c0;
  long *local_1b0;
  long **pplStack_1a8;
  long local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long *local_150;
  long **pplStack_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  int local_11c;
  long *local_118;
  long **local_110;
  long lStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long *local_e0;
  long **pplStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  long **pplStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long **local_80;
  long lStack_78;
  long local_68;
  
  lVar13 = tpidr_el0;
  local_68 = *(long *)(lVar13 + 0x28);
  if ((DAT_09518016 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6848);
    FUN_03f5c2a4(&DAT_091c6850);
    FUN_03f5c2a4(&DAT_0919e470);
    FUN_03f5c2a4(&DAT_0919e458);
    FUN_03f5c2a4(&DAT_0919c1b0);
    FUN_03f5c2a4(&DAT_0919e478);
    FUN_03f5c2a4(&DAT_091766c8);
    FUN_03f5c2a4(&DAT_091c9648);
    FUN_03f5c2a4(&DAT_091c9678);
    FUN_03f5c2a4(&DAT_091c9ca8);
    FUN_03f5c2a4(&DAT_091c9dc8);
    FUN_03f5c2a4(&DAT_091ca8c0);
    FUN_03f5c2a4(&DAT_091ca398);
    FUN_03f5c2a4(&DAT_091ca558);
    FUN_03f5c2a4(&DAT_091ca840);
    FUN_03f5c2a4(&DAT_091ca850);
    FUN_03f5c2a4(&DAT_091ca858);
    FUN_03f5c2a4(&DAT_091ca218);
    FUN_03f5c2a4(&DAT_091ca220);
    FUN_03f5c2a4(&DAT_091cb140);
    FUN_03f5c2a4(&DAT_091cb200);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_091cb618);
    FUN_03f5c2a4(&DAT_091a5108);
    FUN_03f5c2a4(&DAT_091a2750);
    FUN_03f5c2a4(&DAT_091a1f18);
    FUN_03f5c2a4(&DAT_091a1f20);
    FUN_03f5c2a4(&DAT_091a5110);
    FUN_03f5c2a4(&DAT_091a2758);
    FUN_03f5c2a4(&DAT_091a5118);
    FUN_03f5c2a4(&DAT_091a1f28);
    FUN_03f5c2a4(&DAT_091a2760);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178748);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_09179408);
    FUN_03f5c2a4(&DAT_091793d8);
    FUN_03f5c2a4(&DAT_091793d0);
    FUN_03f5c2a4(&DAT_09178210);
    FUN_03f5c2a4(&DAT_09178190);
    FUN_03f5c2a4(&DAT_09178ba8);
    FUN_03f5c2a4(&DAT_091793f8);
    FUN_03f5c2a4(&DAT_09179ba8);
    FUN_03f5c2a4(&DAT_09179568);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_091a82f8);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_0917b4c0);
    FUN_03f5c2a4(&DAT_091abf20);
    FUN_03f5c2a4(&DAT_091add58);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091abf18);
    FUN_03f5c2a4(&DAT_091aa9a8);
    FUN_03f5c2a4(&DAT_091b2570);
    FUN_03f5c2a4(&DAT_091b2580);
    FUN_03f5c2a4(&DAT_091aa9b0);
    FUN_03f5c2a4(&DAT_091abf28);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b2568);
    FUN_03f5c2a4(&DAT_091aa9a0);
    FUN_03f5c2a4(&DAT_091abf10);
    FUN_03f5c2a4(&DAT_091aa7d8);
    FUN_03f5c2a4(&DAT_091b2590);
    FUN_03f5c2a4(&DAT_091aa7e0);
    FUN_03f5c2a4(&DAT_091b25a0);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917bb08);
    FUN_03f5c2a4(&DAT_0917d270);
    FUN_03f5c2a4(&DAT_0917bf20);
    FUN_03f5c2a4(&DAT_091e7510);
    FUN_03f5c2a4(&DAT_091e7518);
    FUN_03f5c2a4(&DAT_091e7520);
    FUN_03f5c2a4(&DAT_091e7528);
    FUN_03f5c2a4(&DAT_091e7530);
    FUN_03f5c2a4(&DAT_091e7538);
    FUN_03f5c2a4(&DAT_091e7540);
    FUN_03f5c2a4(&DAT_091e7548);
    FUN_03f5c2a4(&DAT_091e7ee8);
    FUN_03f5c2a4(&DAT_091e7ef0);
    FUN_03f5c2a4(&DAT_0918f5d8);
    FUN_03f5c2a4(&DAT_091e7ef8);
    FUN_03f5c2a4(&DAT_091e7f00);
    FUN_03f5c2a4(&DAT_0918f5e0);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091bec10);
    FUN_03f5c2a4(&DAT_091fc4b0);
    DAT_09518016 = 1;
  }
  local_11c = 0;
  local_130 = 0;
  local_160 = 0;
  local_170 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  pplStack_148 = (long **)0x0;
  local_150 = (long *)0x0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_168 = 0;
  lStack_78 = 0;
  local_80 = (long **)0x0;
  pplStack_1a8 = (long **)0x0;
  local_1b0 = (long *)0x0;
  uStack_198 = 0;
  local_1a0 = 0;
  local_1d0 = (long *)0x0;
  pplStack_1c8 = (long **)0x0;
  local_1c0 = 0;
  local_1d8 = (long *)0x0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918f5d8);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass70_0___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_1);
    if ((*(long *)(param_1 + 0x180) != 0) &&
       (lVar9 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar9 != 0)) {
      if (*(char *)(lVar9 + 0x13) != '\0') {
        if (*(long *)(lVar13 + 0x28) == local_68) {
          uVar4 = CookingGraph_CookingLevelSimulation__AutoCompleteDishAtomic
                            (param_1,param_2,param_3,param_4 & 1,param_5);
          return uVar4;
        }
        goto LAB_04440264;
      }
      lVar9 = CookingGraph_CookingLevelSimulation__Assembly(param_1,param_2,param_3);
      plVar18 = (long *)(lVar3 + 0x30);
      *plVar18 = lVar9;
      thunk_FUN_03f5d7b8(plVar18,lVar9);
      lVar9 = thunk_FUN_03f9944c(DAT_0917bb08);
      FUN_056a7e2c(lVar9,DAT_091aa9a0);
      lVar5 = thunk_FUN_03f9944c(DAT_0917d270);
      FUN_057e0400(lVar5,DAT_091b2568);
      uVar4 = thunk_FUN_03f9944c(DAT_09179e20);
      FUN_053e1118(uVar4,DAT_091a82f8);
      *(undefined8 *)(lVar3 + 0x18) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18),uVar4);
      uVar4 = thunk_FUN_03f9944c(DAT_091766c8);
      FUN_06f4b670(uVar4,DAT_0919e458);
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20),uVar4);
      uVar4 = thunk_FUN_03f9944c(DAT_0917c520);
      FUN_05796918(uVar4,DAT_091adc70);
      *(undefined8 *)(lVar3 + 0x28) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28),uVar4);
      uVar4 = thunk_FUN_03f9944c(DAT_0917c520);
      FUN_05796918(uVar4,DAT_091adc70);
      *(undefined8 *)(lVar3 + 0x38) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38),uVar4);
      lVar10 = *plVar18;
      if (lVar10 != 0) {
        iVar20 = 0;
        while (plVar16 = *(long **)(lVar10 + 0x28), plVar16 != (long *)0x0) {
          lVar10 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == DAT_0917b310) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0443e8fc;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917b310,0);
LAB_0443e8fc:
          iVar2 = (*(code *)*puVar6)(plVar16,puVar6[1]);
          if (iVar2 <= iVar20) {
            if (param_5 != 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              lVar10 = puVar6[0x3c];
              if (lVar10 == 0) {
                if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                }
                uVar4 = *puVar6;
                lVar10 = thunk_FUN_03f9944c(DAT_09178210);
                FUN_0530c0d4(lVar10,uVar4,DAT_091e7510,0);
                lVar11 = *(long *)(DAT_0918f298 + 0xb8);
                *(long *)(lVar11 + 0x1e0) = lVar10;
                thunk_FUN_03f5d7b8(lVar11 + 0x1e0,lVar10);
              }
              uVar4 = FUN_04aeda54(lVar9,lVar10,DAT_091ca220);
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f298);
              }
              puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              lVar10 = puVar6[0x3d];
              if (lVar10 == 0) {
                if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_0918f298);
                  puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                }
                uVar7 = *puVar6;
                lVar10 = thunk_FUN_03f9944c(DAT_09179408);
                FUN_05323c00(lVar10,uVar7,DAT_091e7518,0);
                lVar11 = *(long *)(DAT_0918f298 + 0xb8);
                *(long *)(lVar11 + 0x1e8) = lVar10;
                thunk_FUN_03f5d7b8(lVar11 + 0x1e8,lVar10);
              }
              uVar7 = FUN_04af73b4(lVar5,lVar10,DAT_091ca858);
              uVar4 = FUN_04ad4380(uVar4,uVar7,DAT_091c9678);
              FUN_0579c618(param_5,uVar4,DAT_091add58);
            }
            if ((param_4 & 1) == 0) {
              uVar4 = 1;
              goto LAB_0443ff34;
            }
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar10 = puVar6[0x3e];
            if (lVar10 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar4 = *puVar6;
              lVar10 = thunk_FUN_03f9944c(DAT_09178210);
              FUN_0530c0d4(lVar10,uVar4,DAT_091e7520,0);
              lVar11 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar11 + 0x1f0) = lVar10;
              thunk_FUN_03f5d7b8(lVar11 + 0x1f0,lVar10);
            }
            uVar4 = FUN_04aeda54(lVar9,lVar10,DAT_091ca220);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
            }
            puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar10 = puVar6[0x3f];
            if (lVar10 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f298);
                puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar7 = *puVar6;
              lVar10 = thunk_FUN_03f9944c(DAT_09179408);
              FUN_05323c00(lVar10,uVar7,DAT_091e7528,0);
              lVar11 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar11 + 0x1f8) = lVar10;
              thunk_FUN_03f5d7b8(lVar11 + 0x1f8,lVar10);
            }
            uVar7 = FUN_04af73b4(lVar5,lVar10,DAT_091ca858);
            uVar4 = FUN_04ad4380(uVar4,uVar7,DAT_091c9678);
            lVar10 = FUN_04b08878(uVar4,DAT_091cb200);
            uVar4 = CookingGraph_CookingLevelSimulation__BoundServes(param_1,param_2,param_3);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
            }
            puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar11 = puVar6[0x40];
            if (lVar11 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f298);
                puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar7 = *puVar6;
              lVar11 = thunk_FUN_03f9944c(DAT_09178748);
              FUN_05323c00(lVar11,uVar7,DAT_091e7530,0);
              lVar19 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar19 + 0x200) = lVar11;
              thunk_FUN_03f5d7b8(lVar19 + 0x200,lVar11);
            }
            uVar7 = FUN_04af73b4(uVar4,lVar11,DAT_091ca398);
            if (lVar10 != 0) {
              FUN_0579c618(lVar10,uVar7,DAT_091add58);
              uVar7 = thunk_FUN_03f9944c(DAT_09179568);
              FUN_0532bcdc(uVar7,lVar3,DAT_091e7ee8,0);
              uVar7 = FUN_04aedd78(lVar9,uVar7,DAT_091ca218);
              uVar7 = FUN_04b08b78(uVar7,DAT_091cb140);
              if (lVar9 != 0) {
                FUN_056a958c(&local_270,lVar9,DAT_091aa9b0);
                pplStack_1a8 = pplStack_268;
                local_1b0 = local_270;
                uStack_198 = uStack_258;
                local_1a0 = local_260;
                uStack_188 = uStack_248;
                local_190 = local_250;
                uStack_178 = uStack_238;
                uStack_180 = uStack_240;
                local_270 = (long *)0x0;
                pplStack_268 = &local_1b0;
                goto LAB_0443f858;
              }
            }
            break;
          }
          lVar10 = thunk_FUN_03f9944c(DAT_0918f5e0);
          CookingGraph_CookingLevelSimulation_<>c__DisplayClass70_1___ctor(lVar10,0);
          if (lVar10 == 0) break;
          plVar16 = (long *)(lVar10 + 0x18);
          *plVar16 = lVar3;
          thunk_FUN_03f5d7b8(plVar16);
          if (((*plVar16 == 0) || (lVar11 = *(long *)(*plVar16 + 0x30), lVar11 == 0)) ||
             (plVar17 = *(long **)(lVar11 + 0x30), plVar17 == (long *)0x0)) break;
          lVar11 = *plVar17;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == DAT_0917b498) {
                puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0443e9b0;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917b498,0);
LAB_0443e9b0:
          uVar14 = (*(code *)*puVar6)(plVar17,iVar20,puVar6[1]);
          if ((uVar14 & 1) == 0) {
            if (((*plVar16 == 0) || (lVar11 = *(long *)(*plVar16 + 0x30), lVar11 == 0)) ||
               (plVar17 = *(long **)(lVar11 + 0x38), plVar17 == (long *)0x0)) break;
            lVar11 = *plVar17;
            uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == DAT_0917b498) {
                  puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0443ea30;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917b498,0);
LAB_0443ea30:
            uVar14 = (*(code *)*puVar6)(plVar17,iVar20,puVar6[1]);
            if ((uVar14 & 1) == 0) {
              if (((*plVar16 != 0) && (lVar11 = *(long *)(*plVar16 + 0x30), lVar11 != 0)) &&
                 (plVar17 = *(long **)(lVar11 + 0x28), plVar17 != (long *)0x0)) {
                lVar11 = *plVar17;
                uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == DAT_0917b4b0) {
                      puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_0443eab0;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917b4b0,0);
LAB_0443eab0:
                lVar11 = (*(code *)*puVar6)(plVar17,iVar20,puVar6[1]);
                if (lVar11 == 0) break;
                *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(lVar11 + 0x10);
                lVar11 = thunk_FUN_03f9944c(DAT_0917bf20);
                FUN_0573917c(lVar11,DAT_091abf10);
                if (-1 < *(int *)(param_1 + 0x16c)) {
                  CookingGraph_CookingLevelSimulation__get_BagAddress(&local_1f0,param_1);
                  lVar19 = DAT_091abf18;
                  if (lVar11 == 0) break;
                  lVar12 = *(long *)(lVar11 + 0x10);
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar12 == 0) break;
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)uVar1 * 0x18;
                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                    *(long *)(lVar12 + 0x30) = local_1e0;
                    *(long ***)(lVar12 + 0x28) = pplStack_1e8;
                    *(long **)(lVar12 + 0x20) = local_1f0;
                    thunk_FUN_03f5d7b8(lVar12 + 0x28,0);
                  }
                  else {
                    pplStack_268 = pplStack_1e8;
                    local_270 = local_1f0;
                    local_260 = local_1e0;
                    FUN_05739aa0(lVar11,&local_270,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                if (*(long *)(param_1 + 0x90) != 0) {
                  uVar4 = System_Linq_Enumerable__Range
                                    (0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0);
                  uVar7 = thunk_FUN_03f9944c(DAT_09178b98);
                  FUN_05315754(uVar7,param_1,DAT_091c6850,0);
                  uVar4 = FUN_04b0c1f0(uVar4,uVar7,DAT_091cb4e8);
                  uVar7 = thunk_FUN_03f9944c(DAT_09178ba8);
                  FUN_05315970(uVar7,0,DAT_091c6848,0);
                  uVar4 = FUN_04af2704(uVar4,uVar7,DAT_091ca558);
                  if (lVar11 != 0) {
                    FUN_05739d0c(lVar11,uVar4,DAT_091abf20);
                    if (*(long *)(param_1 + 0xb0) != 0) {
                      uVar4 = FUN_06e4bd5c(*(long *)(param_1 + 0xb0),DAT_0919c1b0);
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_0918f298);
                      }
                      puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      lVar19 = puVar6[0x39];
                      if (lVar19 == 0) {
                        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                          FUN_03f5c424(DAT_0918f298);
                          puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar7 = *puVar6;
                        lVar19 = thunk_FUN_03f9944c(DAT_091793d0);
                        FUN_05322d94(lVar19,uVar7,DAT_091e7538,0);
                        lVar12 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar12 + 0x1c8) = lVar19;
                        thunk_FUN_03f5d7b8(lVar12 + 0x1c8,lVar19);
                      }
                      uVar4 = FUN_04b0cafc(uVar4,lVar19,DAT_091cb618);
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_0918f298);
                      }
                      puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      lVar19 = puVar6[0x3a];
                      if (lVar19 == 0) {
                        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                          FUN_03f5c424(DAT_0918f298);
                          puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar7 = *puVar6;
                        lVar19 = thunk_FUN_03f9944c(DAT_091793d8);
                        FUN_0532343c(lVar19,uVar7,DAT_091e7540,0);
                        lVar12 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar12 + 0x1d0) = lVar19;
                        thunk_FUN_03f5d7b8(lVar12 + 0x1d0,lVar19);
                      }
                      uVar4 = FUN_04af5db8(uVar4,lVar19,DAT_091ca840);
                      FUN_05739d0c(lVar11,uVar4,DAT_091abf20);
                      FUN_0573a8e0(&local_270,lVar11,DAT_091abf28);
                      local_1f0 = (long *)0x0;
                      pplStack_148 = pplStack_268;
                      local_150 = local_270;
                      uStack_138 = uStack_258;
                      local_140 = local_260;
                      local_130 = local_250;
                      pplStack_1e8 = &local_150;
                      do {
                        do {
                          uVar14 = FUN_071997ec(&local_150,DAT_091a2758);
                          if ((uVar14 & 1) == 0) {
                            FUN_071997e8(&local_150,DAT_091a2750);
                            uVar4 = *(undefined8 *)(param_1 + 0x80);
                            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                              FUN_03f5c424();
                            }
                            puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                            lVar11 = puVar6[0x3b];
                            if (lVar11 == 0) {
                              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                                FUN_03f5c424();
                                puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                              }
                              uVar7 = *puVar6;
                              lVar11 = thunk_FUN_03f9944c(DAT_09178190);
                              FUN_05324070(lVar11,uVar7,DAT_091e7548,0);
                              lVar19 = *(long *)(DAT_0918f298 + 0xb8);
                              *(long *)(lVar19 + 0x1d8) = lVar11;
                              thunk_FUN_03f5d7b8(lVar19 + 0x1d8,lVar11);
                            }
                            uVar4 = FUN_04afac50(uVar4,lVar11,DAT_091ca8c0);
                            uVar7 = thunk_FUN_03f9944c(DAT_091793f8);
                            FUN_05322d94(uVar7,lVar10,DAT_091e7ef8,0);
                            lVar10 = FUN_04ae5fd0(uVar4,uVar7,DAT_091c9dc8);
                            uVar4 = 0;
                            if (lVar10 == 0) goto LAB_0443ff34;
                            if ((*plVar16 == 0) ||
                               (lVar11 = *(long *)(*plVar16 + 0x20), lVar11 == 0))
                            goto LAB_0443ffcc;
                            uVar4 = *(undefined8 *)(lVar10 + 0x10);
                            uVar14 = FUN_06f4de70(lVar11,uVar4,&local_11c,DAT_0919e470);
                            iVar2 = 1;
                            if ((uVar14 & 1) != 0) {
                              iVar2 = local_11c + 1;
                            }
                            FUN_06f4c418(lVar11,uVar4,iVar2,DAT_0919e478);
                            if (lVar5 == 0) goto LAB_0443ffcc;
                            lVar11 = *(long *)(lVar5 + 0x10);
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar11 == 0) goto LAB_0443ffcc;
                            uVar1 = *(uint *)(lVar5 + 0x18);
                            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                              plVar17 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar17 = lVar10;
                              thunk_FUN_03f5d7b8(plVar17,lVar10);
                            }
                            else {
                              FUN_057e0c68(lVar5,lVar10,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(DAT_091b2570 + 0x20) + 0xc0) + 0x70
                                            ));
                            }
                            lVar10 = DAT_091adc88;
                            if ((*plVar16 == 0) ||
                               (lVar11 = *(long *)(*plVar16 + 0x38), lVar11 == 0))
                            goto LAB_0443ffcc;
                            lVar19 = *(long *)(lVar11 + 0x10);
                            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                            if (lVar19 == 0) goto LAB_0443ffcc;
                            uVar1 = *(uint *)(lVar11 + 0x18);
                            if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                              *(int *)(lVar19 + (long)(int)uVar1 * 4 + 0x20) = iVar20;
                            }
                            else {
                              FUN_057971a8(lVar11,iVar20,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                            }
                            goto LAB_0443f2b4;
                          }
                          uStack_168 = uStack_138;
                          local_170 = local_140;
                          local_160 = local_130;
                          uStack_208 = uStack_138;
                          local_210 = local_140;
                          local_200 = local_130;
                          uVar14 = CookingGraph_CookingLevelSimulation__Outgoing(param_1,&local_210)
                          ;
                        } while ((uVar14 & 1) != 0);
                        if (*(long *)(param_1 + 0x178) == 0) {
                          if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_04440264;
                        }
                        uStack_228 = uStack_168;
                        local_230 = local_170;
                        local_220 = local_160;
                        uVar4 = CookingGraph_Execution_CookingExecution__UnitsAt
                                          (*(long *)(param_1 + 0x178),&local_230,0);
                        lVar11 = *(long *)(lVar10 + 0x20);
                        if (lVar11 == 0) {
                          lVar11 = thunk_FUN_03f9944c(DAT_09178768);
                          FUN_053136a4(lVar11,lVar10,DAT_091e7f00,0);
                          *(long *)(lVar10 + 0x20) = lVar11;
                          thunk_FUN_03f5d7b8(lVar10 + 0x20,lVar11);
                        }
                        FUN_04ae5c68(&local_270,uVar4,lVar11,DAT_091c9ca8);
                        plVar17 = local_270;
                        lStack_78 = local_260;
                        local_80 = pplStack_268;
                      } while (local_270 == (long *)0x0);
                      if (*plVar16 == 0) {
                        if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                      }
                      else {
                        lVar10 = *(long *)(*plVar16 + 0x18);
                        if (lVar10 == 0) {
                          if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                        }
                        else {
                          FUN_053e230c(lVar10,local_270,DAT_091a8308);
                          uStack_f8 = uStack_168;
                          local_100 = local_170;
                          local_f0 = local_160;
                          lStack_108 = lStack_78;
                          local_110 = local_80;
                          uStack_258 = 0;
                          local_260 = 0;
                          uStack_248 = 0;
                          local_250 = 0;
                          pplStack_268 = (long **)0x0;
                          local_270 = (long *)0x0;
                          local_118 = plVar17;
                          FUN_066bb1a4(&local_270,&local_100,&local_118,DAT_091bec10);
                          if (lVar9 != 0) {
                            lVar10 = *(long *)(lVar9 + 0x10);
                            uStack_b8 = uStack_248;
                            local_c0 = local_250;
                            pplStack_d8 = pplStack_268;
                            local_e0 = local_270;
                            uStack_c8 = uStack_258;
                            lStack_d0 = local_260;
                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                            if (lVar10 != 0) {
                              uVar1 = *(uint *)(lVar9 + 0x18);
                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                lVar10 = lVar10 + (long)(int)uVar1 * 0x30;
                                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                *(long ***)(lVar10 + 0x28) = pplStack_268;
                                *(long **)(lVar10 + 0x20) = local_270;
                                *(undefined8 *)(lVar10 + 0x38) = uStack_258;
                                *(long *)(lVar10 + 0x30) = local_260;
                                *(undefined8 *)(lVar10 + 0x48) = uStack_248;
                                *(undefined8 *)(lVar10 + 0x40) = local_250;
                                thunk_FUN_03f5d7b8(lVar10 + 0x28,0);
                              }
                              else {
                                pplStack_a8 = pplStack_268;
                                local_b0 = local_270;
                                uStack_98 = uStack_258;
                                lStack_a0 = local_260;
                                uStack_88 = uStack_248;
                                local_90 = local_250;
                                FUN_056a8754(lVar9,&local_b0,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(DAT_091aa9a8 + 0x20) + 0xc0) +
                                              0x70));
                              }
                              lVar10 = DAT_091adc88;
                              if (*plVar16 == 0) {
                                if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                              }
                              else {
                                lVar11 = *(long *)(*plVar16 + 0x28);
                                if (lVar11 != 0) {
                                  lVar19 = *(long *)(lVar11 + 0x10);
                                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                  if (lVar19 != 0) {
                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                    if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                      *(int *)(lVar19 + (long)(int)uVar1 * 4 + 0x20) = iVar20;
                                    }
                                    else {
                                      FUN_057971a8(lVar11,iVar20,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    FUN_071997e8(&local_150,DAT_091a2750);
                                    goto LAB_0443f2b4;
                                  }
                                }
                                if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                              }
                              goto LAB_04440264;
                            }
                          }
                          if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                        }
                      }
                      goto LAB_04440264;
                    }
                  }
                }
              }
              break;
            }
          }
LAB_0443f2b4:
          lVar10 = *plVar18;
          iVar20 = iVar20 + 1;
          if (lVar10 == 0) break;
        }
      }
      goto LAB_0443ffcc;
    }
  }
  lVar13 = *(long *)(lVar13 + 0x28);
LAB_0443ffd4:
  if (lVar13 == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04440264:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0443f858:
  uVar14 = FUN_071877cc(&local_1b0,DAT_091a1f20);
  if ((uVar14 & 1) == 0) goto LAB_0443f89c;
  if (*(long *)(param_1 + 0x178) == 0) {
    if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_04440264;
  }
  uStack_288 = uStack_198;
  local_290 = local_1a0;
  local_280 = local_190;
  CookingGraph_Execution_CookingExecution__Consume
            (*(long *)(param_1 + 0x178),&local_290,uStack_188,0);
  goto LAB_0443f858;
LAB_0443f89c:
  FUN_071877c8(&local_1b0,DAT_091a1f18);
  if (lVar5 != 0) {
    FUN_057e185c(&local_270,lVar5,DAT_091b2580);
    pplStack_1c8 = pplStack_268;
    local_1d0 = local_270;
    local_1c0 = local_260;
    local_298 = &local_1d0;
    local_2a0 = 0;
LAB_0443f918:
    while (uVar14 = FUN_071bd28c(&local_1d0,DAT_091a5110), lVar11 = local_1c0, lVar9 = local_2a0,
          (uVar14 & 1) != 0) {
      if (local_1c0 == 0) {
        if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_04440264;
      }
      iVar20 = *(int *)(local_1c0 + 0x2c) + 1;
      *(int *)(local_1c0 + 0x2c) = iVar20;
      if (*(long *)(param_1 + 0x78) == 0) {
        if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_04440264;
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x70);
      if (lVar9 == 0) {
        if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_04440264;
      }
      if (*(uint *)(lVar9 + 0x18) <= *(uint *)(local_1c0 + 0x18)) {
        if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_04440264;
      }
      if (*(int *)(lVar9 + (long)(int)*(uint *)(local_1c0 + 0x18) * 4 + 0x20) <= iVar20) {
        *(int *)(local_1c0 + 0x28) = *(int *)(local_1c0 + 0x28) + -1;
        *(undefined4 *)(local_1c0 + 0x2c) = 0;
        lVar9 = *(long *)(param_1 + 0x178);
        CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_1f0,local_1c0,0);
        lVar19 = *(long *)(param_1 + 0x178);
        pplStack_268 = pplStack_1e8;
        local_270 = local_1f0;
        local_260 = local_1e0;
        CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_2b8,lVar11,0);
        pplStack_1e8 = pplStack_2b0;
        local_1f0 = local_2b8;
        local_1e0 = local_2a8;
        if (lVar19 == 0) {
          if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_04440264;
        }
        pplStack_2c8 = pplStack_2b0;
        local_2d0 = local_2b8;
        local_2c0 = local_2a8;
        plVar18 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar19,&local_2d0,0);
        if (plVar18 == (long *)0x0) {
          if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_04440264;
        }
        lVar19 = *plVar18;
        uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_0917b4c0) {
              puVar6 = (undefined8 *)(lVar19 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0443fa38;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917b4c0,0);
LAB_0443fa38:
        (*(code *)*puVar6)(&local_2b8,plVar18,0,puVar6[1]);
        if (lVar9 == 0) {
          if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_04440264;
        }
        pplStack_2e8 = pplStack_268;
        local_2f0 = local_270;
        local_2e0 = local_260;
        CookingGraph_Execution_CookingExecution__Consume(lVar9,&local_2f0,local_2b8,0);
        if (*(int *)(lVar11 + 0x28) < 1) {
          lVar9 = *(long *)(param_1 + 0x80);
          if (lVar9 == 0) {
LAB_0443ffe4:
            if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          else {
            iVar20 = 0;
            while (iVar20 < *(int *)(lVar9 + 0x18)) {
              iVar2 = 0;
              while( true ) {
                lVar9 = FUN_057e0998(lVar9,iVar20,DAT_091aa7e0);
                if (lVar9 == 0) {
                  if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_04440264;
                }
                if (*(int *)(lVar9 + 0x18) <= iVar2) break;
                lVar9 = CookingGraph_CookingLevelSimulation__At(param_1,iVar20,iVar2);
                if (lVar9 == lVar11) {
                  if (*(long *)(param_1 + 0x80) == 0) {
                    if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_04440264;
                  }
                  lVar9 = FUN_057e0998(*(long *)(param_1 + 0x80),iVar20,DAT_091aa7e0);
                  if (lVar9 == 0) {
                    if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_04440264;
                  }
                  FUN_057e09ec(lVar9,iVar2,0,DAT_091b25a0);
                }
                lVar9 = *(long *)(param_1 + 0x80);
                iVar2 = iVar2 + 1;
                if (lVar9 == 0) {
                  if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_04440264;
                }
              }
              lVar9 = *(long *)(param_1 + 0x80);
              iVar20 = iVar20 + 1;
              if (lVar9 == 0) goto LAB_0443ffe4;
            }
            lVar9 = *(long *)(param_1 + 0x178);
            CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_1f0,lVar11,0);
            pplStack_268 = pplStack_1e8;
            local_270 = local_1f0;
            local_260 = local_1e0;
            if (lVar9 == 0) {
              if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
            else {
              pplStack_308 = pplStack_1e8;
              local_310 = local_1f0;
              local_300 = local_1e0;
              plVar18 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar9,&local_310,0)
              ;
              if (plVar18 == (long *)0x0) {
                if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
              }
              else {
                lVar9 = *plVar18;
                uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == DAT_0917a480) {
                      puVar6 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_0443fbbc;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917a480,0);
LAB_0443fbbc:
                local_1d8 = (long *)(*(code *)*puVar6)(plVar18,puVar6[1]);
                local_2b8 = (long *)0x0;
                pplStack_2b0 = &local_1d8;
                if (local_1d8 != (long *)0x0) {
                  do {
                    plVar18 = local_1d8;
                    lVar9 = *local_1d8;
                    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == DAT_09185b10) {
                          puVar6 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_0443fc24;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_03f95da8(local_1d8,DAT_09185b10,0);
LAB_0443fc24:
                    uVar14 = (*(code *)*puVar6)(plVar18,puVar6[1]);
                    plVar18 = local_1d8;
                    if ((uVar14 & 1) == 0) goto LAB_0443fd0c;
                    if (local_1d8 == (long *)0x0) {
                      if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_04440264;
                    }
                    lVar9 = *local_1d8;
                    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == DAT_0917ab28) {
                          puVar6 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_0443fc88;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_03f95da8(local_1d8,DAT_0917ab28,0);
LAB_0443fc88:
                    (*(code *)*puVar6)(&local_270,plVar18,puVar6[1]);
                    plVar18 = local_270;
                    lVar9 = *(long *)(param_1 + 0x178);
                    CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_1f0,lVar11,0);
                    pplStack_268 = pplStack_1e8;
                    local_270 = local_1f0;
                    local_260 = local_1e0;
                    if (lVar9 == 0) {
                      if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_04440264;
                    }
                    pplStack_328 = pplStack_1e8;
                    local_330 = local_1f0;
                    local_320 = local_1e0;
                    CookingGraph_Execution_CookingExecution__Consume(lVar9,&local_330,plVar18,0);
                    if (local_1d8 == (long *)0x0) break;
                  } while( true );
                }
                if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
              }
            }
          }
          goto LAB_04440264;
        }
      }
    }
    FUN_071bd288(local_298,DAT_091a5108);
    if (lVar9 != 0) {
      if (*(long *)(lVar13 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(lVar9);
      }
      goto LAB_04440264;
    }
    if (param_2 != 0) {
      lVar9 = *(long *)(param_1 + 0x178);
      uVar8 = CookingGraph_CookingLevelSimulation_Customer__get_Owner(param_2,0);
      if (lVar9 != 0) {
        CookingGraph_Execution_CookingExecution__CompleteSourcedDish(lVar9,uVar8,param_3,0);
        CookingGraph_CookingLevelSimulation__Gravity(param_1);
        uVar8 = DAT_09179ba8;
        *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
        *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
        uVar8 = thunk_FUN_03f9944c(uVar8);
        FUN_05330e2c(uVar8,lVar3,DAT_091e7ef0,0);
        uVar8 = FUN_04af8368(lVar5,uVar8,DAT_091ca850);
        uVar7 = FUN_04ad43f0(uVar7,uVar8,DAT_091c9648);
        CookingGraph_CookingLevelSimulation__RecordAutoComplete(param_1,param_2,param_3,uVar7,uVar4)
        ;
        uVar4 = 1;
        CookingGraph_CookingLevelSimulation__Emit
                  (param_1,1,*(undefined4 *)(param_2 + 0x10),DAT_091fc4b0,lVar10);
LAB_0443ff34:
        if (*(long *)(lVar13 + 0x28) == local_68) {
          return uVar4;
        }
        goto LAB_04440264;
      }
    }
  }
LAB_0443ffcc:
  lVar13 = *(long *)(lVar13 + 0x28);
  goto LAB_0443ffd4;
LAB_0443fd0c:
  if (local_1d8 != (long *)0x0) {
    lVar9 = *local_1d8;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == DAT_09185a58) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0443fd74;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(local_1d8,DAT_09185a58,0);
LAB_0443fd74:
    (*(code *)*puVar6)(plVar18,puVar6[1]);
  }
  goto LAB_0443f918;
}

