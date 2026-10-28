// rea decompile_all
// name: AssetKits.ParticleImage.Particle$$Render
// address: 0x7727fc0
// body: available
// range: 0x7727fc0-0x7729797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7728618 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_Particle__Render
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,ulong param_4,
               long param_5,long param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 local_500;
  float fStack_4fc;
  undefined4 local_4f8;
  undefined8 local_4f4;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined8 uStack_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  float fStack_4d0;
  undefined4 local_4cc;
  undefined4 uStack_4c8;
  undefined8 local_4c4;
  undefined8 uStack_4bc;
  undefined8 local_4b4;
  undefined8 uStack_4ac;
  undefined8 local_4a4;
  undefined8 uStack_49c;
  undefined4 local_494;
  float fStack_490;
  undefined4 local_48c;
  undefined8 local_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined8 uStack_474;
  undefined4 local_46c;
  undefined4 local_468;
  float fStack_464;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined4 local_428;
  float local_424;
  undefined4 local_420;
  undefined8 local_41c;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 uStack_408;
  undefined4 local_400;
  undefined4 local_3fc;
  float local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined8 local_3ec;
  undefined8 uStack_3e4;
  undefined8 local_3dc;
  undefined8 uStack_3d4;
  undefined8 local_3cc;
  undefined8 uStack_3c4;
  undefined4 local_3bc;
  float local_3b8;
  undefined4 local_3b4;
  undefined8 local_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined8 uStack_39c;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  float local_350;
  float local_34c;
  undefined4 local_348;
  undefined8 local_344;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined4 local_324;
  float local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined8 local_314;
  undefined8 uStack_30c;
  undefined8 local_304;
  undefined8 uStack_2fc;
  ulong local_2f4;
  undefined8 uStack_2ec;
  float local_2e4;
  float local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined8 uStack_2c4;
  undefined4 local_2bc;
  undefined4 local_2b8;
  float local_2b4;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  ulong local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [32];
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
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  float local_a8;
  
  if ((DAT_09522a33 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1708);
    FUN_03f5c2a4(&DAT_091b3598);
    FUN_03f5c2a4(&DAT_091b35a0);
    FUN_03f5c2a4(&DAT_091b16f0);
    FUN_03f5c2a4(&DAT_091b35a8);
    FUN_03f5c2a4(&DAT_091b0458);
    FUN_03f5c2a4(&DAT_091b35b0);
    FUN_03f5c2a4(&DAT_091b0460);
    FUN_03f5c2a4(&DAT_091b35b8);
    FUN_03f5c2a4(&DAT_0917cfe8);
    FUN_03f5c2a4(&DAT_0918c4c0);
    DAT_09522a33 = 1;
  }
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_118 = 0;
  local_130 = 0;
  uStack_12c = 0;
  local_140 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  local_128 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_180 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  memset(auStack_258,0,0x88);
  uVar20 = (undefined4)param_4;
  lVar6 = *(long *)(param_5 + 0x10);
  local_260 = 0;
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  if (lVar6 == 0) goto LAB_07728618;
  if ((*(char *)(lVar6 + 0x728) != '\0') &&
     (uVar16 = (ulong)(uint)*(float *)(lVar6 + 0x7cc),
     *(float *)(param_5 + 0xd8) <= *(float *)(lVar6 + 0x7cc))) {
    if (*(long *)(param_5 + 0x160) != 0) {
      UnityEngine_UI_VertexHelper__Clear(*(long *)(param_5 + 0x160),0);
      lVar6 = *(long *)(param_5 + 0x158);
      if (lVar6 != 0) {
        if (1 < *(int *)(lVar6 + 0x18)) {
          uVar20 = *(undefined4 *)(param_5 + 0x20);
          uVar22 = *(uint *)(param_5 + 0x24);
          FUN_0596ed5c(lVar6,*(int *)(lVar6 + 0x18) + -1,DAT_091b35b0);
          lVar6 = *(long *)(param_5 + 0x158);
          if (lVar6 == 0) goto LAB_07728618;
          uVar16 = (ulong)uVar22;
          FUN_0596edb8(uVar20,lVar6,*(int *)(lVar6 + 0x18) + -1,DAT_091b35b8);
          if (*(long *)(param_5 + 0x158) == 0) goto LAB_07728618;
          fVar21 = *(float *)(param_5 + 0x74);
          FUN_0596ed5c(*(long *)(param_5 + 0x158),0,DAT_091b35b0);
          if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
          lVar6 = *(long *)(param_5 + 0x158);
          if (param_3 + *(float *)(*(long *)(param_5 + 0x10) + 0x750) <= fVar21) {
            if (lVar6 == 0) goto LAB_07728618;
            FUN_05970a14(lVar6,0,DAT_091b35a0);
            lVar6 = *(long *)(param_5 + 0x158);
          }
          if (lVar6 == 0) goto LAB_07728618;
        }
        iVar5 = 0;
        while (fVar21 = (float)uVar16, iVar5 < *(int *)(lVar6 + 0x18)) {
          uVar20 = FUN_0596ed5c(lVar6,iVar5,DAT_091b35b0);
          lVar6 = *(long *)(param_5 + 0x158);
          local_118 = CONCAT44(fVar21,uVar20);
          if (lVar6 == 0) goto LAB_07728618;
          if (iVar5 < *(int *)(lVar6 + 0x18) + -1) {
            fVar8 = (float)FUN_0596ed5c(lVar6,iVar5 + 1,DAT_091b35b0);
            if (*(long *)(param_5 + 0x158) == 0) goto LAB_07728618;
            fVar10 = fVar21;
            fVar9 = (float)FUN_0596ed5c(*(long *)(param_5 + 0x158),iVar5,DAT_091b35b0);
            fVar21 = fVar21 - fVar10;
            lVar6 = *(long *)(param_5 + 0x158);
            local_118 = CONCAT44(fVar21,fVar8 - fVar9);
            if (lVar6 == 0) goto LAB_07728618;
          }
          fVar10 = (float)FUN_0596ed5c(lVar6,iVar5,DAT_091b35b0);
          fVar8 = fVar21;
          fVar9 = (float)UnityEngine_Vector2__Normalize(&local_118,0);
          if (*(int *)(DAT_0918c4c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = *(long *)(DAT_0918c4c0 + 0xb8);
          lVar6 = *(long *)(param_5 + 0x10);
          local_140 = *(undefined8 *)(lVar7 + 0x20);
          uStack_138 = (undefined4)*(undefined8 *)(lVar7 + 0x28);
          uStack_168 = *(undefined8 *)(lVar7 + 0x58);
          local_170 = *(undefined8 *)(lVar7 + 0x50);
          uStack_158 = *(undefined8 *)(lVar7 + 0x68);
          uStack_160 = *(undefined8 *)(lVar7 + 0x60);
          uStack_12c = (undefined4)*(undefined8 *)(lVar7 + 0x34);
          local_128 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x34) >> 0x20);
          uStack_134 = (undefined4)*(undefined8 *)(lVar7 + 0x2c);
          local_130 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x2c) >> 0x20);
          uStack_148 = *(undefined8 *)(lVar7 + 0x78);
          local_150 = *(ulong *)(lVar7 + 0x70);
          if (lVar6 == 0) goto LAB_07728618;
          if (*(char *)(lVar6 + 0x7c8) == '\0') {
            uStack_1a8 = *(undefined8 *)(lVar6 + 0x798);
            local_1b0 = *(undefined8 *)(lVar6 + 0x790);
            uStack_198 = *(undefined8 *)(lVar6 + 0x7a8);
            local_1a0 = *(undefined8 *)(lVar6 + 0x7a0);
            uStack_188 = *(undefined8 *)(lVar6 + 0x7b8);
            local_190 = *(undefined8 *)(lVar6 + 0x7b0);
            local_180 = *(undefined8 *)(lVar6 + 0x7c0);
            if (*(long *)(param_5 + 0x158) == 0) goto LAB_07728618;
            fVar27 = 1.0;
            fVar25 = (float)*(int *)(*(long *)(param_5 + 0x158) + 0x18);
            fVar26 = 0.0;
            AssetKits_ParticleImage_Extensions__Remap((float)iVar5,0,fVar25,0x3f800000,0,0);
            fVar28 = (float)UnityEngine_ParticleSystem_MinMaxGradient__Evaluate(&local_1b0,0);
            lVar6 = *(long *)(param_5 + 0x10);
            if (lVar6 == 0) goto LAB_07728618;
          }
          else {
            fVar28 = *(float *)(param_5 + 0x78);
            fVar26 = *(float *)(param_5 + 0x7c);
            uStack_1a8 = *(undefined8 *)(lVar6 + 0x798);
            local_1b0 = *(undefined8 *)(lVar6 + 0x790);
            fVar25 = *(float *)(param_5 + 0x80);
            fVar27 = *(float *)(param_5 + 0x84);
            uStack_198 = *(undefined8 *)(lVar6 + 0x7a8);
            local_1a0 = *(undefined8 *)(lVar6 + 0x7a0);
            uStack_188 = *(undefined8 *)(lVar6 + 0x7b8);
            local_190 = *(undefined8 *)(lVar6 + 0x7b0);
            local_180 = *(undefined8 *)(lVar6 + 0x7c0);
            if (*(long *)(param_5 + 0x158) == 0) goto LAB_07728618;
            fVar19 = 1.0;
            fVar17 = (float)*(int *)(*(long *)(param_5 + 0x158) + 0x18);
            fVar15 = 0.0;
            AssetKits_ParticleImage_Extensions__Remap((float)iVar5,0,fVar17,0x3f800000,0,0);
            fVar11 = (float)UnityEngine_ParticleSystem_MinMaxGradient__Evaluate(&local_1b0,0);
            lVar6 = *(long *)(param_5 + 0x10);
            if (lVar6 == 0) goto LAB_07728618;
            fVar27 = fVar27 * fVar19;
            fVar25 = fVar25 * fVar17;
            fVar26 = fVar26 * fVar15;
            fVar28 = fVar28 * fVar11;
          }
          local_180 = *(undefined8 *)(lVar6 + 0x788);
          uStack_1a8 = *(undefined8 *)(lVar6 + 0x760);
          local_1b0 = *(undefined8 *)(lVar6 + 0x758);
          uStack_198 = *(undefined8 *)(lVar6 + 0x770);
          local_1a0 = *(undefined8 *)(lVar6 + 0x768);
          uStack_188 = *(undefined8 *)(lVar6 + 0x780);
          local_190 = *(undefined8 *)(lVar6 + 0x778);
          fVar17 = *(float *)(param_5 + 0xa8);
          fVar19 = 0.0;
          uVar14 = AssetKits_ParticleImage_Extensions__Remap
                             (*(undefined4 *)(param_5 + 0x74),0,fVar17,0,0x3f800000,0);
          fVar15 = *(float *)(param_5 + 0xb0);
          fVar11 = (float)UnityEngine_ParticleSystem_MinMaxGradient__Evaluate
                                    (uVar14,fVar15,&local_1b0,0);
          uVar20 = FUN_043b2fc4(fVar28 * fVar11,fVar26 * fVar15,fVar25 * fVar17,fVar27 * fVar19,0);
          lVar6 = *(long *)(param_5 + 0x10);
          if (lVar6 == 0) goto LAB_07728618;
          uStack_1c8 = *(undefined8 *)(lVar6 + 0x738);
          local_1d0 = *(undefined8 *)(lVar6 + 0x730);
          uStack_1b8 = *(undefined8 *)(lVar6 + 0x748);
          local_1c0 = *(undefined8 *)(lVar6 + 0x740);
          fVar28 = *(float *)(param_5 + 0x68);
          if (*(long *)(param_5 + 0x158) == 0) goto LAB_07728618;
          fVar25 = (float)iVar5;
          AssetKits_ParticleImage_Extensions__Remap
                    (fVar25,0,(float)*(int *)(*(long *)(param_5 + 0x158) + 0x18),0x3f800000,0,0);
          fVar26 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(&local_1d0,0);
          if ((*(long *)(param_5 + 0x158) == 0) || (*(long *)(param_5 + 0x160) == 0))
          goto LAB_07728618;
          fVar28 = fVar28 * fVar26;
          uStack_2d0 = uStack_138;
          local_2d8 = local_140;
          local_2dc = 0;
          local_2b8 = 0;
          local_2b0 = 0;
          fVar8 = fVar28 * -fVar8 * 0.5;
          uStack_2c4 = CONCAT44(local_128,uStack_12c);
          fVar9 = fVar9 * fVar28 * 0.5;
          uStack_2cc = uStack_134;
          uStack_2c8 = local_130;
          uStack_2a0 = uStack_168;
          local_2a8 = local_170;
          local_2e4 = fVar10 + fVar8;
          uStack_290 = uStack_158;
          local_298 = uStack_160;
          local_2e0 = fVar21 + fVar9;
          local_2b4 = (1.0 / (float)*(int *)(*(long *)(param_5 + 0x158) + 0x18)) * fVar25;
          uStack_280 = uStack_148;
          local_288 = local_150;
          local_2bc = uVar20;
          UnityEngine_UI_VertexHelper__AddVert(*(long *)(param_5 + 0x160),&local_2e4,0);
          if ((*(long *)(param_5 + 0x158) == 0) || (*(long *)(param_5 + 0x160) == 0))
          goto LAB_07728618;
          local_34c = fVar21 - fVar9;
          param_4 = (ulong)(uint)local_34c;
          uStack_330 = CONCAT44(local_128,uStack_12c);
          uStack_33c = uStack_138;
          local_344 = local_140;
          uStack_338 = uStack_134;
          uStack_334 = local_130;
          local_348 = 0;
          uStack_30c = uStack_168;
          local_314 = local_170;
          local_350 = fVar10 - fVar8;
          local_324 = 0x3f800000;
          local_318 = 0;
          local_31c = 0;
          uStack_2fc = uStack_158;
          local_304 = uStack_160;
          uStack_2ec = uStack_148;
          local_2f4 = local_150;
          local_320 = (1.0 / (float)*(int *)(*(long *)(param_5 + 0x158) + 0x18)) * fVar25;
          uVar16 = local_150;
          local_328 = uVar20;
          UnityEngine_UI_VertexHelper__AddVert(*(long *)(param_5 + 0x160),&local_350,0);
          lVar6 = *(long *)(param_5 + 0x158);
          iVar5 = iVar5 + 1;
          if (lVar6 == 0) goto LAB_07728618;
        }
        lVar6 = *(long *)(param_5 + 0x160);
        if (lVar6 != 0) {
          iVar5 = 0;
          goto LAB_07728594;
        }
      }
    }
    goto LAB_07728618;
  }
