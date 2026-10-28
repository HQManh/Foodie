// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ProcessTools
// address: 0x4469358
// body: available
// range: 0x4469358-0x446a967 inclusive
// range: 0x446a96c-0x446aa1b inclusive
// range: 0x446aa20-0x446aa37 inclusive
// range: 0x446aa3c-0x446aa53 inclusive
// range: 0x446aa58-0x446aa6f inclusive
// range: 0x446aa74-0x446aa8b inclusive
// range: 0x446aa90-0x446aaa7 inclusive
// range: 0x446ab1c-0x446ba0f inclusive
// range: 0x446ba14-0x446bac3 inclusive
// range: 0x446bac8-0x446badf inclusive
// range: 0x446bae4-0x446bafb inclusive
// range: 0x446bb00-0x446bb17 inclusive
// range: 0x446bb1c-0x446bb33 inclusive
// range: 0x446bb38-0x446bb4f inclusive
// range: 0x446bbd4-0x446be5b inclusive
// range: 0x446be60-0x446be77 inclusive
// range: 0x446be7c-0x446be93 inclusive
// range: 0x446be98-0x446beaf inclusive
// range: 0x446beb4-0x446becf inclusive
// range: 0x446bf4c-0x446bff3 inclusive
// range: 0x446c030-0x446c033 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x446a964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446aa18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446aa34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446aa50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446aa6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446aa88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446aaa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446ba0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446bac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446badc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446baf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446bb14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0446beb4) */
/* WARNING: Removing unreachable block (ram,0x0446bec8) */
/* WARNING: Removing unreachable block (ram,0x0446ba94) */
/* WARNING: Removing unreachable block (ram,0x0446bfc0) */
/* WARNING: Removing unreachable block (ram,0x0446bfd4) */
/* WARNING: Removing unreachable block (ram,0x0446bc54) */
/* WARNING: Removing unreachable block (ram,0x0446a9ec) */

void CookingGraph_CookingLevelSimulation__ProcessTools(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long **pplVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 extraout_x1;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  long lVar27;
  undefined4 *puVar28;
  bool bVar29;
  ulong local_590;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined4 local_440;
  undefined8 local_43c;
  undefined4 local_434;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  long local_410;
  long **pplStack_408;
  undefined8 local_400;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  long local_370;
  long **pplStack_368;
  undefined8 local_360;
  long local_350;
  long **pplStack_348;
  undefined8 local_340;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  long local_310;
  long **pplStack_308;
  undefined8 local_300;
  long local_2f0;
  long **pplStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  long local_290;
  long **pplStack_288;
  undefined8 local_280;
  long local_270;
  long **pplStack_268;
  undefined8 local_260;
  long local_250;
  long **pplStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  long local_210;
  long **pplStack_208;
  undefined8 local_200;
  long local_1f0;
  long **pplStack_1e8;
  undefined8 local_1e0;
  long local_1d0;
  long **pplStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  long **pplStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  long local_190;
  long **pplStack_188;
  undefined8 local_180;
  int local_174;
  undefined8 local_170;
  long *local_168;
  long *local_160;
  long local_158;
  long local_150;
  long **pplStack_148;
  undefined8 local_140;
  int local_134;
  long local_130;
  long **pplStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f0;
  long **pplStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  long **local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if ((DAT_0951805c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918f658);
    FUN_03f5c2a4(&DAT_091c6758);
    FUN_03f5c2a4(&DAT_091c6760);
    FUN_03f5c2a4(&DAT_091c6750);
    FUN_03f5c2a4(&DAT_091c6768);
    FUN_03f5c2a4(&DAT_091c6770);
    FUN_03f5c2a4(&DAT_0919c188);
    FUN_03f5c2a4(&DAT_0919e460);
    FUN_03f5c2a4(&DAT_0919e610);
    FUN_03f5c2a4(&DAT_0919e640);
    FUN_03f5c2a4(&DAT_0919e468);
    FUN_03f5c2a4(&DAT_0919c198);
    FUN_03f5c2a4(&DAT_0919e470);
    FUN_03f5c2a4(&DAT_0919c1a0);
    FUN_03f5c2a4(&DAT_0919e648);
    FUN_03f5c2a4(&DAT_0919e5f8);
    FUN_03f5c2a4(&DAT_0919e478);
    FUN_03f5c2a4(&DAT_0919e658);
    FUN_03f5c2a4(&DAT_0919e628);
    FUN_03f5c2a4(&DAT_09176710);
    FUN_03f5c2a4(&DAT_091c9458);
    FUN_03f5c2a4(&DAT_091c9718);
    FUN_03f5c2a4(&DAT_091c9948);
    FUN_03f5c2a4(&DAT_091c9bd8);
    FUN_03f5c2a4(&DAT_091ca3c0);
    FUN_03f5c2a4(&DAT_091ca568);
    FUN_03f5c2a4(&DAT_091ca530);
    FUN_03f5c2a4(&DAT_091caad0);
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091caf38);
    FUN_03f5c2a4(&DAT_091cace8);
    FUN_03f5c2a4(&DAT_091cb468);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_091cb608);
    FUN_03f5c2a4(&DAT_09179360);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178780);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_09178b78);
    FUN_03f5c2a4(&DAT_09178bb8);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_091a7ff8);
    FUN_03f5c2a4(&DAT_091a8330);
    FUN_03f5c2a4(&DAT_091a7fe8);
    FUN_03f5c2a4(&DAT_091a82f8);
    FUN_03f5c2a4(&DAT_091a8340);
    FUN_03f5c2a4(&DAT_09179d80);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917a5c0);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_0917ac88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b4c0);
    FUN_03f5c2a4(&DAT_0918f670);
    FUN_03f5c2a4(&DAT_091ac098);
    FUN_03f5c2a4(&DAT_091ac090);
    FUN_03f5c2a4(&DAT_091ac0d8);
    FUN_03f5c2a4(&DAT_091ac0d0);
    FUN_03f5c2a4(&DAT_091ac088);
    FUN_03f5c2a4(&DAT_0917bf80);
    FUN_03f5c2a4(&DAT_0917bf78);
    FUN_03f5c2a4(&DAT_091b76c0);
    FUN_03f5c2a4(&DAT_091b6960);
    FUN_03f5c2a4(&DAT_091b6b80);
    FUN_03f5c2a4(&DAT_091b76c8);
    FUN_03f5c2a4(&DAT_091b6b88);
    FUN_03f5c2a4(&DAT_091b6b90);
    FUN_03f5c2a4(&DAT_091b76d0);
    FUN_03f5c2a4(&DAT_0918f678);
    FUN_03f5c2a4(&DAT_091e7cb0);
    FUN_03f5c2a4(&DAT_091e7cb8);
    FUN_03f5c2a4(&DAT_091e7cc0);
    FUN_03f5c2a4(&DAT_0918f450);
    FUN_03f5c2a4(&DAT_091e7cc8);
    FUN_03f5c2a4(&DAT_091e7cd0);
    FUN_03f5c2a4(&DAT_091e7cd8);
    FUN_03f5c2a4(&DAT_091e7ce0);
    FUN_03f5c2a4(&DAT_0918f458);
    FUN_03f5c2a4(&DAT_091e7ce8);
    FUN_03f5c2a4(&DAT_0918f460);
    FUN_03f5c2a4(&DAT_091bec98);
    FUN_03f5c2a4(&DAT_091fe758);
    FUN_03f5c2a4(&DAT_0920b6d0);
    FUN_03f5c2a4(&DAT_09209f80);
    FUN_03f5c2a4(&DAT_092068f8);
    DAT_0951805c = 1;
  }
  local_134 = 0;
  pplStack_148 = (long **)0x0;
  local_150 = 0;
  local_140 = 0;
  local_158 = 0;
  local_160 = (long *)0x0;
  local_168 = (long *)0x0;
  local_170 = 0;
  local_174 = 0;
  uStack_88 = 0;
  local_90 = (long **)0x0;
  pplStack_188 = (long **)0x0;
  local_190 = 0;
  local_180 = 0;
  local_98 = 0;
  local_a0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  pplStack_1a8 = (long **)0x0;
  local_1b0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  pplStack_1c8 = (long **)0x0;
  local_1d0 = 0;
  lVar12 = thunk_FUN_03f9944c(DAT_0918f450);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass170_0___ctor(lVar12,0);
  if (lVar12 != 0) {
    *(long *)(lVar12 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar12 + 0x18),param_1);
    *(undefined4 *)(lVar12 + 0x10) = 0;
    lVar21 = *(long *)(param_1 + 0x78);
    if ((lVar21 != 0) && (lVar25 = *(long *)(lVar21 + 0x20), lVar25 != 0)) {
      iVar10 = 0;
LAB_04469880:
      if (iVar10 < *(int *)(lVar25 + 0x18)) {
        local_134 = 0;
LAB_0446989c:
        lVar25 = *(long *)(lVar21 + 0x20);
        if (lVar25 == 0) goto LAB_0446bf90;
        uVar4 = *(uint *)(lVar12 + 0x10);
        if (*(uint *)(lVar25 + 0x18) <= uVar4) goto LAB_0446bfa8;
        lVar27 = *(long *)(lVar25 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar27 == 0) goto LAB_0446bf90;
        if (*(int *)(lVar27 + 0x18) <= local_134) goto LAB_0446bf4c;
        lVar21 = thunk_FUN_03f9944c(DAT_0918f458);
        CookingGraph_CookingLevelSimulation_<>c__DisplayClass170_1___ctor(lVar21,0);
        lVar25 = *(long *)(param_1 + 0xb0);
        local_f0 = 0;
        FUN_066c1fdc(&local_f0,*(undefined4 *)(lVar12 + 0x10),local_134,DAT_091bec98);
        if ((lVar21 == 0) || (lVar25 == 0)) goto LAB_0446bf90;
        uVar13 = FUN_06e4da10(lVar25,local_f0,lVar21 + 0x28,DAT_0919c1a0);
        if ((uVar13 & 1) == 0) {
          uVar14 = CookingGraph_CookingLevelSimulation__LaneSlots
                             (param_1,*(undefined4 *)(lVar12 + 0x10),local_134);
          lVar25 = *(long *)(lVar12 + 0x20);
          if (lVar25 == 0) {
            lVar25 = thunk_FUN_03f9944c(DAT_09178b98);
            FUN_05315754(lVar25,lVar12,DAT_091e7cb0,0);
            *(long *)(lVar12 + 0x20) = lVar25;
            thunk_FUN_03f5d7b8(lVar12 + 0x20,lVar25);
          }
          uVar14 = FUN_04b0c1f0(uVar14,lVar25,DAT_091cb4e8);
          lVar25 = FUN_04b0462c(uVar14,DAT_091cae30);
          if (lVar25 == 0) goto LAB_0446bf90;
          if (*(long *)(lVar25 + 0x18) != 0) {
            if ((int)*(long *)(lVar25 + 0x18) == 0) goto LAB_0446bfa8;
            lVar27 = *(long *)(param_1 + 0x178);
            CookingGraph_CookingLevelSimulation__ToolAddress
                      (&local_f0,*(undefined4 *)(lVar12 + 0x10),*(undefined4 *)(lVar25 + 0x20));
            if (lVar27 == 0) goto LAB_0446bf90;
            pplStack_1e8 = pplStack_e8;
            local_1f0 = local_f0;
            local_1e0 = local_e0;
            plVar15 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar27,&local_1f0,0);
            if (plVar15 == (long *)0x0) goto LAB_0446bf90;
            lVar27 = *plVar15;
            uVar13 = (ulong)*(ushort *)(lVar27 + 0x12e);
            if (uVar13 != 0) {
              piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == DAT_0917b4c0) {
                  puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
                  goto LAB_04469a58;
                }
                uVar13 = uVar13 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar13 != 0);
            }
            puVar16 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b4c0,0);
