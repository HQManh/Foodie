// rea decompile_all
// name: Coffee.UIEffects.ShadowUtil$$ApplyMirror
// address: 0x43f7024
// body: available
// range: 0x43f7024-0x43f792b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f7924 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f7928 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void Coffee_UIEffects_ShadowUtil__ApplyMirror
               (float param_1,float param_2,float param_3,float param_4,float param_5,
               undefined4 param_6,long param_7,int param_8)

{
  undefined1 uVar1;
  byte bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 local_488;
  float local_468;
  undefined4 local_464;
  undefined4 local_460;
  float fStack_45c;
  undefined4 local_458;
  undefined8 local_454;
  undefined8 uStack_43d;
  byte local_435;
  undefined8 local_434;
  undefined8 uStack_42c;
  undefined8 local_424;
  undefined8 uStack_41c;
  undefined8 local_414;
  undefined8 uStack_40c;
  undefined8 local_404;
  undefined8 uStack_3fc;
  undefined4 local_3f4;
  float fStack_3f0;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3d1;
  byte local_3c9;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  float local_384;
  undefined4 local_380;
  undefined8 local_37c;
  undefined8 uStack_365;
  byte local_35d;
  undefined8 local_35c;
  undefined8 uStack_354;
  undefined8 local_34c;
  undefined8 uStack_344;
  undefined8 local_33c;
  undefined8 uStack_334;
  undefined8 local_32c;
  undefined8 uStack_324;
  undefined4 local_31c;
  float local_318;
  undefined4 local_314;
  undefined8 local_310;
  undefined8 uStack_2f9;
  undefined1 local_2f1;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  int local_1a4 [3];
  float local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined8 uStack_179;
  byte local_171;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  undefined1 local_119;
  undefined7 uStack_118;
  undefined8 local_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined1 local_f9;
  undefined7 uStack_f8;
  undefined8 local_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 local_d9;
  undefined7 uStack_d8;
  undefined8 local_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 local_b9;
  undefined7 uStack_b8;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  if ((DAT_09517e19 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_091b1760);
    DAT_09517e19 = 1;
  }
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  local_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  fVar17 = 1.0;
  if (param_1 <= 1.0) {
    fVar17 = param_1;
  }
  uStack_c8 = 0;
  uStack_c1 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  fVar28 = 0.0;
  if (0.0 <= param_1) {
    fVar28 = fVar17;
  }
  uStack_c0 = 0;
  local_b9 = 0;
  uStack_e8 = 0;
  uStack_e1 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  local_d9 = 0;
  uStack_108 = 0;
  uStack_101 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  local_f9 = 0;
  uStack_128 = 0;
  uStack_121 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  local_119 = 0;
  local_1a4[1] = 0;
  local_1a4[0] = param_8;
  Coffee_UIEffects_ShadowUtil__ApplyShadowZeroAlloc(0,0,param_6,param_7,local_1a4 + 1,local_1a4);
  if (0 < param_8) {
    if (param_7 == 0) {
      if (*(long *)(lVar3 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_043f7928;
    }
    fVar22 = param_3 - param_2;
    fVar17 = 0.0 - fVar28;
    iVar16 = 0;
    do {
      FUN_05894708(local_1a4 + 2,param_7,iVar16,DAT_091b1750);
      bVar2 = local_171;
      uVar10 = local_194;
      fVar26 = local_198;
      iVar7 = local_1a4[2];
      uStack_c8 = uStack_188;
      local_d0 = local_190;
      local_b9 = (undefined1)uStack_179;
      uStack_b8 = (undefined7)((ulong)uStack_179 >> 8);
      uStack_c1 = uStack_181;
      uStack_c0 = uStack_180;
      uStack_1e8 = uStack_168;
      local_1f0 = local_170;
      uStack_1d8 = uStack_158;
      uStack_1e0 = local_160;
      uStack_1c8 = uStack_148;
      local_1d0 = local_150;
      uStack_1b8 = uStack_138;
      uStack_1c0 = local_140;
      fVar27 = 0.0;
      if (param_2 != param_3) {
        fVar18 = (local_198 - param_2) / fVar22;
        fVar4 = 1.0;
        if (fVar18 <= 1.0) {
          fVar4 = fVar18;
        }
        fVar27 = 0.0;
        if (0.0 <= fVar18) {
          fVar27 = fVar4;
        }
      }
      FUN_05894708(local_1a4 + 2,param_7,iVar16 + 1,DAT_091b1750);
      bVar14 = local_171;
      uVar11 = local_194;
      fVar4 = local_198;
      local_488 = local_1a4[2];
      uStack_e8 = uStack_188;
      local_f0 = local_190;
      local_d9 = (undefined1)uStack_179;
      uStack_d8 = (undefined7)((ulong)uStack_179 >> 8);
      uStack_e1 = uStack_181;
      uStack_e0 = uStack_180;
      uStack_228 = uStack_168;
      local_230 = local_170;
      uStack_218 = uStack_158;
      uStack_220 = local_160;
      local_464 = local_194;
      uStack_208 = uStack_148;
      local_210 = local_150;
      uStack_1f8 = uStack_138;
      uStack_200 = local_140;
      fVar18 = 0.0;
      if (param_2 != param_3) {
        fVar19 = (local_198 - param_2) / fVar22;
        fVar29 = 1.0;
        if (fVar19 <= 1.0) {
          fVar29 = fVar19;
        }
        fVar18 = 0.0;
        if (0.0 <= fVar19) {
          fVar18 = fVar29;
        }
      }
      local_468 = local_198;
      FUN_05894708(local_1a4 + 2,param_7,iVar16 + 2,DAT_091b1750);
      bVar15 = local_171;
      uVar12 = local_194;
      fVar29 = local_198;
      iVar8 = local_1a4[2];
      uStack_108 = uStack_188;
      local_110 = local_190;
      local_f9 = (undefined1)uStack_179;
      uStack_f8 = (undefined7)((ulong)uStack_179 >> 8);
      uStack_101 = uStack_181;
      uStack_100 = uStack_180;
      uStack_268 = uStack_168;
      local_270 = local_170;
      uStack_258 = uStack_158;
      uStack_260 = local_160;
      uStack_248 = uStack_148;
      local_250 = local_150;
      uStack_238 = uStack_138;
      uStack_240 = local_140;
      fVar19 = 0.0;
      if (param_2 != param_3) {
        fVar20 = (local_198 - param_2) / fVar22;
        fVar5 = 1.0;
        if (fVar20 <= 1.0) {
          fVar5 = fVar20;
        }
        fVar19 = 0.0;
        if (0.0 <= fVar20) {
          fVar19 = fVar5;
        }
      }
      FUN_05894708(local_1a4 + 2,param_7,iVar16 + 4,DAT_091b1750);
      uVar13 = local_194;
      fVar5 = local_198;
      iVar9 = local_1a4[2];
      uStack_128 = uStack_188;
      local_130 = local_190;
      local_119 = (undefined1)uStack_179;
      uStack_118 = (undefined7)((ulong)uStack_179 >> 8);
      uStack_121 = uStack_181;
      uStack_120 = uStack_180;
      uStack_2a8 = uStack_168;
      local_2b0 = local_170;
      uStack_298 = uStack_158;
      uStack_2a0 = local_160;
      uStack_288 = uStack_148;
      local_290 = local_150;
      uStack_278 = uStack_138;
      uStack_280 = local_140;
      fVar20 = 0.0;
      if (param_2 != param_3) {
        fVar23 = (local_198 - param_2) / fVar22;
        fVar25 = 1.0;
        if (fVar23 <= 1.0) {
          fVar25 = fVar23;
        }
        fVar20 = 0.0;
        if (0.0 <= fVar23) {
          fVar20 = fVar25;
        }
      }
      fVar25 = 0.0;
      if (fVar28 != 0.0) {
        fVar21 = (fVar27 - fVar28) / fVar17;
        fVar23 = 1.0;
        if (fVar21 <= 1.0) {
          fVar23 = fVar21;
        }
        fVar25 = 0.0;
        if (0.0 <= fVar21) {
          fVar25 = fVar23;
        }
      }
      fVar23 = 0.0;
      if (fVar28 != 0.0) {
        fVar24 = (fVar18 - fVar28) / fVar17;
        fVar21 = 1.0;
        if (fVar24 <= 1.0) {
          fVar21 = fVar24;
        }
        fVar23 = 0.0;
        if (0.0 <= fVar24) {
          fVar23 = fVar21;
        }
      }
      bVar14 = (byte)(int)(fVar23 * (float)bVar14);
      fVar23 = 0.0;
      if (fVar28 != 0.0) {
        fVar24 = (fVar19 - fVar28) / fVar17;
        fVar21 = 1.0;
        if (fVar24 <= 1.0) {
          fVar21 = fVar24;
        }
        fVar23 = 0.0;
        if (0.0 <= fVar24) {
          fVar23 = fVar21;
        }
      }
      bVar15 = (byte)(int)(fVar23 * (float)bVar15);
      if (fVar28 == 0.0) {
        fVar23 = 0.0;
      }
      else {
        fVar24 = (fVar20 - fVar28) / fVar17;
        fVar21 = 1.0;
        if (fVar24 <= 1.0) {
          fVar21 = fVar24;
        }
        fVar23 = 0.0;
        if (0.0 <= fVar24) {
          fVar23 = fVar21;
        }
      }
      uVar6 = (uint)local_171;
      uVar1 = (undefined1)(int)(fVar25 * (float)bVar2);
      if ((fVar28 <= fVar27) || (fVar18 <= fVar28)) {
      }
      else {
        uStack_2f9 = CONCAT71(uStack_b8,local_b9);
        local_310 = local_d0;
        uStack_365 = CONCAT71(uStack_d8,local_d9);
        local_37c = local_f0;
        local_31c = iVar7;
        local_388 = local_488;
        local_314 = uVar10;
        local_318 = fVar26;
        uStack_2e8 = uStack_1e8;
        local_2f0 = local_1f0;
        uStack_2d8 = uStack_1d8;
        local_2e0 = uStack_1e0;
        uStack_2c8 = uStack_1c8;
        local_2d0 = local_1d0;
        uStack_2b8 = uStack_1b8;
        local_2c0 = uStack_1c0;
        local_384 = fVar4;
        local_380 = uVar11;
        uStack_324 = uStack_1f8;
        local_32c = uStack_200;
        uStack_334 = uStack_208;
        local_33c = local_210;
        uStack_344 = uStack_218;
        local_34c = uStack_220;
        uStack_354 = uStack_228;
        local_35c = local_230;
        local_35d = bVar14;
        local_2f1 = uVar1;
        Coffee_UIEffects_UIVertexUtil__VertexLerp
                  (local_1a4 + 2,(fVar28 - fVar27) / (fVar18 - fVar27),&local_31c,&local_388);
        uStack_e8 = uStack_188;
        local_f0 = local_190;
        local_d9 = (undefined1)uStack_179;
        uStack_d8 = (undefined7)((ulong)uStack_179 >> 8);
        uStack_e1 = uStack_181;
        uStack_e0 = uStack_180;
        uStack_228 = uStack_168;
        local_230 = local_170;
        uStack_218 = uStack_158;
        uStack_220 = local_160;
        local_488 = local_1a4[2];
        uStack_208 = uStack_148;
        local_210 = local_150;
        uStack_1f8 = uStack_138;
        uStack_200 = local_140;
        local_468 = local_198;
        local_464 = local_194;
        bVar14 = local_171;
      }
      bVar2 = (byte)(int)(fVar23 * (float)uVar6);
      if ((fVar28 < fVar19) && (fVar20 < fVar28)) {
        uStack_3d1 = CONCAT71(uStack_118,local_119);
        local_3ec = uVar13;
        local_3e8 = local_130;
        uStack_43d = CONCAT71(uStack_f8,local_f9);
        local_454 = local_110;
        local_3f4 = iVar9;
        fStack_3f0 = fVar5;
        local_460 = iVar8;
        fStack_45c = fVar29;
        local_458 = uVar12;
        uStack_3c0 = uStack_2a8;
        local_3c8 = local_2b0;
        uStack_3b0 = uStack_298;
        local_3b8 = uStack_2a0;
        uStack_3a0 = uStack_288;
        local_3a8 = local_290;
        uStack_390 = uStack_278;
        local_398 = uStack_280;
        uStack_3fc = uStack_238;
        local_404 = uStack_240;
        uStack_40c = uStack_248;
        local_414 = local_250;
        uStack_41c = uStack_258;
        local_424 = uStack_260;
        uStack_42c = uStack_268;
        local_434 = local_270;
        local_435 = bVar15;
        local_3c9 = bVar2;
        Coffee_UIEffects_UIVertexUtil__VertexLerp
                  (local_1a4 + 2,(fVar28 - fVar20) / (fVar19 - fVar20),&local_3f4,&local_460);
        uStack_108 = uStack_188;
        local_110 = local_190;
        local_f9 = (undefined1)uStack_179;
        uStack_f8 = (undefined7)((ulong)uStack_179 >> 8);
        uStack_101 = uStack_181;
        uStack_100 = uStack_180;
        uStack_268 = uStack_168;
        local_270 = local_170;
        uStack_258 = uStack_158;
        uStack_260 = local_160;
        uStack_248 = uStack_148;
        local_250 = local_150;
        uStack_238 = uStack_138;
        uStack_240 = local_140;
        fVar29 = local_198;
        bVar15 = local_171;
      }
      uStack_179 = CONCAT71(uStack_b8,local_b9);
      local_190 = local_d0;
      uStack_168 = uStack_1e8;
      local_170 = local_1f0;
      uStack_158 = uStack_1d8;
      local_160 = uStack_1e0;
      uStack_148 = uStack_1c8;
      local_150 = local_1d0;
      fVar27 = param_5 - fVar26 * param_4;
      fVar26 = param_5 - fVar29 * param_4;
      uStack_138 = uStack_1b8;
      local_140 = uStack_1c0;
      local_198 = fVar27;
      local_171 = uVar1;
      FUN_0589476c(param_7,iVar16 + 5,local_1a4 + 2,DAT_091b1760);
      uStack_179 = CONCAT71(uStack_b8,local_b9);
      local_190 = local_d0;
      uStack_168 = uStack_1e8;
      local_170 = local_1f0;
      uStack_158 = uStack_1d8;
      local_160 = uStack_1e0;
      uStack_148 = uStack_1c8;
      local_150 = local_1d0;
      uStack_138 = uStack_1b8;
      local_140 = uStack_1c0;
      local_198 = fVar27;
      local_171 = uVar1;
      FUN_0589476c(param_7,iVar16,local_1a4 + 2,DAT_091b1760);
      uStack_179 = CONCAT71(uStack_d8,local_d9);
      local_190 = local_f0;
      local_1a4[2] = local_488;
      local_194 = local_464;
      uStack_168 = uStack_228;
      local_170 = local_230;
      uStack_158 = uStack_218;
      local_160 = uStack_220;
      uStack_148 = uStack_208;
      local_150 = local_210;
      uStack_138 = uStack_1f8;
      local_140 = uStack_200;
      local_198 = param_5 - local_468 * param_4;
      local_171 = bVar14;
      FUN_0589476c(param_7,iVar16 + 1,local_1a4 + 2,DAT_091b1760);
      uStack_179 = CONCAT71(uStack_f8,local_f9);
      local_190 = local_110;
      uStack_168 = uStack_268;
      local_170 = local_270;
      uStack_158 = uStack_258;
      local_160 = uStack_260;
      uStack_148 = uStack_248;
      local_150 = local_250;
      uStack_138 = uStack_238;
      local_140 = uStack_240;
      local_198 = fVar26;
      local_171 = bVar15;
      FUN_0589476c(param_7,iVar16 + 3,local_1a4 + 2,DAT_091b1760);
      uStack_179 = CONCAT71(uStack_f8,local_f9);
      local_190 = local_110;
      uStack_168 = uStack_268;
      local_170 = local_270;
      uStack_158 = uStack_258;
      local_160 = uStack_260;
      uStack_148 = uStack_248;
      local_150 = local_250;
      uStack_138 = uStack_238;
      local_140 = uStack_240;
      local_198 = fVar26;
      local_171 = bVar15;
      FUN_0589476c(param_7,iVar16 + 2,local_1a4 + 2,DAT_091b1760);
      uStack_179 = CONCAT71(uStack_118,local_119);
      uStack_188 = uStack_128;
      local_190 = local_130;
      uStack_181 = uStack_121;
      uStack_180 = uStack_120;
      uStack_168 = uStack_2a8;
      local_170 = local_2b0;
      uStack_158 = uStack_298;
      local_160 = uStack_2a0;
      uStack_148 = uStack_288;
      local_150 = local_290;
      uStack_138 = uStack_278;
      local_140 = uStack_280;
      local_1a4[2] = iVar9;
      local_198 = param_5 - fVar5 * param_4;
      local_194 = uVar13;
      local_171 = bVar2;
      FUN_0589476c(param_7,iVar16 + 4,local_1a4 + 2,DAT_091b1760);
      iVar16 = iVar16 + 6;
    } while (iVar16 < param_8);
  }
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
LAB_043f7928:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

