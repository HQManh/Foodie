// rea decompile_all
// name: UnityEngine.UI.Extensions.Gradient2$$ModifyMesh
// address: 0x44f0fcc
// body: available
// range: 0x44f0fcc-0x44f1f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44f1f20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UnityEngine_UI_Extensions_Gradient2__ModifyMesh
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
               long param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float local_5e4;
  float local_5c0;
  float local_5bc;
  undefined1 auStack_5b8 [108];
  float local_54c;
  float local_548;
  float local_544;
  undefined8 local_540;
  undefined4 local_538;
  undefined8 local_534;
  undefined8 uStack_52c;
  undefined4 local_524;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  float local_4d8;
  undefined8 local_4d4;
  undefined4 local_4cc;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4b8;
  undefined8 local_4b4;
  undefined8 local_4ac;
  undefined8 uStack_4a4;
  undefined8 local_49c;
  undefined8 uStack_494;
  undefined8 local_48c;
  undefined8 uStack_484;
  undefined8 local_47c;
  undefined1 auStack_474 [108];
  undefined8 local_408;
  float local_400;
  undefined8 local_3fc;
  undefined4 local_3f4;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3dc;
  undefined8 local_3d4;
  undefined8 uStack_3cc;
  undefined8 local_3c4;
  undefined8 uStack_3bc;
  undefined8 local_3b4;
  undefined8 uStack_3ac;
  undefined8 local_3a4;
  undefined1 auStack_398 [108];
  undefined1 auStack_32c [108];
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined8 uStack_20c;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
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
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined1 auStack_10c [8];
  float local_104;
  undefined8 local_100;
  undefined4 local_f8;
  
  if ((DAT_09518416 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091791f0);
    FUN_03f5c2a4(&DAT_091b16f0);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_0917cfe8);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091ea788);
    FUN_03f5c2a4(&DAT_091ea790);
    FUN_03f5c2a4(&DAT_09190fa8);
    DAT_09518416 = 1;
  }
  local_200 = 0;
  local_1f8 = 0;
  local_278 = 0;
  uStack_11c = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  local_124 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_18c = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  local_194 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_20c = 0;
  uStack_210 = 0;
  uStack_218 = 0;
  local_214 = 0;
  uStack_220 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_258 = 0;
  local_260 = 0;
  local_248 = 0;
  uStack_250 = 0;
  uStack_268 = 0;
  local_270 = 0;
  local_280 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  local_290 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  uVar8 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
  if ((uVar8 & 1) != 0) {
    if (param_6 == 0) {
LAB_044f1f20:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar5 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_6,0);
    if (iVar5 != 0) {
      lVar9 = thunk_FUN_03f9944c(DAT_0917cfe8);
      FUN_05894170(lVar9,DAT_091b16f0);
      uVar10 = UnityEngine_UI_VertexHelper__GetUIVertexStream(param_6,lVar9,0);
      if (lVar9 == 0) goto LAB_044f1f20;
      uVar1 = *(uint *)(param_5 + 5);
      if (uVar1 < 2) {
        fVar29 = (float)UnityEngine_UI_Extensions_Gradient2__GetBounds(uVar10,lVar9);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(int *)(DAT_09190fa8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar13 = *(undefined8 **)(DAT_09190fa8 + 0xb8);
        lVar12 = puVar13[1];
        if (lVar12 == 0) {
          if (*(int *)(DAT_09190fa8 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar13 = *(undefined8 **)(DAT_09190fa8 + 0xb8);
          }
          uVar10 = *puVar13;
          lVar12 = thunk_FUN_03f9944c(DAT_091791f0);
          FUN_05328f80(lVar12,uVar10,DAT_091ea788,0);
          plVar11 = (long *)(*(long *)(DAT_09190fa8 + 0xb8) + 8);
          *plVar11 = lVar12;
          thunk_FUN_03f5d7b8(plVar11,lVar12);
        }
        fVar21 = fVar29;
        fVar26 = param_3;
        if ((int)param_5[5] == 1) {
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (*(int *)(DAT_09190fa8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar13 = *(undefined8 **)(DAT_09190fa8 + 0xb8);
          lVar12 = puVar13[2];
          fVar21 = param_2;
          fVar26 = param_4;
          if (lVar12 == 0) {
            if (*(int *)(DAT_09190fa8 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar13 = *(undefined8 **)(DAT_09190fa8 + 0xb8);
            }
            uVar10 = *puVar13;
            lVar12 = thunk_FUN_03f9944c(DAT_091791f0);
            FUN_05328f80(lVar12,uVar10,DAT_091ea790,0);
            plVar11 = (long *)(*(long *)(DAT_09190fa8 + 0xb8) + 0x10);
            *plVar11 = lVar12;
            thunk_FUN_03f5d7b8(plVar11,lVar12);
          }
        }
        fVar14 = 0.0;
        if (fVar26 != 0.0) {
          fVar14 = (1.0 / fVar26) / *(float *)(param_5 + 7);
        }
        fVar26 = *(float *)((long)param_5 + 0x34);
        fVar23 = (1.0 - 1.0 / *(float *)(param_5 + 7)) * 0.5;
        if ((char)param_5[6] != '\0') {
          UnityEngine_UI_Extensions_Gradient2__SplitTrianglesAtGradientStops
                    (fVar29,param_2,param_3,param_4,fVar23,param_5,lVar9,param_6);
        }
        uStack_11c = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        local_124 = 0;
        uStack_130 = 0;
        uStack_138 = 0;
        local_140 = 0;
        uStack_148 = 0;
        local_150 = 0;
        uStack_158 = 0;
        local_160 = 0;
        uStack_168 = 0;
        local_170 = 0;
        uStack_178 = 0;
        local_180 = 0;
        iVar5 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_6,0);
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            UnityEngine_UI_VertexHelper__PopulateUIVertex(param_6,&local_180,iVar5,0);
            if (lVar12 == 0) goto LAB_044f1f20;
            uVar1 = (uint)uStack_158;
            lVar9 = param_5[8];
            memcpy(auStack_10c,&local_180,0x6c);
            fVar29 = (float)(**(code **)(lVar12 + 0x18))
                                      (*(undefined8 *)(lVar12 + 0x40),auStack_10c,
                                       *(undefined8 *)(lVar12 + 0x28));
            if (lVar9 == 0) goto LAB_044f1f20;
            fVar25 = (float)(uVar1 & 0xff) / 255.0;
            uVar8 = UnityEngine_Gradient__Evaluate
                              (fVar14 * (fVar29 - fVar21) - (fVar26 * (1.0 - fVar23) - fVar23),lVar9
                               ,0);
            if (*(int *)((long)param_5 + 0x2c) == 2) {
              uVar8 = (ulong)(uint)(fVar25 * (float)uVar8);
            }
            else if (*(int *)((long)param_5 + 0x2c) == 1) {
              uVar8 = (ulong)(uint)(fVar25 + (float)uVar8);
            }
            uVar6 = FUN_043b2fc4(uVar8,0);
            uStack_158 = CONCAT44(uStack_158._4_4_,uVar6);
            memcpy(auStack_32c,&local_180,0x6c);
            UnityEngine_UI_VertexHelper__SetUIVertex(param_6,auStack_32c,iVar5,0);
            iVar5 = iVar5 + 1;
            iVar7 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_6,0);
          } while (iVar5 < iVar7);
        }
      }
      else if (uVar1 == 2) {
        fVar29 = (float)UnityEngine_UI_Extensions_Gradient2__GetBounds(uVar10,lVar9);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar21 = 0.0;
        if (param_3 != 0.0) {
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar21 = (1.0 / param_3) / *(float *)(param_5 + 7);
        }
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_5e4 = 0.0;
        if (param_4 != 0.0) {
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_5e4 = (1.0 / param_4) / *(float *)(param_5 + 7);
        }
        if ((char)param_5[6] != '\0') {
          UnityEngine_UI_VertexHelper__Clear(param_6,0);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_278 = 0;
          fVar26 = param_3 * 0.5;
          fVar14 = param_4 * 0.5;
          local_280 = 0;
          uStack_2a8 = 0;
          local_2b0 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_288 = 0;
          local_290 = 0;
          if (DAT_09515cf0 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515cf0 = '\x01';
          }
          fVar31 = fVar29 + fVar26;
          fVar25 = param_2 + fVar14;
          lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
          fVar33 = *(float *)(lVar12 + 0x3c);
          fVar23 = *(float *)(lVar12 + 0x40);
          fVar32 = *(float *)(lVar12 + 0x44);
          if (DAT_09515faa == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515faa = '\x01';
            lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
          }
          fVar17 = *(float *)(lVar12 + 0x18);
          fVar15 = *(float *)(lVar12 + 0x1c);
          fVar22 = *(float *)(lVar12 + 0x20);
          if (DAT_09517b1f == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09517b1f = '\x01';
            lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
          }
          fVar16 = *(float *)(lVar12 + 0x48);
          fVar27 = *(float *)(lVar12 + 0x4c);
          fVar30 = *(float *)(lVar12 + 0x50);
          FUN_05894708(auStack_10c,lVar9,0,DAT_091b1750);
          fVar4 = local_104;
          fVar27 = fVar27 * local_104;
          fVar30 = fVar30 * local_104;
          FUN_05894708(auStack_10c,lVar9,0,DAT_091b1750);
          local_280 = local_100;
          local_278 = local_f8;
          uVar6 = FUN_043b2fc4(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          uVar10 = NEON_fmov(0x3f800000,4);
          iVar5 = 0;
          do {
            local_2b8 = 0;
            local_2c0 = 0;
            sincosf((float)iVar5 * 360.0 * 0.015625 * 0.017453292,&local_5bc,&local_5c0);
            fVar3 = local_5bc;
            fVar2 = local_5c0;
            if (DAT_09515cf0 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515cf0 = '\x01';
            }
            lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
            fVar35 = *(float *)(lVar12 + 0x44);
            uVar19 = *(undefined8 *)(lVar12 + 0x3c);
            if (DAT_09515faa == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515faa = '\x01';
              lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
            }
            fVar28 = *(float *)(lVar12 + 0x20);
            uVar34 = *(undefined8 *)(lVar12 + 0x18);
            if (DAT_09517b1f == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09517b1f = '\x01';
              lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
            }
            uVar24 = *(undefined8 *)(lVar12 + 0x48);
            fVar36 = *(float *)(lVar12 + 0x50);
            FUN_05894708(auStack_10c,lVar9,0,DAT_091b1750);
            fVar18 = (float)uVar24 * local_104;
            fVar20 = (float)((ulong)uVar24 >> 0x20) * local_104;
            fVar36 = fVar36 * local_104;
            FUN_05894708(auStack_10c,lVar9,0,DAT_091b1750);
            local_2c0 = local_100;
            local_2b8 = local_f8;
            local_4b8 = FUN_043b2fc4(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            local_4d4 = local_2c0;
            local_4b4 = CONCAT44((fVar3 + (float)((ulong)uVar10 >> 0x20)) * 0.5,
                                 (fVar2 + (float)uVar10) * 0.5);
            local_4cc = local_2b8;
            local_4c8 = 0;
            uStack_4c0 = 0;
            local_47c = 0;
            uStack_4a4 = 0;
            local_4ac = 0;
            uStack_494 = 0;
            local_49c = 0;
            uStack_484 = 0;
            local_48c = 0;
            local_4e0 = CONCAT44((float)((ulong)uVar19 >> 0x20) * fVar2 * fVar26 +
                                 (float)((ulong)uVar34 >> 0x20) * fVar3 * fVar14 + fVar20,
                                 (float)uVar19 * fVar2 * fVar26 + (float)uVar34 * fVar3 * fVar14 +
                                 fVar18);
            local_4d8 = fVar26 * fVar2 * fVar35 + fVar14 * fVar3 * fVar28 + fVar36;
            UnityEngine_UI_VertexHelper__AddVert(param_6,&local_4e0,0);
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0x40);
          local_540 = local_280;
          local_534 = 0;
          uStack_52c = 0;
          local_544 = fVar31 * fVar32 + fVar25 * fVar22 + fVar30;
          local_54c = fVar31 * fVar33 + fVar25 * fVar17 + fVar16 * fVar4;
          local_538 = local_278;
          uStack_518 = 0;
          local_520 = 0x3f0000003f000000;
          uStack_508 = uStack_2a8;
          local_510 = local_2b0;
          uStack_4f8 = uStack_298;
          local_500 = uStack_2a0;
          uStack_4e8 = uStack_288;
          local_4f0 = local_290;
          local_548 = fVar31 * fVar23 + fVar25 * fVar15 + fVar27;
          local_524 = uVar6;
          UnityEngine_UI_VertexHelper__AddVert(param_6,&local_54c,0);
          iVar5 = 1;
          do {
            UnityEngine_UI_VertexHelper__AddTriangle(param_6,iVar5 + -1,iVar5,0x40,0);
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0x40);
          UnityEngine_UI_VertexHelper__AddTriangle(param_6,0,0x3f,0x40,0);
        }
        uStack_20c = 0;
        uStack_210 = 0;
        uStack_218 = 0;
        local_214 = 0;
        uStack_220 = 0;
        uStack_228 = 0;
        local_230 = 0;
        uStack_238 = 0;
        local_240 = 0;
        uStack_258 = 0;
        local_260 = 0;
        local_248 = 0;
        uStack_250 = 0;
        uStack_268 = 0;
        local_270 = 0;
        iVar5 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_6,0);
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            UnityEngine_UI_VertexHelper__PopulateUIVertex(param_6,&local_270,iVar5,0);
            uVar1 = (uint)local_248;
            lVar9 = param_5[8];
            fVar26 = (float)local_270;
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (lVar9 == 0) goto LAB_044f1f20;
            fVar14 = fVar21 * ABS(fVar26 - (fVar29 + param_3 * 0.5));
            fVar26 = local_5e4 * ABS(local_270._4_4_ - (param_2 + param_4 * 0.5));
            fVar26 = SQRT(fVar14 * fVar14 + fVar26 * fVar26);
            fVar14 = (float)(uVar1 & 0xff) / 255.0;
            uVar8 = UnityEngine_Gradient__Evaluate
                              ((fVar26 + fVar26) - *(float *)((long)param_5 + 0x34),lVar9,0);
            if (*(int *)((long)param_5 + 0x2c) == 2) {
              uVar8 = (ulong)(uint)(fVar14 * (float)uVar8);
            }
            else if (*(int *)((long)param_5 + 0x2c) == 1) {
              uVar8 = (ulong)(uint)(fVar14 + (float)uVar8);
            }
            uVar6 = FUN_043b2fc4(uVar8,0);
            local_248 = CONCAT44(local_248._4_4_,uVar6);
            memcpy(auStack_5b8,&local_270,0x6c);
            UnityEngine_UI_VertexHelper__SetUIVertex(param_6,auStack_5b8,iVar5,0);
            iVar5 = iVar5 + 1;
            iVar7 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_6,0);
          } while (iVar5 < iVar7);
        }
      }
      else if (uVar1 == 3) {
        iVar5 = *(int *)(lVar9 + 0x18);
        UnityEngine_UI_Extensions_Gradient2__GetBounds(uVar10,lVar9);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar29 = 0.0;
        if (param_4 != 0.0) {
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar29 = (1.0 / param_4) / *(float *)(param_5 + 7);
        }
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09515cf0 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf0 = '\x01';
        }
        fVar21 = (param_2 + param_4 * 0.5) * 0.5;
        lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
        uVar10 = *(undefined8 *)(lVar12 + 0x3c);
        fVar26 = *(float *)(lVar12 + 0x44);
        if (DAT_09515faa == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515faa = '\x01';
          lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
        }
        fVar14 = *(float *)(lVar12 + 0x20);
        uVar19 = *(undefined8 *)(lVar12 + 0x18);
        if (DAT_09517b1f == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09517b1f = '\x01';
          lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
        }
        fVar31 = *(float *)(lVar12 + 0x50);
        uVar34 = *(undefined8 *)(lVar12 + 0x48);
        FUN_05894708(auStack_10c,lVar9,0,DAT_091b1750);
        fVar23 = ((float)uVar10 + (float)uVar19) * fVar21 + (float)uVar34 * local_104;
        fVar25 = ((float)((ulong)uVar10 >> 0x20) + (float)((ulong)uVar19 >> 0x20)) * fVar21 +
                 (float)((ulong)uVar34 >> 0x20) * local_104;
        fVar21 = fVar21 * (fVar26 + fVar14) + fVar31 * local_104;
        if ((char)param_5[6] != '\0') {
          UnityEngine_UI_VertexHelper__Clear(param_6,0);
          if (0 < iVar5) {
            iVar7 = 0;
            do {
              FUN_05894708(auStack_10c,lVar9,iVar7,DAT_091b1750);
              memcpy(auStack_398,auStack_10c,0x6c);
              UnityEngine_UI_VertexHelper__AddVert(param_6,auStack_398,0);
              iVar7 = iVar7 + 1;
            } while (iVar5 != iVar7);
          }
          FUN_05894708(auStack_10c,lVar9,0,DAT_091b1750);
          local_200 = local_100;
          local_1f8 = local_f8;
          local_3e0 = FUN_043b2fc4(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          local_3fc = local_200;
          local_3dc = 0x3f0000003f000000;
          local_3f4 = local_1f8;
          local_3e8 = 0;
          local_3f0 = 0;
          uStack_3cc = 0;
          local_3d4 = 0;
          uStack_3bc = 0;
          local_3c4 = 0;
          uStack_3ac = 0;
          local_3b4 = 0;
          local_3a4 = 0;
          local_408 = CONCAT44(fVar25,fVar23);
          local_400 = fVar21;
          UnityEngine_UI_VertexHelper__AddVert(param_6,&local_408,0);
          if (iVar5 + -1 != 0 && 0 < iVar5) {
            iVar7 = 1;
            do {
              UnityEngine_UI_VertexHelper__AddTriangle(param_6,iVar7 + -1,iVar7,iVar5,0);
              iVar7 = iVar7 + 1;
            } while (iVar5 != iVar7);
          }
          UnityEngine_UI_VertexHelper__AddTriangle(param_6,0,iVar5 + -1,iVar5,0);
        }
        uStack_18c = 0;
        uStack_190 = 0;
        uStack_198 = 0;
        local_194 = 0;
        uStack_1a0 = 0;
        uStack_1a8 = 0;
        local_1b0 = 0;
        uStack_1b8 = 0;
        local_1c0 = 0;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1d8 = 0;
        local_1e0 = 0;
        uStack_1e8 = 0;
        local_1f0 = 0;
        iVar5 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_6,0);
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            UnityEngine_UI_VertexHelper__PopulateUIVertex(param_6,&local_1f0,iVar5,0);
            uVar10 = local_1f0;
            uVar1 = (uint)uStack_1c8;
            lVar9 = param_5[8];
            fVar26 = (float)uStack_1e8;
            if (DAT_09517ea7 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09517ea7 = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (lVar9 == 0) goto LAB_044f1f20;
            fVar14 = (float)uVar10 - fVar23;
            fVar31 = (float)((ulong)uVar10 >> 0x20) - fVar25;
            fVar26 = fVar26 - fVar21;
            fVar32 = (float)(uVar1 & 0xff) / 255.0;
            uVar8 = UnityEngine_Gradient__Evaluate
                              (fVar29 * SQRT(fVar26 * fVar26 + fVar14 * fVar14 + fVar31 * fVar31) -
                               *(float *)((long)param_5 + 0x34),lVar9,0);
            if (*(int *)((long)param_5 + 0x2c) == 2) {
              uVar8 = (ulong)(uint)(fVar32 * (float)uVar8);
            }
            else if (*(int *)((long)param_5 + 0x2c) == 1) {
              uVar8 = (ulong)(uint)(fVar32 + (float)uVar8);
            }
            uVar6 = FUN_043b2fc4(uVar8,0);
            uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uVar6);
            memcpy(auStack_474,&local_1f0,0x6c);
            UnityEngine_UI_VertexHelper__SetUIVertex(param_6,auStack_474,iVar5,0);
            iVar5 = iVar5 + 1;
            iVar7 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_6,0);
          } while (iVar5 < iVar7);
        }
      }
    }
  }
  return;
}