LAB_04469a58:
            (*(code *)*puVar16)(&local_130,plVar15,0,puVar16[1]);
            if (*(long *)(param_1 + 0xb8) == 0) goto LAB_0446bf90;
            uVar13 = FUN_06f54e88(*(long *)(param_1 + 0xb8),local_130,&local_158,DAT_0919e648);
            if ((uVar13 & 1) == 0) {
              lVar27 = thunk_FUN_03f9944c(DAT_0918f460);
              CookingGraph_CookingLevelSimulation_<>c__DisplayClass170_2___ctor(lVar27,0);
              lVar17 = *(long *)(lVar12 + 0x28);
              if (lVar17 == 0) {
                lVar17 = thunk_FUN_03f9944c(DAT_09178b78);
                FUN_053153c0(lVar17,lVar12,DAT_091e7cb8,0);
                *(long *)(lVar12 + 0x28) = lVar17;
                thunk_FUN_03f5d7b8(lVar12 + 0x28,lVar17);
              }
              uVar14 = FUN_04af1a74(lVar25,lVar17,DAT_091ca530);
              uVar14 = FUN_04b04054(uVar14,DAT_091cace8);
              if (lVar27 == 0) goto LAB_0446bf90;
              *(undefined8 *)(lVar27 + 0x10) = uVar14;
              thunk_FUN_03f5d7b8();
              if ((*(long *)(param_1 + 0x78) == 0) ||
                 (lVar17 = *(long *)(*(long *)(param_1 + 0x78) + 0x30), lVar17 == 0))
              goto LAB_0446bf90;
              if (*(uint *)(lVar12 + 0x10) < *(uint *)(lVar17 + 0x18)) {
                uVar19 = *(undefined8 *)(lVar17 + (long)(int)*(uint *)(lVar12 + 0x10) * 8 + 0x20);
                uVar14 = thunk_FUN_03f9944c(DAT_09179360);
                FUN_05322d94(uVar14,lVar27,DAT_091e7ce8,0);
                uVar14 = FUN_04b0cafc(uVar19,uVar14,DAT_091cb608);
                uVar14 = FUN_04b049e4(uVar14,DAT_091caf38);
                lVar27 = *(long *)(lVar12 + 0x30);
                if (lVar27 == 0) {
                  lVar27 = thunk_FUN_03f9944c(DAT_09178bb8);
                  FUN_05315ad8(lVar27,lVar12,DAT_091e7cc0,0);
                  *(long *)(lVar12 + 0x30) = lVar27;
                  thunk_FUN_03f5d7b8(lVar12 + 0x30,lVar27);
                }
                uVar19 = FUN_04af2a28(lVar25,lVar27,DAT_091ca568);
                uVar18 = thunk_FUN_03f9944c(DAT_09178768);
                FUN_053136a4(uVar18,param_1,DAT_091c6758,0);
                uVar19 = FUN_04b0beec(uVar19,uVar18,DAT_091cb468);
                uVar18 = thunk_FUN_03f9944c(DAT_09178780);
                FUN_053142b0(uVar18,param_1,DAT_091c6760,0);
                uVar19 = FUN_04af1750(uVar19,uVar18,DAT_091ca3c0);
                uVar19 = FUN_04add4b8(uVar19,DAT_091c9948);
                lVar27 = FUN_04b049e4(uVar19,DAT_091caf38);
                if (lVar27 == 0) goto LAB_0446bf90;
                if ((*(int *)(lVar27 + 0x18) == 1) &&
                   (uVar13 = FUN_04ad4c4c(uVar14,*(undefined8 *)(lVar27 + 0x20),DAT_091c9718),
                   (uVar13 & 1) != 0)) {
                  if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0446bfa8;
                  lVar27 = *(long *)(lVar27 + 0x20);
                }
                else {
                  lVar27 = FUN_04ae45c0(uVar14,DAT_091c9bd8);
                }
                if (lVar27 == 0) goto LAB_0446be2c;
                if (0 < (int)*(ulong *)(lVar25 + 0x18)) {
                  uVar13 = 0;
                  uVar22 = *(ulong *)(lVar25 + 0x18) & 0xffffffff;
                  do {
                    if (uVar22 <= uVar13) goto LAB_0446bfa8;
                    lVar17 = *(long *)(param_1 + 0xc0);
                    lVar23 = *(long *)(param_1 + 0x178);
                    CookingGraph_CookingLevelSimulation__ToolAddress
                              (&local_f0,*(undefined4 *)(lVar12 + 0x10),
                               *(undefined4 *)(lVar25 + uVar13 * 4 + 0x20));
                    if (lVar23 == 0) goto LAB_0446bf90;
                    pplStack_208 = pplStack_e8;
                    local_210 = local_f0;
                    local_200 = local_e0;
                    plVar15 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                                (lVar23,&local_210,0);
                    if (plVar15 == (long *)0x0) goto LAB_0446bf90;
                    lVar23 = *plVar15;
                    uVar22 = (ulong)*(ushort *)(lVar23 + 0x12e);
                    if (uVar22 != 0) {
                      piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == DAT_0917b4c0) {
                          puVar16 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
                          goto LAB_04469e80;
                        }
                        uVar22 = uVar22 - 1;
                        piVar26 = piVar26 + 4;
                      } while (uVar22 != 0);
                    }
                    puVar16 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b4c0,0);
LAB_04469e80:
                    (*(code *)*puVar16)(&local_130,plVar15,0,puVar16[1]);
                    if (lVar17 == 0) goto LAB_0446bf90;
                    FUN_06f54860(lVar17,local_130,DAT_0919e610);
                    uVar22 = (ulong)*(uint *)(lVar25 + 0x18);
                    uVar13 = uVar13 + 1;
                  } while ((long)uVar13 < (long)(int)*(uint *)(lVar25 + 0x18));
                }
                lVar17 = thunk_FUN_03f9944c(DAT_0918f670);
                CookingGraph_CookingLevelSimulation_Job___ctor(lVar17,0);
                if (lVar17 == 0) goto LAB_0446bf90;
                *(undefined4 *)(lVar17 + 0x10) = *(undefined4 *)(lVar12 + 0x10);
                *(int *)(lVar17 + 0x14) = local_134;
                if (*(int *)(lVar25 + 0x18) != 0) {
                  *(undefined4 *)(lVar17 + 0x18) = *(undefined4 *)(lVar25 + 0x20);
                  *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar27 + 0x28);
                  *(undefined8 *)(lVar17 + 0x1c) = *(undefined8 *)(lVar27 + 0x14);
                  *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)(lVar27 + 0x38);
                  thunk_FUN_03f5d7b8();
                  *(long *)(lVar17 + 0x48) = lVar25;
                  thunk_FUN_03f5d7b8((long *)(lVar17 + 0x48),lVar25);
                  goto LAB_04469f34;
                }
              }
            }
            else {
              lVar17 = thunk_FUN_03f9944c(DAT_0918f670);
              CookingGraph_CookingLevelSimulation_Job___ctor(lVar17,0);
              if (lVar17 == 0) goto LAB_0446bf90;
              uVar4 = *(uint *)(lVar12 + 0x10);
              *(uint *)(lVar17 + 0x10) = uVar4;
              *(int *)(lVar17 + 0x14) = local_134;
              if (*(int *)(lVar25 + 0x18) != 0) {
                *(undefined4 *)(lVar17 + 0x18) = *(undefined4 *)(lVar25 + 0x20);
                if ((*(long *)(param_1 + 0x78) == 0) ||
                   (lVar27 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar27 == 0))
                goto LAB_0446bf90;
                if (uVar4 < *(uint *)(lVar27 + 0x18)) {
                  lVar27 = *(long *)(lVar27 + (long)(int)uVar4 * 8 + 0x20);
                  if ((lVar27 != 0) &&
                     (*(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar27 + 0x20),
                     local_158 != 0)) {
                    *(undefined8 *)(lVar17 + 0x1c) = *(undefined8 *)(local_158 + 0x18);
                    *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)(local_158 + 0x10);
                    thunk_FUN_03f5d7b8();
                    *(long *)(lVar17 + 0x48) = lVar25;
                    thunk_FUN_03f5d7b8((long *)(lVar17 + 0x48),lVar25);
                    *(undefined1 *)(lVar17 + 0x3a) = 1;
LAB_04469f34:
                    *(long *)(lVar21 + 0x28) = lVar17;
                    thunk_FUN_03f5d7b8(lVar21 + 0x28,lVar17);
                    lVar25 = *(long *)(param_1 + 0xb0);
                    local_f0 = 0;
                    FUN_066c1fdc(&local_f0,*(undefined4 *)(lVar12 + 0x10),local_134,DAT_091bec98);
                    if (lVar25 != 0) {
                      FUN_06e4bf58(lVar25,local_f0,*(undefined8 *)(lVar21 + 0x28),DAT_0919c188);
                      uVar2 = *(undefined4 *)(lVar12 + 0x10);
                      uVar14 = System_Int32__ToString(&local_134,0);
                      uVar14 = System_String__Concat(DAT_092068f8,uVar14,0);
                      CookingGraph_CookingLevelSimulation__Emit(param_1,2,uVar2,uVar14,0);
                      goto LAB_04469fcc;
                    }
                  }
                  goto LAB_0446bf90;
                }
              }
            }
