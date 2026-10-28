// rea decompile_all
// name: Coffee.UIEffects.UIEffectContext$$UpdateViewMatrix
// address: 0x43eea94
// body: available
// range: 0x43eea94-0x43ef363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ef360 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectContext__UpdateViewMatrix
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               long param_6,long param_7,long param_8)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_730;
  float fStack_72c;
  float local_728;
  float fStack_724;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  long local_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  float local_420;
  float fStack_41c;
  float fStack_418;
  undefined4 uStack_414;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  float fStack_3d8;
  undefined4 uStack_3d4;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  long local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  long local_2a0;
  float fStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  float local_1f0;
  float local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  undefined4 local_88;
  
  if ((DAT_09517de8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918c380);
    DAT_09517de8 = 1;
  }
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(param_6,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (param_7 != 0) {
    UnityEngine_RectTransform__get_rect(param_7,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar18 = 1.0 / param_3;
    fVar19 = 1.0 / param_4;
    fVar20 = fVar19;
    if (*(char *)(param_5 + 0x74) != '\0') {
      if (DAT_09515cee == '\0') {
        FUN_03f5c2a4(&DAT_09187e98);
        DAT_09515cee = '\x01';
      }
      fVar12 = ABS(fVar18);
      if (ABS(fVar18) <= ABS(fVar19)) {
        fVar12 = ABS(fVar19);
      }
      fVar9 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
      fVar17 = fVar12 * 1e-06;
      if (fVar12 * 1e-06 <= fVar9) {
        fVar17 = fVar9;
      }
      param_2 = ABS(fVar19 - fVar18);
      if ((fVar17 <= param_2) && (fVar20 = fVar18, fVar19 <= fVar18)) {
        fVar18 = fVar19;
        fVar20 = fVar19;
      }
    }
    uVar3 = *(uint *)(param_5 + 0x1e8);
    if ((uVar3 >> 2 & 1) != 0) {
      param_2 = -fVar20;
      if ((uVar3 & 1) != 0) {
        fVar18 = -fVar18;
      }
      if ((uVar3 & 2) != 0) {
        fVar20 = param_2;
      }
    }
    fVar19 = (float)UnityEngine_RectTransform__get_pivot(param_7,0);
    UnityEngine_Transform__get_worldToLocalMatrix(&local_1a0,param_7,0);
    local_220 = 0x3f800000;
    local_20c = 0x3f800000;
    local_214 = 0;
    local_21c = 0;
    local_1f8 = 0x3f800000;
    local_200 = 0;
    local_1e8 = 0x3f80000000000000;
    local_208 = 0;
    uStack_248 = uStack_188;
    local_250 = local_190;
    uStack_258 = uStack_198;
    local_260 = local_1a0;
    uStack_238 = uStack_178;
    local_240 = local_180;
    uStack_228 = uStack_168;
    local_230 = local_170;
    local_1f0 = param_3 * (fVar19 + -0.5);
    local_1ec = param_4 * (param_2 + -0.5);
    FUN_04125f68(&local_1e0,&local_220,&local_260,0);
    fVar12 = *(float *)(param_5 + 0x70);
    uStack_c8 = uStack_1c8;
    local_d0 = local_1d0;
    fStack_298 = fVar12 * 0.017453292;
    uStack_d8 = uStack_1d8;
    local_e0 = local_1e0;
    uStack_b8 = uStack_1b8;
    local_c0 = local_1c0;
    uStack_a8 = uStack_1a8;
    local_b0 = local_1b0;
    local_2a0 = 0;
    uVar5 = local_1c0;
    fVar19 = fStack_298;
    uVar7 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_2a0,0);
    fVar17 = *(float *)(param_5 + 0x70);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c380);
    }
    lVar6 = DAT_0918c380;
    sincosf(fVar17 * 0.017453292,&fStack_724,&local_728);
    uVar16 = 0x3f000000;
    fStack_3d8 = 0.0;
    uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0xe8);
    local_3e0 = 0x3f0000003f000000;
    fVar17 = ABS(local_728 - fStack_724);
    if (ABS(local_728 - fStack_724) <= ABS(local_728 + fStack_724)) {
      fVar17 = ABS(local_728 + fStack_724);
    }
    fVar17 = 1.0 / fVar17;
    fStack_41c = fVar17 * fVar20;
    local_420 = fVar17 * fVar18;
    fStack_418 = fVar17;
    local_2e0 = uVar7;
    fStack_2dc = fVar19;
    fStack_2d8 = fVar12;
    uStack_2d4 = (int)uVar5;
    UnityEngine_Matrix4x4__Internal_TRS(&local_2a0,&local_3e0,&local_2e0,&local_420,0);
    uStack_358 = uStack_d8;
    local_360 = local_e0;
    uStack_348 = uStack_c8;
    uStack_350 = local_d0;
    uStack_318 = CONCAT44(uStack_294,fStack_298);
    uStack_328 = uStack_a8;
    local_330 = local_b0;
    uStack_338 = uStack_b8;
    local_340 = local_c0;
    local_320 = local_2a0;
    uStack_308 = uStack_288;
    local_310 = local_290;
    uStack_2f8 = uStack_278;
    local_300 = local_280;
    uStack_2e8 = uStack_268;
    local_2f0 = local_270;
    FUN_04125f68(&local_2e0,&local_320,&local_360,0);
    if (param_6 != 0) {
      uStack_398 = CONCAT44(uStack_2d4,fStack_2d8);
      local_3a0 = CONCAT44(fStack_2dc,local_2e0);
      uStack_388 = uStack_2c8;
      uStack_390 = local_2d0;
      uStack_378 = uStack_2b8;
      local_380 = local_2c0;
      uStack_368 = uStack_2a8;
      uStack_370 = local_2b0;
      uVar11 = local_2d0;
      uVar15 = local_2b0;
      UnityEngine_Material__SetMatrix(param_6,uVar1,&local_3a0,0);
      fVar13 = (float)uVar15;
      fVar10 = (float)uVar11;
      fVar9 = (float)Coffee_UIEffects_UIEffectContext__GetGradationRotation(param_5);
      local_3e0 = 0;
      fStack_3d8 = fVar9 * 0.017453292;
      fVar8 = (float)UnityEngine_Quaternion__Internal_FromEulerRad(&local_3e0,0);
      sincosf(fVar9 * 0.017453292,&fStack_72c,&local_730);
      local_88 = 0;
      uVar1 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xec);
      fVar9 = ABS(local_730 - fStack_72c);
      if (ABS(local_730 - fStack_72c) <= ABS(local_730 + fStack_72c)) {
        fVar9 = ABS(local_730 + fStack_72c);
      }
      fVar9 = 1.0 / fVar9;
      local_90 = 0x3f0000003f000000;
      local_98 = fVar20 * fVar9;
      local_420 = fVar8;
      fStack_41c = fVar10;
      fStack_418 = fVar13;
      uStack_414 = uVar16;
      local_9c = fVar18 * fVar9;
      local_94 = fVar9;
      UnityEngine_Matrix4x4__Internal_TRS(&local_3e0,&local_90,&local_420,&local_9c,0);
      uStack_498 = uStack_d8;
      local_4a0 = local_e0;
      uStack_488 = uStack_c8;
      uStack_490 = local_d0;
      uStack_478 = uStack_b8;
      local_480 = local_c0;
      uStack_468 = uStack_a8;
      uStack_470 = local_b0;
      uStack_458 = CONCAT44(uStack_3d4,fStack_3d8);
      local_460 = local_3e0;
      uStack_448 = uStack_3c8;
      uStack_450 = uStack_3d0;
      uStack_438 = uStack_3b8;
      local_440 = local_3c0;
      uStack_428 = uStack_3a8;
      uStack_430 = uStack_3b0;
      FUN_04125f68(&local_420,&local_460,&local_4a0,0);
      uStack_4d8 = CONCAT44(uStack_414,fStack_418);
      local_4e0 = CONCAT44(fStack_41c,local_420);
      uStack_4c8 = uStack_408;
      uStack_4d0 = uStack_410;
      uStack_4b8 = uStack_3f8;
      local_4c0 = local_400;
      uStack_4a8 = uStack_3e8;
      uStack_4b0 = uStack_3f0;
      UnityEngine_Material__SetMatrix(param_6,uVar1,&local_4e0,0);
      if (*(int *)(param_5 + 0xd4) == 5) {
        fVar21 = 1.0 / *(float *)(param_5 + 0xe8);
        fVar14 = *(float *)(param_5 + 0xdc);
        if (DAT_09515ed5 == '\0') {
          FUN_03f5c2a4(&DAT_091898c0);
          DAT_09515ed5 = '\x01';
        }
        uStack_1d8 = (*(undefined8 **)(DAT_091898c0 + 0xb8))[1];
        local_1e0 = **(undefined8 **)(DAT_091898c0 + 0xb8);
        local_2e0 = 0x3f800000;
        fStack_2d8 = 1.0;
        local_2a0 = (ulong)(uint)(param_4 * 0.5 * (fVar21 + 1.0) - fVar14 * fVar21) << 0x20;
        fStack_298 = 0.0;
        fStack_2dc = fVar21;
        UnityEngine_Matrix4x4__Internal_TRS(&local_1a0,&local_2a0,&local_1e0,&local_2e0,0);
        uStack_558 = uStack_d8;
        local_560 = local_e0;
        uStack_548 = uStack_c8;
        uStack_550 = local_d0;
        uStack_538 = uStack_b8;
        local_540 = local_c0;
        uStack_528 = uStack_a8;
        uStack_530 = local_b0;
        uStack_518 = uStack_198;
        local_520 = local_1a0;
        uStack_508 = uStack_188;
        uStack_510 = local_190;
        uStack_4f8 = uStack_178;
        local_500 = local_180;
        uStack_4e8 = uStack_168;
        uStack_4f0 = local_170;
        FUN_04125f68(&local_1e0,&local_520,&local_560,0);
        uStack_118 = uStack_1d8;
        local_120 = local_1e0;
        uStack_108 = uStack_1c8;
        local_110 = local_1d0;
        uStack_f8 = uStack_1b8;
        local_100 = local_1c0;
        uStack_e8 = uStack_1a8;
        local_f0 = local_1b0;
        if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fStack_3d8 = 0.0;
        uVar1 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xf0);
        fStack_41c = fVar17 * -fVar20;
        local_3e0 = 0x3f0000003f000000;
        local_420 = fVar17 * fVar18;
        fStack_418 = fVar17;
        local_2e0 = uVar7;
        fStack_2dc = fVar19;
        fStack_2d8 = fVar12;
        uStack_2d4 = (int)uVar5;
        UnityEngine_Matrix4x4__Internal_TRS(&local_2a0,&local_3e0,&local_2e0,&local_420,0);
        uStack_5d8 = uStack_118;
        local_5e0 = local_120;
        uStack_5c8 = uStack_108;
        uStack_5d0 = local_110;
        uStack_598 = CONCAT44(uStack_294,fStack_298);
        uStack_5b8 = uStack_f8;
        local_5c0 = local_100;
        uStack_5a8 = uStack_e8;
        uStack_5b0 = local_f0;
        local_5a0 = local_2a0;
        uStack_588 = uStack_288;
        uStack_590 = local_290;
        uStack_578 = uStack_278;
        local_580 = local_280;
        uStack_568 = uStack_268;
        uStack_570 = local_270;
        FUN_04125f68(&local_2e0,&local_5a0,&local_5e0,0);
        uStack_618 = CONCAT44(uStack_2d4,fStack_2d8);
        local_620 = CONCAT44(fStack_2dc,local_2e0);
        uStack_608 = uStack_2c8;
        uStack_610 = local_2d0;
        uStack_5f8 = uStack_2b8;
        local_600 = local_2c0;
        uStack_5e8 = uStack_2a8;
        uStack_5f0 = local_2b0;
        UnityEngine_Material__SetMatrix(param_6,uVar1,&local_620,0);
        local_90 = 0x3f0000003f000000;
        local_98 = fVar9 * -fVar20;
        local_88 = 0;
        uVar7 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xf4);
        local_420 = fVar8;
        fStack_41c = fVar10;
        fStack_418 = fVar13;
        uStack_414 = uVar16;
        local_9c = fVar18 * fVar9;
        local_94 = fVar9;
        UnityEngine_Matrix4x4__Internal_TRS(&local_3e0,&local_90,&local_420,&local_9c,0);
        uStack_698 = uStack_118;
        local_6a0 = local_120;
        uStack_688 = uStack_108;
        uStack_690 = local_110;
        uStack_678 = uStack_f8;
        local_680 = local_100;
        uStack_668 = uStack_e8;
        uStack_670 = local_f0;
        uStack_658 = CONCAT44(uStack_3d4,fStack_3d8);
        local_660 = local_3e0;
        uStack_648 = uStack_3c8;
        uStack_650 = uStack_3d0;
        uStack_638 = uStack_3b8;
        local_640 = local_3c0;
        uStack_628 = uStack_3a8;
        uStack_630 = uStack_3b0;
        FUN_04125f68(&local_420,&local_660,&local_6a0,0);
        uStack_6d8 = CONCAT44(uStack_414,fStack_418);
        local_6e0 = CONCAT44(fStack_41c,local_420);
        uStack_6c8 = uStack_408;
        uStack_6d0 = uStack_410;
        uStack_6b8 = uStack_3f8;
        local_6c0 = local_400;
        uStack_6a8 = uStack_3e8;
        uStack_6b0 = uStack_3f0;
        UnityEngine_Material__SetMatrix(param_6,uVar7,&local_6e0,0);
      }
      if (param_8 != 0) {
        iVar2 = UnityEngine_Canvas__get_renderMode(param_8,0);
        if (iVar2 == 2) {
          uVar3 = 0;
        }
        else {
          iVar2 = UnityEngine_Canvas__get_renderMode(param_8,0);
          if (iVar2 == 0) {
            uVar3 = 1;
          }
          else {
            uVar5 = UnityEngine_Canvas__get_worldCamera(param_8,0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
            uVar3 = uVar3 ^ 1;
          }
        }
        if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xf8);
        if ((uVar3 & 1) == 0) {
          if (DAT_09516ccb == '\0') {
            FUN_03f5c2a4(&DAT_09187ec0);
            DAT_09516ccb = '\x01';
          }
          lVar6 = *(long *)(DAT_09187ec0 + 0xb8);
          uStack_158 = *(undefined8 *)(lVar6 + 0x48);
          local_160 = *(undefined8 *)(lVar6 + 0x40);
          uStack_148 = *(undefined8 *)(lVar6 + 0x58);
          local_150 = *(undefined8 *)(lVar6 + 0x50);
          uStack_138 = *(undefined8 *)(lVar6 + 0x68);
          local_140 = *(undefined8 *)(lVar6 + 0x60);
          uStack_128 = *(undefined8 *)(lVar6 + 0x78);
          local_130 = *(undefined8 *)(lVar6 + 0x70);
        }
        else {
          lVar6 = UnityEngine_Component__get_transform(param_8,0);
          if (lVar6 == 0) goto LAB_043ef360;
          UnityEngine_Transform__get_localToWorldMatrix(&local_160,lVar6,0);
        }
        uStack_718 = uStack_158;
        local_720 = local_160;
        uStack_708 = uStack_148;
        uStack_710 = local_150;
        uStack_6f8 = uStack_138;
        local_700 = local_140;
        uStack_6e8 = uStack_128;
        uStack_6f0 = local_130;
        UnityEngine_Material__SetMatrix(param_6,uVar7,&local_720,0);
        return;
      }
    }
  }
LAB_043ef360:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

