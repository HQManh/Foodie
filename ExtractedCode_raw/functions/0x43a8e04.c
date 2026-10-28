// rea decompile_all
// name: ChocDino.UIFX.MotionBlurReal$$CreateMotionBlurMesh
// address: 0x43a8e04
// body: available
// range: 0x43a8e04-0x43aa173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43aa13c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43aa170 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChocDino_UIFX_MotionBlurReal__CreateMotionBlurMesh(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  ulong uVar20;
  undefined8 uVar21;
  float fVar37;
  float fVar39;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar19;
  float fVar38;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ulong uVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  ulong local_430;
  ulong local_420;
  ulong local_410;
  float local_3e4;
  ulong local_3e0;
  float local_3d0;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  float fStack_388;
  float fStack_384;
  undefined4 uStack_380;
  float local_37c;
  float fStack_378;
  float fStack_374;
  undefined4 uStack_370;
  float local_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  undefined4 uStack_350;
  undefined1 local_320 [64];
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  float local_2a0;
  float local_29c;
  float local_298;
  undefined4 local_294;
  float local_290;
  float local_28c;
  float local_288;
  undefined4 local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  undefined4 local_264;
  undefined1 local_260 [64];
  float local_220;
  float fStack_21c;
  float fStack_218;
  float local_210;
  float local_20c;
  float local_208;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  float local_160;
  float local_15c;
  ulong local_158;
  float local_150;
  float local_14c;
  ulong local_148;
  float local_140;
  float local_13c;
  ulong local_138;
  float local_130;
  float local_12c;
  ulong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float local_58;
  float local_54;
  
  if ((DAT_09517adc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_09188400);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517adc = 1;
  }
  fVar54 = *(float *)(param_1 + 0x78);
  fVar55 = *(float *)(param_1 + 0x7c);
  fVar52 = *(float *)(param_1 + 0x58);
  local_3d0 = *(float *)(param_1 + 0x5c);
  fVar57 = *(float *)(param_1 + 0x88);
  fVar59 = *(float *)(param_1 + 0x8c);
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  local_3e0 = *(ulong *)(param_1 + 0x60);
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_3e4 = *(float *)(param_1 + 0x68);
  fVar40 = *(float *)(param_1 + 0x6c);
  local_410 = *(ulong *)(param_1 + 0x70);
  local_420 = *(ulong *)(param_1 + 0x80);
  local_430 = *(ulong *)(param_1 + 0x90);
  lVar5 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar5 != 0) {
    UnityEngine_Transform__get_localToWorldMatrix(&local_38c,lVar5,0);
    uVar3 = uStack_350;
    fVar51 = fStack_354;
    fVar50 = fStack_358;
    fVar18 = fStack_35c;
    fVar17 = fStack_360;
    fVar1 = fStack_364;
    fVar62 = fStack_368;
    fVar61 = local_36c;
    uVar2 = uStack_370;
    fVar15 = fStack_374;
    fVar39 = fStack_378;
    fVar38 = local_37c;
    uVar4 = uStack_380;
    fVar58 = fStack_384;
    fVar19 = fStack_388;
    fVar41 = local_38c;
    local_54 = local_38c;
    local_58 = fStack_388;
    local_390 = fStack_384;
    local_394 = local_37c;
    local_398 = fStack_378;
    local_39c = fStack_374;
    local_3a0 = local_36c;
    local_3a4 = fStack_368;
    local_3a8 = fStack_364;
    local_3ac = fStack_35c;
    local_3b4 = fStack_354;
    local_3b0 = fStack_358;
    lVar5 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar5 != 0) {
      UnityEngine_Transform__get_worldToLocalMatrix(&local_38c,lVar5,0);
      uVar12 = *(undefined8 *)(param_1 + 0xd8);
      local_e0 = CONCAT44(fStack_388,local_38c);
      uStack_d8 = CONCAT44(uStack_380,fStack_384);
      uStack_d0 = CONCAT44(fStack_378,local_37c);
      auVar23._8_4_ = fStack_374;
      auVar23._0_8_ = uStack_d0;
      auVar23._12_4_ = uStack_370;
      uStack_b8 = CONCAT44(fStack_360,fStack_364);
      local_c0 = CONCAT44(fStack_368,local_36c);
      uStack_c8 = auVar23._8_8_;
      uStack_b0 = CONCAT44(fStack_358,fStack_35c);
      auVar46._8_4_ = fStack_354;
      auVar46._0_8_ = uStack_b0;
      auVar46._12_4_ = uStack_350;
      uStack_a8 = auVar46._8_8_;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(param_1 + 0x20) == 1) {
          local_1a0 = *(undefined8 *)(param_1 + 0x98);
          uStack_198 = *(undefined8 *)(param_1 + 0xa0);
          uStack_190 = *(undefined8 *)(param_1 + 0xa8);
          uStack_188 = *(undefined8 *)(param_1 + 0xb0);
          uStack_178 = *(undefined8 *)(param_1 + 0xc0);
          local_180 = *(undefined8 *)(param_1 + 0xb8);
          puVar7 = &local_1a0;
          pfVar8 = &local_1e0;
          uStack_170 = *(undefined8 *)(param_1 + 200);
          uStack_168 = *(undefined8 *)(param_1 + 0xd0);
          local_1d4 = uVar4;
          local_1c4 = uVar2;
          local_1e0 = fVar41;
          local_1b4 = fVar17;
          local_1dc = fVar19;
          local_1d8 = fVar58;
          local_1d0 = fVar38;
          local_1cc = fVar39;
          local_1c8 = fVar15;
          local_1c0 = fVar61;
          local_1bc = fVar62;
          local_1b8 = fVar1;
          local_1b0 = fVar18;
          local_1a8 = fVar51;
          local_1ac = fVar50;
          local_1a4 = uVar3;
        }
        else {
          local_120 = *(undefined8 *)(param_1 + 0x98);
          uStack_118 = *(undefined8 *)(param_1 + 0xa0);
          uStack_110 = *(undefined8 *)(param_1 + 0xa8);
          uStack_108 = *(undefined8 *)(param_1 + 0xb0);
          uStack_f8 = *(undefined8 *)(param_1 + 0xc0);
          local_100 = *(undefined8 *)(param_1 + 0xb8);
          puVar7 = &local_120;
          uStack_f0 = *(undefined8 *)(param_1 + 200);
          uStack_e8 = *(undefined8 *)(param_1 + 0xd0);
          pfVar8 = &local_160;
          local_160 = fVar52;
          local_15c = local_3d0;
          local_158 = local_3e0;
          local_150 = local_3e4;
          local_14c = fVar40;
          local_148 = local_410;
          local_140 = fVar54;
          local_13c = fVar55;
          local_138 = local_420;
          local_130 = fVar57;
          local_12c = fVar59;
          local_128 = local_430;
        }
        FUN_04125f68(&local_38c,puVar7,pfVar8,0);
        fVar57 = fStack_35c;
        fVar52 = local_38c;
        local_3d0 = fStack_388;
        local_3e0 = (ulong)(uint)fStack_384;
        local_3e4 = local_37c;
        local_410 = (ulong)(uint)fStack_374;
        local_420 = (ulong)(uint)fStack_364;
        local_430 = (ulong)(uint)fStack_354;
        if ((*(long *)(param_1 + 0xd8) == 0) ||
           (lVar5 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xd8),0), lVar5 == 0))
        goto LAB_043aa13c;
        UnityEngine_Transform__get_worldToLocalMatrix(&local_38c,lVar5,0);
        local_294 = uVar4;
        local_284 = uVar2;
        local_274 = fVar17;
        local_2a0 = fVar41;
        local_29c = fVar19;
        local_298 = fVar58;
        local_290 = fVar38;
        local_28c = fVar39;
        local_288 = fVar15;
        local_280 = fVar61;
        local_27c = fVar62;
        local_278 = fVar1;
        local_270 = fVar18;
        local_268 = fVar51;
        local_26c = fVar50;
        local_264 = uVar3;
        FUN_04125f68(&local_220,local_260,&local_2a0,0);
        if (*(long *)(param_1 + 0xd8) == 0) goto LAB_043aa13c;
        local_54 = local_220;
        local_58 = fStack_21c;
        local_390 = fStack_218;
        local_394 = local_210;
        local_398 = local_20c;
        local_39c = local_208;
        local_3a0 = local_200;
        local_3a4 = fStack_1fc;
        local_3a8 = fStack_1f8;
        local_3ac = local_1f0;
        local_3b4 = local_1e8;
        local_3b0 = local_1ec;
        lVar5 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xd8),0);
        if (lVar5 == 0) goto LAB_043aa13c;
        UnityEngine_Transform__get_localToWorldMatrix(&local_220,lVar5,0);
        uStack_2d8 = uStack_d8;
        local_2e0 = local_e0;
        uStack_2c8 = uStack_c8;
        uStack_2d0 = uStack_d0;
        uStack_2b8 = uStack_b8;
        local_2c0 = local_c0;
        uStack_2a8 = uStack_a8;
        uStack_2b0 = uStack_b0;
        FUN_04125f68(&local_e0,&local_2e0,local_320,0);
        fVar54 = local_36c;
        fVar55 = fStack_368;
        fVar59 = fStack_358;
        fVar40 = fStack_378;
      }
      iVar14 = *(int *)(param_1 + 0x20);
      fVar41 = (float)local_3e0;
      fVar19 = (float)local_410;
      fVar38 = (float)local_420;
      fVar58 = (float)local_430;
      if (iVar14 == 0) {
        if (0 < *(int *)(param_1 + 0x24)) {
          iVar13 = 0;
          iVar14 = 0;
          do {
            fVar39 = (float)ChocDino_UIFX_MotionBlurReal__GetLerpFactorUnclamped(param_1);
            if (0 < *(int *)(param_1 + 0x44)) {
              iVar11 = 0;
              do {
                if (*(long *)(param_1 + 0x48) == 0) goto LAB_043aa13c;
                FUN_05894708(&local_38c,*(long *)(param_1 + 0x48),iVar11,DAT_091b1750);
                lVar5 = *(long *)(param_1 + 0xe8);
                if (lVar5 == 0) goto LAB_043aa13c;
                uVar9 = iVar13 + iVar11;
                if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_043aa170;
                lVar5 = lVar5 + (long)(int)uVar9 * 0xc;
                fVar61 = fVar57 + fVar52 * local_38c + local_3e4 * fStack_388 + fVar54 * fStack_384;
                fVar62 = fVar59 + local_3d0 * local_38c + fVar40 * fStack_388 + fVar55 * fStack_384;
                fVar15 = fVar58 + fVar41 * local_38c + fVar19 * fStack_388 + fVar38 * fStack_384;
                *(float *)(lVar5 + 0x20) =
                     fVar61 + fVar39 * ((local_3ac +
                                        local_54 * local_38c + local_394 * fStack_388 +
                                        local_3a0 * fStack_384) - fVar61);
                *(float *)(lVar5 + 0x24) =
                     fVar62 + fVar39 * ((local_3b0 +
                                        local_58 * local_38c + local_398 * fStack_388 +
                                        local_3a4 * fStack_384) - fVar62);
                *(float *)(lVar5 + 0x28) =
                     fVar15 + fVar39 * ((local_3b4 +
                                        local_390 * local_38c + local_39c * fStack_388 +
                                        local_3a8 * fStack_384) - fVar15);
                lVar5 = *(long *)(param_1 + 0xf0);
                if (lVar5 == 0) goto LAB_043aa13c;
                if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_043aa170;
                *(ulong *)(lVar5 + (long)(int)uVar9 * 8 + 0x20) = CONCAT44(fStack_35c,fStack_360);
                lVar5 = *(long *)(param_1 + 0xf8);
                if (lVar5 == 0) goto LAB_043aa13c;
                if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_043aa170;
                iVar11 = iVar11 + 1;
                lVar5 = lVar5 + (long)(int)uVar9 * 0x10;
                uVar12 = NEON_ushl(CONCAT44(fStack_364,fStack_364),0xffffffe8fffffff0,4);
                uVar6 = CONCAT26((short)((ulong)uVar12 >> 0x20),
                                 CONCAT24((short)uVar12,
                                          CONCAT22((short)((uint)fStack_364 >> 8),
                                                   SUB42(fStack_364,0)))) & 0xff00ff00ff00ff;
                auVar35._2_2_ = 0;
                auVar35._0_2_ = (ushort)uVar6;
                auVar35._4_2_ = (short)(uVar6 >> 0x10);
                auVar35._6_2_ = 0;
                auVar35._8_2_ = (short)(uVar6 >> 0x20);
                auVar35._10_2_ = 0;
                auVar35._12_2_ = (short)(uVar6 >> 0x30);
                auVar35._14_2_ = 0;
                auVar23 = NEON_ucvtf(auVar35,4);
                auVar36._0_8_ = CONCAT44(auVar23._4_4_ / 255.0,auVar23._0_4_ / 255.0);
                auVar36._8_4_ = auVar23._8_4_ / 255.0;
                auVar36._12_4_ = auVar23._12_4_ / 255.0;
                *(long *)(lVar5 + 0x28) = auVar36._8_8_;
                *(undefined8 *)(lVar5 + 0x20) = auVar36._0_8_;
              } while (iVar11 < *(int *)(param_1 + 0x44));
              iVar13 = iVar13 + iVar11;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < *(int *)(param_1 + 0x24));
        }
      }
      else if (iVar14 == 1) {
        if (0 < *(int *)(param_1 + 0x24)) {
          iVar13 = 0;
          iVar14 = 0;
          do {
            fVar52 = (float)ChocDino_UIFX_MotionBlurReal__GetLerpFactorUnclamped(param_1);
            fVar40 = 1.0;
            if (fVar52 <= 1.0) {
              fVar40 = fVar52;
            }
            fVar57 = 0.0;
            if (0.0 <= fVar52) {
              fVar57 = fVar40;
            }
            if (*(char *)(param_1 + 0x28) == '\0') {
              if (0 < *(int *)(param_1 + 0x44)) {
                lVar5 = 0;
                uVar6 = 0;
                do {
                  if (*(long *)(param_1 + 0x48) == 0) goto LAB_043aa13c;
                  FUN_05894708(&local_38c,*(long *)(param_1 + 0x48),uVar6 & 0xffffffff,DAT_091b1750)
                  ;
                  fVar55 = fStack_384;
                  fVar54 = fStack_388;
                  fVar40 = local_38c;
                  lVar10 = *(long *)(param_1 + 0x50);
                  if (lVar10 == 0) goto LAB_043aa13c;
                  if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_043aa170;
                  lVar10 = lVar10 + lVar5;
                  fVar59 = *(float *)(lVar10 + 0x20);
                  fVar19 = *(float *)(lVar10 + 0x24);
                  uVar4 = *(undefined4 *)(lVar10 + 0x48);
                  fVar15 = *(float *)(lVar10 + 0x28);
                  uVar21 = NEON_ushl(CONCAT44(fStack_364,fStack_364),0xffffffe8fffffff0,4);
                  uVar12 = CONCAT44(fStack_35c,fStack_360);
                  uVar48 = NEON_ushl(CONCAT44(uVar4,uVar4),0xffffffe8fffffff0,4);
                  uVar20 = CONCAT26((short)((ulong)uVar21 >> 0x20),
                                    CONCAT24((short)uVar21,
                                             CONCAT22((short)((uint)fStack_364 >> 8),
                                                      SUB42(fStack_364,0)))) & 0xff00ff00ff00ff;
                  auVar31._2_2_ = 0;
                  auVar31._0_2_ = (ushort)uVar20;
                  auVar31._4_2_ = (short)(uVar20 >> 0x10);
                  auVar31._6_2_ = 0;
                  auVar31._8_2_ = (short)(uVar20 >> 0x20);
                  auVar31._10_2_ = 0;
                  auVar31._12_2_ = (short)(uVar20 >> 0x30);
                  auVar31._14_2_ = 0;
                  auVar23 = NEON_ucvtf(auVar31,4);
                  uVar20 = CONCAT26((short)((ulong)uVar48 >> 0x20),
                                    CONCAT24((short)uVar48,
                                             CONCAT22((short)((uint)uVar4 >> 8),(short)uVar4))) &
                           0xff00ff00ff00ff;
                  auVar45._2_2_ = 0;
                  auVar45._0_2_ = (ushort)uVar20;
                  auVar45._4_2_ = (short)(uVar20 >> 0x10);
                  auVar45._6_2_ = 0;
                  auVar45._8_2_ = (short)(uVar20 >> 0x20);
                  auVar45._10_2_ = 0;
                  auVar45._12_2_ = (short)(uVar20 >> 0x30);
                  auVar45._14_2_ = 0;
                  auVar46 = NEON_ucvtf(auVar45,4);
                  fVar41 = auVar46._0_4_ / 255.0;
                  fVar58 = auVar46._4_4_ / 255.0;
                  fVar38 = auVar46._8_4_ / 255.0;
                  fVar39 = auVar46._12_4_ / 255.0;
                  auVar32._0_4_ = fVar41 + (auVar23._0_4_ / 255.0 - fVar41) * fVar57;
                  auVar32._4_4_ = fVar58 + (auVar23._4_4_ / 255.0 - fVar58) * fVar57;
                  auVar32._8_4_ = fVar38 + (auVar23._8_4_ / 255.0 - fVar38) * fVar57;
                  auVar32._12_4_ = fVar39 + (auVar23._12_4_ / 255.0 - fVar39) * fVar57;
                  uVar4 = FUN_043b2fc4(auVar32,auVar32._4_4_,auVar32._8_4_,auVar32._12_4_,0);
                  lVar10 = *(long *)(param_1 + 0xe8);
                  if (lVar10 == 0) goto LAB_043aa13c;
                  uVar9 = iVar13 + (int)uVar6;
                  if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_043aa170;
                  lVar10 = lVar10 + (long)(int)uVar9 * 0xc;
                  fVar59 = fVar59 + fVar52 * (fVar40 - fVar59);
                  fVar19 = fVar19 + fVar52 * (fVar54 - fVar19);
                  fVar15 = fVar15 + fVar52 * (fVar55 - fVar15);
                  *(float *)(lVar10 + 0x20) =
                       local_3ac + local_54 * fVar59 + local_394 * fVar19 + local_3a0 * fVar15;
                  *(float *)(lVar10 + 0x24) =
                       local_3b0 + local_58 * fVar59 + local_398 * fVar19 + local_3a4 * fVar15;
                  *(float *)(lVar10 + 0x28) =
                       local_3b4 + local_390 * fVar59 + local_39c * fVar19 + local_3a8 * fVar15;
                  lVar10 = *(long *)(param_1 + 0xf0);
                  if (lVar10 == 0) goto LAB_043aa13c;
                  if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_043aa170;
                  *(undefined8 *)(lVar10 + (long)(int)uVar9 * 8 + 0x20) = uVar12;
                  lVar10 = *(long *)(param_1 + 0xf8);
                  if (lVar10 == 0) goto LAB_043aa13c;
                  if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_043aa170;
                  uVar6 = uVar6 + 1;
                  lVar5 = lVar5 + 0x6c;
                  lVar10 = lVar10 + (long)(int)uVar9 * 0x10;
                  uVar12 = NEON_ushl(CONCAT44(uVar4,uVar4),0xffffffe8fffffff0,4);
                  uVar20 = CONCAT26((short)((ulong)uVar12 >> 0x20),
                                    CONCAT24((short)uVar12,
                                             CONCAT22((short)((uint)uVar4 >> 8),(short)uVar4))) &
                           0xff00ff00ff00ff;
                  auVar33._2_2_ = 0;
                  auVar33._0_2_ = (ushort)uVar20;
                  auVar33._4_2_ = (short)(uVar20 >> 0x10);
                  auVar33._6_2_ = 0;
                  auVar33._8_2_ = (short)(uVar20 >> 0x20);
                  auVar33._10_2_ = 0;
                  auVar33._12_2_ = (short)(uVar20 >> 0x30);
                  auVar33._14_2_ = 0;
                  auVar23 = NEON_ucvtf(auVar33,4);
                  auVar34._0_8_ = CONCAT44(auVar23._4_4_ / 255.0,auVar23._0_4_ / 255.0);
                  auVar34._8_4_ = auVar23._8_4_ / 255.0;
                  auVar34._12_4_ = auVar23._12_4_ / 255.0;
                  *(long *)(lVar10 + 0x28) = auVar34._8_8_;
                  *(undefined8 *)(lVar10 + 0x20) = auVar34._0_8_;
                } while ((long)uVar6 < (long)*(int *)(param_1 + 0x44));
                goto LAB_043a9e70;
              }
            }
            else if (0 < *(int *)(param_1 + 0x44)) {
              lVar5 = 0;
              uVar6 = 0;
              do {
                if (*(long *)(param_1 + 0x48) == 0) goto LAB_043aa13c;
                FUN_05894708(&local_38c,*(long *)(param_1 + 0x48),uVar6 & 0xffffffff,DAT_091b1750);
                fVar41 = fStack_35c;
                fVar59 = fStack_360;
                fVar55 = fStack_384;
                fVar54 = fStack_388;
                fVar40 = local_38c;
                lVar10 = *(long *)(param_1 + 0x50);
                if (lVar10 == 0) goto LAB_043aa13c;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_043aa170;
                lVar10 = lVar10 + lVar5;
                uVar4 = *(undefined4 *)(lVar10 + 0x48);
                fVar58 = *(float *)(lVar10 + 0x20);
                fVar61 = *(float *)(lVar10 + 0x24);
                uVar48 = *(undefined8 *)(lVar10 + 0x4c);
                uVar12 = NEON_ushl(CONCAT44(uVar4,uVar4),0xffffffe8fffffff0,4);
                uVar21 = NEON_ushl(CONCAT44(fStack_364,fStack_364),0xffffffe8fffffff0,4);
                fVar62 = *(float *)(lVar10 + 0x28);
                uVar20 = CONCAT26((short)((ulong)uVar12 >> 0x20),
                                  CONCAT24((short)uVar12,
                                           CONCAT22((short)((uint)uVar4 >> 8),(short)uVar4))) &
                         0xff00ff00ff00ff;
                auVar27._2_2_ = 0;
                auVar27._0_2_ = (ushort)uVar20;
                auVar27._4_2_ = (short)(uVar20 >> 0x10);
                auVar27._6_2_ = 0;
                auVar27._8_2_ = (short)(uVar20 >> 0x20);
                auVar27._10_2_ = 0;
                auVar27._12_2_ = (short)(uVar20 >> 0x30);
                auVar27._14_2_ = 0;
                auVar23 = NEON_ucvtf(auVar27,4);
                uVar20 = CONCAT26((short)((ulong)uVar21 >> 0x20),
                                  CONCAT24((short)uVar21,
                                           CONCAT22((short)((uint)fStack_364 >> 8),
                                                    SUB42(fStack_364,0)))) & 0xff00ff00ff00ff;
                auVar44._2_2_ = 0;
                auVar44._0_2_ = (ushort)uVar20;
                auVar44._4_2_ = (short)(uVar20 >> 0x10);
                auVar44._6_2_ = 0;
                auVar44._8_2_ = (short)(uVar20 >> 0x20);
                auVar44._10_2_ = 0;
                auVar44._12_2_ = (short)(uVar20 >> 0x30);
                auVar44._14_2_ = 0;
                fVar19 = auVar23._0_4_ / 255.0;
                fVar38 = auVar23._4_4_ / 255.0;
                fVar39 = auVar23._8_4_ / 255.0;
                fVar15 = auVar23._12_4_ / 255.0;
                auVar23 = NEON_ucvtf(auVar44,4);
                auVar28._0_4_ = fVar19 + (auVar23._0_4_ / 255.0 - fVar19) * fVar57;
                auVar28._4_4_ = fVar38 + (auVar23._4_4_ / 255.0 - fVar38) * fVar57;
                auVar28._8_4_ = fVar39 + (auVar23._8_4_ / 255.0 - fVar39) * fVar57;
                auVar28._12_4_ = fVar15 + (auVar23._12_4_ / 255.0 - fVar15) * fVar57;
                uVar4 = FUN_043b2fc4(auVar28,auVar28._4_4_,auVar28._8_4_,auVar28._12_4_,0);
                lVar10 = *(long *)(param_1 + 0xe8);
                if (lVar10 == 0) goto LAB_043aa13c;
                uVar9 = iVar13 + (int)uVar6;
                if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_043aa170;
                lVar10 = lVar10 + (long)(int)uVar9 * 0xc;
                fVar58 = fVar58 + fVar52 * (fVar40 - fVar58);
                fVar61 = fVar61 + fVar52 * (fVar54 - fVar61);
                fVar62 = fVar62 + fVar52 * (fVar55 - fVar62);
                *(float *)(lVar10 + 0x20) =
                     local_3ac + local_54 * fVar58 + local_394 * fVar61 + local_3a0 * fVar62;
                *(float *)(lVar10 + 0x24) =
                     local_3b0 + local_58 * fVar58 + local_398 * fVar61 + local_3a4 * fVar62;
                *(float *)(lVar10 + 0x28) =
                     local_3b4 + local_390 * fVar58 + local_39c * fVar61 + local_3a8 * fVar62;
                lVar10 = *(long *)(param_1 + 0xf0);
                if (lVar10 == 0) goto LAB_043aa13c;
                if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_043aa170;
                fVar40 = (float)uVar48;
                fVar54 = (float)((ulong)uVar48 >> 0x20);
                *(ulong *)(lVar10 + (long)(int)uVar9 * 8 + 0x20) =
                     CONCAT44(fVar54 + fVar57 * (fVar41 - fVar54),
                              fVar40 + fVar57 * (fVar59 - fVar40));
                lVar10 = *(long *)(param_1 + 0xf8);
                if (lVar10 == 0) goto LAB_043aa13c;
                if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_043aa170;
                uVar6 = uVar6 + 1;
                lVar5 = lVar5 + 0x6c;
                lVar10 = lVar10 + (long)(int)uVar9 * 0x10;
                uVar12 = NEON_ushl(CONCAT44(uVar4,uVar4),0xffffffe8fffffff0,4);
                uVar20 = CONCAT26((short)((ulong)uVar12 >> 0x20),
                                  CONCAT24((short)uVar12,
                                           CONCAT22((short)((uint)uVar4 >> 8),(short)uVar4))) &
                         0xff00ff00ff00ff;
                auVar29._2_2_ = 0;
                auVar29._0_2_ = (ushort)uVar20;
                auVar29._4_2_ = (short)(uVar20 >> 0x10);
                auVar29._6_2_ = 0;
                auVar29._8_2_ = (short)(uVar20 >> 0x20);
                auVar29._10_2_ = 0;
                auVar29._12_2_ = (short)(uVar20 >> 0x30);
                auVar29._14_2_ = 0;
                auVar23 = NEON_ucvtf(auVar29,4);
                auVar30._0_8_ = CONCAT44(auVar23._4_4_ / 255.0,auVar23._0_4_ / 255.0);
                auVar30._8_4_ = auVar23._8_4_ / 255.0;
                auVar30._12_4_ = auVar23._12_4_ / 255.0;
                *(long *)(lVar10 + 0x28) = auVar30._8_8_;
                *(undefined8 *)(lVar10 + 0x20) = auVar30._0_8_;
              } while ((long)uVar6 < (long)*(int *)(param_1 + 0x44));
LAB_043a9e70:
              iVar13 = iVar13 + (int)uVar6;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < *(int *)(param_1 + 0x24));
        }
      }
      else if ((iVar14 == 2) && (0 < *(int *)(param_1 + 0x24))) {
        iVar13 = 0;
        iVar14 = 0;
        do {
          fVar15 = (float)ChocDino_UIFX_MotionBlurReal__GetLerpFactorUnclamped(param_1);
          fVar39 = 1.0;
          if (fVar15 <= 1.0) {
            fVar39 = fVar15;
          }
          fVar61 = 0.0;
          if (0.0 <= fVar15) {
            fVar61 = fVar39;
          }
          if (*(char *)(param_1 + 0x28) == '\0') {
            if (0 < *(int *)(param_1 + 0x44)) {
              lVar5 = 0;
              uVar6 = 0;
              do {
                if (*(long *)(param_1 + 0x48) == 0) goto LAB_043aa13c;
                FUN_05894708(&local_38c,*(long *)(param_1 + 0x48),uVar6 & 0xffffffff,DAT_091b1750);
                fVar1 = fStack_384;
                fVar62 = fStack_388;
                fVar39 = local_38c;
                lVar10 = *(long *)(param_1 + 0x50);
                if (lVar10 == 0) goto LAB_043aa13c;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_043aa170;
                if (*(long *)(param_1 + 0x48) == 0) goto LAB_043aa13c;
                lVar10 = lVar10 + lVar5;
                uVar9 = *(uint *)(lVar10 + 0x48);
                fVar37 = *(float *)(lVar10 + 0x20);
                fVar49 = *(float *)(lVar10 + 0x24);
                fVar60 = *(float *)(lVar10 + 0x28);
                fVar17 = (float)(uVar9 >> 0x18) / 255.0;
                fVar16 = (float)(uVar9 & 0xff) / 255.0;
                uVar12 = CONCAT44(fStack_35c,fStack_360);
                FUN_05894708(&local_38c,*(long *)(param_1 + 0x48),uVar6 & 0xffffffff,DAT_091b1750);
                uVar20 = NEON_ushl(CONCAT44(uVar9,uVar9),0xfffffff0fffffff8,4);
                uVar47 = NEON_ushl(CONCAT44(fStack_364,fStack_364),0xfffffff0fffffff8,4);
                uVar21 = NEON_ucvtf(uVar20 & 0xff000000ff,4);
                uVar48 = NEON_ucvtf(uVar47 & 0xff000000ff,4);
                fVar18 = (float)uVar21 / 255.0;
                fVar50 = (float)((ulong)uVar21 >> 0x20) / 255.0;
                fVar51 = (float)((uint)fStack_364 & 0xff) / 255.0 - fVar16;
                auVar43._0_4_ = fVar18 + ((float)uVar48 / 255.0 - fVar18) * fVar61;
                auVar43._4_4_ = fVar50 + ((float)((ulong)uVar48 >> 0x20) / 255.0 - fVar50) * fVar61;
                auVar43._8_8_ = 0;
                uVar4 = FUN_043b2fc4(fVar16 + fVar61 * fVar51,auVar43,auVar43._4_4_,
                                     fVar17 + fVar61 * ((float)((uint)fStack_364 >> 0x18) / 255.0 -
                                                       fVar17),fVar51,0);
                lVar10 = *(long *)(param_1 + 0xe8);
                if (lVar10 == 0) goto LAB_043aa13c;
                uVar9 = iVar13 + (int)uVar6;
                if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_043aa170;
                lVar10 = lVar10 + (long)(int)uVar9 * 0xc;
                fVar17 = fVar57 + fVar52 * fVar37 + local_3e4 * fVar49 + fVar54 * fVar60;
                fVar18 = fVar59 + local_3d0 * fVar37 + fVar40 * fVar49 + fVar55 * fVar60;
                fVar50 = fVar58 + fVar41 * fVar37 + fVar19 * fVar49 + fVar38 * fVar60;
                *(float *)(lVar10 + 0x20) =
                     fVar17 + fVar15 * ((local_3ac +
                                        local_54 * fVar39 + local_394 * fVar62 + local_3a0 * fVar1)
                                       - fVar17);
                *(float *)(lVar10 + 0x24) =
                     fVar18 + fVar15 * ((local_3b0 +
                                        local_58 * fVar39 + local_398 * fVar62 + local_3a4 * fVar1)
                                       - fVar18);
                *(float *)(lVar10 + 0x28) =
                     fVar50 + fVar15 * ((local_3b4 +
                                        local_390 * fVar39 + local_39c * fVar62 + local_3a8 * fVar1)
                                       - fVar50);
                lVar10 = *(long *)(param_1 + 0xf0);
                if (lVar10 == 0) goto LAB_043aa13c;
                if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_043aa170;
                *(undefined8 *)(lVar10 + (long)(int)uVar9 * 8 + 0x20) = uVar12;
                lVar10 = *(long *)(param_1 + 0xf8);
                if (lVar10 == 0) goto LAB_043aa13c;
                if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_043aa170;
                uVar6 = uVar6 + 1;
                lVar5 = lVar5 + 0x6c;
                lVar10 = lVar10 + (long)(int)uVar9 * 0x10;
                uVar12 = NEON_ushl(CONCAT44(uVar4,uVar4),0xffffffe8fffffff0,4);
                uVar20 = CONCAT26((short)((ulong)uVar12 >> 0x20),
                                  CONCAT24((short)uVar12,
                                           CONCAT22((short)((uint)uVar4 >> 8),(short)uVar4))) &
                         0xff00ff00ff00ff;
                auVar25._2_2_ = 0;
                auVar25._0_2_ = (ushort)uVar20;
                auVar25._4_2_ = (short)(uVar20 >> 0x10);
                auVar25._6_2_ = 0;
                auVar25._8_2_ = (short)(uVar20 >> 0x20);
                auVar25._10_2_ = 0;
                auVar25._12_2_ = (short)(uVar20 >> 0x30);
                auVar25._14_2_ = 0;
                auVar23 = NEON_ucvtf(auVar25,4);
                auVar26._0_8_ = CONCAT44(auVar23._4_4_ / 255.0,auVar23._0_4_ / 255.0);
                auVar26._8_4_ = auVar23._8_4_ / 255.0;
                auVar26._12_4_ = auVar23._12_4_ / 255.0;
                *(long *)(lVar10 + 0x28) = auVar26._8_8_;
                *(undefined8 *)(lVar10 + 0x20) = auVar26._0_8_;
              } while ((long)uVar6 < (long)*(int *)(param_1 + 0x44));
              goto LAB_043a9970;
            }
          }
          else if (0 < *(int *)(param_1 + 0x44)) {
            lVar5 = 0;
            uVar6 = 0;
            do {
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_043aa13c;
              FUN_05894708(&local_38c,*(long *)(param_1 + 0x48),uVar6 & 0xffffffff,DAT_091b1750);
              fVar1 = fStack_384;
              fVar62 = fStack_388;
              fVar39 = local_38c;
              lVar10 = *(long *)(param_1 + 0x50);
              if (lVar10 == 0) goto LAB_043aa13c;
              if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_043aa170;
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_043aa13c;
              lVar10 = lVar10 + lVar5;
              fVar50 = *(float *)(lVar10 + 0x20);
              fVar51 = *(float *)(lVar10 + 0x24);
              uVar12 = *(undefined8 *)(lVar10 + 0x4c);
              fVar60 = *(float *)(lVar10 + 0x28);
              FUN_05894708(&local_38c,*(long *)(param_1 + 0x48),uVar6 & 0xffffffff,DAT_091b1750);
              fVar18 = fStack_35c;
              fVar17 = fStack_360;
              lVar10 = *(long *)(param_1 + 0x50);
              if (lVar10 == 0) goto LAB_043aa13c;
              if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_043aa170;
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_043aa13c;
              uVar9 = *(uint *)(lVar10 + lVar5 + 0x48);
              fVar53 = (float)(uVar9 >> 0x18) / 255.0;
              fVar56 = (float)(uVar9 & 0xff) / 255.0;
              FUN_05894708(&local_38c,*(long *)(param_1 + 0x48),uVar6 & 0xffffffff,DAT_091b1750);
              uVar20 = NEON_ushl(CONCAT44(uVar9,uVar9),0xfffffff0fffffff8,4);
              uVar47 = NEON_ushl(CONCAT44(fStack_364,fStack_364),0xfffffff0fffffff8,4);
              uVar21 = NEON_ucvtf(uVar20 & 0xff000000ff,4);
              uVar48 = NEON_ucvtf(uVar47 & 0xff000000ff,4);
              fVar16 = (float)uVar21 / 255.0;
              fVar37 = (float)((ulong)uVar21 >> 0x20) / 255.0;
              fVar49 = (float)((uint)fStack_364 & 0xff) / 255.0 - fVar56;
              auVar42._0_4_ = fVar16 + ((float)uVar48 / 255.0 - fVar16) * fVar61;
              auVar42._4_4_ = fVar37 + ((float)((ulong)uVar48 >> 0x20) / 255.0 - fVar37) * fVar61;
              auVar42._8_8_ = 0;
              uVar4 = FUN_043b2fc4(fVar56 + fVar61 * fVar49,auVar42,auVar42._4_4_,
                                   fVar53 + fVar61 * ((float)((uint)fStack_364 >> 0x18) / 255.0 -
                                                     fVar53),fVar49,0);
              lVar10 = *(long *)(param_1 + 0xe8);
              if (lVar10 == 0) goto LAB_043aa13c;
              uVar9 = iVar13 + (int)uVar6;
              if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_043aa170;
              lVar10 = lVar10 + (long)(int)uVar9 * 0xc;
              fVar16 = fVar57 + fVar52 * fVar50 + local_3e4 * fVar51 + fVar54 * fVar60;
              fVar37 = fVar59 + local_3d0 * fVar50 + fVar40 * fVar51 + fVar55 * fVar60;
              fVar50 = fVar58 + fVar41 * fVar50 + fVar19 * fVar51 + fVar38 * fVar60;
              *(float *)(lVar10 + 0x20) =
                   fVar16 + fVar15 * ((local_3ac +
                                      local_54 * fVar39 + local_394 * fVar62 + local_3a0 * fVar1) -
                                     fVar16);
              *(float *)(lVar10 + 0x24) =
                   fVar37 + fVar15 * ((local_3b0 +
                                      local_58 * fVar39 + local_398 * fVar62 + local_3a4 * fVar1) -
                                     fVar37);
              *(float *)(lVar10 + 0x28) =
                   fVar50 + fVar15 * ((local_3b4 +
                                      local_390 * fVar39 + local_39c * fVar62 + local_3a8 * fVar1) -
                                     fVar50);
              lVar10 = *(long *)(param_1 + 0xf0);
              if (lVar10 == 0) goto LAB_043aa13c;
              if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_043aa170;
              fVar39 = (float)uVar12;
              fVar62 = (float)((ulong)uVar12 >> 0x20);
              *(ulong *)(lVar10 + (long)(int)uVar9 * 8 + 0x20) =
                   CONCAT44(fVar62 + (fVar18 - fVar62) * fVar61,fVar39 + (fVar17 - fVar39) * fVar61)
              ;
              lVar10 = *(long *)(param_1 + 0xf8);
              if (lVar10 == 0) goto LAB_043aa13c;
              if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_043aa170;
              uVar6 = uVar6 + 1;
              lVar5 = lVar5 + 0x6c;
              lVar10 = lVar10 + (long)(int)uVar9 * 0x10;
              uVar12 = NEON_ushl(CONCAT44(uVar4,uVar4),0xffffffe8fffffff0,4);
              uVar20 = CONCAT26((short)((ulong)uVar12 >> 0x20),
                                CONCAT24((short)uVar12,
                                         CONCAT22((short)((uint)uVar4 >> 8),(short)uVar4))) &
                       0xff00ff00ff00ff;
              auVar22._2_2_ = 0;
              auVar22._0_2_ = (ushort)uVar20;
              auVar22._4_2_ = (short)(uVar20 >> 0x10);
              auVar22._6_2_ = 0;
              auVar22._8_2_ = (short)(uVar20 >> 0x20);
              auVar22._10_2_ = 0;
              auVar22._12_2_ = (short)(uVar20 >> 0x30);
              auVar22._14_2_ = 0;
              auVar23 = NEON_ucvtf(auVar22,4);
              auVar24._0_8_ = CONCAT44(auVar23._4_4_ / 255.0,auVar23._0_4_ / 255.0);
              auVar24._8_4_ = auVar23._8_4_ / 255.0;
              auVar24._12_4_ = auVar23._12_4_ / 255.0;
              *(long *)(lVar10 + 0x28) = auVar24._8_8_;
              *(undefined8 *)(lVar10 + 0x20) = auVar24._0_8_;
            } while ((long)uVar6 < (long)*(int *)(param_1 + 0x44));
LAB_043a9970:
            iVar13 = iVar13 + (int)uVar6;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(param_1 + 0x24));
      }
      if (*(int *)(DAT_09188400 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar23 = _DAT_01a8e6d0;
      if (*(char *)(*(long *)(DAT_09188400 + 0xb8) + 0x14) == '\0') {
                    /* WARNING: Read-only address (ram,0x01a8e6d0) is written */
        return;
      }
      lVar5 = *(long *)(param_1 + 0xf8);
      if (lVar5 != 0) {
        uVar6 = 0;
        do {
          if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar6) {
            return;
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_043aa170:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar5 = lVar5 + uVar6 * 0x10;
          uVar6 = uVar6 + 1;
          *(long *)(lVar5 + 0x28) = auVar23._8_8_;
          *(long *)(lVar5 + 0x20) = auVar23._0_8_;
          lVar5 = *(long *)(param_1 + 0xf8);
        } while (lVar5 != 0);
      }
    }
  }
LAB_043aa13c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

