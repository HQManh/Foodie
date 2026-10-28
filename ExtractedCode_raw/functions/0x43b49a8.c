// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimpleTMP$$CreateMotionBlurMesh
// address: 0x43b49a8
// body: available
// range: 0x43b49a8-0x43b689f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b6898 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b689c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long ChocDino_UIFX_MotionBlurSimpleTMP__CreateMotionBlurMesh(long param_1)

{
  float *pfVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  float fVar32;
  double dVar31;
  int iVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  ulong uVar45;
  float fVar46;
  float fVar47;
  byte bVar48;
  double dVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  ulong local_490;
  float local_478;
  float local_474;
  ulong local_470;
  float local_458;
  float local_454;
  ulong local_450;
  float local_438;
  float fStack_434;
  ulong local_430;
  float local_418;
  float fStack_414;
  float local_3d8;
  float fStack_3d4;
  float local_3c0;
  float fStack_3bc;
  float local_3b8;
  float local_3b4;
  float fStack_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  undefined1 local_360 [64];
  float local_320;
  float local_31c;
  float local_310;
  float local_30c;
  float local_300;
  float local_2fc;
  float local_2f0;
  float local_2ec;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b0;
  float local_2ac;
  float local_2a8;
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
  undefined4 local_274;
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
  undefined4 local_1b4;
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
  float fStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 uStack_a4;
  
  if ((DAT_09517b2c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188410);
    FUN_03f5c2a4(&DAT_09188408);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b2c = 1;
  }
  iVar33 = *(int *)(param_1 + 0x24);
  fVar23 = *(float *)(param_1 + 0x28) / (float)iVar33;
  fVar29 = 1.0;
  if (fVar23 <= 1.0) {
    fVar29 = fVar23;
  }
  fStack_414 = *(float *)(param_1 + 0x60);
  local_418 = *(float *)(param_1 + 100);
  local_430 = *(ulong *)(param_1 + 0x68);
  fVar24 = 0.0;
  if (0.0 <= fVar23) {
    fVar24 = fVar29;
  }
  fStack_434 = *(float *)(param_1 + 0x70);
  local_438 = *(float *)(param_1 + 0x74);
  local_450 = *(ulong *)(param_1 + 0x78);
  local_454 = *(float *)(param_1 + 0x80);
  local_458 = *(float *)(param_1 + 0x84);
  local_470 = *(ulong *)(param_1 + 0x88);
  local_474 = *(float *)(param_1 + 0x90);
  local_478 = *(float *)(param_1 + 0x94);
  local_490 = *(ulong *)(param_1 + 0x98);
  lVar11 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar11 != 0) {
    UnityEngine_Transform__get_localToWorldMatrix(&local_e0,lVar11,0);
    fVar39 = local_a8;
    fVar38 = local_ac;
    fVar34 = local_b0;
    fVar28 = fStack_b8;
    fVar25 = fStack_bc;
    fVar26 = local_c0;
    fVar40 = local_c8;
    fVar32 = local_cc;
    fVar42 = local_d0;
    fVar27 = fStack_d8;
    fVar29 = local_e0._4_4_;
    fVar23 = (float)local_e0;
    local_394 = fStack_d8;
    local_398 = local_d0;
    local_39c = local_cc;
    local_3a0 = local_c8;
    local_3a4 = local_c0;
    local_3a8 = fStack_bc;
    local_3ac = fStack_b8;
    local_3b4 = local_ac;
    fStack_3b0 = local_b0;
    local_3b8 = local_a8;
    lVar11 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar11 != 0) {
      UnityEngine_Transform__get_worldToLocalMatrix(&local_e0,lVar11,0);
      fVar9 = local_a8;
      fVar52 = local_ac;
      fVar47 = local_b0;
      fVar8 = fStack_b8;
      fVar50 = fStack_bc;
      fVar51 = local_c0;
      fVar7 = local_c8;
      fVar46 = local_cc;
      fVar44 = local_d0;
      fVar6 = fStack_d8;
      fVar43 = local_e0._4_4_;
      fVar41 = (float)local_e0;
      local_3c0 = local_e0._4_4_;
      fStack_3bc = (float)local_e0;
      uVar19 = *(undefined8 *)(param_1 + 0xe0);
      local_3d8 = local_cc;
      fStack_3d4 = local_d0;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = UnityEngine_Object__op_Inequality(uVar19,0,0);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(param_1 + 0x20) == 1) {
          uStack_198 = *(undefined8 *)(param_1 + 0xa8);
          local_1a0 = *(undefined8 *)(param_1 + 0xa0);
          uStack_188 = *(undefined8 *)(param_1 + 0xb8);
          uStack_190 = *(undefined8 *)(param_1 + 0xb0);
          puVar13 = &local_1a0;
          pfVar14 = &local_1e0;
          local_1d4 = uStack_d4;
          local_1c4 = uStack_c4;
          uStack_178 = *(undefined8 *)(param_1 + 200);
          local_180 = *(undefined8 *)(param_1 + 0xc0);
          uStack_168 = *(undefined8 *)(param_1 + 0xd8);
          uStack_170 = *(undefined8 *)(param_1 + 0xd0);
          local_1b4 = uStack_b4;
          local_1a4 = uStack_a4;
          local_1e0 = fVar23;
          local_1dc = fVar29;
          local_1d8 = fVar27;
          local_1d0 = fVar42;
          local_1cc = fVar32;
          local_1c8 = fVar40;
          local_1c0 = fVar26;
          local_1bc = fVar25;
          local_1b8 = fVar28;
          local_1ac = fVar38;
          local_1b0 = fVar34;
          local_1a8 = fVar39;
        }
        else {
          uStack_118 = *(undefined8 *)(param_1 + 0xa8);
          local_120 = *(undefined8 *)(param_1 + 0xa0);
          uStack_108 = *(undefined8 *)(param_1 + 0xb8);
          uStack_110 = *(undefined8 *)(param_1 + 0xb0);
          puVar13 = &local_120;
          pfVar14 = &local_160;
          uStack_f8 = *(undefined8 *)(param_1 + 200);
          local_100 = *(undefined8 *)(param_1 + 0xc0);
          uStack_e8 = *(undefined8 *)(param_1 + 0xd8);
          uStack_f0 = *(undefined8 *)(param_1 + 0xd0);
          local_160 = fStack_414;
          local_15c = local_418;
          local_158 = local_430;
          local_150 = fStack_434;
          local_14c = local_438;
          local_148 = local_450;
          local_140 = local_454;
          local_13c = local_458;
          local_138 = local_470;
          local_130 = local_474;
          local_12c = local_478;
          local_128 = local_490;
        }
        FUN_04125f68(&local_e0,puVar13,pfVar14,0);
        local_418 = local_e0._4_4_;
        fStack_414 = (float)local_e0;
        local_430 = (ulong)(uint)fStack_d8;
        local_438 = local_cc;
        fStack_434 = local_d0;
        local_450 = (ulong)(uint)local_c8;
        local_458 = fStack_bc;
        local_454 = local_c0;
        local_470 = (ulong)(uint)fStack_b8;
        local_478 = local_ac;
        local_474 = local_b0;
        local_490 = (ulong)(uint)local_a8;
        if ((*(long *)(param_1 + 0xe0) == 0) ||
           (lVar11 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xe0),0), lVar11 == 0)
           ) goto LAB_043b6898;
        UnityEngine_Transform__get_worldToLocalMatrix(&local_e0,lVar11,0);
        local_294 = uStack_d4;
        local_284 = uStack_c4;
        local_274 = uStack_b4;
        local_264 = uStack_a4;
        local_2a0 = fVar23;
        local_29c = fVar29;
        local_298 = fVar27;
        local_290 = fVar42;
        local_28c = fVar32;
        local_288 = fVar40;
        local_280 = fVar26;
        local_27c = fVar25;
        local_278 = fVar28;
        local_26c = fVar38;
        local_270 = fVar34;
        local_268 = fVar39;
        FUN_04125f68(&local_220,local_260,&local_2a0,0);
        if (*(long *)(param_1 + 0xe0) == 0) goto LAB_043b6898;
        local_394 = fStack_218;
        local_398 = local_210;
        local_39c = local_20c;
        local_3a0 = local_208;
        local_3a4 = local_200;
        local_3a8 = fStack_1fc;
        local_3ac = fStack_1f8;
        local_3b4 = local_1ec;
        fStack_3b0 = local_1f0;
        local_3b8 = local_1e8;
        lVar11 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xe0),0);
        if (lVar11 == 0) goto LAB_043b6898;
        UnityEngine_Transform__get_localToWorldMatrix(&local_220,lVar11,0);
        local_300 = fVar51;
        local_2fc = fVar50;
        local_2f0 = fVar47;
        local_2ec = fVar52;
        local_31c = fVar43;
        local_320 = fVar41;
        local_310 = fVar44;
        local_30c = fVar46;
        FUN_04125f68(&local_2e0,&local_320,local_360,0);
        local_3c0 = local_2dc;
        fStack_3bc = local_2e0;
        local_3d8 = local_2cc;
        fStack_3d4 = local_2d0;
        fVar51 = local_2c0;
        fVar50 = local_2bc;
        fVar47 = local_2b0;
        fVar52 = local_2ac;
        fVar29 = fStack_21c;
        fVar23 = local_220;
        fVar6 = local_2d8;
        fVar7 = local_2c8;
        fVar8 = local_2b8;
        fVar9 = local_2a8;
      }
      iVar18 = *(int *)(param_1 + 0x20);
      fVar27 = (float)local_430;
      fVar42 = (float)local_450;
      fVar40 = (float)local_470;
      fVar32 = (float)local_490;
      if (iVar18 == 0) {
        if (0 < *(int *)(param_1 + 0x24) + -1) {
          iVar18 = 0;
          iVar33 = 0;
          do {
            fVar26 = (float)ChocDino_UIFX_MotionBlurSimpleTMP__GetLerpFactorUnclamped(param_1);
            if (0 < *(int *)(param_1 + 0x44)) {
              lVar11 = 0;
              uVar12 = 0;
              lVar17 = 0x23;
              do {
                if ((*(long *)(param_1 + 0x48) == 0) ||
                   (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar16 == 0))
                goto LAB_043b6898;
                if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                if ((*(long *)(param_1 + 0x58) == 0) ||
                   (lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar15 == 0))
                goto LAB_043b6898;
                uVar22 = iVar18 + (int)uVar12;
                if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                lVar16 = lVar16 + lVar11;
                fVar25 = *(float *)(lVar16 + 0x20);
                fVar34 = *(float *)(lVar16 + 0x24);
                lVar21 = (long)(int)uVar22;
                fVar41 = *(float *)(lVar16 + 0x28);
                lVar15 = lVar15 + (long)(int)uVar22 * 0xc;
                fVar38 = local_478 + local_418 * fVar25 + local_438 * fVar34 + local_458 * fVar41;
                fVar39 = local_474 + fStack_414 * fVar25 + fStack_434 * fVar34 + local_454 * fVar41;
                fVar28 = fVar32 + fVar27 * fVar25 + fVar42 * fVar34 + fVar40 * fVar41;
                fVar38 = fVar38 + fVar26 * ((local_3b4 +
                                            fVar29 * fVar25 + local_39c * fVar34 +
                                            local_3a8 * fVar41) - fVar38);
                fVar39 = fVar39 + fVar26 * ((fStack_3b0 +
                                            fVar23 * fVar25 + local_398 * fVar34 +
                                            local_3a4 * fVar41) - fVar39);
                fVar28 = fVar28 + fVar26 * ((local_3b8 +
                                            local_394 * fVar25 + local_3a0 * fVar34 +
                                            local_3ac * fVar41) - fVar28);
                *(float *)(lVar15 + 0x20) =
                     fVar47 + fVar51 * fVar28 + fStack_3bc * fVar39 + fStack_3d4 * fVar38;
                *(float *)(lVar15 + 0x24) =
                     fVar52 + fVar50 * fVar28 + local_3c0 * fVar39 + local_3d8 * fVar38;
                *(float *)(lVar15 + 0x28) = fVar9 + fVar8 * fVar28 + fVar6 * fVar39 + fVar7 * fVar38
                ;
                if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
                   (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar16 == 0))
                goto LAB_043b6898;
                if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x28);
                if (lVar15 == 0) goto LAB_043b6898;
                if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                *(undefined8 *)(lVar15 + lVar21 * 8 + 0x20) =
                     *(undefined8 *)(lVar16 + uVar12 * 8 + 0x20);
                if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
                   (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x30), lVar16 == 0))
                goto LAB_043b6898;
                if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x30);
                if (lVar15 == 0) goto LAB_043b6898;
                if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                *(undefined4 *)(lVar15 + lVar21 * 4 + 0x20) =
                     *(undefined4 *)(lVar16 + uVar12 * 4 + 0x20);
                if (((*(long *)(param_1 + 0x58) == 0) ||
                    (lVar16 = *(long *)(*(long *)(param_1 + 0x58) + 0x30), lVar16 == 0)) ||
                   ((*(long *)(param_1 + 0x48) == 0 ||
                    (lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x30), lVar15 == 0))))
                goto LAB_043b6898;
                if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_043b689c;
                bVar48 = *(byte *)(lVar15 + lVar17);
                if (DAT_09515cf4 == '\0') {
                  FUN_03f5c2a4(&DAT_09187e80);
                  DAT_09515cf4 = '\x01';
                }
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                fVar25 = (float)NEON_ucvtf((uint)bVar48);
                dVar49 = (double)(fVar24 * fVar25);
                dVar31 = modf(dVar49,(double *)&local_e0);
                if (0.0 <= fVar24 * fVar25) {
                  if (dVar31 == 0.5) {
                    dVar31 = 1.0;
                    goto LAB_043b5e74;
                  }
                  dVar49 = (double)(long)(dVar49 + 0.5);
                }
                else if (dVar31 == -0.5) {
                  dVar31 = -1.0;
LAB_043b5e74:
                  dVar49 = (double)CONCAT44(local_e0._4_4_,(float)local_e0);
                  if (((long)dVar49 & 1U) != 0) {
                    dVar49 = dVar49 + dVar31;
                  }
                }
                else {
                  dVar49 = (double)(long)(dVar49 + -0.5);
                }
                if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_043b689c;
                uVar12 = uVar12 + 1;
                lVar11 = lVar11 + 0xc;
                lVar17 = lVar17 + 4;
                uVar2 = 0;
                if (dVar49 != INFINITY) {
                  uVar2 = (char)(int)dVar49;
                }
                *(undefined1 *)(lVar16 + lVar21 * 4 + 0x23) = uVar2;
              } while ((long)uVar12 < (long)*(int *)(param_1 + 0x44));
              iVar18 = iVar18 + (int)uVar12;
            }
            if (*(int *)(DAT_09188410 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar20 = *(int *)(param_1 + 0x44);
            iVar18 = iVar18 - iVar20;
            if (**(char **)(DAT_09188410 + 0xb8) == '\0') {
              if (0 < iVar20) {
                uVar12 = 0;
                do {
                  if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
                     (lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x18), lVar11 == 0))
                  goto LAB_043b6898;
                  if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_043b689c;
                  lVar17 = *(long *)(*(long *)(param_1 + 0x58) + 0x18);
                  if (lVar17 == 0) goto LAB_043b6898;
                  uVar22 = iVar18 + (int)uVar12;
                  if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_043b689c;
                  lVar16 = uVar12 * 8;
                  uVar12 = uVar12 + 1;
                  *(undefined8 *)(lVar17 + (long)(int)uVar22 * 8 + 0x20) =
                       *(undefined8 *)(lVar11 + lVar16 + 0x20);
                } while ((long)uVar12 < (long)*(int *)(param_1 + 0x44));
                goto LAB_043b5fe8;
              }
            }
            else if (0 < iVar20) {
              uVar12 = 0;
              do {
                if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
                   (lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar11 == 0))
                goto LAB_043b6898;
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_043b689c;
                lVar17 = *(long *)(*(long *)(param_1 + 0x58) + 0x20);
                if (lVar17 == 0) goto LAB_043b6898;
                uVar22 = iVar18 + (int)uVar12;
                if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_043b689c;
                lVar11 = lVar11 + uVar12 * 0x10;
                uVar12 = uVar12 + 1;
                uVar19 = *(undefined8 *)(lVar11 + 0x20);
                lVar17 = lVar17 + (long)(int)uVar22 * 0x10;
                *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
                *(undefined8 *)(lVar17 + 0x20) = uVar19;
              } while ((long)uVar12 < (long)*(int *)(param_1 + 0x44));