LAB_0446bfa8:
            if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            goto LAB_0446c030;
          }
        }
        else {
LAB_04469fcc:
          lVar25 = *(long *)(lVar21 + 0x28);
          if (lVar25 == 0) goto LAB_0446bf90;
          if ((*(char *)(lVar25 + 0x38) != '\0') ||
             (*(double *)(lVar25 + 0x28) <= *(double *)(lVar25 + 0x30) + 1e-08)) {
            CookingGraph_CookingLevelSimulation__ToolAddress
                      (&local_f0,*(undefined4 *)(lVar12 + 0x10),*(undefined4 *)(lVar25 + 0x18));
            *(long ***)(lVar21 + 0x18) = pplStack_e8;
            *(long *)(lVar21 + 0x10) = local_f0;
            *(undefined8 *)(lVar21 + 0x20) = local_e0;
            thunk_FUN_03f5d7b8(lVar21 + 0x18,0);
            if (*(long *)(param_1 + 0x178) == 0) goto LAB_0446bf90;
            uVar14 = CookingGraph_Execution_CookingExecution__get_Transfers
                               (*(long *)(param_1 + 0x178),0);
            uVar19 = thunk_FUN_03f9944c(DAT_09178730);
            FUN_05322d94(uVar19,lVar21,DAT_091e7cc8,0);
            uVar13 = FUN_04ab6f28(uVar14,uVar19,DAT_091c9458);
            if ((uVar13 & 1) == 0) {
              lVar25 = *(long *)(lVar21 + 0x28);
              if (lVar25 == 0) goto LAB_0446bf90;
              if (*(char *)(lVar25 + 0x38) == '\0') {
                if (*(long *)(lVar25 + 0x40) == 0) goto LAB_0446bf90;
                if (*(long *)(*(long *)(lVar25 + 0x40) + 0x18) != 0) {
                  if (*(long *)(param_1 + 0x178) == 0) goto LAB_0446bf90;
                  uStack_228 = *(undefined8 *)(lVar21 + 0x18);
                  local_230 = *(undefined8 *)(lVar21 + 0x10);
                  local_220 = *(undefined8 *)(lVar21 + 0x20);
                  plVar15 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                              (*(long *)(param_1 + 0x178),&local_230,0);
                  if (plVar15 == (long *)0x0) goto LAB_0446bf90;
                  lVar25 = *plVar15;
                  uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar13 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == DAT_0917b4c0) {
                        puVar16 = (undefined8 *)(lVar25 + (long)*piVar26 * 0x10 + 0x138);
                        goto LAB_0446b2d4;
                      }
                      uVar13 = uVar13 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar16 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b4c0,0);
LAB_0446b2d4:
                  (*(code *)*puVar16)(&local_f0,plVar15,0,puVar16[1]);
                  lVar25 = local_f0;
                  if ((*(long *)(lVar21 + 0x28) == 0) ||
                     (lVar27 = *(long *)(*(long *)(lVar21 + 0x28) + 0x40), lVar27 == 0))
                  goto LAB_0446bf90;
                  if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0446bfa8;
                  uVar2 = *(undefined4 *)(lVar27 + 0x20);
                  iVar10 = CookingGraph_CookingLevelSimulation__FreeHopSlot(param_1,uVar2);
                  if (iVar10 < 0) goto LAB_0446be2c;
                  lVar17 = *(long *)(param_1 + 0xb8);
                  lVar27 = thunk_FUN_03f9944c(DAT_0918f658);
                  CookingGraph_CookingLevelSimulation_Chain___ctor(lVar27,0);
                  if (*(long *)(lVar21 + 0x28) == 0) goto LAB_0446bf90;
                  uVar14 = FUN_04b02048(*(undefined8 *)(*(long *)(lVar21 + 0x28) + 0x40),1,
                                        DAT_091caad0);
                  uVar14 = FUN_04b0462c(uVar14,DAT_091cae30);
                  if (lVar27 == 0) goto LAB_0446bf90;
                  *(undefined8 *)(lVar27 + 0x10) = uVar14;
                  thunk_FUN_03f5d7b8();
                  if ((*(long *)(lVar21 + 0x28) == 0) ||
                     (*(undefined8 *)(lVar27 + 0x18) =
                           *(undefined8 *)(*(long *)(lVar21 + 0x28) + 0x1c), lVar17 == 0))
                  goto LAB_0446bf90;
                  FUN_06f533bc(lVar17,lVar25,lVar27,DAT_0919e658);
                  if (*(long *)(lVar21 + 0x28) == 0) goto LAB_0446bf90;
                  lVar27 = *(long *)(lVar21 + 0x38);
                  uVar14 = *(undefined8 *)(*(long *)(lVar21 + 0x28) + 0x48);
                  if (lVar27 == 0) {
                    lVar27 = thunk_FUN_03f9944c(DAT_09178b98);
                    FUN_05315754(lVar27,lVar21,DAT_091e7cd0,0);
                    *(long *)(lVar21 + 0x38) = lVar27;
                    thunk_FUN_03f5d7b8((long *)(lVar21 + 0x38),lVar27);
                  }
                  plVar15 = (long *)FUN_04b0c1f0(uVar14,lVar27,DAT_091cb4e8);
                  if (plVar15 == (long *)0x0) goto LAB_0446bf90;
                  lVar27 = *plVar15;
                  uVar13 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar13 != 0) {
                    piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == DAT_0917a5c0) {
                        puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
                        goto LAB_0446b680;
                      }
                      uVar13 = uVar13 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar16 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917a5c0,0);
LAB_0446b680:
                  plVar15 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
                  pplStack_2e8 = &local_160;
                  local_2f0 = 0;
joined_r0x0446b6a0:
                  local_160 = plVar15;
                  if (plVar15 == (long *)0x0) {
                    if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_0446c030;
                  }
                  lVar27 = *plVar15;
                  uVar13 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar13 != 0) {
                    piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == DAT_09185b10) {
                        puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
                        goto LAB_0446b6f0;
                      }
                      uVar13 = uVar13 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar16 = (undefined8 *)FUN_03f95da8(plVar15,DAT_09185b10,0);