LAB_077286cc:
  if (*(float *)(param_5 + 0xa8) < *(float *)(param_5 + 0x74)) {
    if (*(long *)(param_5 + 0x10) != 0) {
      lVar6 = *(long *)(param_5 + 0x158);
      if (*(char *)(*(long *)(param_5 + 0x10) + 0x7c9) == '\0') {
        if (lVar6 != 0) {
          if (1 < *(int *)(lVar6 + 0x18)) {
            return;
          }
          goto LAB_07728928;
        }
      }
      else if (lVar6 != 0) {
LAB_07728928:
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        return;
      }
    }
    goto LAB_07728618;
  }
  fVar21 = 0.0;
  *(undefined4 *)(param_5 + 0x148) = 0;
  cVar2 = DAT_0951690d;
  uVar14 = CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x20) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(param_5 + 0x138) >> 0x20),
                    (float)*(undefined8 *)(param_5 + 0x20) - (float)*(undefined8 *)(param_5 + 0x138)
                   );
  *(undefined8 *)(param_5 + 0x140) = uVar14;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    uVar14 = *(undefined8 *)(param_5 + 0x140);
    fVar21 = *(float *)(param_5 + 0x148);
    DAT_0951690d = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar8 = (float)((ulong)uVar14 >> 0x20);
  if (SQRT((float)uVar14 * (float)uVar14 + fVar8 * fVar8 + fVar21 * fVar21) == 0.0) {
    *(undefined4 *)(param_5 + 0x148) = 0;
    *(undefined8 *)(param_5 + 0x140) = *(undefined8 *)(param_5 + 0x48);
  }
  if (DAT_0951690c == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_0951690c = '\x01';
  }
  if (DAT_0951690d == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951690d = '\x01';
  }
  fVar21 = *(float *)(param_5 + 0x140);
  uVar14 = *(undefined8 *)(param_5 + 0x144);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar8 = (float)uVar14;
  fVar10 = (float)((ulong)uVar14 >> 0x20);
  fVar21 = SQRT(fVar21 * fVar21 + fVar8 * fVar8 + fVar10 * fVar10);
  if (fVar21 <= 1e-05) {
    fVar21 = *(float *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
    uVar14 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
  }
  else {
    uVar14 = CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x140) >> 0x20) / fVar21,
                      (float)*(undefined8 *)(param_5 + 0x140) / fVar21);
    fVar21 = *(float *)(param_5 + 0x148) / fVar21;
  }
  *(undefined8 *)(param_5 + 0x140) = uVar14;
  *(float *)(param_5 + 0x148) = fVar21;
  *(undefined8 *)(param_5 + 0x138) = *(undefined8 *)(param_5 + 0x20);
  if (param_6 == 0) goto LAB_07728618;
  iVar5 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_6,0);
  lVar6 = *(long *)(param_5 + 0x10);
  local_d0 = 0;
  uStack_cc = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_c8 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  if (lVar6 == 0) goto LAB_07728618;
  iVar4 = *(int *)(lVar6 + 0x6ac);
  if (iVar4 == 0) {
    uStack_1c8 = *(undefined8 *)(lVar6 + 0x6b8);
    local_1d0 = *(undefined8 *)(lVar6 + 0x6b0);
    uStack_1b8 = *(undefined8 *)(lVar6 + 0x6c8);
    local_1c0 = *(undefined8 *)(lVar6 + 0x6c0);
    uVar14 = AssetKits_ParticleImage_Extensions__Remap
                       (*(undefined4 *)(param_5 + 0x74),0,*(undefined4 *)(param_5 + 0xa8),0,
                        0x3f800000,0);
    fVar21 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                              (uVar14,*(undefined4 *)(param_5 + 0xc4),&local_1d0,0);
    lVar6 = *(long *)(param_5 + 0x10);
    if (lVar6 == 0) goto LAB_07728618;
    uStack_1c8 = *(undefined8 *)(lVar6 + 0x6d8);
    local_1d0 = *(undefined8 *)(lVar6 + 0x6d0);
    uStack_1b8 = *(undefined8 *)(lVar6 + 0x6e8);
    local_1c0 = *(undefined8 *)(lVar6 + 0x6e0);
    uVar20 = 0;
    iVar4 = *(int *)(lVar6 + 0x6fc);
    uVar14 = AssetKits_ParticleImage_Extensions__Remap
                       (*(undefined4 *)(param_5 + 0x74),0,*(undefined4 *)(param_5 + 0xa8),0,
                        0x3f800000,0);
    fVar8 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                             (uVar14,*(undefined4 *)(param_5 + 0xd4),&local_1d0,0);
    fVar21 = fVar21 * (float)iVar4;
    iVar4 = -0x80000000;
    if (fVar21 != INFINITY) {
      iVar4 = (int)fVar21;
    }
    iVar3 = -0x80000000;
    if (fVar8 != INFINITY) {
      iVar3 = (int)fVar8;
    }
    iVar4 = iVar3 + iVar4;
LAB_07728a48:
    *(int *)(param_5 + 0x150) = iVar4;
  }
  else if (iVar4 == 2) {
    fVar21 = *(float *)(param_5 + 0x14c);
    fVar8 = 1.0 / (float)*(int *)(lVar6 + 0x6f8);
    if (*(int *)(lVar6 + 0xf4) == 1) {
      fVar10 = (float)UnityEngine_Time__get_deltaTime(0);
    }
    else {
      fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    }
    fVar21 = fVar21 + fVar10;
    *(float *)(param_5 + 0x14c) = fVar21;
    if (fVar8 <= fVar21) {
      iVar4 = *(int *)(param_5 + 0x150);
      do {
        fVar21 = fVar21 - fVar8;
        iVar4 = iVar4 + 1;
      } while (fVar8 <= fVar21);
      *(float *)(param_5 + 0x14c) = fVar21;
      goto LAB_07728a48;
    }
  }
  else if (iVar4 == 1) {
    if (DAT_09516ea4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516ea4 = '\x01';
    }
    fVar21 = *(float *)(param_5 + 0x48);
    fVar8 = *(float *)(param_5 + 0x4c);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(param_5 + 0x10);
    if ((lVar6 == 0) || (*(long *)(param_5 + 0xa0) == 0)) goto LAB_07728618;
    uVar20 = 0;
    fVar21 = (float)AssetKits_ParticleImage_Extensions__Remap
                              (SQRT(fVar21 * fVar21 + fVar8 * fVar8),*(undefined4 *)(lVar6 + 0x6f0),
                               *(undefined4 *)(lVar6 + 0x6f4),0,
                               (float)*(int *)(*(long *)(param_5 + 0xa0) + 0x18),0);
    iVar4 = -0x80000000;
    if (fVar21 != INFINITY) {
      iVar4 = (int)fVar21;
    }
    goto LAB_07728a48;
  }
  cVar2 = DAT_09515ce6;
  if (*(long *)(param_5 + 0xa0) == 0) goto LAB_07728618;
  fVar21 = (float)*(int *)(*(long *)(param_5 + 0xa0) + 0x18);
  fVar10 = (float)*(int *)(param_5 + 0x150) -
           (float)(int)((float)*(int *)(param_5 + 0x150) / fVar21) * fVar21;
  fVar8 = 0.0;
  if (fVar10 <= fVar21) {
    fVar21 = fVar10;
  }
  fVar9 = 0.0;
  if (0.0 <= fVar10) {
    fVar9 = fVar21;
  }
  fVar21 = INFINITY;
  iVar4 = -0x80000000;
  if (fVar9 != INFINITY) {
    iVar4 = (int)fVar9;
  }
  *(int *)(param_5 + 0x154) = iVar4;
  if (cVar2 == '\0') {
    fVar21 = INFINITY;
    fVar8 = 0.0;
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  lVar6 = *(long *)(param_5 + 0x10);
  if (lVar6 == 0) goto LAB_07728618;
  bVar1 = *(byte *)(lVar6 + 0x459);
  memcpy(auStack_258,(void *)(lVar6 + 0x458),0x88);
  if ((bVar1 & 1) == 0) {
    iVar4 = UnityEngine_ParticleSystem_MinMaxCurve__get_mode(auStack_250,0);
    if (iVar4 - 1U < 2) {
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
      memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
      uVar20 = 0;
      fVar8 = *(float *)(param_5 + 0xa8);
      AssetKits_ParticleImage_Extensions__Remap
                (*(undefined4 *)(param_5 + 0x74),0,fVar8,0,0x3f800000,0);
      fVar21 = *(float *)(param_5 + 0xb4);
      UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(auStack_250,0);
    }
    else if ((iVar4 == 3) || (iVar4 == 0)) {
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
      fVar8 = *(float *)(param_5 + 0xa8);
      uVar23 = *(undefined4 *)(param_5 + 0x74);
      memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
      uVar14 = AssetKits_ParticleImage_Extensions__Remap(uVar23,0,fVar8,0,0x3f800000,0);
      UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                (uVar14,*(undefined4 *)(param_5 + 0xb4),auStack_250,0);
      fVar21 = 0.0;
      uVar20 = 0;
      AssetKits_ParticleImage_Extensions__Remap(uVar23,0);
    }
    lVar6 = *(long *)(param_5 + 0x10);
    if (lVar6 == 0) goto LAB_07728618;
    if (*(char *)(lVar6 + 0x590) == '\0') {
      lVar6 = UnityEngine_Component__get_transform(lVar6,0);
      if (lVar6 == 0) goto LAB_07728618;
      uVar23 = UnityEngine_Transform__get_rotation(lVar6,0);
      local_c0 = CONCAT44(fVar21,uVar23);
      local_b8 = fVar8;
      local_b4 = uVar20;
      uVar23 = UnityEngine_Quaternion__Internal_Inverse(&local_c0,0);
      local_268 = CONCAT44(fVar21,uVar23);
      local_260 = CONCAT44(uVar20,fVar8);
      fVar8 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_268,0);
      UnityEngine_Quaternion__Internal_MakePositive(fVar8 * 57.29578,fVar21 * 57.29578,0);
    }
  }
  else {
    iVar4 = UnityEngine_ParticleSystem_MinMaxCurve__get_mode(auStack_230,0);
    if (iVar4 == 0) {
LAB_07728bc8:
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
      uVar23 = *(undefined4 *)(param_5 + 0xa8);
      uVar12 = *(undefined4 *)(param_5 + 0x74);
      memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
      uVar20 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                         (*(undefined4 *)(param_5 + 0xb4),*(undefined4 *)(param_5 + 0xb4),
                          auStack_230,0);
      AssetKits_ParticleImage_Extensions__Remap(uVar12,0,uVar23,0,uVar20,0);
    }
    else {
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
      memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
      iVar4 = UnityEngine_ParticleSystem_MinMaxCurve__get_mode(auStack_230,0);
      if (iVar4 == 3) goto LAB_07728bc8;
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
      memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
      uVar14 = AssetKits_ParticleImage_Extensions__Remap
                         (*(undefined4 *)(param_5 + 0x74),0,*(undefined4 *)(param_5 + 0xa8),0,
                          0x3f800000,0);
      UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                (uVar14,*(undefined4 *)(param_5 + 0xb4),auStack_230,0);
    }
    if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
    memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
    iVar4 = UnityEngine_ParticleSystem_MinMaxCurve__get_mode(auStack_210,0);
    if (iVar4 == 0) {
LAB_07728d98:
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
      uVar23 = *(undefined4 *)(param_5 + 0xa8);
      uVar12 = *(undefined4 *)(param_5 + 0x74);
      memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
      uVar20 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                         (*(undefined4 *)(param_5 + 0xb4),*(undefined4 *)(param_5 + 0xb4),
                          auStack_210,0);
      AssetKits_ParticleImage_Extensions__Remap(uVar12,0,uVar23,0,uVar20,0);
    }
    else {
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
      memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
      iVar4 = UnityEngine_ParticleSystem_MinMaxCurve__get_mode(auStack_210,0);
      if (iVar4 == 3) goto LAB_07728d98;
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
      memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
      uVar14 = AssetKits_ParticleImage_Extensions__Remap
                         (*(undefined4 *)(param_5 + 0x74),0,*(undefined4 *)(param_5 + 0xa8),0,
                          0x3f800000,0);
      UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                (uVar14,*(undefined4 *)(param_5 + 0xb4),auStack_210,0);
    }
    if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
    memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
    iVar4 = UnityEngine_ParticleSystem_MinMaxCurve__get_mode(auStack_1f0,0);
    if (iVar4 == 0) {
LAB_07728e8c:
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
      fVar21 = *(float *)(param_5 + 0xa8);
      uVar12 = *(undefined4 *)(param_5 + 0x74);
      memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
      UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                (*(undefined4 *)(param_5 + 0xb4),*(undefined4 *)(param_5 + 0xb4),auStack_1f0,0);
      uVar20 = 0;
      uVar23 = 0;
      AssetKits_ParticleImage_Extensions__Remap(uVar12,0);
    }
    else {
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
      memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
      iVar4 = UnityEngine_ParticleSystem_MinMaxCurve__get_mode(auStack_1f0,0);
      if (iVar4 == 3) goto LAB_07728e8c;
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
      memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x458),0x88);
      uVar23 = 0;
      fVar21 = *(float *)(param_5 + 0xa8);
      AssetKits_ParticleImage_Extensions__Remap
                (*(undefined4 *)(param_5 + 0x74),0,fVar21,0,0x3f800000,0);
      uVar20 = *(undefined4 *)(param_5 + 0xb4);
      UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(auStack_1f0,0);
    }
    lVar6 = *(long *)(param_5 + 0x10);
    if (lVar6 == 0) goto LAB_07728618;
    if (*(char *)(lVar6 + 0x590) == '\0') {
      lVar6 = UnityEngine_Component__get_transform(lVar6,0);
      if (lVar6 == 0) goto LAB_07728618;
      uVar12 = UnityEngine_Transform__get_rotation(lVar6,0);
      local_c0 = CONCAT44(uVar20,uVar12);
      local_b8 = fVar21;
      local_b4 = uVar23;
      uVar12 = UnityEngine_Quaternion__Internal_Inverse(&local_c0,0);
      local_268 = CONCAT44(uVar20,uVar12);
      local_260 = CONCAT44(uVar23,fVar21);
      fVar21 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_268,0);
      UnityEngine_Quaternion__Internal_MakePositive(fVar21 * 57.29578,0);
    }
  }
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  lVar6 = *(long *)(param_5 + 0x10);
  if (lVar6 == 0) goto LAB_07728618;
  bVar1 = *(byte *)(lVar6 + 0x4e1);
  uVar23 = *(undefined4 *)(param_5 + 0x74);
  uVar20 = *(undefined4 *)(param_5 + 0xa8);
  memcpy(auStack_258,(void *)(lVar6 + 0x4e0),0x88);
  if ((bVar1 & 1) == 0) {
    if (DAT_09516ea4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516ea4 = '\x01';
    }
    uVar14 = *(undefined8 *)(param_5 + 0x48);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(param_5 + 0x10);
    if (lVar6 == 0) goto LAB_07728618;
    fVar21 = (float)uVar14;
    fVar8 = (float)((ulong)uVar14 >> 0x20);
    uVar14 = AssetKits_ParticleImage_Extensions__Remap
                       (SQRT(fVar21 * fVar21 + fVar8 * fVar8),*(undefined4 *)(lVar6 + 0x568),
                        *(undefined4 *)(lVar6 + 0x56c),0,0x3f800000,0);
    uVar12 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                       (uVar14,*(undefined4 *)(param_5 + 0xb4),auStack_250,0);
    uVar13 = 0;
    AssetKits_ParticleImage_Extensions__Remap(uVar23,0,uVar20,0,uVar12,0);
  }
  else {
    if (DAT_09516ea4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516ea4 = '\x01';
    }
    fVar21 = *(float *)(param_5 + 0x48);
    fVar8 = *(float *)(param_5 + 0x4c);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(param_5 + 0x10);
    if (lVar6 == 0) goto LAB_07728618;
    uVar14 = AssetKits_ParticleImage_Extensions__Remap
                       (SQRT(fVar21 * fVar21 + fVar8 * fVar8),*(undefined4 *)(lVar6 + 0x568),
                        *(undefined4 *)(lVar6 + 0x56c),0,0x3f800000,0);
    uVar12 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                       (uVar14,*(undefined4 *)(param_5 + 0xb4),auStack_230,0);
    AssetKits_ParticleImage_Extensions__Remap(uVar23,0,uVar20,0,uVar12,0);
    if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
    uVar20 = *(undefined4 *)(param_5 + 0x74);
    uVar23 = *(undefined4 *)(param_5 + 0xa8);
    memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x4e0),0x88);
    if (DAT_09516ea4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516ea4 = '\x01';
    }
    fVar21 = *(float *)(param_5 + 0x48);
    fVar8 = *(float *)(param_5 + 0x4c);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(param_5 + 0x10);
    if (lVar6 == 0) goto LAB_07728618;
    uVar14 = AssetKits_ParticleImage_Extensions__Remap
                       (SQRT(fVar21 * fVar21 + fVar8 * fVar8),*(undefined4 *)(lVar6 + 0x568),
                        *(undefined4 *)(lVar6 + 0x56c),0,0x3f800000,0);
    uVar12 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                       (uVar14,*(undefined4 *)(param_5 + 0xb4),auStack_210,0);
    AssetKits_ParticleImage_Extensions__Remap(uVar20,0,uVar23,0,uVar12,0);
    if (*(long *)(param_5 + 0x10) == 0) goto LAB_07728618;
    uVar20 = *(undefined4 *)(param_5 + 0x74);
    uVar23 = *(undefined4 *)(param_5 + 0xa8);
    memcpy(auStack_258,(void *)(*(long *)(param_5 + 0x10) + 0x4e0),0x88);
    if (DAT_09516ea4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516ea4 = '\x01';
    }
    uVar14 = *(undefined8 *)(param_5 + 0x48);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(param_5 + 0x10);
    if (lVar6 == 0) goto LAB_07728618;
    fVar21 = (float)uVar14;
    fVar8 = (float)((ulong)uVar14 >> 0x20);
    uVar14 = AssetKits_ParticleImage_Extensions__Remap
                       (SQRT(fVar21 * fVar21 + fVar8 * fVar8),*(undefined4 *)(lVar6 + 0x568),
                        *(undefined4 *)(lVar6 + 0x56c),0,0x3f800000,0);
    uVar12 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                       (uVar14,*(undefined4 *)(param_5 + 0xb4),auStack_1f0,0);
    uVar13 = 0;
    AssetKits_ParticleImage_Extensions__Remap(uVar20,0,uVar23,0,uVar12,0);
  }
  if (*(long *)(param_5 + 0x10) != 0) {
    if (*(char *)(*(long *)(param_5 + 0x10) + 0x590) == '\0') {
      *(undefined8 *)(param_5 + 0xdc) = *(undefined8 *)(param_5 + 0x50);
      *(undefined4 *)(param_5 + 0xe4) = *(undefined4 *)(param_5 + 0x58);
    }
    else {
      if (DAT_09515faa == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515faa = '\x01';
      }
      local_b0 = *(undefined8 *)(param_5 + 0x140);
      local_a8 = *(float *)(param_5 + 0x148);
      uVar14 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
      local_b8 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20);
      local_c0 = uVar14;
      fVar21 = local_a8;
      uVar20 = UnityEngine_Quaternion__Internal_FromToRotation(&local_c0,&local_b0,0);
      fVar9 = *(float *)(param_5 + 0x58);
      uVar24 = *(undefined8 *)(param_5 + 0x50);
      fVar10 = (float)uVar14;
      local_278 = CONCAT44(fVar10,uVar20);
      local_270 = CONCAT44(uVar13,fVar21);
      fVar8 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_278,0);
      fVar10 = fVar10 * 57.29578;
      fVar21 = fVar21 * 57.29578;
      UnityEngine_Quaternion__Internal_MakePositive(fVar8 * 57.29578,0);
      local_c0 = 0;
      local_b8 = fVar21 * 0.017453292;
      uVar20 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_c0,0);
      local_268 = CONCAT44(fVar10,uVar20);
      local_260 = CONCAT44(uVar13,fVar21);
      fVar8 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_268,0);
      fVar10 = fVar10 * 57.29578;
      fVar21 = fVar21 * 57.29578;
      fVar8 = (float)UnityEngine_Quaternion__Internal_MakePositive(fVar8 * 57.29578,0);
      *(float *)(param_5 + 0xe4) = fVar9 + fVar21;
      *(ulong *)(param_5 + 0xdc) =
           CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar10,(float)uVar24 + fVar8);
    }
    uVar20 = FUN_043b2fc4(*(undefined4 *)(param_5 + 0x78),*(undefined4 *)(param_5 + 0x7c),
                          *(undefined4 *)(param_5 + 0x80),*(undefined4 *)(param_5 + 0x84),0);
    uVar14 = *(undefined8 *)(param_5 + 0x20);
    fVar21 = (float)((ulong)uVar14 >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_5 + 0x68) >> 0x20) * -0.5;
    uVar12 = 0;
    uVar23 = AssetKits_ParticleImage_Particle__RotatePointAroundPivot();
    uVar13 = (undefined4)uVar14;
    if (*(long *)(param_5 + 0xa0) != 0) {
      uVar18 = uVar12;
      FUN_05868ab0(*(long *)(param_5 + 0xa0),*(undefined4 *)(param_5 + 0x154),DAT_091b0460);
      uStack_39c = CONCAT44(local_c8,uStack_cc);
      uStack_3a8 = uStack_d8;
      local_3b0 = local_e0;
      uStack_3a4 = uStack_d4;
      uStack_3a0 = local_d0;
      local_388 = 0;
      uStack_358 = uStack_e8;
      local_360 = local_f0;
      uStack_368 = uStack_f8;
      local_370 = local_100;
      uStack_378 = uStack_108;
      local_380 = local_110;
      local_3bc = uVar23;
      local_3b8 = fVar21;
      local_3b4 = uVar12;
      local_394 = uVar20;
      local_390 = uVar18;
      local_38c = uVar13;
      UnityEngine_UI_VertexHelper__AddVert(param_6,&local_3bc,0);
      fVar8 = *(float *)(param_5 + 0x20);
      fVar21 = *(float *)(param_5 + 0x24) - *(float *)(param_5 + 0x6c) * 0.5;
      uVar12 = 0;
      uVar23 = AssetKits_ParticleImage_Particle__RotatePointAroundPivot
                         (fVar8 + *(float *)(param_5 + 0x68) * 0.5);
      if (*(long *)(param_5 + 0xa0) != 0) {
        uVar13 = FUN_05868ab0(*(long *)(param_5 + 0xa0),*(undefined4 *)(param_5 + 0x154),
                              DAT_091b0460);
        if (*(long *)(param_5 + 0xa0) != 0) {
          FUN_05868ab0(*(long *)(param_5 + 0xa0),*(undefined4 *)(param_5 + 0x154),DAT_091b0460);
          uStack_408 = CONCAT44(local_c8,uStack_cc);
          uStack_414 = uStack_d8;
          local_41c = local_e0;
          uStack_410 = uStack_d4;
          uStack_40c = local_d0;
          local_3f0 = 0;
          local_3f4 = 0;
          uStack_3c4 = uStack_e8;
          local_3cc = local_f0;
          uStack_3d4 = uStack_f8;
          local_3dc = local_100;
          uStack_3e4 = uStack_108;
          local_3ec = local_110;
          local_428 = uVar23;
          local_424 = fVar21;
          local_420 = uVar12;
          local_400 = uVar20;
          local_3fc = uVar13;
          local_3f8 = fVar8;
          UnityEngine_UI_VertexHelper__AddVert(param_6,&local_428,0);
          fVar21 = (float)((ulong)*(undefined8 *)(param_5 + 0x20) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(param_5 + 0x68) >> 0x20) * 0.5;
          uVar12 = 0;
          uVar23 = AssetKits_ParticleImage_Particle__RotatePointAroundPivot();
          if (*(long *)(param_5 + 0xa0) != 0) {
            fVar8 = fVar21;
            local_468 = FUN_05868ab0(*(long *)(param_5 + 0xa0),*(undefined4 *)(param_5 + 0x154),
                                     DAT_091b0460);
            uStack_474 = CONCAT44(local_c8,uStack_cc);
            uStack_480 = uStack_d8;
            local_488 = local_e0;
            uStack_47c = uStack_d4;
            uStack_478 = local_d0;
            local_460 = 0;
            uStack_430 = uStack_e8;
            local_438 = local_f0;
            uStack_440 = uStack_f8;
            local_448 = local_100;
            uStack_450 = uStack_108;
            local_458 = local_110;
            local_494 = uVar23;
            fStack_490 = fVar21;
            local_48c = uVar12;
            local_46c = uVar20;
            fStack_464 = fVar8;
            UnityEngine_UI_VertexHelper__AddVert(param_6,&local_494,0);
            fVar21 = *(float *)(param_5 + 0x24) + *(float *)(param_5 + 0x6c) * 0.5;
            uVar12 = 0;
            uVar23 = AssetKits_ParticleImage_Particle__RotatePointAroundPivot
                               (*(float *)(param_5 + 0x20) - *(float *)(param_5 + 0x68) * 0.5);
            if (*(long *)(param_5 + 0xa0) != 0) {
              uVar13 = uVar12;
              fVar8 = fVar21;
              FUN_05868ab0(*(long *)(param_5 + 0xa0),*(undefined4 *)(param_5 + 0x154),DAT_091b0460);
              if (*(long *)(param_5 + 0xa0) != 0) {
                FUN_05868ab0(*(long *)(param_5 + 0xa0),*(undefined4 *)(param_5 + 0x154),DAT_091b0460
                            );
                uStack_4e0 = CONCAT44(local_c8,uStack_cc);
                uStack_4ec = uStack_d8;
                local_4f4 = local_e0;
                uStack_4e8 = uStack_d4;
                uStack_4e4 = local_d0;
                local_4cc = 0;
                uStack_4c8 = 0;
                uStack_49c = uStack_e8;
                local_4a4 = local_f0;
                uStack_4ac = uStack_f8;
                local_4b4 = local_100;
                uStack_4bc = uStack_108;
                local_4c4 = local_110;
                local_500 = uVar23;
                fStack_4fc = fVar21;
                local_4f8 = uVar12;
                local_4d8 = uVar20;
                local_4d4 = uVar13;
                fStack_4d0 = fVar8;
                UnityEngine_UI_VertexHelper__AddVert(param_6,&local_500,0);
                UnityEngine_UI_VertexHelper__AddTriangle(param_6,iVar5,iVar5 + 2,iVar5 + 1,0);
                UnityEngine_UI_VertexHelper__AddTriangle(param_6,iVar5 + 3,iVar5 + 2,iVar5,0);
                return;
              }
            }
          }
        }
      }
    }
  }
  goto LAB_07728618;
  while( true ) {
    if (lVar6 == 0) break;
    UnityEngine_UI_VertexHelper__AddTriangle(lVar6,iVar5,iVar4,iVar5 + 1,0);
    lVar6 = *(long *)(param_5 + 0x160);
    iVar5 = iVar4;
    if (lVar6 == 0) break;
LAB_07728594:
    iVar3 = UnityEngine_UI_VertexHelper__get_currentVertCount(lVar6,0);
    iVar4 = iVar5 + 2;
    lVar6 = *(long *)(param_5 + 0x160);
    if (iVar3 <= iVar4) {
      if (lVar6 != 0) {
        iVar5 = 3;
        goto LAB_077285e0;
      }
      break;
    }
  }
  goto LAB_07728618;
  while( true ) {
    if (*(long *)(param_5 + 0x160) == 0) break;
    UnityEngine_UI_VertexHelper__AddTriangle
              (*(long *)(param_5 + 0x160),iVar5 + -2,iVar5 + -1,iVar5,0);
    lVar6 = *(long *)(param_5 + 0x160);
    iVar5 = iVar5 + 2;
    if (lVar6 == 0) break;
LAB_077285e0:
    iVar4 = UnityEngine_UI_VertexHelper__get_currentVertCount(lVar6,0);
    uVar20 = (undefined4)param_4;
    if (iVar4 <= iVar5) {
      lVar6 = thunk_FUN_03f9944c(DAT_0917cfe8);
      FUN_05894170(lVar6,DAT_091b16f0);
      uVar14 = thunk_FUN_03f9944c(DAT_0917cfe8);
      FUN_05894170(uVar14,DAT_091b16f0);
      if (((((*(long *)(param_5 + 0x160) != 0) &&
            (UnityEngine_UI_VertexHelper__GetUIVertexStream(*(long *)(param_5 + 0x160),lVar6,0),
            *(long *)(param_5 + 0x10) != 0)) &&
           (lVar7 = AssetKits_ParticleImage_ParticleImage__get_particleTrailRenderer(), lVar7 != 0))
          && ((*(long *)(lVar7 + 0xe8) != 0 &&
              (UnityEngine_UI_VertexHelper__GetUIVertexStream(*(long *)(lVar7 + 0xe8),uVar14,0),
              lVar6 != 0)))) &&
         ((FUN_05894cd0(lVar6,uVar14,DAT_091b1708), *(long *)(param_5 + 0x10) != 0 &&
          ((lVar7 = AssetKits_ParticleImage_ParticleImage__get_particleTrailRenderer(), lVar7 != 0
           && (*(long *)(lVar7 + 0xe8) != 0)))))) {
        UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream(*(long *)(lVar7 + 0xe8),lVar6,0);
        goto LAB_077286cc;
      }
      break;
    }
  }
LAB_07728618:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