LAB_043b5fe8:
              iVar18 = iVar18 + (int)uVar12;
            }
            iVar33 = iVar33 + 1;
          } while (iVar33 < *(int *)(param_1 + 0x24) + -1);
        }
      }
      else if (iVar18 == 1) {
        uVar19 = *(undefined8 *)(param_1 + 0xe0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar12 = UnityEngine_Object__op_Equality(uVar19,0,0);
        iVar18 = *(int *)(param_1 + 0x24) + -1;
        if ((uVar12 & 1) == 0) {
          if (0 < iVar18) {
            iVar18 = 0;
            iVar33 = 0;
            do {
              fVar25 = (float)ChocDino_UIFX_MotionBlurSimpleTMP__GetLerpFactorUnclamped(param_1);
              fVar26 = 1.0;
              if (fVar25 <= 1.0) {
                fVar26 = fVar25;
              }
              fVar28 = 0.0;
              if (0.0 <= fVar25) {
                fVar28 = fVar26;
              }
              if (0 < *(int *)(param_1 + 0x44)) {
                uVar12 = 0;
                lVar11 = 0x28;
                do {
                  if ((*(long *)(param_1 + 0x50) == 0) ||
                     (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar17 == 0))
                  goto LAB_043b6898;
                  if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
                  if ((*(long *)(param_1 + 0x48) == 0) ||
                     (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar16 == 0))
                  goto LAB_043b6898;
                  if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                  if ((*(long *)(param_1 + 0x58) == 0) ||
                     (lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar15 == 0))
                  goto LAB_043b6898;
                  uVar22 = iVar18 + (int)uVar12;
                  if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                  pfVar14 = (float *)(lVar17 + lVar11);
                  fVar26 = pfVar14[-2];
                  fVar34 = pfVar14[-1];
                  pfVar1 = (float *)(lVar16 + lVar11);
                  fVar43 = pfVar1[-2];
                  fVar44 = pfVar1[-1];
                  fVar38 = *pfVar14;
                  fVar46 = *pfVar1;
                  lVar15 = lVar15 + (long)(int)uVar22 * 0xc;
                  fVar39 = local_474 +
                           fStack_414 * fVar26 + fStack_434 * fVar34 + local_454 * fVar38;
                  fVar41 = local_478 + local_418 * fVar26 + local_438 * fVar34 + local_458 * fVar38;
                  fVar26 = fVar32 + fVar27 * fVar26 + fVar42 * fVar34 + fVar40 * fVar38;
                  fVar39 = fVar39 + fVar25 * ((fStack_3b0 +
                                              fVar23 * fVar43 + local_398 * fVar44 +
                                              local_3a4 * fVar46) - fVar39);
                  fVar41 = fVar41 + fVar25 * ((local_3b4 +
                                              fVar29 * fVar43 + local_39c * fVar44 +
                                              local_3a8 * fVar46) - fVar41);
                  fVar26 = fVar26 + fVar25 * ((local_3b8 +
                                              local_394 * fVar43 + local_3a0 * fVar44 +
                                              local_3ac * fVar46) - fVar26);
                  *(float *)(lVar15 + 0x20) =
                       fVar47 + fVar51 * fVar26 + fStack_3bc * fVar39 + fStack_3d4 * fVar41;
                  *(float *)(lVar15 + 0x24) =
                       fVar52 + fVar50 * fVar26 + local_3c0 * fVar39 + local_3d8 * fVar41;
                  *(float *)(lVar15 + 0x28) =
                       fVar9 + fVar8 * fVar26 + fVar6 * fVar39 + fVar7 * fVar41;
                  if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                     (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x28), lVar17 == 0))
                  goto LAB_043b6898;
                  if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
                  if ((*(long *)(param_1 + 0x48) == 0) ||
                     (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar16 == 0))
                  goto LAB_043b6898;
                  if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                  lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x28);
                  if (lVar15 == 0) goto LAB_043b6898;
                  if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                  uVar19 = *(undefined8 *)(lVar17 + uVar12 * 8 + 0x20);
                  uVar35 = *(undefined8 *)(lVar16 + uVar12 * 8 + 0x20);
                  fVar26 = (float)uVar19;
                  fVar34 = (float)((ulong)uVar19 >> 0x20);
                  *(ulong *)(lVar15 + (long)(int)uVar22 * 8 + 0x20) =
                       CONCAT44(fVar34 + ((float)((ulong)uVar35 >> 0x20) - fVar34) * fVar28,
                                fVar26 + ((float)uVar35 - fVar26) * fVar28);
                  if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                     (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x30), lVar17 == 0))
                  goto LAB_043b6898;
                  if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
                  if ((*(long *)(param_1 + 0x48) == 0) ||
                     (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x30), lVar16 == 0))
                  goto LAB_043b6898;
                  if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                  lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x30);
                  uVar3 = *(uint *)(lVar17 + uVar12 * 4 + 0x20);
                  uVar4 = *(uint *)(lVar16 + uVar12 * 4 + 0x20);
                  uVar30 = NEON_ushl(CONCAT44(uVar3,uVar3),0xfffffff0fffffff8,4);
                  uVar45 = NEON_ushl(CONCAT44(uVar4,uVar4),0xfffffff0fffffff8,4);
                  fVar38 = (float)(uVar3 & 0xff) / 255.0;
                  uVar19 = NEON_ucvtf(uVar30 & 0xff000000ff,4);
                  uVar35 = NEON_ucvtf(uVar45 & 0xff000000ff,4);
                  fVar39 = (float)(uVar3 >> 0x18) / 255.0;
                  fVar26 = (float)uVar19 / 255.0;
                  fVar34 = (float)((ulong)uVar19 >> 0x20) / 255.0;
                  fVar34 = fVar34 + ((float)((ulong)uVar35 >> 0x20) / 255.0 - fVar34) * fVar28;
                  uVar10 = FUN_043b2fc4(fVar38 + fVar28 * ((float)(uVar4 & 0xff) / 255.0 - fVar38),
                                        CONCAT44(fVar34,fVar26 + ((float)uVar35 / 255.0 - fVar26) *
                                                                 fVar28),fVar34,
                                        fVar24 * (fVar39 + fVar28 * ((float)(uVar4 >> 0x18) / 255.0
                                                                    - fVar39)),0);
                  if (lVar15 == 0) goto LAB_043b6898;
                  if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                  uVar12 = uVar12 + 1;
                  lVar11 = lVar11 + 0xc;
                  *(undefined4 *)(lVar15 + (long)(int)uVar22 * 4 + 0x20) = uVar10;
                } while ((long)uVar12 < (long)*(int *)(param_1 + 0x44));
                iVar18 = iVar18 + (int)uVar12;
              }
              if (*(char *)(param_1 + 0x2c) == '\0') {
                if (*(int *)(DAT_09188410 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                iVar20 = *(int *)(param_1 + 0x44);
                iVar18 = iVar18 - iVar20;
                if (**(char **)(DAT_09188410 + 0xb8) == '\0') {
                  if (0 < iVar20) {
                    uVar12 = 0;
                    do {
                      if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
                         (lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x18), lVar11 == 0))
                      goto LAB_043b6898;
                      if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_043b689c;
                      lVar17 = *(long *)(*(long *)(param_1 + 0x58) + 0x18);
                      if (lVar17 == 0) goto LAB_043b6898;
                      uVar22 = iVar18 + (int)uVar12;
                      if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_043b689c;
                      lVar16 = uVar12 * 8;
                      uVar12 = uVar12 + 1;
                      *(undefined8 *)(lVar17 + (long)(int)uVar22 * 8 + 0x20) =
                           *(undefined8 *)(lVar11 + lVar16 + 0x20);
                    } while ((long)uVar12 < (long)*(int *)(param_1 + 0x44));
                    goto LAB_043b667c;
                  }
                }
                else if (0 < iVar20) {
                  uVar12 = 0;
                  do {
                    if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
                       (lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar11 == 0))
                    goto LAB_043b6898;
                    if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_043b689c;
                    lVar17 = *(long *)(*(long *)(param_1 + 0x58) + 0x20);
                    if (lVar17 == 0) goto LAB_043b6898;
                    uVar22 = iVar18 + (int)uVar12;
                    if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_043b689c;
                    lVar11 = lVar11 + uVar12 * 0x10;
                    uVar12 = uVar12 + 1;
                    uVar19 = *(undefined8 *)(lVar11 + 0x20);
                    lVar17 = lVar17 + (long)(int)uVar22 * 0x10;
                    *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
                    *(undefined8 *)(lVar17 + 0x20) = uVar19;
                  } while ((long)uVar12 < (long)*(int *)(param_1 + 0x44));
LAB_043b667c:
                  iVar18 = iVar18 + (int)uVar12;
                }
              }
              else {
                if (*(int *)(DAT_09188410 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                iVar20 = *(int *)(param_1 + 0x44);
                iVar18 = iVar18 - iVar20;
                if (**(char **)(DAT_09188410 + 0xb8) == '\0') {
                  if (0 < iVar20) {
                    lVar11 = 4;
                    do {
                      if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                         (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x18), lVar17 == 0))
                      goto LAB_043b6898;
                      uVar12 = lVar11 - 4;
                      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
                      if ((*(long *)(param_1 + 0x48) == 0) ||
                         (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x18), lVar16 == 0))
                      goto LAB_043b6898;
                      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                      lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x18);
                      if (lVar15 == 0) goto LAB_043b6898;
                      uVar22 = (int)uVar12 + iVar18;
                      if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                      uVar19 = *(undefined8 *)(lVar17 + lVar11 * 8);
                      uVar35 = *(undefined8 *)(lVar16 + lVar11 * 8);
                      lVar17 = lVar11 + -3;
                      fVar26 = (float)uVar19;
                      fVar25 = (float)((ulong)uVar19 >> 0x20);
                      *(ulong *)(lVar15 + (long)(int)uVar22 * 8 + 0x20) =
                           CONCAT44(fVar25 + ((float)((ulong)uVar35 >> 0x20) - fVar25) * fVar28,
                                    fVar26 + ((float)uVar35 - fVar26) * fVar28);
                      lVar11 = lVar11 + 1;
                    } while (lVar17 < *(int *)(param_1 + 0x44));
                    iVar18 = iVar18 + (int)lVar11 + -4;
                  }
                }
                else if (0 < iVar20) {
                  lVar11 = 2;
                  do {
                    if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                       (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x20), lVar17 == 0))
                    goto LAB_043b6898;
                    uVar12 = lVar11 - 2;
                    if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
                    if ((*(long *)(param_1 + 0x48) == 0) ||
                       (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar16 == 0))
                    goto LAB_043b6898;
                    if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                    lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x20);
                    if (lVar15 == 0) goto LAB_043b6898;
                    uVar22 = (int)uVar12 + iVar18;
                    if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                    puVar13 = (undefined8 *)(lVar17 + lVar11 * 0x10);
                    uVar35 = puVar13[1];
                    uVar19 = *puVar13;
                    puVar13 = (undefined8 *)(lVar16 + lVar11 * 0x10);
                    uVar37 = puVar13[1];
                    uVar36 = *puVar13;
                    lVar15 = lVar15 + (long)(int)uVar22 * 0x10;
                    lVar17 = lVar11 + -1;
                    fVar26 = (float)uVar19;
                    fVar25 = (float)((ulong)uVar19 >> 0x20);
                    fVar34 = (float)uVar35;
                    fVar38 = (float)((ulong)uVar35 >> 0x20);
                    *(ulong *)(lVar15 + 0x28) =
                         CONCAT44(fVar38 + ((float)((ulong)uVar37 >> 0x20) - fVar38) * fVar28,
                                  fVar34 + ((float)uVar37 - fVar34) * fVar28);
                    *(ulong *)(lVar15 + 0x20) =
                         CONCAT44(fVar25 + ((float)((ulong)uVar36 >> 0x20) - fVar25) * fVar28,
                                  fVar26 + ((float)uVar36 - fVar26) * fVar28);
                    lVar11 = lVar11 + 1;
                  } while (lVar17 < *(int *)(param_1 + 0x44));
                  iVar18 = iVar18 + (int)lVar11 + -2;
                }
              }
              iVar33 = iVar33 + 1;
            } while (iVar33 < *(int *)(param_1 + 0x24) + -1);
          }
        }
        else if (0 < iVar18) {
          fVar29 = 0.0;
          iVar20 = 0;
          iVar18 = 0;
          do {
            fVar27 = (float)ChocDino_UIFX_MotionBlurSimpleTMP__GetLerpFactorUnclamped
                                      (fVar29,param_1);
            fVar23 = 1.0;
            if (fVar27 <= 1.0) {
              fVar23 = fVar27;
            }
            fVar42 = 0.0;
            if (0.0 <= fVar27) {
              fVar42 = fVar23;
            }
            if (0 < *(int *)(param_1 + 0x44)) {
              lVar11 = 0;
              uVar12 = 0;
              do {
                if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                   (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar17 == 0))
                goto LAB_043b6898;
                if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
                if ((*(long *)(param_1 + 0x48) == 0) ||
                   (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar16 == 0))
                goto LAB_043b6898;
                if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
                if (lVar15 == 0) goto LAB_043b6898;
                uVar22 = iVar20 + (int)uVar12;
                if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                uVar19 = *(undefined8 *)(lVar17 + lVar11 + 0x20);
                uVar35 = *(undefined8 *)(lVar16 + lVar11 + 0x20);
                fVar40 = *(float *)(lVar17 + lVar11 + 0x28);
                fVar26 = *(float *)(lVar16 + lVar11 + 0x28);
                fVar23 = (float)uVar19;
                fVar32 = (float)((ulong)uVar19 >> 0x20);
                lVar15 = lVar15 + (long)(int)uVar22 * 0xc;
                *(ulong *)(lVar15 + 0x20) =
                     CONCAT44(fVar32 + ((float)((ulong)uVar35 >> 0x20) - fVar32) * fVar27,
                              fVar23 + ((float)uVar35 - fVar23) * fVar27);
                *(float *)(lVar15 + 0x28) = fVar40 + fVar27 * (fVar26 - fVar40);
                if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                   (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x28), lVar17 == 0))
                goto LAB_043b6898;
                if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
                if ((*(long *)(param_1 + 0x48) == 0) ||
                   (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar16 == 0))
                goto LAB_043b6898;
                if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x28);
                if (lVar15 == 0) goto LAB_043b6898;
                if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                uVar19 = *(undefined8 *)(lVar17 + uVar12 * 8 + 0x20);
                uVar35 = *(undefined8 *)(lVar16 + uVar12 * 8 + 0x20);
                fVar23 = (float)uVar19;
                fVar32 = (float)((ulong)uVar19 >> 0x20);
                *(ulong *)(lVar15 + (long)(int)uVar22 * 8 + 0x20) =
                     CONCAT44(fVar32 + ((float)((ulong)uVar35 >> 0x20) - fVar32) * fVar42,
                              fVar23 + ((float)uVar35 - fVar23) * fVar42);
                if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                   (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x30), lVar17 == 0))
                goto LAB_043b6898;
                if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
                if ((*(long *)(param_1 + 0x48) == 0) ||
                   (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x30), lVar16 == 0))
                goto LAB_043b6898;
                if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x30);
                uVar3 = *(uint *)(lVar17 + uVar12 * 4 + 0x20);
                uVar4 = *(uint *)(lVar16 + uVar12 * 4 + 0x20);
                uVar30 = NEON_ushl(CONCAT44(uVar3,uVar3),0xfffffff0fffffff8,4);
                uVar45 = NEON_ushl(CONCAT44(uVar4,uVar4),0xfffffff0fffffff8,4);
                fVar40 = (float)(uVar3 & 0xff) / 255.0;
                uVar19 = NEON_ucvtf(uVar30 & 0xff000000ff,4);
                uVar35 = NEON_ucvtf(uVar45 & 0xff000000ff,4);
                fVar26 = (float)(uVar3 >> 0x18) / 255.0;
                fVar23 = (float)uVar19 / 255.0;
                fVar32 = (float)((ulong)uVar19 >> 0x20) / 255.0;
                fVar32 = fVar32 + ((float)((ulong)uVar35 >> 0x20) / 255.0 - fVar32) * fVar42;
                uVar10 = FUN_043b2fc4(fVar40 + fVar42 * ((float)(uVar4 & 0xff) / 255.0 - fVar40),
                                      CONCAT44(fVar32,fVar23 + ((float)uVar35 / 255.0 - fVar23) *
                                                               fVar42),fVar32,
                                      fVar24 * (fVar26 + fVar42 * ((float)(uVar4 >> 0x18) / 255.0 -
                                                                  fVar26)),0);
                if (lVar15 == 0) goto LAB_043b6898;
                if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                uVar12 = uVar12 + 1;
                lVar11 = lVar11 + 0xc;
                *(undefined4 *)(lVar15 + (long)(int)uVar22 * 4 + 0x20) = uVar10;
              } while ((long)uVar12 < (long)*(int *)(param_1 + 0x44));
              iVar20 = iVar20 + (int)uVar12;
            }
            if (*(char *)(param_1 + 0x2c) == '\0') {
              if (*(int *)(DAT_09188410 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar5 = *(int *)(param_1 + 0x44);
              iVar20 = iVar20 - iVar5;
              if (**(char **)(DAT_09188410 + 0xb8) == '\0') {
                if (0 < iVar5) {
                  uVar12 = 0;
                  do {
                    if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
                       (lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x18), lVar11 == 0))
                    goto LAB_043b6898;
                    if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_043b689c;
                    lVar17 = *(long *)(*(long *)(param_1 + 0x58) + 0x18);
                    if (lVar17 == 0) goto LAB_043b6898;
                    uVar22 = iVar20 + (int)uVar12;
                    if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_043b689c;
                    lVar16 = uVar12 * 8;
                    uVar12 = uVar12 + 1;
                    *(undefined8 *)(lVar17 + (long)(int)uVar22 * 8 + 0x20) =
                         *(undefined8 *)(lVar11 + lVar16 + 0x20);
                  } while ((long)uVar12 < (long)*(int *)(param_1 + 0x44));
                  goto LAB_043b5af4;
                }
              }
              else if (0 < iVar5) {
                uVar12 = 0;
                do {
                  if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
                     (lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar11 == 0))
                  goto LAB_043b6898;
                  if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_043b689c;
                  lVar17 = *(long *)(*(long *)(param_1 + 0x58) + 0x20);
                  if (lVar17 == 0) goto LAB_043b6898;
                  uVar22 = iVar20 + (int)uVar12;
                  if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_043b689c;
                  lVar11 = lVar11 + uVar12 * 0x10;
                  uVar12 = uVar12 + 1;
                  uVar19 = *(undefined8 *)(lVar11 + 0x20);
                  lVar17 = lVar17 + (long)(int)uVar22 * 0x10;
                  *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
                  *(undefined8 *)(lVar17 + 0x20) = uVar19;
                } while ((long)uVar12 < (long)*(int *)(param_1 + 0x44));
LAB_043b5af4:
                iVar20 = iVar20 + (int)uVar12;
              }
            }
            else {
              if (*(int *)(DAT_09188410 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar5 = *(int *)(param_1 + 0x44);
              iVar20 = iVar20 - iVar5;
              if (**(char **)(DAT_09188410 + 0xb8) == '\0') {
                if (0 < iVar5) {
                  lVar11 = 4;
                  do {
                    if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                       (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x18), lVar17 == 0))
                    goto LAB_043b6898;
                    uVar12 = lVar11 - 4;
                    if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
                    if ((*(long *)(param_1 + 0x48) == 0) ||
                       (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x18), lVar16 == 0))
                    goto LAB_043b6898;
                    if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                    lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x18);
                    if (lVar15 == 0) goto LAB_043b6898;
                    uVar22 = (int)uVar12 + iVar20;
                    if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                    uVar19 = *(undefined8 *)(lVar17 + lVar11 * 8);
                    uVar35 = *(undefined8 *)(lVar16 + lVar11 * 8);
                    lVar17 = lVar11 + -3;
                    fVar23 = (float)uVar19;
                    fVar27 = (float)((ulong)uVar19 >> 0x20);
                    *(ulong *)(lVar15 + (long)(int)uVar22 * 8 + 0x20) =
                         CONCAT44(fVar27 + ((float)((ulong)uVar35 >> 0x20) - fVar27) * fVar42,
                                  fVar23 + ((float)uVar35 - fVar23) * fVar42);
                    lVar11 = lVar11 + 1;
                  } while (lVar17 < *(int *)(param_1 + 0x44));
                  iVar20 = iVar20 + (int)lVar11 + -4;
                }
              }
              else if (0 < iVar5) {
                lVar11 = 2;
                do {
                  if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                     (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x20), lVar17 == 0))
                  goto LAB_043b6898;
                  uVar12 = lVar11 - 2;
                  if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
                  if ((*(long *)(param_1 + 0x48) == 0) ||
                     (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar16 == 0))
                  goto LAB_043b6898;
                  if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                  lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x20);
                  if (lVar15 == 0) goto LAB_043b6898;
                  uVar22 = (int)uVar12 + iVar20;
                  if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                  puVar13 = (undefined8 *)(lVar17 + lVar11 * 0x10);
                  uVar35 = puVar13[1];
                  uVar19 = *puVar13;
                  puVar13 = (undefined8 *)(lVar16 + lVar11 * 0x10);
                  uVar37 = puVar13[1];
                  uVar36 = *puVar13;
                  lVar15 = lVar15 + (long)(int)uVar22 * 0x10;
                  lVar17 = lVar11 + -1;
                  fVar23 = (float)uVar19;
                  fVar27 = (float)((ulong)uVar19 >> 0x20);
                  fVar32 = (float)uVar35;
                  fVar40 = (float)((ulong)uVar35 >> 0x20);
                  *(ulong *)(lVar15 + 0x28) =
                       CONCAT44(fVar40 + ((float)((ulong)uVar37 >> 0x20) - fVar40) * fVar42,
                                fVar32 + ((float)uVar37 - fVar32) * fVar42);
                  *(ulong *)(lVar15 + 0x20) =
                       CONCAT44(fVar27 + ((float)((ulong)uVar36 >> 0x20) - fVar27) * fVar42,
                                fVar23 + ((float)uVar36 - fVar23) * fVar42);
                  lVar11 = lVar11 + 1;
                } while (lVar17 < *(int *)(param_1 + 0x44));
                iVar20 = iVar20 + (int)lVar11 + -2;
              }
            }
            iVar18 = iVar18 + 1;
            fVar29 = 1.0 / ((float)iVar33 + -1.0) + fVar29;
          } while (iVar18 < *(int *)(param_1 + 0x24) + -1);
        }
      }
      else if ((iVar18 == 2) && (0 < *(int *)(param_1 + 0x24) + -1)) {
        iVar18 = 0;
        iVar33 = 0;
        do {
          fVar25 = (float)ChocDino_UIFX_MotionBlurSimpleTMP__GetLerpFactorUnclamped(param_1);
          fVar26 = 1.0;
          if (fVar25 <= 1.0) {
            fVar26 = fVar25;
          }
          fVar28 = 0.0;
          if (0.0 <= fVar25) {
            fVar28 = fVar26;
          }
          if (0 < *(int *)(param_1 + 0x44)) {
            uVar12 = 0;
            lVar11 = 0x28;
            do {
              if ((*(long *)(param_1 + 0x50) == 0) ||
                 (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar17 == 0))
              goto LAB_043b6898;
              if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
              if ((*(long *)(param_1 + 0x48) == 0) ||
                 (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar16 == 0))
              goto LAB_043b6898;
              if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
              if ((*(long *)(param_1 + 0x58) == 0) ||
                 (lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar15 == 0))
              goto LAB_043b6898;
              uVar22 = iVar18 + (int)uVar12;
              if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
              pfVar14 = (float *)(lVar17 + lVar11);
              fVar26 = pfVar14[-2];
              fVar34 = pfVar14[-1];
              pfVar1 = (float *)(lVar16 + lVar11);
              fVar43 = pfVar1[-2];
              fVar44 = pfVar1[-1];
              fVar38 = *pfVar14;
              fVar46 = *pfVar1;
              lVar15 = lVar15 + (long)(int)uVar22 * 0xc;
              fVar39 = local_474 + fStack_414 * fVar26 + fStack_434 * fVar34 + local_454 * fVar38;
              fVar41 = local_478 + local_418 * fVar26 + local_438 * fVar34 + local_458 * fVar38;
              fVar26 = fVar32 + fVar27 * fVar26 + fVar42 * fVar34 + fVar40 * fVar38;
              fVar39 = fVar39 + fVar25 * ((fStack_3b0 +
                                          fVar23 * fVar43 + local_398 * fVar44 + local_3a4 * fVar46)
                                         - fVar39);
              fVar41 = fVar41 + fVar25 * ((local_3b4 +
                                          fVar29 * fVar43 + local_39c * fVar44 + local_3a8 * fVar46)
                                         - fVar41);
              fVar26 = fVar26 + fVar25 * ((local_3b8 +
                                          local_394 * fVar43 + local_3a0 * fVar44 +
                                          local_3ac * fVar46) - fVar26);
              *(float *)(lVar15 + 0x20) =
                   fVar47 + fVar51 * fVar26 + fStack_3bc * fVar39 + fStack_3d4 * fVar41;
              *(float *)(lVar15 + 0x24) =
                   fVar52 + fVar50 * fVar26 + local_3c0 * fVar39 + local_3d8 * fVar41;
              *(float *)(lVar15 + 0x28) = fVar9 + fVar8 * fVar26 + fVar6 * fVar39 + fVar7 * fVar41;
              if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                 (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x28), lVar17 == 0))
              goto LAB_043b6898;
              if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
              if ((*(long *)(param_1 + 0x48) == 0) ||
                 (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar16 == 0))
              goto LAB_043b6898;
              if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
              lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x28);
              if (lVar15 == 0) goto LAB_043b6898;
              if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
              uVar19 = *(undefined8 *)(lVar17 + uVar12 * 8 + 0x20);
              uVar35 = *(undefined8 *)(lVar16 + uVar12 * 8 + 0x20);
              fVar26 = (float)uVar19;
              fVar34 = (float)((ulong)uVar19 >> 0x20);
              *(ulong *)(lVar15 + (long)(int)uVar22 * 8 + 0x20) =
                   CONCAT44(fVar34 + ((float)((ulong)uVar35 >> 0x20) - fVar34) * fVar28,
                            fVar26 + ((float)uVar35 - fVar26) * fVar28);
              if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                 (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x30), lVar17 == 0))
              goto LAB_043b6898;
              if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
              if ((*(long *)(param_1 + 0x48) == 0) ||
                 (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x30), lVar16 == 0))
              goto LAB_043b6898;
              if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
              lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x30);
              uVar3 = *(uint *)(lVar17 + uVar12 * 4 + 0x20);
              uVar4 = *(uint *)(lVar16 + uVar12 * 4 + 0x20);
              uVar30 = NEON_ushl(CONCAT44(uVar3,uVar3),0xfffffff0fffffff8,4);
              uVar45 = NEON_ushl(CONCAT44(uVar4,uVar4),0xfffffff0fffffff8,4);
              fVar38 = (float)(uVar3 & 0xff) / 255.0;
              uVar19 = NEON_ucvtf(uVar30 & 0xff000000ff,4);
              uVar35 = NEON_ucvtf(uVar45 & 0xff000000ff,4);
              fVar39 = (float)(uVar3 >> 0x18) / 255.0;
              fVar26 = (float)uVar19 / 255.0;
              fVar34 = (float)((ulong)uVar19 >> 0x20) / 255.0;
              fVar34 = fVar34 + ((float)((ulong)uVar35 >> 0x20) / 255.0 - fVar34) * fVar28;
              uVar10 = FUN_043b2fc4(fVar38 + fVar28 * ((float)(uVar4 & 0xff) / 255.0 - fVar38),
                                    CONCAT44(fVar34,fVar26 + ((float)uVar35 / 255.0 - fVar26) *
                                                             fVar28),fVar34,
                                    fVar24 * (fVar39 + fVar28 * ((float)(uVar4 >> 0x18) / 255.0 -
                                                                fVar39)),0);
              if (lVar15 == 0) goto LAB_043b6898;
              if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
              uVar12 = uVar12 + 1;
              lVar11 = lVar11 + 0xc;
              *(undefined4 *)(lVar15 + (long)(int)uVar22 * 4 + 0x20) = uVar10;
            } while ((long)uVar12 < (long)*(int *)(param_1 + 0x44));
            iVar18 = iVar18 + (int)uVar12;
          }
          if (*(char *)(param_1 + 0x2c) == '\0') {
            if (*(int *)(DAT_09188410 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar20 = *(int *)(param_1 + 0x44);
            iVar18 = iVar18 - iVar20;
            if (**(char **)(DAT_09188410 + 0xb8) == '\0') {
              if (0 < iVar20) {
                uVar12 = 0;
                do {
                  if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
                     (lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x18), lVar11 == 0))
                  goto LAB_043b6898;
                  if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_043b689c;
                  lVar17 = *(long *)(*(long *)(param_1 + 0x58) + 0x18);
                  if (lVar17 == 0) goto LAB_043b6898;
                  uVar22 = iVar18 + (int)uVar12;
                  if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_043b689c;
                  lVar16 = uVar12 * 8;
                  uVar12 = uVar12 + 1;
                  *(undefined8 *)(lVar17 + (long)(int)uVar22 * 8 + 0x20) =
                       *(undefined8 *)(lVar11 + lVar16 + 0x20);
                } while ((long)uVar12 < (long)*(int *)(param_1 + 0x44));
                goto LAB_043b557c;
              }
            }
            else if (0 < iVar20) {
              uVar12 = 0;
              do {
                if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
                   (lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar11 == 0))
                goto LAB_043b6898;
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_043b689c;
                lVar17 = *(long *)(*(long *)(param_1 + 0x58) + 0x20);
                if (lVar17 == 0) goto LAB_043b6898;
                uVar22 = iVar18 + (int)uVar12;
                if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_043b689c;
                lVar11 = lVar11 + uVar12 * 0x10;
                uVar12 = uVar12 + 1;
                uVar19 = *(undefined8 *)(lVar11 + 0x20);
                lVar17 = lVar17 + (long)(int)uVar22 * 0x10;
                *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
                *(undefined8 *)(lVar17 + 0x20) = uVar19;
              } while ((long)uVar12 < (long)*(int *)(param_1 + 0x44));
LAB_043b557c:
              iVar18 = iVar18 + (int)uVar12;
            }
          }
          else {
            if (*(int *)(DAT_09188410 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar20 = *(int *)(param_1 + 0x44);
            iVar18 = iVar18 - iVar20;
            if (**(char **)(DAT_09188410 + 0xb8) == '\0') {
              if (0 < iVar20) {
                lVar11 = 4;
                do {
                  if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                     (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x18), lVar17 == 0))
                  goto LAB_043b6898;
                  uVar12 = lVar11 - 4;
                  if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
                  if ((*(long *)(param_1 + 0x48) == 0) ||
                     (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x18), lVar16 == 0))
                  goto LAB_043b6898;
                  if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                  lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x18);
                  if (lVar15 == 0) goto LAB_043b6898;
                  uVar22 = (int)uVar12 + iVar18;
                  if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                  uVar19 = *(undefined8 *)(lVar17 + lVar11 * 8);
                  uVar35 = *(undefined8 *)(lVar16 + lVar11 * 8);
                  lVar17 = lVar11 + -3;
                  fVar26 = (float)uVar19;
                  fVar25 = (float)((ulong)uVar19 >> 0x20);
                  *(ulong *)(lVar15 + (long)(int)uVar22 * 8 + 0x20) =
                       CONCAT44(fVar25 + ((float)((ulong)uVar35 >> 0x20) - fVar25) * fVar28,
                                fVar26 + ((float)uVar35 - fVar26) * fVar28);
                  lVar11 = lVar11 + 1;
                } while (lVar17 < *(int *)(param_1 + 0x44));
                iVar18 = iVar18 + (int)lVar11 + -4;
              }
            }
            else if (0 < iVar20) {
              lVar11 = 2;
              do {
                if (((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
                   (lVar17 = *(long *)(*(long *)(param_1 + 0x50) + 0x20), lVar17 == 0))
                goto LAB_043b6898;
                uVar12 = lVar11 - 2;
                if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_043b689c;
                if ((*(long *)(param_1 + 0x48) == 0) ||
                   (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar16 == 0))
                goto LAB_043b6898;
                if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_043b689c;
                lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x20);
                if (lVar15 == 0) goto LAB_043b6898;
                uVar22 = (int)uVar12 + iVar18;
                if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_043b689c;
                puVar13 = (undefined8 *)(lVar17 + lVar11 * 0x10);
                uVar35 = puVar13[1];
                uVar19 = *puVar13;
                puVar13 = (undefined8 *)(lVar16 + lVar11 * 0x10);
                uVar37 = puVar13[1];
                uVar36 = *puVar13;
                lVar15 = lVar15 + (long)(int)uVar22 * 0x10;
                lVar17 = lVar11 + -1;
                fVar26 = (float)uVar19;
                fVar25 = (float)((ulong)uVar19 >> 0x20);
                fVar34 = (float)uVar35;
                fVar38 = (float)((ulong)uVar35 >> 0x20);
                *(ulong *)(lVar15 + 0x28) =
                     CONCAT44(fVar38 + ((float)((ulong)uVar37 >> 0x20) - fVar38) * fVar28,
                              fVar34 + ((float)uVar37 - fVar34) * fVar28);
                *(ulong *)(lVar15 + 0x20) =
                     CONCAT44(fVar25 + ((float)((ulong)uVar36 >> 0x20) - fVar25) * fVar28,
                              fVar26 + ((float)uVar36 - fVar26) * fVar28);
                lVar11 = lVar11 + 1;
              } while (lVar17 < *(int *)(param_1 + 0x44));
              iVar18 = iVar18 + (int)lVar11 + -2;
            }
          }
          iVar33 = iVar33 + 1;
        } while (iVar33 < *(int *)(param_1 + 0x24) + -1);
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        iVar33 = (*(int *)(param_1 + 0x24) + -1) * *(int *)(param_1 + 0x44);
        ChocDino_UIFX_MotionBlurSimpleTMP_VertexData__CopyTo
                  (*(long *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),iVar33);
        if (0 < *(int *)(param_1 + 0x44)) {
          iVar18 = 0;
          do {
            if ((*(long *)(param_1 + 0x58) == 0) ||
               (lVar11 = *(long *)(*(long *)(param_1 + 0x58) + 0x30), lVar11 == 0))
            goto LAB_043b6898;
            uVar22 = iVar33 + iVar18;
            if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_043b689c;
            lVar17 = lVar11 + (long)(int)uVar22 * 4;
            bVar48 = *(byte *)(lVar17 + 0x23);
            if (DAT_09515cf4 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09515cf4 = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            fVar29 = (float)NEON_ucvtf((uint)bVar48);
            dVar49 = (double)(fVar24 * fVar29);
            dVar31 = modf(dVar49,(double *)&local_e0);
            if (0.0 <= fVar24 * fVar29) {
              if (dVar31 == 0.5) {
                dVar31 = (double)CONCAT44(local_e0._4_4_,(float)local_e0) + 1.0;
                goto LAB_043b6790;
              }
              dVar49 = (double)(long)(dVar49 + 0.5);
            }
            else if (dVar31 == -0.5) {
              dVar31 = (double)CONCAT44(local_e0._4_4_,(float)local_e0) + -1.0;
LAB_043b6790:
              dVar49 = (double)CONCAT44(local_e0._4_4_,(float)local_e0);
              if (((long)(double)CONCAT44(local_e0._4_4_,(float)local_e0) & 1U) != 0) {
                dVar49 = dVar31;
              }
            }
            else {
              dVar49 = (double)(long)(dVar49 + -0.5);
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_043b689c;
            iVar18 = iVar18 + 1;
            uVar2 = 0;
            if (dVar49 != INFINITY) {
              uVar2 = (char)(int)dVar49;
            }
            *(undefined1 *)(lVar17 + 0x23) = uVar2;
          } while (iVar18 < *(int *)(param_1 + 0x44));
        }
        lVar11 = *(long *)(param_1 + 0x58);
        if (**(char **)(DAT_09188408 + 0xb8) != '\0') {
          if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) goto LAB_043b6898;
          uVar12 = *(ulong *)(*(long *)(lVar11 + 0x10) + 0x18);
          if (0 < (int)uVar12) {
            uVar30 = 0;
            do {
              if (*(long *)(param_1 + 0x58) == 0) goto LAB_043b6898;
              lVar11 = *(long *)(*(long *)(param_1 + 0x58) + 0x30);
              uVar10 = FUN_043b2fc4(0x3f800000,0,0x3f800000,fVar24,0);
              if (lVar11 == 0) goto LAB_043b6898;
              if (*(uint *)(lVar11 + 0x18) <= uVar30) {
LAB_043b689c:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar17 = uVar30 * 4;
              uVar30 = uVar30 + 1;
              *(undefined4 *)(lVar11 + lVar17 + 0x20) = uVar10;
            } while ((uVar12 & 0xffffffff) != uVar30);
            lVar11 = *(long *)(param_1 + 0x58);
          }
        }
        return lVar11;
      }
    }
  }
LAB_043b6898:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