LAB_0446b6f0:
                  uVar13 = (*(code *)*puVar16)(plVar15,puVar16[1]);
                  plVar15 = local_160;
                  if ((uVar13 & 1) != 0) {
                    if (local_160 == (long *)0x0) {
                      if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                    }
                    else {
                      lVar27 = *local_160;
                      uVar13 = (ulong)*(ushort *)(lVar27 + 0x12e);
                      if (uVar13 != 0) {
                        piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar26 + -2) == DAT_0917ac88) {
                            puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
                            goto LAB_0446b75c;
                          }
                          uVar13 = uVar13 - 1;
                          piVar26 = piVar26 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar16 = (undefined8 *)FUN_03f95da8(local_160,DAT_0917ac88,0);
LAB_0446b75c:
                      uVar11 = (*(code *)*puVar16)(plVar15,puVar16[1]);
                      lVar27 = *(long *)(param_1 + 0x178);
                      CookingGraph_CookingLevelSimulation__ToolAddress
                                (&local_130,*(undefined4 *)(lVar12 + 0x10),uVar11);
                      pplStack_e8 = pplStack_128;
                      local_f0 = local_130;
                      local_e0 = local_120;
                      if (lVar27 == 0) {
                        if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                      }
                      else {
                        pplStack_248 = pplStack_128;
                        local_250 = local_130;
                        local_240 = local_120;
                        plVar15 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                                    (lVar27,&local_250,0);
                        if (plVar15 == (long *)0x0) {
                          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                        }
                        else {
                          lVar27 = *plVar15;
                          uVar13 = (ulong)*(ushort *)(lVar27 + 0x12e);
                          if (uVar13 != 0) {
                            piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar26 + -2) == DAT_0917a480) {
                                puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
                                goto LAB_0446b808;
                              }
                              uVar13 = uVar13 - 1;
                              piVar26 = piVar26 + 4;
                            } while (uVar13 != 0);
                          }
                          puVar16 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917a480,0);
LAB_0446b808:
                          local_168 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
                          pplStack_288 = &local_168;
                          local_290 = 0;
                          if (local_168 != (long *)0x0) {
                            do {
                              plVar15 = local_168;
                              lVar27 = *local_168;
                              uVar13 = (ulong)*(ushort *)(lVar27 + 0x12e);
                              if (uVar13 != 0) {
                                piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar26 + -2) == DAT_09185b10) {
                                    puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138)
                                    ;
                                    goto LAB_0446b878;
                                  }
                                  uVar13 = uVar13 - 1;
                                  piVar26 = piVar26 + 4;
                                } while (uVar13 != 0);
                              }
                              puVar16 = (undefined8 *)FUN_03f95da8(local_168,DAT_09185b10,0);
LAB_0446b878:
                              uVar13 = (*(code *)*puVar16)(plVar15,puVar16[1]);
                              plVar7 = local_168;
                              if ((uVar13 & 1) == 0) goto LAB_0446ba14;
                              if (local_168 == (long *)0x0) {
                                if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                                goto LAB_0446c030;
                              }
                              lVar27 = *local_168;
                              uVar13 = (ulong)*(ushort *)(lVar27 + 0x12e);
                              if (uVar13 != 0) {
                                piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar26 + -2) == DAT_0917ab28) {
                                    puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138)
                                    ;
                                    goto LAB_0446b8e4;
                                  }
                                  uVar13 = uVar13 - 1;
                                  piVar26 = piVar26 + 4;
                                } while (uVar13 != 0);
                              }
                              puVar16 = (undefined8 *)FUN_03f95da8(local_168,DAT_0917ab28,0);
LAB_0446b8e4:
                              (*(code *)*puVar16)(&local_f0,plVar7,puVar16[1]);
                              lVar27 = local_f0;
                              if (*(long *)(param_1 + 0xd0) == 0) {
                                if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                                goto LAB_0446c030;
                              }
                              uVar13 = FUN_06f4de70(*(long *)(param_1 + 0xd0),local_f0,
                                                    (long)&local_170 + 4,DAT_0919e470);
                              if ((uVar13 & 1) != 0) {
                                lVar17 = *(long *)(param_1 + 0xd0);
                                if (lVar17 == 0) {
                                  if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c550();
                                  }
                                  goto LAB_0446c030;
                                }
                                uVar13 = FUN_06f4de70(lVar17,lVar25,&local_170,DAT_0919e470);
                                iVar9 = (int)local_170;
                                if ((uVar13 & 1) == 0) {
                                  iVar9 = 0;
                                }
                                FUN_06f4c418(lVar17,lVar25,iVar9 + local_170._4_4_,DAT_0919e478);
                                if (*(long *)(param_1 + 0xd0) == 0) {
                                  if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c550();
                                  }
                                  goto LAB_0446c030;
                                }
                                FUN_06f4d858(*(long *)(param_1 + 0xd0),lVar27,DAT_0919e468);
                              }
                              lVar17 = *(long *)(param_1 + 0x178);
                              CookingGraph_CookingLevelSimulation__ToolAddress
                                        (&local_130,*(undefined4 *)(lVar12 + 0x10),uVar11);
                              pplStack_e8 = pplStack_128;
                              local_f0 = local_130;
                              local_e0 = local_120;
                              if (lVar17 == 0) {
                                if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                                goto LAB_0446c030;
                              }
                              pplStack_268 = pplStack_128;
                              local_270 = local_130;
                              local_260 = local_120;
                              CookingGraph_Execution_CookingExecution__Consume
                                        (lVar17,&local_270,lVar27,0);
                              if (*(long *)(param_1 + 200) == 0) {
                                if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                                goto LAB_0446c030;
                              }
                              FUN_053e19f4(*(long *)(param_1 + 200),lVar27,DAT_091a8330);
                              if (local_168 == (long *)0x0) break;
                            } while( true );
                          }
                          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                        }
                      }
                    }
                    goto LAB_0446c030;
                  }
                  plVar15 = *pplStack_2e8;
                  if (plVar15 != (long *)0x0) {
                    lVar27 = *plVar15;
                    uVar13 = (ulong)*(ushort *)(lVar27 + 0x12e);
                    if (uVar13 != 0) {
                      piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == DAT_09185a58) {
                          puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
                          goto LAB_0446bc38;
                        }
                        uVar13 = uVar13 - 1;
                        piVar26 = piVar26 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar16 = (undefined8 *)FUN_03f95da8(plVar15,DAT_09185a58,0);
LAB_0446bc38:
                    (*(code *)*puVar16)(plVar15,puVar16[1]);
                  }
                  if (local_2f0 != 0) {
                    if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c548();
                    }
                    goto LAB_0446c030;
                  }
                  lVar27 = thunk_FUN_03f9944c(DAT_0917bf78);
                  FUN_05744974(lVar27,DAT_091ac088);
                  pplStack_288 = *(long ***)(lVar21 + 0x18);
                  local_290 = *(long *)(lVar21 + 0x10);
                  local_280 = *(undefined8 *)(lVar21 + 0x20);
                  CookingGraph_CookingLevelSimulation__ToolAddress(&local_2b0,uVar2,iVar10);
                  pplStack_308 = pplStack_288;
                  local_310 = local_290;
                  local_300 = local_280;
                  local_2c0 = 0;
                  uStack_2d8 = 0;
                  local_2e0 = 0;
                  uStack_2c8 = 0;
                  uStack_2d0 = 0;
                  pplStack_2e8 = (long **)0x0;
                  local_2f0 = 0;
                  uStack_328 = uStack_2a8;
                  local_330 = local_2b0;
                  local_320 = local_2a0;
                  CookingGraph_Execution_CookingTransferRequest___ctor
                            (&local_2f0,&local_310,&local_330,lVar25,0);
                  lVar21 = DAT_091ac090;
                  if (lVar27 == 0) goto LAB_0446bf90;
                  uStack_118 = uStack_2d8;
                  local_120 = local_2e0;
                  uStack_108 = uStack_2c8;
                  local_110 = uStack_2d0;
                  local_100 = local_2c0;
                  pplStack_128 = pplStack_2e8;
                  local_130 = local_2f0;
                  lVar25 = *(long *)(lVar27 + 0x10);
                  *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                  if (lVar25 == 0) goto LAB_0446bf90;
                  uVar4 = *(uint *)(lVar27 + 0x18);
                  if (uVar4 < *(uint *)(lVar25 + 0x18)) {
                    lVar25 = lVar25 + (long)(int)uVar4 * 0x38;
                    *(uint *)(lVar27 + 0x18) = uVar4 + 1;
                    *(long ***)(lVar25 + 0x28) = pplStack_2e8;
                    *(long *)(lVar25 + 0x20) = local_2f0;
                    *(undefined8 *)(lVar25 + 0x38) = uStack_2d8;
                    *(undefined8 *)(lVar25 + 0x30) = local_2e0;
                    *(undefined8 *)(lVar25 + 0x48) = uStack_2c8;
                    *(undefined8 *)(lVar25 + 0x40) = uStack_2d0;
                    *(undefined8 *)(lVar25 + 0x50) = local_2c0;
                    thunk_FUN_03f5d7b8(lVar25 + 0x28,0);
                  }
                  else {
                    pplStack_e8 = pplStack_2e8;
                    local_f0 = local_2f0;
                    uStack_d8 = uStack_2d8;
                    local_e0 = local_2e0;
                    uStack_c8 = uStack_2c8;
                    local_d0 = uStack_2d0;
                    local_c0 = local_2c0;
                    FUN_057452c4(lVar27,&local_f0,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  CookingGraph_CookingLevelSimulation__Dispatch(param_1,lVar27,0,0,0,0);
                  lVar21 = *(long *)(param_1 + 0xb0);
                  local_f0 = 0;
                  FUN_066c1fdc(&local_f0,*(undefined4 *)(lVar12 + 0x10),local_134,DAT_091bec98);
                  if (lVar21 == 0) goto LAB_0446bf90;
                  FUN_06e4d3e8(lVar21,local_f0,DAT_0919c198);
                  CookingGraph_CookingLevelSimulation__Emit
                            (param_1,3,*(undefined4 *)(lVar12 + 0x10),DAT_091fe758,0);
                  goto LAB_0446be2c;
                }
                lVar25 = *(long *)(lVar25 + 0x48);
                if (lVar25 == 0) goto LAB_0446bf90;
                if (0 < (int)*(ulong *)(lVar25 + 0x18)) {
                  iVar10 = 0;
                  uVar13 = 0;
                  uVar22 = *(ulong *)(lVar25 + 0x18) & 0xffffffff;
LAB_0446a6e0:
                  if (uVar13 < uVar22) {
                    lVar27 = *(long *)(param_1 + 0x178);
                    uVar2 = *(undefined4 *)(lVar25 + uVar13 * 4 + 0x20);
                    CookingGraph_CookingLevelSimulation__ToolAddress
                              (&local_f0,*(undefined4 *)(lVar12 + 0x10),uVar2);
                    if (lVar27 == 0) goto LAB_0446bf90;
                    pplStack_348 = pplStack_e8;
                    local_350 = local_f0;
                    local_340 = local_e0;
                    plVar15 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                                (lVar27,&local_350,0);
                    if (plVar15 == (long *)0x0) goto LAB_0446bf90;
                    lVar27 = *plVar15;
                    uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
                    if (uVar22 != 0) {
                      piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == DAT_0917a480) {
                          puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
                          goto LAB_0446a78c;
                        }
                        uVar22 = uVar22 - 1;
                        piVar26 = piVar26 + 4;
                      } while (uVar22 != 0);
                    }
                    puVar16 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917a480,0);
