// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimple$$CreateMotionBlurMesh
// address: 0x43abd8c
// body: available
// range: 0x43abd8c-0x43ae0ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ae0c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43ae0e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43ae0ec to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurSimple__CreateMotionBlurMesh(long param_1)

{
  undefined1 uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  double dVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  ulong uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar52;
  float fVar53;
  ulong local_870;
  float local_858;
  float fStack_854;
  ulong local_850;
  float local_838;
  float local_834;
  ulong local_830;
  float local_818;
  float fStack_814;
  ulong local_810;
  float local_7f8;
  float fStack_7f4;
  float local_7d8;
  float local_7d4;
  float local_7b8;
  float local_7b4;
  float local_798;
  float local_794;
  float local_774;
  float local_770;
  float local_76c;
  float local_768;
  float local_764;
  float local_760;
  float local_75c;
  float local_758;
  float local_754;
  undefined1 local_6f0 [64];
  float local_6b0;
  float local_6ac;
  float local_6a0;
  float local_69c;
  float local_690;
  float local_68c;
  float local_680;
  float local_67c;
  float local_670;
  float local_66c;
  float local_668;
  float local_660;
  float local_65c;
  float local_658;
  float local_650;
  float local_64c;
  float local_648;
  float local_640;
  float local_63c;
  float local_638;
  float local_630;
  float local_62c;
  float local_628;
  undefined4 local_624;
  float local_620;
  float local_61c;
  float local_618;
  undefined4 local_614;
  float local_610;
  float local_60c;
  float local_608;
  float local_604;
  float local_600;
  float local_5fc;
  float local_5f8;
  undefined4 local_5f4;
  double local_5f0 [8];
  float local_5b0;
  float fStack_5ac;
  float fStack_5a8;
  float local_5a0;
  float local_59c;
  float local_598;
  float local_590;
  float fStack_58c;
  float fStack_588;
  float local_580;
  float local_57c;
  float local_578;
  float local_570;
  float local_56c;
  float local_568;
  undefined4 local_564;
  float local_560;
  float local_55c;
  float local_558;
  undefined4 local_554;
  float local_550;
  float local_54c;
  float local_548;
  float local_544;
  float local_540;
  float local_53c;
  float local_538;
  undefined4 local_534;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  float local_4f0;
  float local_4ec;
  ulong local_4e8;
  float local_4e0;
  float local_4dc;
  ulong local_4d8;
  float local_4d0;
  float local_4cc;
  ulong local_4c8;
  float local_4c0;
  float local_4bc;
  ulong local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  float local_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  double local_430;
  float fStack_428;
  undefined4 uStack_424;
  float local_420;
  float fStack_41c;
  float fStack_418;
  undefined4 uStack_414;
  float local_410;
  float fStack_40c;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  float fStack_378;
  float fStack_374;
  undefined4 local_370;
  float fStack_36c;
  float local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  float fStack_328;
  float fStack_324;
  undefined4 local_320;
  float fStack_31c;
  float local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  float fStack_2c8;
  float fStack_2c4;
  undefined4 local_2c0;
  float fStack_2bc;
  float local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  float fStack_278;
  float fStack_274;
  undefined4 local_270;
  float fStack_26c;
  float local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  float fStack_218;
  float fStack_214;
  undefined4 local_210;
  float fStack_20c;
  float local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  float fStack_1c8;
  float fStack_1c4;
  undefined4 local_1c0;
  float fStack_1bc;
  float local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  float fStack_168;
  undefined4 uStack_164;
  float local_160;
  float fStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  float fStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  undefined8 uStack_10c;
  double local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined3 uStack_e8;
  undefined5 local_e5;
  undefined3 uStack_e0;
  undefined8 uStack_dd;
  undefined8 local_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 local_b9;
  undefined7 uStack_b8;
  long local_a8;
  
  lVar13 = tpidr_el0;
  local_a8 = *(long *)(lVar13 + 0x28);
  if ((DAT_09517ae9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1700);
    FUN_03f5c2a4(&DAT_091b1710);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_091b1760);
    FUN_03f5c2a4(&DAT_09188408);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517ae9 = 1;
  }
  iVar32 = *(int *)(param_1 + 0x24);
  fStack_7f4 = *(float *)(param_1 + 0x60);
  local_7f8 = *(float *)(param_1 + 100);
  uStack_c8 = 0;
  uStack_c1 = 0;
  local_d0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  fVar29 = *(float *)(param_1 + 0x28) / (float)iVar32;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_288 = 0;
  local_290 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_2f8 = 0;
  local_300 = 0;
  fVar24 = 1.0;
  if (fVar29 <= 1.0) {
    fVar24 = fVar29;
  }
  local_810 = *(ulong *)(param_1 + 0x68);
  uStack_308 = 0;
  local_310 = 0;
  fStack_814 = *(float *)(param_1 + 0x70);
  local_818 = *(float *)(param_1 + 0x74);
  uStack_338 = 0;
  local_340 = 0;
  uStack_348 = 0;
  local_350 = 0;
  local_830 = *(ulong *)(param_1 + 0x78);
  uStack_358 = 0;
  local_360 = 0;
  fVar30 = 0.0;
  if (0.0 <= fVar29) {
    fVar30 = fVar24;
  }
  uStack_388 = 0;
  local_390 = 0;
  uStack_398 = 0;
  local_3a0 = 0;
  uStack_3a8 = 0;
  local_3b0 = 0;
  local_834 = *(float *)(param_1 + 0x80);
  local_838 = *(float *)(param_1 + 0x84);
  uStack_3b8 = 0;
  local_3c0 = 0;
  uStack_dd = 0;
  uStack_e0 = 0;
  local_850 = *(ulong *)(param_1 + 0x88);
  uStack_e8 = 0;
  local_e5 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0.0;
  uStack_3c8 = 0;
  local_3d0 = 0;
  uStack_3d8 = 0;
  local_3e0 = 0;
  uStack_3e8 = 0;
  local_3f0 = 0;
  uStack_3f8 = 0;
  local_400 = 0;
  fStack_418 = 0.0;
  uStack_414 = 0;
  local_420 = 0.0;
  fStack_41c = 0.0;
  fStack_428 = 0.0;
  uStack_424 = 0;
  local_430 = 0.0;
  uStack_438 = 0;
  local_440 = 0;
  uStack_448 = 0;
  local_450 = 0;
  uStack_458 = 0;
  local_460 = 0;
  uStack_45c = 0;
  fStack_468 = 0.0;
  fStack_464 = 0.0;
  local_470 = 0.0;
  fStack_46c = 0.0;
  fStack_854 = *(float *)(param_1 + 0x90);
  local_858 = *(float *)(param_1 + 0x94);
  uStack_b8 = 0;
  uStack_c0 = 0;
  local_b9 = 0;
  local_870 = *(ulong *)(param_1 + 0x98);
  local_1c0 = 0;
  fStack_1bc = 0.0;
  local_1d0 = 0;
  fStack_1c8 = 0.0;
  fStack_1c4 = 0.0;
  local_1b8 = 0.0;
  local_210 = 0;
  fStack_20c = 0.0;
  local_208 = 0.0;
  local_220 = 0;
  fStack_218 = 0.0;
  fStack_214 = 0.0;
  fStack_278 = 0.0;
  fStack_274 = 0.0;
  local_280 = 0;
  local_268 = 0.0;
  local_270 = 0;
  fStack_26c = 0.0;
  fStack_2c8 = 0.0;
  fStack_2c4 = 0.0;
  local_2d0 = 0;
  local_2b8 = 0.0;
  local_2c0 = 0;
  fStack_2bc = 0.0;
  fStack_328 = 0.0;
  fStack_324 = 0.0;
  local_330 = 0;
  local_318 = 0.0;
  local_320 = 0;
  fStack_31c = 0.0;
  fStack_378 = 0.0;
  fStack_374 = 0.0;
  local_380 = 0;
  local_368 = 0.0;
  local_370 = 0;
  fStack_36c = 0.0;
  local_410 = 0.0;
  fStack_40c = 0.0;
  lVar8 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar8 != 0) {
    UnityEngine_Transform__get_localToWorldMatrix(&local_170,lVar8,0);
    uVar7 = uStack_134;
    fVar26 = fStack_138;
    fVar35 = fStack_13c;
    fVar18 = local_140;
    fVar20 = fStack_144;
    fVar22 = uStack_148;
    fVar36 = fStack_14c;
    fVar42 = local_150;
    uVar6 = uStack_154;
    fVar46 = uStack_158;
    fVar24 = fStack_15c;
    fVar29 = local_160;
    uVar5 = uStack_164;
    fVar21 = fStack_168;
    fVar23 = (float)local_170;
    fVar3 = local_170._4_4_;
    local_754 = uStack_158;
    local_758 = local_150;
    local_75c = fStack_14c;
    local_760 = uStack_148;
    local_764 = local_140;
    local_768 = fStack_13c;
    local_76c = fStack_138;
    lVar8 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar8 != 0) {
      UnityEngine_Transform__get_worldToLocalMatrix(&local_170,lVar8,0);
      fVar4 = fStack_138;
      fVar33 = fStack_13c;
      fVar41 = local_140;
      fVar52 = uStack_148;
      fVar19 = fStack_14c;
      fVar39 = local_150;
      fVar50 = uStack_158;
      fVar37 = fStack_15c;
      fVar34 = local_160;
      fVar28 = fStack_168;
      fVar27 = (float)local_170;
      uVar16 = *(undefined8 *)(param_1 + 0xe0);
      local_770 = (float)local_170;
      fVar31 = local_170._4_4_;
      local_774 = local_170._4_4_;
      local_794 = local_160;
      local_798 = fStack_15c;
      local_7b4 = local_150;
      local_7b8 = fStack_14c;
      local_7d4 = local_140;
      local_7d8 = fStack_13c;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar16,0,0);
      if ((uVar9 & 1) == 0) {
LAB_043ac46c:
        lVar8 = *(long *)(param_1 + 0x50);
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0x18) = 0;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          iVar17 = *(int *)(param_1 + 0x20);
          fVar46 = (float)local_810;
          fVar42 = (float)local_830;
          fVar36 = (float)local_850;
          fVar22 = (float)local_870;
          if (iVar17 == 0) {
            if (0 < *(int *)(param_1 + 0x24) + -1) {
              iVar32 = 0;
              do {
                fVar20 = (float)ChocDino_UIFX_MotionBlurSimple__GetLerpFactorUnclamped(param_1);
                if (0 < *(int *)(param_1 + 0x44)) {
                  iVar17 = 0;
                  do {
                    if (*(long *)(param_1 + 0x48) == 0) goto LAB_043ae0b4;
                    FUN_05894708(&local_170,*(long *)(param_1 + 0x48),iVar17,DAT_091b1750);
                    fVar26 = fStack_168;
                    local_d0 = CONCAT44(local_160,uStack_164);
                    uStack_1a8 = CONCAT44(fStack_138,fStack_13c);
                    local_1b0 = CONCAT44(local_140,fStack_144);
                    fVar18 = (float)local_170;
                    fVar35 = local_170._4_4_;
                    uStack_c8 = (undefined7)CONCAT44(uStack_158,fStack_15c);
                    local_1a0 = CONCAT44(uStack_130,uStack_134);
                    local_b9 = local_150._3_1_;
                    uStack_b8 = (undefined7)
                                (CONCAT35((undefined3)uStack_148,
                                          CONCAT41(fStack_14c,local_150._3_1_)) >> 8);
                    uStack_c1 = uStack_158._3_1_;
                    uStack_c0 = (undefined7)
                                (CONCAT35((undefined3)local_150,
                                          CONCAT41(uStack_154,uStack_158._3_1_)) >> 8);
                    uVar2 = (uint)uStack_148 >> 0x18;
                    uStack_198 = uStack_12c;
                    uStack_188 = uStack_11c;
                    local_190 = local_124;
                    uStack_178 = uStack_10c;
                    local_180 = local_114;
                    if (DAT_09515cf4 == '\0') {
                      FUN_03f5c2a4(&DAT_09187e80);
                      DAT_09515cf4 = '\x01';
                    }
                    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    fVar27 = (float)NEON_ucvtf(uVar2);
                    dVar47 = (double)(fVar30 * fVar27);
                    dVar25 = modf(dVar47,(double *)&local_170);
                    lVar8 = DAT_091b1700;
                    if (0.0 <= fVar30 * fVar27) {
                      if (dVar25 == 0.5) {
                        dVar25 = 1.0;
                        goto LAB_043ad2d4;
                      }
                      dVar47 = (double)(long)(dVar47 + 0.5);
                    }
                    else if (dVar25 == -0.5) {
                      dVar25 = -1.0;
LAB_043ad2d4:
                      dVar47 = local_170;
                      if (((long)local_170 & 1U) != 0) {
                        dVar47 = local_170 + dVar25;
                      }
                    }
                    else {
                      dVar47 = (double)(long)(dVar47 + -0.5);
                    }
                    lVar14 = *(long *)(param_1 + 0x50);
                    uVar1 = 0;
                    if (dVar47 != INFINITY) {
                      uVar1 = (char)(int)dVar47;
                    }
                    if (lVar14 == 0) goto LAB_043ae0b4;
                    lVar12 = *(long *)(lVar14 + 0x10);
                    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_043ae0b4;
                    uVar2 = *(uint *)(lVar14 + 0x18);
                    fVar31 = local_858 +
                             local_7f8 * fVar18 + local_818 * fVar35 + local_838 * fVar26;
                    fVar27 = fStack_854 +
                             fStack_7f4 * fVar18 + fStack_814 * fVar35 + local_834 * fVar26;
                    fVar34 = fVar22 + fVar46 * fVar18 + fVar42 * fVar35 + fVar36 * fVar26;
                    fVar27 = fVar27 + fVar20 * ((local_764 +
                                                fVar23 * fVar18 + fVar29 * fVar35 +
                                                local_758 * fVar26) - fVar27);
                    fVar31 = fVar31 + fVar20 * ((local_768 +
                                                fVar3 * fVar18 + fVar24 * fVar35 +
                                                local_75c * fVar26) - fVar31);
                    fVar34 = fVar34 + fVar20 * ((local_76c +
                                                fVar21 * fVar18 + local_754 * fVar35 +
                                                local_760 * fVar26) - fVar34);
                    fVar26 = local_7d4 +
                             local_7b4 * fVar34 + local_770 * fVar27 + local_794 * fVar31;
                    fVar35 = local_7d8 +
                             local_7b8 * fVar34 + local_774 * fVar27 + local_798 * fVar31;
                    fVar18 = fVar4 + fVar52 * fVar34 + fVar28 * fVar27 + fVar50 * fVar31;
                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                      lVar12 = lVar12 + (long)(int)uVar2 * 0x6c;
                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                      *(float *)(lVar12 + 0x20) = fVar26;
                      *(float *)(lVar12 + 0x24) = fVar35;
                      *(float *)(lVar12 + 0x28) = fVar18;
                      *(ulong *)(lVar12 + 0x34) = CONCAT17(uStack_c1,uStack_c8);
                      *(undefined8 *)(lVar12 + 0x2c) = local_d0;
                      *(ulong *)(lVar12 + 0x43) = CONCAT71(uStack_b8,local_b9);
                      *(ulong *)(lVar12 + 0x3b) = CONCAT71(uStack_c0,uStack_c1);
                      *(undefined8 *)(lVar12 + 0x54) = uStack_1a8;
                      *(undefined8 *)(lVar12 + 0x4c) = local_1b0;
                      *(undefined8 *)(lVar12 + 100) = uStack_198;
                      *(undefined8 *)(lVar12 + 0x5c) = local_1a0;
                      *(undefined1 *)(lVar12 + 0x4b) = uVar1;
                      *(undefined8 *)(lVar12 + 0x74) = uStack_188;
                      *(undefined8 *)(lVar12 + 0x6c) = local_190;
                      *(undefined8 *)(lVar12 + 0x84) = uStack_178;
                      *(undefined8 *)(lVar12 + 0x7c) = local_180;
                    }
                    else {
                      local_170 = (double)CONCAT44(fVar35,fVar26);
                      fStack_15c = (float)uStack_c8;
                      uStack_164 = (undefined4)local_d0;
                      local_160 = (float)((ulong)local_d0 >> 0x20);
                      fStack_14c = (float)uStack_b8;
                      uStack_148._0_3_ = (undefined3)((uint7)uStack_b8 >> 0x20);
                      uStack_158 = (float)CONCAT13(uStack_c1,(int3)((uint7)uStack_c8 >> 0x20));
                      uStack_154 = (undefined4)uStack_c0;
                      local_150._0_3_ = (undefined3)((uint7)uStack_c0 >> 0x20);
                      local_150 = (float)CONCAT13(local_b9,(undefined3)local_150);
                      fStack_13c = (float)uStack_1a8;
                      fStack_138 = (float)((ulong)uStack_1a8 >> 0x20);
                      fStack_144 = (float)local_1b0;
                      local_140 = (float)((ulong)local_1b0 >> 0x20);
                      uStack_12c = uStack_198;
                      uStack_134 = (undefined4)local_1a0;
                      uStack_130 = (undefined4)((ulong)local_1a0 >> 0x20);
                      uStack_148 = (float)CONCAT13(uVar1,(undefined3)uStack_148);
                      uStack_11c = uStack_188;
                      local_124 = local_190;
                      uStack_10c = uStack_178;
                      local_114 = local_180;
                      fStack_168 = fVar18;
                      FUN_05894a80(lVar14,&local_170,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    iVar17 = iVar17 + 1;
                  } while (iVar17 < *(int *)(param_1 + 0x44));
                }
                iVar32 = iVar32 + 1;
              } while (iVar32 < *(int *)(param_1 + 0x24) + -1);
            }
          }
          else if (iVar17 == 1) {
            uVar16 = *(undefined8 *)(param_1 + 0xe0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar9 = UnityEngine_Object__op_Equality(uVar16,0,0);
            iVar17 = *(int *)(param_1 + 0x24) + -1;
            if ((uVar9 & 1) == 0) {
              if (0 < iVar17) {
                iVar32 = 0;
                do {
                  fVar18 = (float)ChocDino_UIFX_MotionBlurSimple__GetLerpFactorUnclamped(param_1);
                  fVar20 = 1.0;
                  if (fVar18 <= 1.0) {
                    fVar20 = fVar18;
                  }
                  fVar35 = 0.0;
                  if (0.0 <= fVar18) {
                    fVar35 = fVar20;
                  }
                  if (*(char *)(param_1 + 0x2c) == '\0') {
                    if (0 < *(int *)(param_1 + 0x44)) {
                      lVar8 = 0;
                      uVar9 = 0;
                      do {
                        if (*(long *)(param_1 + 0x48) == 0) goto LAB_043ae0b4;
                        FUN_05894708(&local_170,*(long *)(param_1 + 0x48),uVar9 & 0xffffffff,
                                     DAT_091b1750);
                        fVar27 = fStack_168;
                        local_2d0 = CONCAT44(local_160,uStack_164);
                        uStack_308 = CONCAT44(fStack_138,fStack_13c);
                        local_310 = CONCAT44(local_140,fStack_144);
                        fVar20 = (float)local_170;
                        fVar26 = local_170._4_4_;
                        lVar14 = *(long *)(param_1 + 0x58);
                        fStack_2c8 = fStack_15c;
                        local_300 = CONCAT44(uStack_130,uStack_134);
                        fStack_2bc = local_150;
                        local_2b8 = fStack_14c;
                        fStack_2c4 = uStack_158;
                        local_2c0 = uStack_154;
                        uStack_2f8 = uStack_12c;
                        uStack_2e8 = uStack_11c;
                        local_2f0 = local_124;
                        uStack_2d8 = uStack_10c;
                        local_2e0 = local_114;
                        if (lVar14 == 0) goto LAB_043ae0b4;
                        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_043ae0cc;
                        lVar14 = lVar14 + lVar8;
                        uVar2 = *(uint *)(lVar14 + 0x48);
                        fVar41 = *(float *)(lVar14 + 0x20);
                        fVar33 = *(float *)(lVar14 + 0x24);
                        fVar19 = *(float *)(lVar14 + 0x28);
                        uVar43 = NEON_ushl(CONCAT44(uStack_148,uStack_148),0xfffffff0fffffff8,4);
                        uVar40 = NEON_ushl(CONCAT44(uVar2,uVar2),0xfffffff0fffffff8,4);
                        fVar31 = (float)(uVar2 & 0xff) / 255.0;
                        uVar45 = NEON_ucvtf(uVar43 & 0xff000000ff,4);
                        uVar16 = NEON_ucvtf(uVar40 & 0xff000000ff,4);
                        fVar37 = (float)(uVar2 >> 0x18) / 255.0;
                        fVar39 = (float)uVar16 / 255.0;
                        fVar34 = (float)((ulong)uVar16 >> 0x20) / 255.0;
                        fVar34 = fVar34 + ((float)((ulong)uVar45 >> 0x20) / 255.0 - fVar34) * fVar35
                        ;
                        fVar31 = (float)FUN_043b2fc4(fVar31 + fVar35 * ((float)((uint)uStack_148 &
                                                                               0xff) / 255.0 -
                                                                       fVar31),
                                                     CONCAT44(fVar34,fVar39 + ((float)uVar45 / 255.0
                                                                              - fVar39) * fVar35),
                                                     fVar34,fVar30 * (fVar37 + fVar35 * ((float)((
                                                  uint)uStack_148 >> 0x18) / 255.0 - fVar37)),0);
                        lVar14 = DAT_091b1700;
                        lVar12 = *(long *)(param_1 + 0x50);
                        if (lVar12 == 0) goto LAB_043ae0b4;
                        lVar15 = *(long *)(lVar12 + 0x10);
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (lVar15 == 0) goto LAB_043ae0b4;
                        uVar2 = *(uint *)(lVar12 + 0x18);
                        fVar37 = local_858 +
                                 local_7f8 * fVar41 + local_818 * fVar33 + local_838 * fVar19;
                        fVar34 = fStack_854 +
                                 fStack_7f4 * fVar41 + fStack_814 * fVar33 + local_834 * fVar19;
                        fVar39 = fVar22 + fVar46 * fVar41 + fVar42 * fVar33 + fVar36 * fVar19;
                        fVar34 = fVar34 + fVar18 * ((local_764 +
                                                    fVar23 * fVar20 + fVar29 * fVar26 +
                                                    local_758 * fVar27) - fVar34);
                        fVar37 = fVar37 + fVar18 * ((local_768 +
                                                    fVar3 * fVar20 + fVar24 * fVar26 +
                                                    local_75c * fVar27) - fVar37);
                        fVar39 = fVar39 + fVar18 * ((local_76c +
                                                    fVar21 * fVar20 + local_754 * fVar26 +
                                                    local_760 * fVar27) - fVar39);
                        fVar27 = local_7d4 +
                                 local_7b4 * fVar39 + local_770 * fVar34 + local_794 * fVar37;
                        fVar26 = local_7d8 +
                                 local_7b8 * fVar39 + local_774 * fVar34 + local_798 * fVar37;
                        fVar20 = fVar4 + fVar52 * fVar39 + fVar28 * fVar34 + fVar50 * fVar37;
                        if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                          lVar15 = lVar15 + (long)(int)uVar2 * 0x6c;
                          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                          *(float *)(lVar15 + 0x20) = fVar27;
                          *(float *)(lVar15 + 0x24) = fVar26;
                          *(float *)(lVar15 + 0x28) = fVar20;
                          *(ulong *)(lVar15 + 0x34) = CONCAT44(fStack_2c4,fStack_2c8);
                          *(undefined8 *)(lVar15 + 0x2c) = local_2d0;
                          *(ulong *)(lVar15 + 0x40) = CONCAT44(local_2b8,fStack_2bc);
                          *(ulong *)(lVar15 + 0x38) = CONCAT44(local_2c0,fStack_2c4);
                          *(undefined8 *)(lVar15 + 0x54) = uStack_308;
                          *(undefined8 *)(lVar15 + 0x4c) = local_310;
                          *(undefined8 *)(lVar15 + 100) = uStack_2f8;
                          *(undefined8 *)(lVar15 + 0x5c) = local_300;
                          *(float *)(lVar15 + 0x48) = fVar31;
                          *(undefined8 *)(lVar15 + 0x74) = uStack_2e8;
                          *(undefined8 *)(lVar15 + 0x6c) = local_2f0;
                          *(undefined8 *)(lVar15 + 0x84) = uStack_2d8;
                          *(undefined8 *)(lVar15 + 0x7c) = local_2e0;
                        }
                        else {
                          local_170 = (double)CONCAT44(fVar26,fVar27);
                          fStack_15c = fStack_2c8;
                          uStack_164 = (undefined4)local_2d0;
                          local_160 = (float)((ulong)local_2d0 >> 0x20);
                          local_150 = fStack_2bc;
                          fStack_14c = local_2b8;
                          uStack_158 = fStack_2c4;
                          uStack_154 = local_2c0;
                          fStack_13c = (float)uStack_308;
                          fStack_138 = (float)((ulong)uStack_308 >> 0x20);
                          fStack_144 = (float)local_310;
                          local_140 = (float)((ulong)local_310 >> 0x20);
                          uStack_12c = uStack_2f8;
                          uStack_134 = (undefined4)local_300;
                          uStack_130 = (undefined4)((ulong)local_300 >> 0x20);
                          uStack_11c = uStack_2e8;
                          local_124 = local_2f0;
                          uStack_10c = uStack_2d8;
                          local_114 = local_2e0;
                          fStack_168 = fVar20;
                          uStack_148 = fVar31;
                          FUN_05894a80(lVar12,&local_170,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                        }
                        uVar9 = uVar9 + 1;
                        lVar8 = lVar8 + 0x6c;
                      } while ((long)uVar9 < (long)*(int *)(param_1 + 0x44));
                    }
                  }
                  else if (0 < *(int *)(param_1 + 0x44)) {
                    lVar8 = 0;
                    uVar9 = 0;
                    do {
                      if (*(long *)(param_1 + 0x48) == 0) goto LAB_043ae0b4;
                      FUN_05894708(&local_170,*(long *)(param_1 + 0x48),uVar9 & 0xffffffff,
                                   DAT_091b1750);
                      fVar39 = fStack_138;
                      fVar37 = fStack_13c;
                      fVar34 = local_140;
                      fVar31 = fStack_144;
                      fVar27 = fStack_168;
                      local_280 = CONCAT44(local_160,uStack_164);
                      fVar20 = (float)local_170;
                      fVar26 = local_170._4_4_;
                      local_2b0 = CONCAT44(uStack_130,uStack_134);
                      fStack_278 = fStack_15c;
                      lVar14 = *(long *)(param_1 + 0x58);
                      fStack_26c = local_150;
                      local_268 = fStack_14c;
                      fStack_274 = uStack_158;
                      local_270 = uStack_154;
                      uStack_298 = uStack_11c;
                      local_2a0 = local_124;
                      uStack_2a8 = uStack_12c;
                      uStack_288 = uStack_10c;
                      local_290 = local_114;
                      if (lVar14 == 0) goto LAB_043ae0b4;
                      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_043ae0cc;
                      lVar14 = lVar14 + lVar8;
                      uVar2 = *(uint *)(lVar14 + 0x48);
                      fVar49 = *(float *)(lVar14 + 0x20);
                      fVar53 = *(float *)(lVar14 + 0x24);
                      fVar48 = *(float *)(lVar14 + 0x28);
                      uVar43 = NEON_ushl(CONCAT44(uStack_148,uStack_148),0xfffffff0fffffff8,4);
                      uVar40 = NEON_ushl(CONCAT44(uVar2,uVar2),0xfffffff0fffffff8,4);
                      fVar19 = (float)(uVar2 & 0xff) / 255.0;
                      uVar44 = NEON_ucvtf(uVar43 & 0xff000000ff,4);
                      uVar16 = NEON_ucvtf(uVar40 & 0xff000000ff,4);
                      fVar38 = (float)uVar16 / 255.0;
                      fVar41 = (float)((ulong)uVar16 >> 0x20) / 255.0;
                      fVar33 = (float)(uVar2 >> 0x18) / 255.0;
                      fVar41 = fVar41 + fVar35 * ((float)((ulong)uVar44 >> 0x20) / 255.0 - fVar41);
                      uVar45 = *(undefined8 *)(lVar14 + 0x54);
                      uVar16 = *(undefined8 *)(lVar14 + 0x4c);
                      fVar19 = (float)FUN_043b2fc4(fVar19 + fVar35 * ((float)((uint)uStack_148 &
                                                                             0xff) / 255.0 - fVar19)
                                                   ,CONCAT44(fVar41,fVar38 + fVar35 * ((float)uVar44
                                                                                       / 255.0 -
                                                                                      fVar38)),
                                                   fVar41,fVar30 * (fVar33 + fVar35 * ((float)((uint
                                                  )uStack_148 >> 0x18) / 255.0 - fVar33)),0);
                      lVar14 = DAT_091b1700;
                      lVar12 = *(long *)(param_1 + 0x50);
                      if (lVar12 == 0) goto LAB_043ae0b4;
                      lVar15 = *(long *)(lVar12 + 0x10);
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar15 == 0) goto LAB_043ae0b4;
                      uVar2 = *(uint *)(lVar12 + 0x18);
                      fVar38 = local_858 +
                               local_7f8 * fVar49 + local_818 * fVar53 + local_838 * fVar48;
                      fVar41 = fStack_854 +
                               fStack_7f4 * fVar49 + fStack_814 * fVar53 + local_834 * fVar48;
                      fVar48 = fVar22 + fVar46 * fVar49 + fVar42 * fVar53 + fVar36 * fVar48;
                      fVar41 = fVar41 + fVar18 * ((local_764 +
                                                  fVar23 * fVar20 + fVar29 * fVar26 +
                                                  local_758 * fVar27) - fVar41);
                      fVar38 = fVar38 + fVar18 * ((local_768 +
                                                  fVar3 * fVar20 + fVar24 * fVar26 +
                                                  local_75c * fVar27) - fVar38);
                      fVar48 = fVar48 + fVar18 * ((local_76c +
                                                  fVar21 * fVar20 + local_754 * fVar26 +
                                                  local_760 * fVar27) - fVar48);
                      fVar20 = (float)uVar16;
                      fVar26 = (float)((ulong)uVar16 >> 0x20);
                      fVar27 = (float)uVar45;
                      fVar33 = (float)((ulong)uVar45 >> 0x20);
                      fVar20 = fVar20 + (fVar31 - fVar20) * fVar35;
                      fVar26 = fVar26 + (fVar34 - fVar26) * fVar35;
                      fVar27 = fVar27 + (fVar37 - fVar27) * fVar35;
                      fVar33 = fVar33 + (fVar39 - fVar33) * fVar35;
                      fVar37 = local_7d4 +
                               local_7b4 * fVar48 + local_770 * fVar41 + local_794 * fVar38;
                      fVar34 = local_7d8 +
                               local_7b8 * fVar48 + local_774 * fVar41 + local_798 * fVar38;
                      fVar31 = fVar4 + fVar52 * fVar48 + fVar28 * fVar41 + fVar50 * fVar38;
                      if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                        lVar15 = lVar15 + (long)(int)uVar2 * 0x6c;
                        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                        *(float *)(lVar15 + 0x28) = fVar31;
                        *(float *)(lVar15 + 0x20) = fVar37;
                        *(float *)(lVar15 + 0x24) = fVar34;
                        *(ulong *)(lVar15 + 0x54) = CONCAT44(fVar33,fVar27);
                        *(ulong *)(lVar15 + 0x4c) = CONCAT44(fVar26,fVar20);
                        *(undefined8 *)(lVar15 + 100) = uStack_2a8;
                        *(undefined8 *)(lVar15 + 0x5c) = local_2b0;
                        *(ulong *)(lVar15 + 0x34) = CONCAT44(fStack_274,fStack_278);
                        *(undefined8 *)(lVar15 + 0x2c) = local_280;
                        *(ulong *)(lVar15 + 0x40) = CONCAT44(local_268,fStack_26c);
                        *(ulong *)(lVar15 + 0x38) = CONCAT44(local_270,fStack_274);
                        *(float *)(lVar15 + 0x48) = fVar19;
                        *(undefined8 *)(lVar15 + 0x74) = uStack_298;
                        *(undefined8 *)(lVar15 + 0x6c) = local_2a0;
                        *(undefined8 *)(lVar15 + 0x84) = uStack_288;
                        *(undefined8 *)(lVar15 + 0x7c) = local_290;
                      }
                      else {
                        local_170 = (double)CONCAT44(fVar34,fVar37);
                        uStack_12c = uStack_2a8;
                        uStack_134 = (undefined4)local_2b0;
                        uStack_130 = (undefined4)((ulong)local_2b0 >> 0x20);
                        fStack_15c = fStack_278;
                        uStack_164 = (undefined4)local_280;
                        local_160 = (float)((ulong)local_280 >> 0x20);
                        local_150 = fStack_26c;
                        fStack_14c = local_268;
                        uStack_158 = fStack_274;
                        uStack_154 = local_270;
                        uStack_11c = uStack_298;
                        local_124 = local_2a0;
                        uStack_10c = uStack_288;
                        local_114 = local_290;
                        fStack_168 = fVar31;
                        uStack_148 = fVar19;
                        fStack_144 = fVar20;
                        local_140 = fVar26;
                        fStack_13c = fVar27;
                        fStack_138 = fVar33;
                        FUN_05894a80(lVar12,&local_170,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar9 = uVar9 + 1;
                      lVar8 = lVar8 + 0x6c;
                    } while ((long)uVar9 < (long)*(int *)(param_1 + 0x44));
                  }
                  iVar32 = iVar32 + 1;
                } while (iVar32 < *(int *)(param_1 + 0x24) + -1);
              }
            }
            else if (0 < iVar17) {
              fVar24 = 0.0;
              iVar17 = 0;
              do {
                fVar21 = (float)ChocDino_UIFX_MotionBlurSimple__GetLerpFactorUnclamped
                                          (fVar24,param_1);
                fVar29 = 1.0;
                if (fVar21 <= 1.0) {
                  fVar29 = fVar21;
                }
                fVar3 = 0.0;
                if (0.0 <= fVar21) {
                  fVar3 = fVar29;
                }
                if (*(char *)(param_1 + 0x2c) == '\0') {
                  if (0 < *(int *)(param_1 + 0x44)) {
                    lVar8 = 0;
                    uVar9 = 0;
                    do {
                      if (*(long *)(param_1 + 0x48) == 0) goto LAB_043ae0b4;
                      FUN_05894708(&local_170,*(long *)(param_1 + 0x48),uVar9 & 0xffffffff,
                                   DAT_091b1750);
                      fVar29 = fStack_168;
                      dVar25 = local_170;
                      local_220 = CONCAT44(local_160,uStack_164);
                      uStack_258 = CONCAT44(fStack_138,fStack_13c);
                      local_260 = CONCAT44(local_140,fStack_144);
                      lVar14 = *(long *)(param_1 + 0x58);
                      fStack_218 = fStack_15c;
                      local_250 = CONCAT44(uStack_130,uStack_134);
                      fStack_20c = local_150;
                      local_208 = fStack_14c;
                      fStack_214 = uStack_158;
                      local_210 = uStack_154;
                      uStack_248 = uStack_12c;
                      uStack_238 = uStack_11c;
                      local_240 = local_124;
                      uStack_228 = uStack_10c;
                      local_230 = local_114;
                      if (lVar14 == 0) goto LAB_043ae0b4;
                      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_043ae0cc;
                      lVar14 = lVar14 + lVar8;
                      uVar2 = *(uint *)(lVar14 + 0x48);
                      fVar46 = *(float *)(lVar14 + 0x28);
                      uVar44 = *(undefined8 *)(lVar14 + 0x20);
                      uVar43 = NEON_ushl(CONCAT44(uStack_148,uStack_148),0xfffffff0fffffff8,4);
                      uVar40 = NEON_ushl(CONCAT44(uVar2,uVar2),0xfffffff0fffffff8,4);
                      fVar23 = (float)(uVar2 & 0xff) / 255.0;
                      uVar45 = NEON_ucvtf(uVar43 & 0xff000000ff,4);
                      uVar16 = NEON_ucvtf(uVar40 & 0xff000000ff,4);
                      fVar36 = (float)(uVar2 >> 0x18) / 255.0;
                      fVar22 = (float)uVar16 / 255.0;
                      fVar42 = (float)((ulong)uVar16 >> 0x20) / 255.0;
                      fVar42 = fVar42 + ((float)((ulong)uVar45 >> 0x20) / 255.0 - fVar42) * fVar3;
                      fVar23 = (float)FUN_043b2fc4(fVar23 + fVar3 * ((float)((uint)uStack_148 & 0xff
                                                                            ) / 255.0 - fVar23),
                                                   CONCAT44(fVar42,fVar22 + ((float)uVar45 / 255.0 -
                                                                            fVar22) * fVar3),fVar42,
                                                   fVar30 * (fVar36 + fVar3 * ((float)((uint)
                                                  uStack_148 >> 0x18) / 255.0 - fVar36)),0);
                      lVar14 = DAT_091b1700;
                      lVar12 = *(long *)(param_1 + 0x50);
                      if (lVar12 == 0) goto LAB_043ae0b4;
                      lVar15 = *(long *)(lVar12 + 0x10);
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar15 == 0) goto LAB_043ae0b4;
                      fVar42 = (float)uVar44;
                      fVar36 = (float)((ulong)uVar44 >> 0x20);
                      uVar2 = *(uint *)(lVar12 + 0x18);
                      dVar25 = (double)CONCAT44(fVar36 + ((float)((ulong)dVar25 >> 0x20) - fVar36) *
                                                         fVar21,
                                                fVar42 + (SUB84(dVar25,0) - fVar42) * fVar21);
                      fVar46 = fVar46 + fVar21 * (fVar29 - fVar46);
                      if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                        lVar15 = lVar15 + (long)(int)uVar2 * 0x6c;
                        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                        *(double *)(lVar15 + 0x20) = dVar25;
                        *(float *)(lVar15 + 0x28) = fVar46;
                        *(ulong *)(lVar15 + 0x34) = CONCAT44(fStack_214,fStack_218);
                        *(undefined8 *)(lVar15 + 0x2c) = local_220;
                        *(ulong *)(lVar15 + 0x40) = CONCAT44(local_208,fStack_20c);
                        *(ulong *)(lVar15 + 0x38) = CONCAT44(local_210,fStack_214);
                        *(undefined8 *)(lVar15 + 100) = uStack_248;
                        *(undefined8 *)(lVar15 + 0x5c) = local_250;
                        *(undefined8 *)(lVar15 + 0x54) = uStack_258;
                        *(undefined8 *)(lVar15 + 0x4c) = local_260;
                        *(float *)(lVar15 + 0x48) = fVar23;
                        *(undefined8 *)(lVar15 + 0x74) = uStack_238;
                        *(undefined8 *)(lVar15 + 0x6c) = local_240;
                        *(undefined8 *)(lVar15 + 0x84) = uStack_228;
                        *(undefined8 *)(lVar15 + 0x7c) = local_230;
                      }
                      else {
                        fStack_15c = fStack_218;
                        uStack_164 = (undefined4)local_220;
                        local_160 = (float)((ulong)local_220 >> 0x20);
                        local_150 = fStack_20c;
                        fStack_14c = local_208;
                        uStack_158 = fStack_214;
                        uStack_154 = local_210;
                        uStack_12c = uStack_248;
                        uStack_134 = (undefined4)local_250;
                        uStack_130 = (undefined4)((ulong)local_250 >> 0x20);
                        fStack_13c = (float)uStack_258;
                        fStack_138 = (float)((ulong)uStack_258 >> 0x20);
                        fStack_144 = (float)local_260;
                        local_140 = (float)((ulong)local_260 >> 0x20);
                        uStack_11c = uStack_238;
                        local_124 = local_240;
                        uStack_10c = uStack_228;
                        local_114 = local_230;
                        local_170 = dVar25;
                        fStack_168 = fVar46;
                        uStack_148 = fVar23;
                        FUN_05894a80(lVar12,&local_170,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar9 = uVar9 + 1;
                      lVar8 = lVar8 + 0x6c;
                    } while ((long)uVar9 < (long)*(int *)(param_1 + 0x44));
                  }
                }
                else if (0 < *(int *)(param_1 + 0x44)) {
                  lVar8 = 0;
                  uVar9 = 0;
                  do {
                    if (*(long *)(param_1 + 0x48) == 0) goto LAB_043ae0b4;
                    FUN_05894708(&local_170,*(long *)(param_1 + 0x48),uVar9 & 0xffffffff,
                                 DAT_091b1750);
                    fVar36 = fStack_138;
                    fVar42 = fStack_13c;
                    fVar46 = local_140;
                    fVar23 = fStack_144;
                    fVar29 = fStack_168;
                    dVar25 = local_170;
                    local_1d0 = CONCAT44(local_160,uStack_164);
                    local_200 = CONCAT44(uStack_130,uStack_134);
                    lVar14 = *(long *)(param_1 + 0x58);
                    fStack_1c8 = fStack_15c;
                    fStack_1bc = local_150;
                    local_1b8 = fStack_14c;
                    fStack_1c4 = uStack_158;
                    local_1c0 = uStack_154;
                    uStack_1f8 = uStack_12c;
                    uStack_1e8 = uStack_11c;
                    local_1f0 = local_124;
                    uStack_1d8 = uStack_10c;
                    local_1e0 = local_114;
                    if (lVar14 == 0) goto LAB_043ae0b4;
                    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_043ae0cc;
                    lVar14 = lVar14 + lVar8;
                    uVar2 = *(uint *)(lVar14 + 0x48);
                    fVar20 = *(float *)(lVar14 + 0x28);
                    uVar51 = *(undefined8 *)(lVar14 + 0x20);
                    uVar43 = NEON_ushl(CONCAT44(uStack_148,uStack_148),0xfffffff0fffffff8,4);
                    uVar40 = NEON_ushl(CONCAT44(uVar2,uVar2),0xfffffff0fffffff8,4);
                    fVar22 = (float)(uVar2 & 0xff) / 255.0;
                    uVar44 = NEON_ucvtf(uVar43 & 0xff000000ff,4);
                    uVar16 = NEON_ucvtf(uVar40 & 0xff000000ff,4);
                    fVar26 = (float)uVar16 / 255.0;
                    fVar18 = (float)((ulong)uVar16 >> 0x20) / 255.0;
                    fVar35 = (float)(uVar2 >> 0x18) / 255.0;
                    fVar18 = fVar18 + fVar3 * ((float)((ulong)uVar44 >> 0x20) / 255.0 - fVar18);
                    uVar45 = *(undefined8 *)(lVar14 + 0x54);
                    uVar16 = *(undefined8 *)(lVar14 + 0x4c);
                    fVar22 = (float)FUN_043b2fc4(fVar22 + fVar3 * ((float)((uint)uStack_148 & 0xff)
                                                                   / 255.0 - fVar22),
                                                 CONCAT44(fVar18,fVar26 + fVar3 * ((float)uVar44 /
                                                                                   255.0 - fVar26)),
                                                 fVar18,fVar30 * (fVar35 + fVar3 * ((float)((uint)
                                                  uStack_148 >> 0x18) / 255.0 - fVar35)),0);
                    lVar14 = DAT_091b1700;
                    lVar12 = *(long *)(param_1 + 0x50);
                    if (lVar12 == 0) goto LAB_043ae0b4;
                    lVar15 = *(long *)(lVar12 + 0x10);
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    if (lVar15 == 0) goto LAB_043ae0b4;
                    fVar50 = (float)uVar51;
                    fVar52 = (float)((ulong)uVar51 >> 0x20);
                    uVar2 = *(uint *)(lVar12 + 0x18);
                    fVar18 = (float)uVar16;
                    fVar35 = (float)((ulong)uVar16 >> 0x20);
                    fVar26 = (float)uVar45;
                    fVar28 = (float)((ulong)uVar45 >> 0x20);
                    dVar25 = (double)CONCAT44(fVar52 + ((float)((ulong)dVar25 >> 0x20) - fVar52) *
                                                       fVar21,
                                              fVar50 + (SUB84(dVar25,0) - fVar50) * fVar21);
                    fVar20 = fVar20 + fVar21 * (fVar29 - fVar20);
                    fVar18 = fVar18 + (fVar23 - fVar18) * fVar3;
                    fVar35 = fVar35 + (fVar46 - fVar35) * fVar3;
                    fVar26 = fVar26 + (fVar42 - fVar26) * fVar3;
                    fVar28 = fVar28 + (fVar36 - fVar28) * fVar3;
                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                      lVar15 = lVar15 + (long)(int)uVar2 * 0x6c;
                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                      *(double *)(lVar15 + 0x20) = dVar25;
                      *(float *)(lVar15 + 0x28) = fVar20;
                      *(ulong *)(lVar15 + 0x34) = CONCAT44(fStack_1c4,fStack_1c8);
                      *(undefined8 *)(lVar15 + 0x2c) = local_1d0;
                      *(ulong *)(lVar15 + 0x40) = CONCAT44(local_1b8,fStack_1bc);
                      *(ulong *)(lVar15 + 0x38) = CONCAT44(local_1c0,fStack_1c4);
                      *(ulong *)(lVar15 + 0x54) = CONCAT44(fVar28,fVar26);
                      *(ulong *)(lVar15 + 0x4c) = CONCAT44(fVar35,fVar18);
                      *(undefined8 *)(lVar15 + 100) = uStack_1f8;
                      *(undefined8 *)(lVar15 + 0x5c) = local_200;
                      *(float *)(lVar15 + 0x48) = fVar22;
                      *(undefined8 *)(lVar15 + 0x74) = uStack_1e8;
                      *(undefined8 *)(lVar15 + 0x6c) = local_1f0;
                      *(undefined8 *)(lVar15 + 0x84) = uStack_1d8;
                      *(undefined8 *)(lVar15 + 0x7c) = local_1e0;
                    }
                    else {
                      fStack_15c = fStack_1c8;
                      uStack_164 = (undefined4)local_1d0;
                      local_160 = (float)((ulong)local_1d0 >> 0x20);
                      local_150 = fStack_1bc;
                      fStack_14c = local_1b8;
                      uStack_158 = fStack_1c4;
                      uStack_154 = local_1c0;
                      uStack_12c = uStack_1f8;
                      uStack_134 = (undefined4)local_200;
                      uStack_130 = (undefined4)((ulong)local_200 >> 0x20);
                      uStack_11c = uStack_1e8;
                      local_124 = local_1f0;
                      uStack_10c = uStack_1d8;
                      local_114 = local_1e0;
                      local_170 = dVar25;
                      fStack_168 = fVar20;
                      uStack_148 = fVar22;
                      fStack_144 = fVar18;
                      local_140 = fVar35;
                      fStack_13c = fVar26;
                      fStack_138 = fVar28;
                      FUN_05894a80(lVar12,&local_170,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar9 = uVar9 + 1;
                    lVar8 = lVar8 + 0x6c;
                  } while ((long)uVar9 < (long)*(int *)(param_1 + 0x44));
                }
                iVar17 = iVar17 + 1;
                fVar24 = 1.0 / ((float)iVar32 + -1.0) + fVar24;
              } while (iVar17 < *(int *)(param_1 + 0x24) + -1);
            }
          }
          else if ((iVar17 == 2) && (0 < *(int *)(param_1 + 0x24) + -1)) {
            iVar32 = 0;
            do {
              fVar18 = (float)ChocDino_UIFX_MotionBlurSimple__GetLerpFactorUnclamped(param_1);
              fVar20 = 1.0;
              if (fVar18 <= 1.0) {
                fVar20 = fVar18;
              }
              fVar35 = 0.0;
              if (0.0 <= fVar18) {
                fVar35 = fVar20;
              }
              if (*(char *)(param_1 + 0x2c) == '\0') {
                if (0 < *(int *)(param_1 + 0x44)) {
                  lVar8 = 0;
                  uVar9 = 0;
                  do {
                    if (*(long *)(param_1 + 0x48) == 0) goto LAB_043ae0b4;
                    FUN_05894708(&local_170,*(long *)(param_1 + 0x48),uVar9 & 0xffffffff,
                                 DAT_091b1750);
                    fVar27 = fStack_168;
                    local_380 = CONCAT44(local_160,uStack_164);
                    uStack_3b8 = CONCAT44(fStack_138,fStack_13c);
                    local_3c0 = CONCAT44(local_140,fStack_144);
                    fVar20 = (float)local_170;
                    fVar26 = local_170._4_4_;
                    lVar14 = *(long *)(param_1 + 0x58);
                    fStack_378 = fStack_15c;
                    local_3b0 = CONCAT44(uStack_130,uStack_134);
                    fStack_36c = local_150;
                    local_368 = fStack_14c;
                    fStack_374 = uStack_158;
                    local_370 = uStack_154;
                    uStack_3a8 = uStack_12c;
                    uStack_398 = uStack_11c;
                    local_3a0 = local_124;
                    uStack_388 = uStack_10c;
                    local_390 = local_114;
                    if (lVar14 == 0) goto LAB_043ae0b4;
                    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_043ae0cc;
                    lVar14 = lVar14 + lVar8;
                    uVar2 = *(uint *)(lVar14 + 0x48);
                    fVar19 = *(float *)(lVar14 + 0x20);
                    fVar33 = *(float *)(lVar14 + 0x24);
                    fVar41 = *(float *)(lVar14 + 0x28);
                    uVar43 = NEON_ushl(CONCAT44(uStack_148,uStack_148),0xfffffff0fffffff8,4);
                    uVar40 = NEON_ushl(CONCAT44(uVar2,uVar2),0xfffffff0fffffff8,4);
                    fVar31 = (float)(uVar2 & 0xff) / 255.0;
                    uVar45 = NEON_ucvtf(uVar43 & 0xff000000ff,4);
                    uVar16 = NEON_ucvtf(uVar40 & 0xff000000ff,4);
                    fVar37 = (float)(uVar2 >> 0x18) / 255.0;
                    fVar39 = (float)uVar16 / 255.0;
                    fVar34 = (float)((ulong)uVar16 >> 0x20) / 255.0;
                    fVar34 = fVar34 + ((float)((ulong)uVar45 >> 0x20) / 255.0 - fVar34) * fVar35;
                    fVar31 = (float)FUN_043b2fc4(fVar31 + fVar35 * ((float)((uint)uStack_148 & 0xff)
                                                                    / 255.0 - fVar31),
                                                 CONCAT44(fVar34,fVar39 + ((float)uVar45 / 255.0 -
                                                                          fVar39) * fVar35),fVar34,
                                                 fVar30 * (fVar37 + fVar35 * ((float)((uint)
                                                  uStack_148 >> 0x18) / 255.0 - fVar37)),0);
                    lVar14 = DAT_091b1700;
                    lVar12 = *(long *)(param_1 + 0x50);
                    if (lVar12 == 0) goto LAB_043ae0b4;
                    lVar15 = *(long *)(lVar12 + 0x10);
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    if (lVar15 == 0) goto LAB_043ae0b4;
                    uVar2 = *(uint *)(lVar12 + 0x18);
                    fVar37 = local_858 +
                             local_7f8 * fVar19 + local_818 * fVar33 + local_838 * fVar41;
                    fVar34 = fStack_854 +
                             fStack_7f4 * fVar19 + fStack_814 * fVar33 + local_834 * fVar41;
                    fVar39 = fVar22 + fVar46 * fVar19 + fVar42 * fVar33 + fVar36 * fVar41;
                    fVar34 = fVar34 + fVar18 * ((local_764 +
                                                fVar23 * fVar20 + fVar29 * fVar26 +
                                                local_758 * fVar27) - fVar34);
                    fVar37 = fVar37 + fVar18 * ((local_768 +
                                                fVar3 * fVar20 + fVar24 * fVar26 +
                                                local_75c * fVar27) - fVar37);
                    fVar39 = fVar39 + fVar18 * ((local_76c +
                                                fVar21 * fVar20 + local_754 * fVar26 +
                                                local_760 * fVar27) - fVar39);
                    fVar27 = local_7d4 +
                             local_7b4 * fVar39 + local_770 * fVar34 + local_794 * fVar37;
                    fVar26 = local_7d8 +
                             local_7b8 * fVar39 + local_774 * fVar34 + local_798 * fVar37;
                    fVar20 = fVar4 + fVar52 * fVar39 + fVar28 * fVar34 + fVar50 * fVar37;
                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                      lVar15 = lVar15 + (long)(int)uVar2 * 0x6c;
                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                      *(float *)(lVar15 + 0x20) = fVar27;
                      *(float *)(lVar15 + 0x24) = fVar26;
                      *(float *)(lVar15 + 0x28) = fVar20;
                      *(ulong *)(lVar15 + 0x34) = CONCAT44(fStack_374,fStack_378);
                      *(undefined8 *)(lVar15 + 0x2c) = local_380;
                      *(ulong *)(lVar15 + 0x40) = CONCAT44(local_368,fStack_36c);
                      *(ulong *)(lVar15 + 0x38) = CONCAT44(local_370,fStack_374);
                      *(undefined8 *)(lVar15 + 0x54) = uStack_3b8;
                      *(undefined8 *)(lVar15 + 0x4c) = local_3c0;
                      *(undefined8 *)(lVar15 + 100) = uStack_3a8;
                      *(undefined8 *)(lVar15 + 0x5c) = local_3b0;
                      *(float *)(lVar15 + 0x48) = fVar31;
                      *(undefined8 *)(lVar15 + 0x74) = uStack_398;
                      *(undefined8 *)(lVar15 + 0x6c) = local_3a0;
                      *(undefined8 *)(lVar15 + 0x84) = uStack_388;
                      *(undefined8 *)(lVar15 + 0x7c) = local_390;
                    }
                    else {
                      local_170 = (double)CONCAT44(fVar26,fVar27);
                      fStack_15c = fStack_378;
                      uStack_164 = (undefined4)local_380;
                      local_160 = (float)((ulong)local_380 >> 0x20);
                      local_150 = fStack_36c;
                      fStack_14c = local_368;
                      uStack_158 = fStack_374;
                      uStack_154 = local_370;
                      fStack_13c = (float)uStack_3b8;
                      fStack_138 = (float)((ulong)uStack_3b8 >> 0x20);
                      fStack_144 = (float)local_3c0;
                      local_140 = (float)((ulong)local_3c0 >> 0x20);
                      uStack_12c = uStack_3a8;
                      uStack_134 = (undefined4)local_3b0;
                      uStack_130 = (undefined4)((ulong)local_3b0 >> 0x20);
                      uStack_11c = uStack_398;
                      local_124 = local_3a0;
                      uStack_10c = uStack_388;
                      local_114 = local_390;
                      fStack_168 = fVar20;
                      uStack_148 = fVar31;
                      FUN_05894a80(lVar12,&local_170,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar9 = uVar9 + 1;
                    lVar8 = lVar8 + 0x6c;
                  } while ((long)uVar9 < (long)*(int *)(param_1 + 0x44));
                }
              }
              else if (0 < *(int *)(param_1 + 0x44)) {
                lVar8 = 0;
                uVar9 = 0;
                do {
                  if (*(long *)(param_1 + 0x48) == 0) goto LAB_043ae0b4;
                  FUN_05894708(&local_170,*(long *)(param_1 + 0x48),uVar9 & 0xffffffff,DAT_091b1750)
                  ;
                  fVar39 = fStack_138;
                  fVar37 = fStack_13c;
                  fVar34 = local_140;
                  fVar31 = fStack_144;
                  fVar27 = fStack_168;
                  local_330 = CONCAT44(local_160,uStack_164);
                  fVar20 = (float)local_170;
                  fVar26 = local_170._4_4_;
                  local_360 = CONCAT44(uStack_130,uStack_134);
                  fStack_328 = fStack_15c;
                  lVar14 = *(long *)(param_1 + 0x58);
                  fStack_31c = local_150;
                  local_318 = fStack_14c;
                  fStack_324 = uStack_158;
                  local_320 = uStack_154;
                  uStack_348 = uStack_11c;
                  local_350 = local_124;
                  uStack_358 = uStack_12c;
                  uStack_338 = uStack_10c;
                  local_340 = local_114;
                  if (lVar14 == 0) goto LAB_043ae0b4;
                  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_043ae0cc;
                  lVar14 = lVar14 + lVar8;
                  uVar2 = *(uint *)(lVar14 + 0x48);
                  fVar48 = *(float *)(lVar14 + 0x20);
                  fVar53 = *(float *)(lVar14 + 0x24);
                  fVar49 = *(float *)(lVar14 + 0x28);
                  uVar43 = NEON_ushl(CONCAT44(uStack_148,uStack_148),0xfffffff0fffffff8,4);
                  uVar40 = NEON_ushl(CONCAT44(uVar2,uVar2),0xfffffff0fffffff8,4);
                  fVar19 = (float)(uVar2 & 0xff) / 255.0;
                  uVar44 = NEON_ucvtf(uVar43 & 0xff000000ff,4);
                  uVar16 = NEON_ucvtf(uVar40 & 0xff000000ff,4);
                  fVar38 = (float)uVar16 / 255.0;
                  fVar41 = (float)((ulong)uVar16 >> 0x20) / 255.0;
                  fVar33 = (float)(uVar2 >> 0x18) / 255.0;
                  fVar41 = fVar41 + fVar35 * ((float)((ulong)uVar44 >> 0x20) / 255.0 - fVar41);
                  uVar45 = *(undefined8 *)(lVar14 + 0x54);
                  uVar16 = *(undefined8 *)(lVar14 + 0x4c);
                  fVar19 = (float)FUN_043b2fc4(fVar19 + fVar35 * ((float)((uint)uStack_148 & 0xff) /
                                                                  255.0 - fVar19),
                                               CONCAT44(fVar41,fVar38 + fVar35 * ((float)uVar44 /
                                                                                  255.0 - fVar38)),
                                               fVar41,fVar30 * (fVar33 + fVar35 * ((float)((uint)
                                                  uStack_148 >> 0x18) / 255.0 - fVar33)),0);
                  lVar14 = DAT_091b1700;
                  lVar12 = *(long *)(param_1 + 0x50);
                  if (lVar12 == 0) goto LAB_043ae0b4;
                  lVar15 = *(long *)(lVar12 + 0x10);
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar15 == 0) goto LAB_043ae0b4;
                  uVar2 = *(uint *)(lVar12 + 0x18);
                  fVar38 = local_858 + local_7f8 * fVar48 + local_818 * fVar53 + local_838 * fVar49;
                  fVar41 = fStack_854 +
                           fStack_7f4 * fVar48 + fStack_814 * fVar53 + local_834 * fVar49;
                  fVar48 = fVar22 + fVar46 * fVar48 + fVar42 * fVar53 + fVar36 * fVar49;
                  fVar41 = fVar41 + fVar18 * ((local_764 +
                                              fVar23 * fVar20 + fVar29 * fVar26 + local_758 * fVar27
                                              ) - fVar41);
                  fVar38 = fVar38 + fVar18 * ((local_768 +
                                              fVar3 * fVar20 + fVar24 * fVar26 + local_75c * fVar27)
                                             - fVar38);
                  fVar48 = fVar48 + fVar18 * ((local_76c +
                                              fVar21 * fVar20 + local_754 * fVar26 +
                                              local_760 * fVar27) - fVar48);
                  fVar20 = (float)uVar16;
                  fVar26 = (float)((ulong)uVar16 >> 0x20);
                  fVar27 = (float)uVar45;
                  fVar33 = (float)((ulong)uVar45 >> 0x20);
                  fVar20 = fVar20 + (fVar31 - fVar20) * fVar35;
                  fVar26 = fVar26 + (fVar34 - fVar26) * fVar35;
                  fVar27 = fVar27 + (fVar37 - fVar27) * fVar35;
                  fVar33 = fVar33 + (fVar39 - fVar33) * fVar35;
                  fVar37 = local_7d4 + local_7b4 * fVar48 + local_770 * fVar41 + local_794 * fVar38;
                  fVar34 = local_7d8 + local_7b8 * fVar48 + local_774 * fVar41 + local_798 * fVar38;
                  fVar31 = fVar4 + fVar52 * fVar48 + fVar28 * fVar41 + fVar50 * fVar38;
                  if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                    lVar15 = lVar15 + (long)(int)uVar2 * 0x6c;
                    *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                    *(float *)(lVar15 + 0x28) = fVar31;
                    *(float *)(lVar15 + 0x20) = fVar37;
                    *(float *)(lVar15 + 0x24) = fVar34;
                    *(ulong *)(lVar15 + 0x54) = CONCAT44(fVar33,fVar27);
                    *(ulong *)(lVar15 + 0x4c) = CONCAT44(fVar26,fVar20);
                    *(undefined8 *)(lVar15 + 100) = uStack_358;
                    *(undefined8 *)(lVar15 + 0x5c) = local_360;
                    *(ulong *)(lVar15 + 0x34) = CONCAT44(fStack_324,fStack_328);
                    *(undefined8 *)(lVar15 + 0x2c) = local_330;
                    *(ulong *)(lVar15 + 0x40) = CONCAT44(local_318,fStack_31c);
                    *(ulong *)(lVar15 + 0x38) = CONCAT44(local_320,fStack_324);
                    *(float *)(lVar15 + 0x48) = fVar19;
                    *(undefined8 *)(lVar15 + 0x74) = uStack_348;
                    *(undefined8 *)(lVar15 + 0x6c) = local_350;
                    *(undefined8 *)(lVar15 + 0x84) = uStack_338;
                    *(undefined8 *)(lVar15 + 0x7c) = local_340;
                  }
                  else {
                    local_170 = (double)CONCAT44(fVar34,fVar37);
                    uStack_12c = uStack_358;
                    uStack_134 = (undefined4)local_360;
                    uStack_130 = (undefined4)((ulong)local_360 >> 0x20);
                    fStack_15c = fStack_328;
                    uStack_164 = (undefined4)local_330;
                    local_160 = (float)((ulong)local_330 >> 0x20);
                    local_150 = fStack_31c;
                    fStack_14c = local_318;
                    uStack_158 = fStack_324;
                    uStack_154 = local_320;
                    uStack_11c = uStack_348;
                    local_124 = local_350;
                    uStack_10c = uStack_338;
                    local_114 = local_340;
                    fStack_168 = fVar31;
                    uStack_148 = fVar19;
                    fStack_144 = fVar20;
                    local_140 = fVar26;
                    fStack_13c = fVar27;
                    fStack_138 = fVar33;
                    FUN_05894a80(lVar12,&local_170,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar9 = uVar9 + 1;
                  lVar8 = lVar8 + 0x6c;
                } while ((long)uVar9 < (long)*(int *)(param_1 + 0x44));
              }
              iVar32 = iVar32 + 1;
            } while (iVar32 < *(int *)(param_1 + 0x24) + -1);
          }
          if (0 < *(int *)(param_1 + 0x44)) {
            iVar32 = 0;
            do {
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_043ae0b4;
              FUN_05894708(&local_170,*(long *)(param_1 + 0x48),iVar32,DAT_091b1750);
              uStack_f8 = CONCAT44(uStack_164,fStack_168);
              uStack_f0 = CONCAT44(fStack_15c,local_160);
              uStack_dd = CONCAT35((undefined3)uStack_148,CONCAT41(fStack_14c,local_150._3_1_));
              local_e5 = CONCAT41(uStack_154,uStack_158._3_1_);
              uVar2 = (uint)uStack_148 >> 0x18;
              local_100 = local_170;
              uStack_3f8 = CONCAT44(fStack_138,fStack_13c);
              local_400 = CONCAT44(local_140,fStack_144);
              uStack_e8 = SUB43(uStack_158,0);
              local_3f0 = CONCAT44(uStack_130,uStack_134);
              uStack_e0 = (undefined3)local_150;
              uStack_3e8 = uStack_12c;
              uStack_3d8 = uStack_11c;
              local_3e0 = local_124;
              uStack_3c8 = uStack_10c;
              local_3d0 = local_114;
              if (DAT_09515cf4 == '\0') {
                FUN_03f5c2a4(&DAT_09187e80);
                DAT_09515cf4 = '\x01';
              }
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              fVar24 = (float)NEON_ucvtf(uVar2);
              dVar47 = (double)(fVar30 * fVar24);
              dVar25 = modf(dVar47,(double *)&local_170);
              lVar8 = DAT_091b1700;
              if (0.0 <= fVar30 * fVar24) {
                if (dVar25 == 0.5) {
                  dVar25 = local_170 + 1.0;
                  goto LAB_043ade5c;
                }
                dVar47 = (double)(long)(dVar47 + 0.5);
              }
              else if (dVar25 == -0.5) {
                dVar25 = local_170 + -1.0;
LAB_043ade5c:
                dVar47 = local_170;
                if (((long)local_170 & 1U) != 0) {
                  dVar47 = dVar25;
                }
              }
              else {
                dVar47 = (double)(long)(dVar47 + -0.5);
              }
              lVar14 = *(long *)(param_1 + 0x50);
              uVar1 = 0;
              if (dVar47 != INFINITY) {
                uVar1 = (char)(int)dVar47;
              }
              if (lVar14 == 0) goto LAB_043ae0b4;
              lVar12 = *(long *)(lVar14 + 0x10);
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_043ae0b4;
              uVar2 = *(uint *)(lVar14 + 0x18);
              if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                lVar12 = lVar12 + (long)(int)uVar2 * 0x6c;
                *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar12 + 0x28) = uStack_f8;
                *(double *)(lVar12 + 0x20) = local_100;
                *(ulong *)(lVar12 + 0x38) = CONCAT53(local_e5,uStack_e8);
                *(undefined8 *)(lVar12 + 0x30) = uStack_f0;
                *(undefined8 *)(lVar12 + 0x43) = uStack_dd;
                *(ulong *)(lVar12 + 0x3b) = CONCAT35(uStack_e0,local_e5);
                *(undefined8 *)(lVar12 + 0x54) = uStack_3f8;
                *(undefined8 *)(lVar12 + 0x4c) = local_400;
                *(undefined8 *)(lVar12 + 100) = uStack_3e8;
                *(undefined8 *)(lVar12 + 0x5c) = local_3f0;
                *(undefined8 *)(lVar12 + 0x74) = uStack_3d8;
                *(undefined8 *)(lVar12 + 0x6c) = local_3e0;
                *(undefined1 *)(lVar12 + 0x4b) = uVar1;
                *(undefined8 *)(lVar12 + 0x84) = uStack_3c8;
                *(undefined8 *)(lVar12 + 0x7c) = local_3d0;
              }
              else {
                fStack_168 = (float)uStack_f8;
                uStack_164 = (undefined4)((ulong)uStack_f8 >> 0x20);
                local_170 = local_100;
                local_160 = (float)uStack_f0;
                fStack_15c = (float)((ulong)uStack_f0 >> 0x20);
                fStack_13c = (float)uStack_3f8;
                fStack_138 = (float)((ulong)uStack_3f8 >> 0x20);
                fStack_144 = (float)local_400;
                local_140 = (float)((ulong)local_400 >> 0x20);
                uStack_12c = uStack_3e8;
                uStack_134 = (undefined4)local_3f0;
                uStack_130 = (undefined4)((ulong)local_3f0 >> 0x20);
                local_150._3_1_ = (undefined1)uStack_dd;
                fStack_14c = (float)((ulong)uStack_dd >> 8);
                uStack_148._0_3_ = (undefined3)((ulong)uStack_dd >> 0x28);
                uStack_158._3_1_ = (undefined1)local_e5;
                uStack_158 = (float)CONCAT13(uStack_158._3_1_,uStack_e8);
                uStack_154 = (undefined4)((uint5)local_e5 >> 8);
                local_150 = (float)CONCAT13(local_150._3_1_,uStack_e0);
                uStack_11c = uStack_3d8;
                local_124 = local_3e0;
                uStack_148 = (float)CONCAT13(uVar1,(undefined3)uStack_148);
                uStack_10c = uStack_3c8;
                local_114 = local_3d0;
                FUN_05894a80(lVar14,&local_170,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              iVar32 = iVar32 + 1;
            } while (iVar32 < *(int *)(param_1 + 0x44));
          }
          lVar8 = *(long *)(param_1 + 0x50);
          if (**(char **)(DAT_09188408 + 0xb8) == '\0') {
LAB_043ae074:
            if (*(long *)(lVar13 + 0x28) == local_a8) {
              return;
            }
            goto LAB_043ae0ec;
          }
          if (lVar8 != 0) {
            iVar32 = 0;
            do {
              if (*(int *)(lVar8 + 0x18) <= iVar32) goto LAB_043ae074;
              FUN_05894708(&local_170,lVar8,iVar32,DAT_091b1750);
              fStack_428 = fStack_168;
              uStack_424 = uStack_164;
              fStack_418 = uStack_158;
              uStack_414 = uStack_154;
              local_420 = local_160;
              fStack_41c = fStack_15c;
              local_410 = local_150;
              fStack_40c = fStack_14c;
              local_430 = local_170;
              fStack_468 = fStack_13c;
              fStack_464 = fStack_138;
              local_470 = fStack_144;
              fStack_46c = local_140;
              local_460 = uStack_134;
              uStack_45c = uStack_130;
              uStack_458 = uStack_12c;
              uStack_448 = uStack_11c;
              local_450 = local_124;
              uStack_438 = uStack_10c;
              local_440 = local_114;
              fVar24 = (float)FUN_043b2fc4(0x3f800000,0,0x3f800000,fVar30,0);
              if (*(long *)(param_1 + 0x50) == 0) break;
              fStack_168 = fStack_428;
              uStack_164 = uStack_424;
              local_170 = local_430;
              uStack_158 = fStack_418;
              uStack_154 = uStack_414;
              local_160 = local_420;
              fStack_15c = fStack_41c;
              uStack_12c = uStack_458;
              uStack_134 = local_460;
              uStack_130 = uStack_45c;
              fStack_13c = fStack_468;
              fStack_138 = fStack_464;
              fStack_144 = local_470;
              local_140 = fStack_46c;
              uStack_11c = uStack_448;
              local_124 = local_450;
              local_150 = local_410;
              fStack_14c = fStack_40c;
              uStack_10c = uStack_438;
              local_114 = local_440;
              uStack_148 = fVar24;
              FUN_0589476c(*(long *)(param_1 + 0x50),iVar32,&local_170,DAT_091b1760);
              lVar8 = *(long *)(param_1 + 0x50);
              iVar32 = iVar32 + 1;
            } while (lVar8 != 0);
          }
          lVar13 = *(long *)(lVar13 + 0x28);
          goto LAB_043ae0bc;
        }
      }
      else {
        if (*(int *)(param_1 + 0x20) == 1) {
          uStack_528 = *(undefined8 *)(param_1 + 0xa8);
          local_530 = *(undefined8 *)(param_1 + 0xa0);
          uStack_518 = *(undefined8 *)(param_1 + 0xb8);
          uStack_520 = *(undefined8 *)(param_1 + 0xb0);
          puVar10 = &local_530;
          pfVar11 = &local_570;
          local_564 = uVar5;
          local_554 = uVar6;
          uStack_508 = *(undefined8 *)(param_1 + 200);
          local_510 = *(undefined8 *)(param_1 + 0xc0);
          uStack_4f8 = *(undefined8 *)(param_1 + 0xd8);
          uStack_500 = *(undefined8 *)(param_1 + 0xd0);
          local_544 = fVar20;
          local_534 = uVar7;
          local_570 = fVar23;
          local_56c = fVar3;
          local_568 = fVar21;
          local_560 = fVar29;
          local_55c = fVar24;
          local_558 = fVar46;
          local_550 = fVar42;
          local_54c = fVar36;
          local_548 = fVar22;
          local_540 = fVar18;
          local_53c = fVar35;
          local_538 = fVar26;
        }
        else {
          uStack_4a8 = *(undefined8 *)(param_1 + 0xa8);
          local_4b0 = *(undefined8 *)(param_1 + 0xa0);
          uStack_498 = *(undefined8 *)(param_1 + 0xb8);
          local_4a0 = *(undefined8 *)(param_1 + 0xb0);
          puVar10 = &local_4b0;
          pfVar11 = &local_4f0;
          uStack_488 = *(undefined8 *)(param_1 + 200);
          local_490 = *(undefined8 *)(param_1 + 0xc0);
          uStack_478 = *(undefined8 *)(param_1 + 0xd8);
          local_480 = *(undefined8 *)(param_1 + 0xd0);
          local_4f0 = fStack_7f4;
          local_4ec = local_7f8;
          local_4e8 = local_810;
          local_4e0 = fStack_814;
          local_4dc = local_818;
          local_4d8 = local_830;
          local_4d0 = local_834;
          local_4cc = local_838;
          local_4c8 = local_850;
          local_4c0 = fStack_854;
          local_4bc = local_858;
          local_4b8 = local_870;
        }
        FUN_04125f68(&local_170,puVar10,pfVar11,0);
        local_7f8 = local_170._4_4_;
        fStack_7f4 = (float)local_170;
        local_810 = (ulong)(uint)fStack_168;
        local_818 = fStack_15c;
        fStack_814 = local_160;
        local_830 = (ulong)(uint)uStack_158;
        local_838 = fStack_14c;
        local_834 = local_150;
        local_850 = (ulong)(uint)uStack_148;
        local_858 = fStack_13c;
        fStack_854 = local_140;
        local_870 = (ulong)(uint)fStack_138;
        if ((*(long *)(param_1 + 0xe0) != 0) &&
           (lVar8 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xe0),0), lVar8 != 0))
        {
          UnityEngine_Transform__get_worldToLocalMatrix(&local_170,lVar8,0);
          local_5f0[0] = local_170;
          local_624 = uVar5;
          local_614 = uVar6;
          local_630 = fVar23;
          local_604 = fVar20;
          local_62c = fVar3;
          local_5f4 = uVar7;
          local_628 = fVar21;
          local_620 = fVar29;
          local_61c = fVar24;
          local_618 = fVar46;
          local_610 = fVar42;
          local_60c = fVar36;
          local_608 = fVar22;
          local_600 = fVar18;
          local_5fc = fVar35;
          local_5f8 = fVar26;
          FUN_04125f68(&local_5b0,local_5f0,&local_630,0);
          if (*(long *)(param_1 + 0xe0) != 0) {
            local_754 = local_598;
            local_758 = local_590;
            local_75c = fStack_58c;
            local_760 = fStack_588;
            local_764 = local_580;
            local_768 = local_57c;
            local_76c = local_578;
            lVar8 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xe0),0);
            if (lVar8 != 0) {
              UnityEngine_Transform__get_localToWorldMatrix(&local_5b0,lVar8,0);
              local_6b0 = fVar27;
              local_6ac = fVar31;
              local_6a0 = fVar34;
              local_69c = fVar37;
              local_690 = fVar39;
              local_68c = fVar19;
              local_680 = fVar41;
              local_67c = fVar33;
              FUN_04125f68(&local_670,&local_6b0,local_6f0,0);
              local_770 = local_670;
              local_774 = local_66c;
              local_794 = local_660;
              local_798 = local_65c;
              local_7b4 = local_650;
              local_7b8 = local_64c;
              local_7d4 = local_640;
              local_7d8 = local_63c;
              fVar24 = local_59c;
              fVar29 = local_5a0;
              fVar21 = fStack_5a8;
              fVar3 = fStack_5ac;
              fVar23 = local_5b0;
              fVar28 = local_668;
              fVar50 = local_658;
              fVar52 = local_648;
              fVar4 = local_638;
              goto LAB_043ac46c;
            }
          }
        }
      }
    }
  }
  lVar13 = *(long *)(lVar13 + 0x28);
LAB_043ae0bc:
  if (lVar13 == local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_043ae0ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_043ae0cc:
  if (*(long *)(lVar13 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  goto LAB_043ae0ec;
LAB_043ae0b4:
  lVar13 = *(long *)(lVar13 + 0x28);
  goto LAB_043ae0bc;
}

