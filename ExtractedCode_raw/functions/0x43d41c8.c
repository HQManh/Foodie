// rea decompile_all
// name: ChocDino.UIFX.FillTextureFilter$$SetupDisplayMaterial
// address: 0x43d41c8
// body: available
// range: 0x43d41c8-0x43d4b8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d4b88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FillTextureFilter__SetupDisplayMaterial
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 local_440;
  undefined8 local_43c;
  undefined8 uStack_434;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_400;
  undefined8 local_3fc;
  undefined8 local_3f4;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined8 local_3d4;
  undefined8 local_3cc;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined8 local_3bc;
  undefined8 uStack_3b4;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  undefined8 local_374;
  undefined4 local_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined8 uStack_334;
  undefined4 local_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined8 local_2f4;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined8 uStack_2b4;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined8 uStack_234;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  float local_200 [6];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined8 local_154;
  undefined8 local_14c;
  undefined4 local_144;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  float fStack_f8;
  undefined8 uStack_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  
  if ((DAT_09517c7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09190978);
    FUN_03f5c2a4(&DAT_09190980);
    FUN_03f5c2a4(&DAT_09213138);
    FUN_03f5c2a4(&DAT_09213130);
    FUN_03f5c2a4(&DAT_091fc6e8);
    FUN_03f5c2a4(&DAT_09213140);
    DAT_09517c7c = 1;
  }
  local_a8 = 0;
  local_b0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09517b19 == '\0') {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517b19 = '\x01';
  }
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = *(undefined8 *)(param_5 + 0x1c8);
  fVar21 = *(float *)(*(long *)(DAT_09189c30 + 0xb8) + 8);
  fVar23 = *(float *)(*(long *)(DAT_09189c30 + 0xb8) + 0xc);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar6 & 1) != 0) {
    lVar8 = *(long *)(param_5 + 0x60);
    if (lVar8 == 0) goto LAB_043d4b88;
    uVar20 = *(undefined4 *)(lVar8 + 0x2c);
    fVar22 = *(float *)(lVar8 + 0x30);
    fVar24 = *(float *)(lVar8 + 0x34);
    fVar25 = *(float *)(lVar8 + 0x38);
    if ((*(int *)(param_5 + 0x1e8) == 1) && (*(int *)(param_5 + 0x24) == 1)) {
      if (*(long *)(param_5 + 0x98) == 0) goto LAB_043d4b88;
      fVar22 = param_2;
      fVar24 = param_3;
      fVar25 = param_4;
      uVar20 = UnityEngine_Canvas__get_pixelRect(*(long *)(param_5 + 0x98),0);
    }
    plVar7 = *(long **)(param_5 + 0x1c8);
    if (plVar7 == (long *)0x0) goto LAB_043d4b88;
    iVar4 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    plVar7 = *(long **)(param_5 + 0x1c8);
    if (plVar7 == (long *)0x0) goto LAB_043d4b88;
    iVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    ChocDino_UIFX_MathUtils__ResizeRectToAspectRatio
              (uVar20,fVar22,fVar24,fVar25,(float)iVar4 / (float)iVar5,
               *(undefined4 *)(param_5 + 0x1d0),0);
    fVar10 = (float)ChocDino_UIFX_MathUtils__GetRelativeRect(uVar20,0);
    fVar23 = ABS(*(float *)(param_5 + 0x1ec));
    fVar21 = 0.001;
    if (0.001 <= fVar23) {
      fVar21 = fVar23;
    }
    fVar13 = -fVar21;
    if (0.0 <= *(float *)(param_5 + 0x1ec)) {
      fVar13 = fVar21;
    }
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09517b1c == '\0') {
      FUN_03f5c2a4(&DAT_09189c30);
      DAT_09517b1c = '\x01';
    }
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar21 = fVar10 * fVar13;
    if (DAT_09517b1d == '\0') {
      FUN_03f5c2a4(&DAT_09189c30);
      DAT_09517b1d = '\x01';
    }
    fVar23 = fVar22 * fVar13;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar21 = fVar13 * (fVar21 + ((fVar24 + fVar10) - fVar21)) - fVar21;
    fVar23 = fVar13 * (fVar23 + ((fVar25 + fVar22) - fVar23)) - fVar23;
  }
  lVar8 = *(long *)(param_5 + 0x70);
  if (*(int *)(DAT_09190978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar8 == 0) goto LAB_043d4b88;
  UnityEngine_Material__SetTextureImpl
            (lVar8,*(undefined4 *)(*(long *)(DAT_09190978 + 0xb8) + 4),
             *(undefined8 *)(param_5 + 0x1c8),0);
  uVar15 = *(undefined8 *)(param_5 + 0x218);
  fVar24 = 0.017453292;
  uVar9 = *(undefined8 *)(param_5 + 500);
  local_100 = 0;
  uStack_fc = 0;
  fVar25 = (float)uVar9;
  fVar13 = (float)uVar15;
  uVar6 = (ulong)uVar9 >> 0x20;
  uVar1 = (ulong)uVar15 >> 0x20;
  fStack_f8 = (*(float *)(param_5 + 0x1f0) + *(float *)(param_5 + 0x220)) * 0.017453292;
  fVar22 = (float)UnityEngine_Quaternion__Internal_FromEulerRad(&local_100,0);
  fVar17 = fVar24 + fVar24;
  fVar10 = (float)uVar9;
  fVar18 = fVar10 + fVar10;
  uStack_110 = 0x3f0000003f000000;
  local_118 = 0x3f800000;
  fVar14 = (float)uVar15;
  local_15c = fVar14 * (fVar22 + fVar22);
  fVar19 = fVar22 * (fVar22 + fVar22);
  local_134 = 0;
  local_13c = 0;
  local_120 = 0;
  local_168 = fVar24 * fVar18 + local_15c;
  local_15c = fVar24 * fVar18 - local_15c;
  local_128 = 0;
  local_174 = 0;
  local_178 = fVar22 * fVar18 - fVar14 * fVar17;
  local_160 = fVar22 * fVar18 + fVar14 * fVar17;
  local_164 = 0;
  local_180 = 1.0 - (fVar24 * fVar17 + fVar10 * fVar18);
  local_17c = fVar22 * fVar17 + fVar14 * fVar18;
  local_170 = fVar22 * fVar17 - fVar14 * fVar18;
  local_16c = 1.0 - (fVar19 + fVar10 * fVar18);
  local_158 = 1.0 - (fVar19 + fVar24 * fVar17);
  local_140 = 0x3f800000;
  local_12c = 0x3f800000;
  local_108 = 0x3f80000000000000;
  local_14c = 0;
  local_154 = 0;
  local_144 = 0x3f800000;
  FUN_04125f68(&local_100,&local_140,&local_180,0);
  local_188 = local_c8;
  uStack_190 = uStack_d0;
  local_198 = local_d8;
  local_1ac = local_ec;
  local_1c0 = local_100;
  local_b0 = CONCAT44(fStack_f8,uStack_fc);
  uStack_b8 = uStack_e0;
  local_c0 = local_e8;
  local_a8 = uStack_f4;
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_1b4 = local_a8;
  local_1bc = local_b0;
  uStack_1a0 = uStack_b8;
  local_1a8 = local_c0;
  local_200[3] = 0.0;
  local_200[4] = 0.0;
  local_200[1] = 0.0;
  local_200[2] = 0.0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1cc = 0;
  local_1d4 = 0;
  local_1d8 = 0x3f800000;
  local_1c4 = 0x3f800000;
  local_200[0] = fVar21;
  local_200[5] = fVar23;
  FUN_04125f68(&local_100,&local_1c0,local_200,0);
  local_23c = CONCAT44(fStack_f8,uStack_fc);
  uStack_b8 = uStack_e0;
  local_c0 = local_e8;
  local_a8 = uStack_f4;
  uStack_234 = uStack_f4;
  local_240 = local_100;
  uStack_210 = uStack_d0;
  local_218 = local_d8;
  uStack_220 = uStack_e0;
  local_228 = local_e8;
  local_22c = local_ec;
  local_208 = local_c8;
  local_274 = 0;
  local_27c = 0;
  local_280 = 0x3f800000;
  local_26c = 0x3f800000;
  local_268 = 0;
  uStack_260 = 0;
  uStack_250 = 0xbf000000bf000000;
  local_258 = 0x3f800000;
  local_248 = 0x3f80000080000000;
  local_b0 = local_23c;
  FUN_04125f68(&local_100,&local_240,&local_280,0);
  local_2bc = CONCAT44(fStack_f8,uStack_fc);
  uStack_b8 = uStack_e0;
  local_c0 = local_e8;
  local_a8 = uStack_f4;
  uStack_2b4 = uStack_f4;
  local_2c0 = local_100;
  local_2ac = local_ec;
  uStack_2a0 = uStack_e0;
  local_2a8 = local_e8;
  uStack_290 = uStack_d0;
  local_298 = local_d8;
  local_288 = local_c8;
  local_2f4 = 0;
  local_2fc = 0;
  local_300 = 0x3f800000;
  local_2ec = 0x3f800000;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0x3f800000;
  local_2c8 = 0x3f80000000000000;
  uStack_2d0 = CONCAT44((float)uVar6 + (float)uVar1,fVar25 + fVar13);
  local_b0 = local_2bc;
  FUN_04125f68(&local_100,&local_2c0,&local_300,0);
  uVar3 = local_c8;
  uVar15 = uStack_d0;
  uVar9 = local_d8;
  uVar2 = local_ec;
  uVar20 = local_100;
  local_b0 = CONCAT44(fStack_f8,uStack_fc);
  uStack_b8 = uStack_e0;
  local_c0 = local_e8;
  local_a8 = uStack_f4;
  if ((*(int *)(param_5 + 0x1e8) == 1) && (*(int *)(param_5 + 0x24) == 1)) {
    uVar11 = local_e8;
    uVar12 = local_d8;
    uVar16 = uStack_d0;
    local_350 = ChocDino_UIFX_FilterBase__GetScreenRect(param_5);
    local_34c = (undefined4)uVar11;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_340 = uVar20;
    local_32c = uVar2;
    local_308 = uVar3;
    uStack_334 = local_a8;
    local_33c = local_b0;
    uStack_320 = uStack_b8;
    local_328 = local_c0;
    uStack_310 = uVar15;
    local_318 = uVar9;
    local_374 = 0;
    local_37c = 0;
    local_380 = 0x3f800000;
    local_36c = 0x3f800000;
    local_368 = 0;
    uStack_360 = 0;
    local_358 = 0x3f800000;
    local_348 = 0x3f80000000000000;
    FUN_04125f68(&local_100,&local_340,&local_380,0);
    local_3bc = CONCAT44(fStack_f8,uStack_fc);
    uStack_b8 = uStack_e0;
    local_c0 = local_e8;
    local_a8 = uStack_f4;
    uStack_3b4 = uStack_f4;
    local_3c0 = local_100;
    uStack_390 = uStack_d0;
    local_398 = local_d8;
    local_3ac = local_ec;
    uStack_3a0 = uStack_e0;
    local_3a8 = local_e8;
    local_388 = local_c8;
    local_3f4 = 0;
    local_3fc = 0;
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3d8 = 0x3f800000;
    local_3cc = 0;
    local_3d4 = 0;
    local_3c4 = 0x3f800000;
    local_400 = (int)uVar12;
    local_3ec = (int)uVar16;
    local_b0 = local_3bc;
    FUN_04125f68(&local_100,&local_3c0,&local_400,0);
    local_b0 = CONCAT44(fStack_f8,uStack_fc);
    uStack_b8 = uStack_e0;
    local_c0 = local_e8;
    local_a8 = uStack_f4;
  }
  uVar20 = local_100;
  lVar8 = *(long *)(param_5 + 0x70);
  if (*(int *)(DAT_09190978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar8 == 0) goto LAB_043d4b88;
  uStack_434 = local_a8;
  local_43c = local_b0;
  uStack_420 = uStack_b8;
  local_428 = local_c0;
  local_440 = uVar20;
  UnityEngine_Material__SetMatrix
            (lVar8,*(undefined4 *)(*(long *)(DAT_09190978 + 0xb8) + 8),&local_440,0);
  if (*(long *)(param_5 + 0x70) == 0) goto LAB_043d4b88;
  UnityEngine_Material__SetColorImpl
            (*(undefined4 *)(param_5 + 0x1d8),*(undefined4 *)(param_5 + 0x1dc),
             *(undefined4 *)(param_5 + 0x1e0),*(undefined4 *)(param_5 + 0x1e4),
             *(long *)(param_5 + 0x70),**(undefined4 **)(DAT_09190978 + 0xb8),0);
  lVar8 = *(long *)(param_5 + 0x70);
  if (*(int *)(DAT_09190980 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar8 == 0) goto LAB_043d4b88;
  UnityEngine_Material__SetFloat
            (*(undefined4 *)(param_5 + 0x20),lVar8,
             *(undefined4 *)(*(long *)(DAT_09190980 + 0xb8) + 8),0);
  iVar4 = *(int *)(param_5 + 0x1d4);
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      if (*(long *)(param_5 + 0x70) == 0) goto LAB_043d4b88;
      UnityEngine_Material__DisableKeyword(*(long *)(param_5 + 0x70),DAT_09213130,0);
    }
    else {
      if (iVar4 != 1) goto LAB_043d4abc;
      if (*(long *)(param_5 + 0x70) == 0) goto LAB_043d4b88;
      UnityEngine_Material__EnableKeyword(*(long *)(param_5 + 0x70),DAT_09213130,0);
    }
    if (*(long *)(param_5 + 0x70) == 0) goto LAB_043d4b88;
    UnityEngine_Material__DisableKeyword(*(long *)(param_5 + 0x70),DAT_09213140,0);
LAB_043d4aa0:
    if (*(long *)(param_5 + 0x70) == 0) goto LAB_043d4b88;
    UnityEngine_Material__DisableKeyword(*(long *)(param_5 + 0x70),DAT_09213138,0);
  }
  else {
    if (iVar4 == 2) {
      if (*(long *)(param_5 + 0x70) == 0) goto LAB_043d4b88;
      UnityEngine_Material__DisableKeyword(*(long *)(param_5 + 0x70),DAT_09213130,0);
      if (*(long *)(param_5 + 0x70) == 0) goto LAB_043d4b88;
      UnityEngine_Material__EnableKeyword(*(long *)(param_5 + 0x70),DAT_09213140,0);
      goto LAB_043d4aa0;
    }
    if (iVar4 == 3) {
      if (*(long *)(param_5 + 0x70) == 0) goto LAB_043d4b88;
      UnityEngine_Material__DisableKeyword(*(long *)(param_5 + 0x70),DAT_09213130,0);
      if (*(long *)(param_5 + 0x70) == 0) goto LAB_043d4b88;
      UnityEngine_Material__DisableKeyword(*(long *)(param_5 + 0x70),DAT_09213140,0);
      if (*(long *)(param_5 + 0x70) == 0) goto LAB_043d4b88;
      UnityEngine_Material__EnableKeyword(*(long *)(param_5 + 0x70),DAT_09213138,0);
    }
  }
LAB_043d4abc:
  lVar8 = *(long *)(param_5 + 0x70);
  if (*(int *)(DAT_09190978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar8 != 0) {
    UnityEngine_Material__SetFloat
              (*(undefined4 *)(param_5 + 0x210),lVar8,
               *(undefined4 *)(*(long *)(DAT_09190978 + 0xb8) + 0xc),0);
    if (*(long *)(param_5 + 0x70) != 0) {
      UnityEngine_Material__SetInt
                (*(long *)(param_5 + 0x70),*(undefined4 *)(*(long *)(DAT_09190978 + 0xb8) + 0x10),
                 *(undefined4 *)(param_5 + 0x208),0);
      lVar8 = *(long *)(param_5 + 0x70);
      if (*(char *)(param_5 + 0x20c) == '\0') {
        if (lVar8 != 0) {
          UnityEngine_Material__DisableKeyword(lVar8,DAT_091fc6e8,0);
          goto LAB_043d4b48;
        }
      }
      else if (lVar8 != 0) {
        UnityEngine_Material__EnableKeyword(lVar8,DAT_091fc6e8,0);
LAB_043d4b48:
        ChocDino_UIFX_FilterBase__SetupDisplayMaterial(param_5,param_6,param_7);
        return;
      }
    }
  }
LAB_043d4b88:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