LAB_0446a78c:
                    local_168 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
                    pplStack_2e8 = &local_168;
                    local_2f0 = 0;
                    if (local_168 != (long *)0x0) {
                      do {
                        plVar15 = local_168;
                        lVar27 = *local_168;
                        uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
                        if (uVar22 != 0) {
                          piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar26 + -2) == DAT_09185b10) {
                              puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
                              goto LAB_0446a7fc;
                            }
                            uVar22 = uVar22 - 1;
                            piVar26 = piVar26 + 4;
                          } while (uVar22 != 0);
                        }
                        puVar16 = (undefined8 *)FUN_03f95da8(local_168,DAT_09185b10,0);
LAB_0446a7fc:
                        uVar22 = (*(code *)*puVar16)(plVar15,puVar16[1]);
                        plVar15 = local_168;
                        if ((uVar22 & 1) == 0) goto LAB_0446a96c;
                        if (local_168 == (long *)0x0) {
                          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_0446c030;
                        }
                        lVar27 = *local_168;
                        uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
                        if (uVar22 != 0) {
                          piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar26 + -2) == DAT_0917ab28) {
                              puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
                              goto LAB_0446a868;
                            }
                            uVar22 = uVar22 - 1;
                            piVar26 = piVar26 + 4;
                          } while (uVar22 != 0);
                        }
                        puVar16 = (undefined8 *)FUN_03f95da8(local_168,DAT_0917ab28,0);
LAB_0446a868:
                        (*(code *)*puVar16)(&local_f0,plVar15,puVar16[1]);
                        lVar27 = local_f0;
                        if (*(long *)(param_1 + 0xd0) == 0) {
                          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_0446c030;
                        }
                        uVar22 = FUN_06f4de70(*(long *)(param_1 + 0xd0),local_f0,&local_174,
                                              DAT_0919e470);
                        if ((uVar22 & 1) != 0) {
                          iVar10 = local_174 + iVar10;
                          if (*(long *)(param_1 + 0xd0) == 0) {
                            if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_0446c030;
                          }
                          FUN_06f4d858(*(long *)(param_1 + 0xd0),lVar27,DAT_0919e468);
                        }
                        lVar17 = *(long *)(param_1 + 0x178);
                        CookingGraph_CookingLevelSimulation__ToolAddress
                                  (&local_130,*(undefined4 *)(lVar12 + 0x10),uVar2);
                        pplStack_e8 = pplStack_128;
                        local_f0 = local_130;
                        local_e0 = local_120;
                        if (lVar17 == 0) {
                          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_0446c030;
                        }
                        pplStack_368 = pplStack_128;
                        local_370 = local_130;
                        local_360 = local_120;
                        CookingGraph_Execution_CookingExecution__Consume(lVar17,&local_370,lVar27,0)
                        ;
                        if (*(long *)(param_1 + 200) == 0) {
                          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_0446c030;
                        }
                        FUN_053e19f4(*(long *)(param_1 + 200),lVar27,DAT_091a8330);
                        if (*(long *)(param_1 + 0xb8) == 0) {
                          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_0446c030;
                        }
                        FUN_06f54860(*(long *)(param_1 + 0xb8),lVar27,DAT_0919e640);
                        if (local_168 == (long *)0x0) break;
                      } while( true );
                    }
                    if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_0446c030;
                  }
                  goto LAB_0446bfa8;
                }
                iVar10 = 0;
LAB_0446b49c:
                lVar25 = thunk_FUN_03f9944c(DAT_0917bf80);
                FUN_05747954(lVar25,DAT_091ac0d0);
                lVar27 = *(long *)(lVar21 + 0x28);
                if (lVar27 == 0) goto LAB_0446bf90;
                iVar9 = -1;
                while (iVar9 = iVar9 + 1, iVar9 < *(int *)(lVar27 + 0x20)) {
                  if ((*(long *)(param_1 + 0x78) == 0) ||
                     (lVar17 = *(long *)(*(long *)(param_1 + 0x78) + 0x70), lVar17 == 0))
                  goto LAB_0446bf90;
                  uVar4 = *(uint *)(lVar27 + 0x1c);
                  if (*(uint *)(lVar17 + 0x18) <= uVar4) goto LAB_0446bfa8;
                  iVar3 = *(int *)(lVar17 + (long)(int)uVar4 * 4 + 0x20);
                  iVar8 = iVar10 - iVar3;
                  if (iVar10 < iVar3) {
                    lVar27 = *(long *)(param_1 + 0x158);
                    local_e0 = 0;
                    local_f0 = 0;
                    *(long *)(param_1 + 0x158) = lVar27 + 1;
                    pplStack_e8 = (long **)0x0;
                    CookingGraph_Execution_CookingUnit___ctor
                              (&local_f0,lVar27,(long)(int)uVar4,0,1,0);
                    lVar17 = local_f0;
                    lVar27 = DAT_091ac0d8;
                    uStack_88 = local_e0;
                    local_90 = pplStack_e8;
                    if (lVar25 == 0) goto LAB_0446bf90;
                    lVar23 = *(long *)(lVar25 + 0x10);
                    *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
                    if (lVar23 == 0) goto LAB_0446bf90;
                    uVar4 = *(uint *)(lVar25 + 0x18);
                    if (uVar4 < *(uint *)(lVar23 + 0x18)) {
                      lVar23 = lVar23 + (long)(int)uVar4 * 0x18;
                      *(uint *)(lVar25 + 0x18) = uVar4 + 1;
                      *(long *)(lVar23 + 0x20) = local_f0;
                      *(undefined8 *)(lVar23 + 0x30) = local_e0;
                      *(long ***)(lVar23 + 0x28) = pplStack_e8;
                    }
                    else {
                      FUN_0574825c(lVar25,&local_f0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
                    }
                    iVar8 = iVar10;
                    if (0 < iVar10) {
                      if (*(long *)(param_1 + 0xd0) == 0) goto LAB_0446bf90;
                      FUN_06f4c42c(*(long *)(param_1 + 0xd0),lVar17,iVar10,DAT_0919e460);
                      iVar8 = 0;
                    }
                  }
                  iVar10 = iVar8;
                  lVar27 = *(long *)(lVar21 + 0x28);
                  if (lVar27 == 0) goto LAB_0446bf90;
                }
                if (*(long *)(param_1 + 0x178) == 0) goto LAB_0446bf90;
                uStack_388 = *(undefined8 *)(lVar21 + 0x18);
                local_390 = *(undefined8 *)(lVar21 + 0x10);
                local_380 = *(undefined8 *)(lVar21 + 0x20);
                CookingGraph_Execution_CookingExecution__Produce
                          (*(long *)(param_1 + 0x178),&local_390,lVar25,0);
                if (*(long *)(lVar21 + 0x28) == 0) goto LAB_0446bf90;
                *(undefined1 *)(*(long *)(lVar21 + 0x28) + 0x38) = 1;
                CookingGraph_CookingLevelSimulation__Emit
                          (param_1,3,*(undefined4 *)(lVar12 + 0x10),DAT_0920b6d0,0);
              }
              if (*(long *)(param_1 + 0x178) == 0) goto LAB_0446bf90;
              uStack_3a8 = *(undefined8 *)(lVar21 + 0x18);
              local_3b0 = *(undefined8 *)(lVar21 + 0x10);
              local_3a0 = *(undefined8 *)(lVar21 + 0x20);
              uVar14 = CookingGraph_Execution_CookingExecution__UnitsAt
                                 (*(long *)(param_1 + 0x178),&local_3b0,0);
              uVar19 = thunk_FUN_03f9944c(DAT_09178768);
              FUN_053136a4(uVar19,param_1,DAT_091c6750,0);
              uVar14 = FUN_04b0beec(uVar14,uVar19,DAT_091cb468);
              lVar25 = FUN_04b0451c(uVar14,DAT_091cadc0);
              local_140 = 0;
              local_150 = 0;
              pplStack_148 = (long **)0x0;
              if (lVar25 == 0) goto LAB_0446bf90;
              if (*(long *)(lVar25 + 0x18) != 0) {
                if (*(long *)(lVar21 + 0x28) == 0) goto LAB_0446bf90;
                uVar2 = *(undefined4 *)(*(long *)(lVar21 + 0x28) + 0x1c);
                local_2f0 = 0;
                FUN_066c1fdc(&local_2f0,*(undefined4 *)(lVar12 + 0x10),local_134,DAT_091bec98);
                pplStack_128 = (long **)((ulong)pplStack_128 & 0xffffffff00000000);
                local_130 = 0;
                FUN_05c25e3c(&local_130,local_2f0,DAT_091b6960);
                local_590 = local_590 & 0xffffffff00000000 | (ulong)pplStack_128 & 0xffffffff;
                CookingGraph_CookingLevelSimulation__RouteProcess
                          (&local_f0,param_1,uVar2,0,local_130,local_590,0);
                pplStack_188 = pplStack_e8;
                local_190 = local_f0;
                lVar27 = local_190;
                local_190._0_1_ = (char)local_f0;
                local_180 = local_e0;
                bVar1 = (char)local_190 != '\0';
                local_190 = lVar27;
                if (bVar1) {
                  if (*(long *)(lVar21 + 0x28) == 0) goto LAB_0446bf90;
                  if (*(int *)(lVar25 + 0x18) == 0) goto LAB_0446bfa8;
                  uStack_3c8 = *(undefined8 *)(lVar25 + 0x28);
                  local_3d0 = *(undefined8 *)(lVar25 + 0x20);
                  local_3c0 = *(undefined8 *)(lVar25 + 0x30);
                  uStack_3e8 = *(undefined8 *)(lVar21 + 0x18);
                  local_3f0 = *(undefined8 *)(lVar21 + 0x10);
                  uVar2 = *(undefined4 *)(*(long *)(lVar21 + 0x28) + 0x1c);
                  local_3e0 = *(undefined8 *)(lVar21 + 0x20);
                  uVar14 = FUN_05c3c1f8(&local_190,DAT_091b76d0);
                  uVar13 = CookingGraph_CookingLevelSimulation__PreferServingOutput
                                     (param_1,uVar2,&local_3d0,&local_3f0,uVar14);
                  if ((uVar13 & 1) == 0) {
                    pplStack_148 = pplStack_188;
                    local_150 = local_190;
                    local_140 = local_180;
                  }
                }
              }
              iVar10 = local_140._4_4_;
              pplVar6 = pplStack_148;
              if ((char)local_150 == '\0') {
                iVar10 = -1;
                pplVar6 = (long **)0x0;
              }
              if (0 < (int)*(ulong *)(lVar25 + 0x18)) {
                uVar13 = 0;
                uVar22 = *(ulong *)(lVar25 + 0x18) & 0xffffffff;
                puVar16 = (undefined8 *)(lVar25 + 0x2c);
                do {
                  if (uVar22 <= uVar13) goto LAB_0446bfa8;
                  local_a0 = *puVar16;
                  uVar2 = *(undefined4 *)((long)puVar16 + -4);
                  local_98 = *(undefined4 *)(puVar16 + 1);
                  uVar14 = *(undefined8 *)((long)puVar16 + -0xc);
                  CookingGraph_CookingLevelSimulation__GridAssemblyTarget(&local_f0,param_1,uVar2,0)
                  ;
                  pplStack_1a8 = pplStack_e8;
                  local_1b0 = local_f0;
                  lVar27 = local_1b0;
                  local_1b0._0_1_ = (char)local_f0;
                  uStack_198 = uStack_d8;
                  local_1a0 = local_e0;
                  local_1b0 = lVar27;
                  if ((char)local_1b0 == '\0') {
                    if ((char)local_150 == '\0') {
                      lVar27 = thunk_FUN_03f9944c(DAT_0918f678);
                      CookingGraph_CookingLevelSimulation_PickPlan___ctor(lVar27,0);
                      uStack_458 = *(undefined8 *)(lVar21 + 0x18);
                      local_460 = *(undefined8 *)(lVar21 + 0x10);
                      local_43c = local_a0;
                      local_450 = *(undefined8 *)(lVar21 + 0x20);
                      local_434 = local_98;
                      uStack_448 = uVar14;
                      local_440 = uVar2;
                      uVar22 = CookingGraph_CookingLevelSimulation__PlanWholeRecipeCapture
                                         (param_1,&uStack_448,&local_460,lVar27);
                      if ((uVar22 & 1) != 0) {
                        if ((lVar27 != 0) && (*(long *)(lVar27 + 0x30) != 0)) {
                          lVar17 = *(long *)(lVar27 + 0x18);
                          uVar14 = *(undefined8 *)(*(long *)(lVar27 + 0x30) + 0x28);
                          goto LAB_0446a4a8;
                        }
                        goto LAB_0446bf90;
                      }
                    }
                  }
                  else {
                    lVar17 = thunk_FUN_03f9944c(DAT_0917bf78);
                    FUN_05744974(lVar17,DAT_091ac088);
                    pplStack_288 = *(long ***)(lVar21 + 0x18);
                    local_290 = *(long *)(lVar21 + 0x10);
                    local_280 = *(undefined8 *)(lVar21 + 0x20);
                    FUN_05c2b3f4(&local_2b0,&local_1b0,DAT_091b6b90);
                    pplStack_408 = pplStack_288;
                    local_410 = local_290;
                    local_400 = local_280;
                    local_2c0 = 0;
                    uStack_2d8 = 0;
                    local_2e0 = 0;
                    uStack_2c8 = 0;
                    uStack_2d0 = 0;
                    pplStack_2e8 = (long **)0x0;
                    local_2f0 = 0;
                    uStack_428 = uStack_2a8;
                    local_430 = local_2b0;
                    local_420 = local_2a0;
                    CookingGraph_Execution_CookingTransferRequest___ctor
                              (&local_2f0,&local_410,&local_430,uVar14,0);
                    lVar27 = DAT_091ac090;
                    if (lVar17 == 0) goto LAB_0446bf90;
                    uStack_118 = uStack_2d8;
                    local_120 = local_2e0;
                    uStack_108 = uStack_2c8;
                    local_110 = uStack_2d0;
                    local_100 = local_2c0;
                    pplStack_128 = pplStack_2e8;
                    local_130 = local_2f0;
                    lVar23 = *(long *)(lVar17 + 0x10);
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    if (lVar23 == 0) goto LAB_0446bf90;
                    uVar4 = *(uint *)(lVar17 + 0x18);
                    if (uVar4 < *(uint *)(lVar23 + 0x18)) {
                      lVar23 = lVar23 + (long)(int)uVar4 * 0x38;
                      *(uint *)(lVar17 + 0x18) = uVar4 + 1;
                      *(long ***)(lVar23 + 0x28) = pplStack_2e8;
                      *(long *)(lVar23 + 0x20) = local_2f0;
                      *(undefined8 *)(lVar23 + 0x38) = uStack_2d8;
                      *(undefined8 *)(lVar23 + 0x30) = local_2e0;
                      *(undefined8 *)(lVar23 + 0x48) = uStack_2c8;
                      *(undefined8 *)(lVar23 + 0x40) = uStack_2d0;
                      *(undefined8 *)(lVar23 + 0x50) = local_2c0;
                      thunk_FUN_03f5d7b8(lVar23 + 0x28,0);
                    }
                    else {
                      pplStack_e8 = pplStack_2e8;
                      local_f0 = local_2f0;
                      uStack_d8 = uStack_2d8;
                      local_e0 = local_2e0;
                      uStack_c8 = uStack_2c8;
                      local_d0 = uStack_2d0;
                      local_c0 = local_2c0;
                      FUN_057452c4(lVar17,&local_f0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar14 = 0;
LAB_0446a4a8:
                    CookingGraph_CookingLevelSimulation__Dispatch(param_1,lVar17,0,0,0,uVar14);
                  }
                  uVar22 = (ulong)*(uint *)(lVar25 + 0x18);
                  uVar13 = uVar13 + 1;
                  puVar16 = puVar16 + 3;
                } while ((long)uVar13 < (long)(int)*(uint *)(lVar25 + 0x18));
              }
              if (*(long *)(param_1 + 0x178) == 0) goto LAB_0446bf90;
              uStack_478 = *(undefined8 *)(lVar21 + 0x18);
              local_480 = *(undefined8 *)(lVar21 + 0x10);
              local_470 = *(undefined8 *)(lVar21 + 0x20);
              uVar14 = CookingGraph_Execution_CookingExecution__UnitsAt
                                 (*(long *)(param_1 + 0x178),&local_480,0);
              uVar19 = thunk_FUN_03f9944c(DAT_09178768);
              FUN_053136a4(uVar19,param_1,DAT_091c6768,0);
              uVar14 = FUN_04b0beec(uVar14,uVar19,DAT_091cb468);
              lVar25 = FUN_04b0451c(uVar14,DAT_091cadc0);
              if (pplVar6 == (long **)0x0) {
LAB_0446a6a8:
                if (((char)local_150 == '\0') || (iVar10 < 0)) {
LAB_0446ab54:
                  if ((*(long *)(param_1 + 0x180) == 0) ||
                     (lVar27 = *(long *)(*(long *)(param_1 + 0x180) + 0x40), lVar27 == 0))
                  goto LAB_0446bf90;
                  uVar13 = CookingGraph_Execution_CookingExecutionConfig__get_WholeDish(lVar27,0);
                  if ((uVar13 & 1) != 0) {
                    if (lVar25 == 0) goto LAB_0446bf90;
                    if (0 < (int)*(ulong *)(lVar25 + 0x18)) {
                      uVar13 = 0;
                      uVar22 = *(ulong *)(lVar25 + 0x18) & 0xffffffff;
                      puVar16 = (undefined8 *)(lVar25 + 0x28);
                      do {
                        if (uVar22 <= uVar13) goto LAB_0446bfa8;
                        uStack_a8 = puVar16[1];
                        local_b0 = *puVar16;
                        uVar14 = puVar16[-1];
                        if (*(long *)(param_1 + 0x178) == 0) goto LAB_0446bf90;
                        uVar22 = CookingGraph_Execution_CookingExecution__IsUnitClaimed
                                           (*(long *)(param_1 + 0x178),uVar14,0);
                        if ((uVar22 & 1) == 0) {
                          uStack_4a8 = *(undefined8 *)(lVar21 + 0x18);
                          local_4b0 = *(undefined8 *)(lVar21 + 0x10);
                          local_4a0 = *(undefined8 *)(lVar21 + 0x20);
                          uStack_488 = uStack_a8;
                          local_490 = local_b0;
                          uStack_498 = uVar14;
                          CookingGraph_CookingLevelSimulation__TryCaptureWith
                                    (param_1,&uStack_498,&local_4b0);
                        }
                        uVar22 = (ulong)*(uint *)(lVar25 + 0x18);
                        uVar13 = uVar13 + 1;
                        puVar16 = puVar16 + 3;
                      } while ((long)uVar13 < (long)(int)*(uint *)(lVar25 + 0x18));
                    }
                  }
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
                if (*(long *)(param_1 + 0x178) == 0) goto LAB_0446bf90;
                uStack_4c8 = *(undefined8 *)(lVar21 + 0x18);
                local_4d0 = *(undefined8 *)(lVar21 + 0x10);
                local_4c0 = *(undefined8 *)(lVar21 + 0x20);
                uVar14 = CookingGraph_Execution_CookingExecution__UnitsAt
                                   (*(long *)(param_1 + 0x178),&local_4d0,0);
                uVar19 = thunk_FUN_03f9944c(DAT_09178768);
                FUN_053136a4(uVar19,param_1,DAT_091c6770,0);
                uVar14 = FUN_04b0beec(uVar14,uVar19,DAT_091cb468);
                lVar25 = FUN_04b0451c(uVar14,DAT_091cadc0);
                lVar27 = thunk_FUN_03f9944c(DAT_0917bf78);
                FUN_05744974(lVar27,DAT_091ac088);
                lVar17 = thunk_FUN_03f9944c(DAT_09179d80);
                FUN_053d17f8(lVar17,DAT_091a7fe8);
                lVar23 = thunk_FUN_03f9944c(DAT_09176710);
                FUN_06f52618(lVar23,DAT_0919e5f8);
                lVar20 = thunk_FUN_03f9944c(DAT_09179e20);
                FUN_053e1118(lVar20,DAT_091a82f8);
                plVar15 = (long *)(lVar21 + 0x30);
                *plVar15 = lVar20;
                thunk_FUN_03f5d7b8(plVar15,lVar20);
                if (lVar25 == 0) goto LAB_0446bf90;
                if (0 < (int)*(ulong *)(lVar25 + 0x18)) {
                  bVar29 = false;
                  uVar13 = 0;
                  uVar22 = *(ulong *)(lVar25 + 0x18) & 0xffffffff;
                  puVar28 = (undefined4 *)(lVar25 + 0x28);
                  do {
                    if (uVar22 <= uVar13) goto LAB_0446bfa8;
                    uVar14 = *(undefined8 *)(puVar28 + -2);
                    uVar2 = *puVar28;
                    pplStack_1c8 = (long **)0x0;
                    local_1d0 = 0;
                    uStack_1b8 = 0;
                    local_1c0 = 0;
                    if (bVar1 || bVar29) {
                      if (bVar1) {
                        if ((*(long *)(param_1 + 0x180) != 0) &&
                           (lVar20 = *(long *)(*(long *)(param_1 + 0x180) + 0x40), lVar20 != 0)) {
                          uVar22 = CookingGraph_Execution_CookingExecutionConfig__get_WholeDish
                                             (lVar20,0);
                          if ((uVar22 & 1) == 0) {
                            CookingGraph_CookingLevelSimulation__ServeTarget
                                      (&local_f0,param_1,uVar2,lVar17);
                            pplStack_1c8 = pplStack_e8;
                            local_1d0 = local_f0;
                            uStack_1b8 = uStack_d8;
                            local_1c0 = local_e0;
                          }
                          goto LAB_0446ae50;
                        }
                        goto LAB_0446bf90;
                      }
LAB_0446ae58:
                      iVar9 = CookingGraph_CookingLevelSimulation__FreeCell(param_1,lVar17);
                      if (iVar9 < 0) break;
                      CookingGraph_CookingLevelSimulation__GridAddress(&local_130);
                      pplStack_e8 = pplStack_128;
                      local_f0 = local_130;
                      local_e0 = local_120;
                      FUN_05c2b3b8(&local_1d0,&local_f0,DAT_091b6b80);
                    }
                    else {
                      FUN_05c3c1f8(&local_150,DAT_091b76d0);
                      CookingGraph_CookingLevelSimulation__ToolAddress
                                (&local_130,extraout_x1,iVar10);
                      pplStack_e8 = pplStack_128;
                      local_f0 = local_130;
                      local_e0 = local_120;
                      FUN_05c2b3b8(&local_1d0,&local_f0,DAT_091b6b80);
                      if (pplVar6 == (long **)0x0) {
                        bVar29 = true;
                      }
                      else {
                        if (lVar23 == 0) goto LAB_0446bf90;
                        FUN_06f533bc(lVar23,uVar14,pplVar6,DAT_0919e628);
                        bVar29 = true;
                      }
LAB_0446ae50:
                      if ((char)local_1d0 == '\0') goto LAB_0446ae58;
                    }
                    FUN_05c2b3f4(&local_290,&local_1d0,DAT_091b6b90);
                    if (lVar17 == 0) goto LAB_0446bf90;
                    pplStack_e8 = pplStack_288;
                    local_f0 = local_290;
                    local_e0 = local_280;
                    FUN_053d2af8(lVar17,&local_f0,DAT_091a7ff8);
                    if (*plVar15 == 0) goto LAB_0446bf90;
                    FUN_053e230c(*plVar15,uVar14,DAT_091a8308);
                    uStack_2a8 = *(undefined8 *)(lVar21 + 0x18);
                    local_2b0 = *(undefined8 *)(lVar21 + 0x10);
                    local_2a0 = *(undefined8 *)(lVar21 + 0x20);
                    FUN_05c2b3f4(&local_4e8,&local_1d0,DAT_091b6b90);
                    uStack_4f8 = uStack_2a8;
                    local_500 = local_2b0;
                    local_4f0 = local_2a0;
                    local_2c0 = 0;
                    uStack_2d8 = 0;
                    local_2e0 = 0;
                    uStack_2c8 = 0;
                    uStack_2d0 = 0;
                    pplStack_2e8 = (long **)0x0;
                    local_2f0 = 0;
                    uStack_518 = uStack_4e0;
                    local_520 = local_4e8;
                    local_510 = local_4d8;
                    CookingGraph_Execution_CookingTransferRequest___ctor
                              (&local_2f0,&local_500,&local_520,uVar14,0);
                    lVar20 = DAT_091ac090;
                    if (lVar27 == 0) goto LAB_0446bf90;
                    uStack_118 = uStack_2d8;
                    local_120 = local_2e0;
                    uStack_108 = uStack_2c8;
                    local_110 = uStack_2d0;
                    local_100 = local_2c0;
                    pplStack_128 = pplStack_2e8;
                    local_130 = local_2f0;
                    lVar24 = *(long *)(lVar27 + 0x10);
                    *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                    if (lVar24 == 0) goto LAB_0446bf90;
                    uVar4 = *(uint *)(lVar27 + 0x18);
                    if (uVar4 < *(uint *)(lVar24 + 0x18)) {
                      lVar24 = lVar24 + (long)(int)uVar4 * 0x38;
                      *(uint *)(lVar27 + 0x18) = uVar4 + 1;
                      *(long ***)(lVar24 + 0x28) = pplStack_2e8;
                      *(long *)(lVar24 + 0x20) = local_2f0;
                      *(undefined8 *)(lVar24 + 0x38) = uStack_2d8;
                      *(undefined8 *)(lVar24 + 0x30) = local_2e0;
                      *(undefined8 *)(lVar24 + 0x48) = uStack_2c8;
                      *(undefined8 *)(lVar24 + 0x40) = uStack_2d0;
                      *(undefined8 *)(lVar24 + 0x50) = local_2c0;
                      thunk_FUN_03f5d7b8(lVar24 + 0x28,0);
                    }
                    else {
                      pplStack_e8 = pplStack_2e8;
                      local_f0 = local_2f0;
                      uStack_d8 = uStack_2d8;
                      local_e0 = local_2e0;
                      uStack_c8 = uStack_2c8;
                      local_d0 = uStack_2d0;
                      local_c0 = local_2c0;
                      FUN_057452c4(lVar27,&local_f0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar13 = uVar13 + 1;
                    puVar28 = puVar28 + 6;
                    uVar22 = (ulong)*(uint *)(lVar25 + 0x18);
                  } while ((long)uVar13 < (long)(int)*(uint *)(lVar25 + 0x18));
                }
                uVar14 = thunk_FUN_03f9944c(DAT_09178768);
                FUN_053136a4(uVar14,lVar21,DAT_091e7cd8,0);
                uVar14 = FUN_04b0beec(lVar25,uVar14,DAT_091cb468);
                lVar20 = FUN_04b0451c(uVar14,DAT_091cadc0);
                if (lVar20 == 0) goto LAB_0446bf90;
                if (*(long *)(lVar20 + 0x18) == 0) {
LAB_0446b160:
                  bVar1 = false;
                }
                else {
                  uStack_538 = *(undefined8 *)(lVar21 + 0x18);
                  local_540 = *(undefined8 *)(lVar21 + 0x10);
                  local_530 = *(undefined8 *)(lVar21 + 0x20);
                  lVar17 = CookingGraph_CookingLevelSimulation__PlanOutputSwaps
                                     (param_1,*(undefined4 *)(lVar12 + 0x10),local_134,&local_540,
                                      lVar20,lVar17,lVar23,0);
                  if (lVar17 == 0) goto LAB_0446b160;
                  if (lVar27 == 0) goto LAB_0446bf90;
                  FUN_05745554(lVar27,lVar17,DAT_091ac098);
                  if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
                    uVar13 = 0;
                    uVar22 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
                    puVar16 = (undefined8 *)(lVar20 + 0x20);
                    do {
                      if (uVar22 <= uVar13) goto LAB_0446bfa8;
                      if (*plVar15 == 0) goto LAB_0446bf90;
                      FUN_053e230c(*plVar15,*puVar16,DAT_091a8308);
                      uVar22 = (ulong)*(uint *)(lVar20 + 0x18);
                      uVar13 = uVar13 + 1;
                      puVar16 = puVar16 + 3;
                    } while ((long)uVar13 < (long)(int)*(uint *)(lVar20 + 0x18));
                  }
                  bVar1 = true;
                }
                if (*plVar15 == 0) goto LAB_0446bf90;
                if (*(int *)(*plVar15 + 0x20) < *(int *)(lVar25 + 0x18)) {
                  lVar25 = *(long *)(lVar21 + 0x28);
                  if (lVar25 == 0) goto LAB_0446bf90;
                  if (*(char *)(lVar25 + 0x39) == '\0') {
                    *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
                    *(undefined1 *)(lVar25 + 0x39) = 1;
                  }
                }
                CookingGraph_CookingLevelSimulation__Dispatch(param_1,lVar27,0,0,0,lVar23);
                if (!bVar1) {
                  uStack_558 = *(undefined8 *)(lVar21 + 0x18);
                  local_560 = *(undefined8 *)(lVar21 + 0x10);
                  local_550 = *(undefined8 *)(lVar21 + 0x20);
                  uVar13 = CookingGraph_CookingLevelSimulation__Occupied(param_1,&local_560);
                  if ((uVar13 & 1) == 0) {
                    if (*(long *)(param_1 + 0x178) != 0) {
                      uVar14 = CookingGraph_Execution_CookingExecution__get_Transfers
                                         (*(long *)(param_1 + 0x178),0);
                      uVar19 = thunk_FUN_03f9944c(DAT_09178730);
                      FUN_05322d94(uVar19,lVar21,DAT_091e7ce0,0);
                      uVar13 = FUN_04ab6f28(uVar14,uVar19,DAT_091c9458);
                      if ((uVar13 & 1) == 0) goto LAB_0446b1f0;
                      goto LAB_0446be2c;
                    }
                    goto LAB_0446bf90;
                  }
                  goto LAB_0446be2c;
                }
                CookingGraph_CookingLevelSimulation__Emit
                          (param_1,3,*(undefined4 *)(lVar12 + 0x10),DAT_09209f80,0);
              }
              else {
                if (lVar25 == 0) goto LAB_0446bf90;
                if (*(int *)(lVar25 + 0x18) != 1) goto LAB_0446a6a8;
                uVar4 = *(uint *)(pplVar6 + 2);
                if (uVar4 != *(uint *)(lVar12 + 0x10)) {
LAB_0446a6a0:
                  if (-1 < iVar10) goto LAB_0446a6a8;
                  local_f0 = 0;
                  FUN_066c1fdc(&local_f0,*(uint *)(lVar12 + 0x10),local_134,DAT_091bec98);
                  uVar13 = CookingGraph_CookingLevelSimulation__OnwardFreesByItself
                                     (param_1,pplVar6,local_f0);
                  if (((uVar13 & 1) != 0) ||
                     (iVar9 = CookingGraph_CookingLevelSimulation__FreeCell(param_1,0), iVar9 < 0))
                  goto LAB_0446be2c;
                  goto LAB_0446ab54;
                }
                plVar15 = pplVar6[6];
                if (plVar15 == (long *)0x0) goto LAB_0446bf90;
                if ((int)plVar15[3] != 1) goto LAB_0446a6a0;
                lVar27 = *(long *)(lVar21 + 0x28);
                if (lVar27 == 0) goto LAB_0446bf90;
                if ((int)plVar15[4] != *(int *)(lVar27 + 0x1c)) goto LAB_0446a6a0;
                if ((*(long *)(param_1 + 0x78) == 0) ||
                   (lVar17 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar17 == 0))
                goto LAB_0446bf90;
                if (*(uint *)(lVar17 + 0x18) <= uVar4) goto LAB_0446bfa8;
                lVar17 = *(long *)(lVar17 + (long)(int)uVar4 * 8 + 0x20);
                if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x10), lVar17 == 0))
                goto LAB_0446bf90;
                if (*(uint *)(lVar17 + 0x18) <= *(uint *)(lVar27 + 0x18)) goto LAB_0446bfa8;
                if (*(int *)((long)plVar15 + 0x24) !=
                    *(int *)(lVar17 + (long)(int)*(uint *)(lVar27 + 0x18) * 8 + 0x20))
                goto LAB_0446a6a0;
                if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0446bf90;
                FUN_06f533bc(*(long *)(param_1 + 0xc0),*(undefined8 *)(lVar25 + 0x20),pplVar6,
                             DAT_0919e628);
              }
LAB_0446b1f0:
              lVar21 = *(long *)(param_1 + 0xb0);
              local_f0 = 0;
              FUN_066c1fdc(&local_f0,*(undefined4 *)(lVar12 + 0x10),local_134,DAT_091bec98);
              if (lVar21 == 0) goto LAB_0446bf90;
              FUN_06e4d3e8(lVar21,local_f0,DAT_0919c198);
              *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
              *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
            }
          }
        }
LAB_0446be2c:
        lVar21 = *(long *)(param_1 + 0x78);
        local_134 = local_134 + 1;
        if (lVar21 == 0) goto LAB_0446bf90;
        goto LAB_0446989c;
      }
      if (*(long *)(lVar5 + 0x28) == local_78) {
        return;
      }
      goto LAB_0446c030;
    }
  }
LAB_0446bf90:
  if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0446c030:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0446bf4c:
  iVar10 = uVar4 + 1;
  *(int *)(lVar12 + 0x10) = iVar10;
  goto LAB_04469880;
LAB_0446ba14:
  plVar15 = local_160;
  if (local_168 != (long *)0x0) {
    lVar27 = *local_168;
    uVar13 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar13 != 0) {
      piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == DAT_09185a58) {
          puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_0446ba7c;
        }
        uVar13 = uVar13 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar13 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(local_168,DAT_09185a58,0);
LAB_0446ba7c:
    (*(code *)*puVar16)(plVar7,puVar16[1]);
    plVar15 = local_160;
  }
  goto joined_r0x0446b6a0;
LAB_0446a96c:
  if (local_168 != (long *)0x0) {
    lVar27 = *local_168;
    uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar22 != 0) {
      piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == DAT_09185a58) {
          puVar16 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_0446a9d4;
        }
        uVar22 = uVar22 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar22 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(local_168,DAT_09185a58,0);
LAB_0446a9d4:
    (*(code *)*puVar16)(plVar15,puVar16[1]);
  }
  uVar22 = (ulong)*(uint *)(lVar25 + 0x18);
  uVar13 = uVar13 + 1;
  if ((long)(int)*(uint *)(lVar25 + 0x18) <= (long)uVar13) goto LAB_0446b49c;
  goto LAB_0446a6e0;
}

