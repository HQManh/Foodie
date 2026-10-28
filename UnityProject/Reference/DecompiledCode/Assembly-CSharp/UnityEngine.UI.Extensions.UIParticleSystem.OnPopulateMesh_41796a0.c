// rea decompile_all
// name: UnityEngine.UI.Extensions.UIParticleSystem$$OnPopulateMesh
// address: 0x41796a0
// body: available
// range: 0x41796a0-0x417a253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x417a24c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x417a250 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UnityEngine_UI_Extensions_UIParticleSystem__OnPopulateMesh
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  undefined8 local_170;
  float fStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_12c [132];
  undefined8 local_a8;
  
  if ((DAT_09516619 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c4c0);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09516619 = 1;
  }
  local_a8 = 0;
  memset(auStack_12c,0,0x84);
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  if (param_5 != 0) {
    UnityEngine_UI_VertexHelper__Clear(param_5,0);
    lVar8 = UnityEngine_Component__get_gameObject(param_4,0);
    if (lVar8 != 0) {
      uVar9 = UnityEngine_GameObject__get_activeInHierarchy(lVar8,0);
      if ((uVar9 & 1) != 0) {
        if (*(char *)(param_4 + 0x130) == '\0') {
          if (*(long *)(param_4 + 0xe8) == 0) goto LAB_0417a24c;
          local_a8 = UnityEngine_ParticleSystem__get_main(*(long *)(param_4 + 0xe8),0);
          uVar9 = UnityEngine_ParticleSystem_MainModule__get_playOnAwake(&local_a8,0);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_4 + 0xe8) == 0) goto LAB_0417a24c;
            UnityEngine_ParticleSystem__Stop(*(long *)(param_4 + 0xe8),0,0,0);
            *(undefined1 *)(param_4 + 0x130) = 1;
          }
        }
        if (DAT_09515ce8 == '\0') {
          FUN_03f5c2a4(&DAT_0918cb68);
          DAT_09515ce8 = '\x01';
        }
        if (*(long *)(param_4 + 0xe8) == 0) goto LAB_0417a24c;
        uVar4 = UnityEngine_ParticleSystem__GetParticles
                          (*(long *)(param_4 + 0xe8),*(undefined8 *)(param_4 + 0xf0),0);
        if (0 < (int)uVar4) {
          uVar9 = 0;
          lVar8 = 0x20;
          do {
            fVar18 = (float)param_3;
            fVar19 = (float)param_2;
            lVar12 = *(long *)(param_4 + 0xf0);
            if (lVar12 == 0) goto LAB_0417a24c;
            if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0417a250;
            memmove(auStack_12c,(void *)(lVar12 + lVar8),0x84);
            iVar5 = UnityEngine_ParticleSystem_MainModule__get_simulationSpace(param_4 + 0x148,0);
            if (iVar5 == 0) {
              fVar13 = (float)UnityEngine_ParticleSystem_Particle__get_position(auStack_12c,0);
            }
            else {
              lVar12 = *(long *)(param_4 + 0xe0);
              UnityEngine_ParticleSystem_Particle__get_position(auStack_12c,0);
              if (lVar12 == 0) goto LAB_0417a24c;
              fVar13 = (float)UnityEngine_Transform__InverseTransformPoint(lVar12,0);
            }
            fVar14 = (float)UnityEngine_ParticleSystem_Particle__get_rotation(auStack_12c,0);
            uVar6 = UnityEngine_ParticleSystem_Particle__GetCurrentColor
                              (auStack_12c,*(undefined8 *)(param_4 + 0xe8),0);
            fVar15 = (float)UnityEngine_ParticleSystem_Particle__GetCurrentSize
                                      (auStack_12c,*(undefined8 *)(param_4 + 0xe8),0);
            iVar5 = UnityEngine_ParticleSystem_MainModule__get_scalingMode(param_4 + 0x148,0);
            if (iVar5 == 2) {
              lVar12 = UnityEngine_UI_Graphic__get_canvas(param_4,0);
              if (lVar12 == 0) goto LAB_0417a24c;
              fVar16 = (float)UnityEngine_Canvas__get_scaleFactor(lVar12,0);
              fVar13 = fVar13 / fVar16;
              fVar19 = fVar19 / fVar16;
            }
            fVar22 = *(float *)(param_4 + 0x100);
            fVar16 = *(float *)(param_4 + 0x104);
            fVar20 = *(float *)(param_4 + 0x108);
            fVar21 = *(float *)(param_4 + 0x10c);
            uVar10 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_enabled
                               (param_4 + 0x110,0);
            if ((uVar10 & 1) != 0) {
              fVar16 = (float)UnityEngine_ParticleSystem_Particle__get_remainingLifetime
                                        (auStack_12c,0);
              fVar20 = (float)UnityEngine_ParticleSystem_Particle__get_startLifetime(auStack_12c,0);
              UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_frameOverTime
                        (&local_170,param_4 + 0x110,0);
              uStack_148 = CONCAT44(uStack_164,fStack_168);
              local_150 = local_170;
              uStack_138 = uStack_158;
              uStack_140 = uStack_160;
              lVar12 = UnityEngine_ParticleSystem_MinMaxCurve__get_curveMin(&local_150,0);
              if (lVar12 == 0) {
                UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_frameOverTime
                          (&local_170,param_4 + 0x110,0);
                uStack_148 = CONCAT44(uStack_164,fStack_168);
                local_150 = local_170;
                uStack_138 = uStack_158;
                uStack_140 = uStack_160;
                lVar12 = UnityEngine_ParticleSystem_MinMaxCurve__get_curve(&local_150,0);
                if (lVar12 != 0) {
                  UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_frameOverTime
                            (&local_170,param_4 + 0x110,0);
                  uStack_148 = CONCAT44(uStack_164,fStack_168);
                  local_150 = local_170;
                  uStack_138 = uStack_158;
                  uStack_140 = uStack_160;
                  lVar12 = UnityEngine_ParticleSystem_MinMaxCurve__get_curve(&local_150,0);
                  goto LAB_041799bc;
                }
                UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_frameOverTime
                          (&local_170,param_4 + 0x110,0);
                uStack_148 = CONCAT44(uStack_164,fStack_168);
                local_150 = local_170;
                uStack_138 = uStack_158;
                uStack_140 = uStack_160;
                fVar21 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&local_150,0);
                if (fVar21 <= 0.0) {
                  fVar16 = 1.0 - fVar16 / fVar20;
                }
                else {
                  UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_frameOverTime
                            (&local_170,param_4 + 0x110,0);
                  uStack_148 = CONCAT44(uStack_164,fStack_168);
                  local_150 = local_170;
                  uStack_138 = uStack_158;
                  uStack_140 = uStack_160;
                  fVar16 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&local_150,0)
                  ;
                  fVar20 = (float)UnityEngine_ParticleSystem_Particle__get_remainingLifetime
                                            (auStack_12c,0);
                  fVar21 = (float)UnityEngine_ParticleSystem_Particle__get_startLifetime
                                            (auStack_12c,0);
                  fVar16 = fVar16 - fVar20 / fVar21;
                }
              }
              else {
                UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_frameOverTime
                          (&local_170,param_4 + 0x110,0);
                uStack_148 = CONCAT44(uStack_164,fStack_168);
                local_150 = local_170;
                uStack_138 = uStack_158;
                uStack_140 = uStack_160;
                lVar12 = UnityEngine_ParticleSystem_MinMaxCurve__get_curveMin(&local_150,0);
LAB_041799bc:
                fVar16 = (float)UnityEngine_ParticleSystem_Particle__get_remainingLifetime
                                          (auStack_12c,0);
                fVar20 = (float)UnityEngine_ParticleSystem_Particle__get_startLifetime
                                          (auStack_12c,0);
                if (lVar12 == 0) goto LAB_0417a24c;
                fVar16 = (float)UnityEngine_AnimationCurve__Evaluate(1.0 - fVar16 / fVar20,lVar12,0)
                ;
              }
              iVar5 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_cycleCount
                                (param_4 + 0x110,0);
              fVar20 = fVar16 * (float)iVar5 - (float)(int)(fVar16 * (float)iVar5);
              fVar16 = 1.0;
              if (fVar20 <= 1.0) {
                fVar16 = fVar20;
              }
              fVar21 = 0.0;
              if (0.0 <= fVar20) {
                fVar21 = fVar16;
              }
              iVar5 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_animation
                                (param_4 + 0x110,0);
              if (iVar5 == 1) {
                iVar5 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_numTilesX
                                  (param_4 + 0x110,0);
                if (DAT_09516626 == '\0') {
                  FUN_03f5c2a4(&DAT_09187e80);
                  DAT_09516626 = '\x01';
                }
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                iVar1 = -0x80000000;
                if ((float)(int)(fVar21 * (float)iVar5) != INFINITY) {
                  iVar1 = (int)(fVar21 * (float)iVar5);
                }
                iVar5 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_rowIndex
                                  (param_4 + 0x110,0);
                iVar7 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_rowMode
                                  (param_4 + 0x110,0);
                if (iVar7 == 1) {
                  iVar7 = UnityEngine_ParticleSystem_Particle__get_randomSeed(auStack_12c,0);
                  iVar5 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_numTilesY
                                    (param_4 + 0x110,0);
                  if (DAT_09516086 == '\0') {
                    FUN_03f5c2a4(&DAT_09187e80);
                    DAT_09516086 = '\x01';
                  }
                  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  iVar3 = 0;
                  if (iVar5 != 0) {
                    iVar3 = iVar7 / iVar5;
                  }
                  iVar7 = iVar7 - iVar3 * iVar5;
                  iVar5 = -iVar7;
                  if (-1 < iVar7) {
                    iVar5 = iVar7;
                  }
                }
                iVar7 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_numTilesX
                                  (param_4 + 0x110,0);
                iVar5 = iVar1 + iVar7 * iVar5;
              }
              else if (iVar5 == 0) {
                iVar5 = *(int *)(param_4 + 0x118);
                if (DAT_09516626 == '\0') {
                  FUN_03f5c2a4(&DAT_09187e80);
                  DAT_09516626 = '\x01';
                }
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                fVar21 = fVar21 * (float)iVar5;
                iVar5 = -0x80000000;
                if ((float)(int)fVar21 != INFINITY) {
                  iVar5 = (int)fVar21;
                }
              }
              else {
                iVar5 = 0;
              }
              iVar1 = *(int *)(param_4 + 0x118);
              iVar7 = 0;
              if (iVar1 != 0) {
                iVar7 = iVar5 / iVar1;
              }
              iVar5 = iVar5 - iVar7 * iVar1;
              iVar7 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_numTilesX
                                (param_4 + 0x110,0);
              iVar1 = 0;
              if (iVar7 != 0) {
                iVar1 = iVar5 / iVar7;
              }
              fVar22 = *(float *)(param_4 + 0x11c) * (float)(iVar5 - iVar1 * iVar7);
              iVar7 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_numTilesX
                                (param_4 + 0x110,0);
              iVar1 = 0;
              if (iVar7 != 0) {
                iVar1 = iVar5 / iVar7;
              }
              fVar16 = 1.0 - *(float *)(param_4 + 0x120) * (float)(iVar1 + 1);
              fVar20 = fVar22 + *(float *)(param_4 + 0x11c);
              fVar21 = *(float *)(param_4 + 0x120) + fVar16;
            }
            lVar12 = *(long *)(param_4 + 0xf8);
            if (*(int *)(DAT_0918c4c0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (lVar12 == 0) goto LAB_0417a24c;
            if (*(int *)(lVar12 + 0x18) == 0) {
LAB_0417a250:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            memmove((void *)(lVar12 + 0x20),(void *)(*(long *)(DAT_0918c4c0 + 0xb8) + 0x14),0x6c);
            lVar12 = *(long *)(param_4 + 0xf8);
            if (lVar12 == 0) goto LAB_0417a24c;
            if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0417a250;
            *(undefined4 *)(lVar12 + 0x48) = uVar6;
            lVar12 = *(long *)(param_4 + 0xf8);
            if (lVar12 == 0) goto LAB_0417a24c;
            if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0417a250;
            *(float *)(lVar12 + 0x4c) = fVar22;
            *(float *)(lVar12 + 0x50) = fVar16;
            *(undefined4 *)(lVar12 + 0x54) = 0;
            *(undefined4 *)(lVar12 + 0x58) = 0;
            lVar12 = *(long *)(param_4 + 0xf8);
            if (lVar12 == 0) goto LAB_0417a24c;
            if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto LAB_0417a250;
            memmove((void *)(lVar12 + 0x8c),(void *)(*(long *)(DAT_0918c4c0 + 0xb8) + 0x14),0x6c);
            lVar12 = *(long *)(param_4 + 0xf8);
            if (lVar12 == 0) goto LAB_0417a24c;
            if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto LAB_0417a250;
            *(undefined4 *)(lVar12 + 0xb4) = uVar6;
            lVar12 = *(long *)(param_4 + 0xf8);
            if (lVar12 == 0) goto LAB_0417a24c;
            if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto LAB_0417a250;
            *(float *)(lVar12 + 0xb8) = fVar22;
            *(float *)(lVar12 + 0xbc) = fVar21;
            *(undefined8 *)(lVar12 + 0xc0) = 0;
            lVar12 = *(long *)(param_4 + 0xf8);
            if (lVar12 == 0) goto LAB_0417a24c;
            if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0417a250;
            memmove((void *)(lVar12 + 0xf8),(void *)(*(long *)(DAT_0918c4c0 + 0xb8) + 0x14),0x6c);
            lVar12 = *(long *)(param_4 + 0xf8);
            if (lVar12 == 0) goto LAB_0417a24c;
            if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0417a250;
            *(undefined4 *)(lVar12 + 0x120) = uVar6;
            lVar12 = *(long *)(param_4 + 0xf8);
            if (lVar12 == 0) goto LAB_0417a24c;
            if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0417a250;
            *(float *)(lVar12 + 0x124) = fVar20;
            *(float *)(lVar12 + 0x128) = fVar21;
            *(undefined8 *)(lVar12 + 300) = 0;
            lVar12 = *(long *)(param_4 + 0xf8);
            if (lVar12 == 0) goto LAB_0417a24c;
            if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 0) goto LAB_0417a250;
            memmove((void *)(lVar12 + 0x164),(void *)(*(long *)(DAT_0918c4c0 + 0xb8) + 0x14),0x6c);
            lVar12 = *(long *)(param_4 + 0xf8);
            if (lVar12 == 0) goto LAB_0417a24c;
            if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 0) goto LAB_0417a250;
            *(undefined4 *)(lVar12 + 0x18c) = uVar6;
            lVar12 = *(long *)(param_4 + 0xf8);
            if (lVar12 == 0) goto LAB_0417a24c;
            if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 0) goto LAB_0417a250;
            fVar21 = 0.5;
            *(float *)(lVar12 + 400) = fVar20;
            *(float *)(lVar12 + 0x194) = fVar16;
            fVar14 = fVar14 * -0.017453292;
            *(undefined8 *)(lVar12 + 0x198) = 0;
            fVar15 = fVar15 * 0.5;
            if (fVar14 == 0.0) {
              lVar12 = *(long *)(param_4 + 0xf8);
              if (lVar12 == 0) goto LAB_0417a24c;
              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0417a250;
              param_2 = (ulong)(uint)(fVar19 - fVar15);
              *(undefined4 *)(lVar12 + 0x28) = 0;
              *(float *)(lVar12 + 0x20) = fVar13 - fVar15;
              *(float *)(lVar12 + 0x24) = fVar19 - fVar15;
              lVar12 = *(long *)(param_4 + 0xf8);
              if (lVar12 == 0) goto LAB_0417a24c;
              if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto LAB_0417a250;
              *(undefined4 *)(lVar12 + 0x94) = 0;
              *(float *)(lVar12 + 0x8c) = fVar13 - fVar15;
              *(float *)(lVar12 + 0x90) = fVar15 + fVar19;
              lVar12 = *(long *)(param_4 + 0xf8);
              if (lVar12 == 0) goto LAB_0417a24c;
              if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0417a250;
              fVar13 = fVar15 + fVar13;
              *(undefined4 *)(lVar12 + 0x100) = 0;
              *(float *)(lVar12 + 0xf8) = fVar13;
              *(float *)(lVar12 + 0xfc) = fVar15 + fVar19;
              lVar12 = *(long *)(param_4 + 0xf8);
              if (lVar12 == 0) goto LAB_0417a24c;
              param_3 = 0;
              if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 0) goto LAB_0417a250;
            }
            else if (*(char *)(param_4 + 0xd9) == '\0') {
              sincosf(fVar14,&fStack_174,&local_178);
              fVar16 = fStack_174;
              fVar18 = local_178;
              sincosf(fVar14 + 1.5707964,&fStack_17c,&local_180);
              lVar12 = *(long *)(param_4 + 0xf8);
              if (lVar12 == 0) goto LAB_0417a24c;
              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0417a250;
              *(undefined4 *)(lVar12 + 0x28) = 0;
              fVar14 = local_180 * fVar15;
              fVar21 = fVar13 - fVar18 * fVar15;
              fVar20 = fStack_17c * fVar15;
              fVar22 = fVar19 - fVar16 * fVar15;
              *(float *)(lVar12 + 0x20) = fVar21 - fVar14;
              *(float *)(lVar12 + 0x24) = fVar22 - fVar20;
              lVar12 = *(long *)(param_4 + 0xf8);
              if (lVar12 == 0) goto LAB_0417a24c;
              if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto LAB_0417a250;
              *(undefined4 *)(lVar12 + 0x94) = 0;
              *(float *)(lVar12 + 0x8c) = fVar14 + fVar21;
              *(float *)(lVar12 + 0x90) = fVar20 + fVar22;
              lVar12 = *(long *)(param_4 + 0xf8);
              if (lVar12 == 0) goto LAB_0417a24c;
              if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0417a250;
              fVar13 = fVar18 * fVar15 + fVar13;
              fVar19 = fVar16 * fVar15 + fVar19;
              *(undefined4 *)(lVar12 + 0x100) = 0;
              *(float *)(lVar12 + 0xf8) = fVar14 + fVar13;
              *(float *)(lVar12 + 0xfc) = fVar20 + fVar19;
              lVar12 = *(long *)(param_4 + 0xf8);
              if (lVar12 == 0) goto LAB_0417a24c;
              if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 0) goto LAB_0417a250;
              param_2 = (ulong)(uint)(fVar19 - fVar20);
              fVar13 = fVar13 - fVar14;
              param_3 = 0;
            }
            else {
              iVar5 = UnityEngine_ParticleSystem_MainModule__get_simulationSpace(param_4 + 0x148,0);
              if (iVar5 == 0) {
                fVar13 = (float)UnityEngine_ParticleSystem_Particle__get_position(auStack_12c,0);
              }
              else {
                lVar12 = *(long *)(param_4 + 0xe0);
                UnityEngine_ParticleSystem_Particle__get_position(auStack_12c,0);
                if (lVar12 == 0) goto LAB_0417a24c;
                fVar13 = (float)UnityEngine_Transform__InverseTransformPoint(lVar12,0);
              }
              fVar19 = fVar21;
              fVar14 = fVar18;
              iVar5 = UnityEngine_ParticleSystem_MainModule__get_scalingMode(param_4 + 0x148,0);
              if (iVar5 == 2) {
                lVar12 = UnityEngine_UI_Graphic__get_canvas(param_4,0);
                if (lVar12 == 0) goto LAB_0417a24c;
                UnityEngine_Canvas__get_scaleFactor(lVar12,0);
              }
              lVar11 = FUN_03f5c394(DAT_091807f8,4);
              if (lVar11 == 0) goto LAB_0417a24c;
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 == 0) goto LAB_0417a250;
              fVar16 = -fVar15;
              *(undefined4 *)(lVar11 + 0x28) = 0;
              *(float *)(lVar11 + 0x20) = fVar16;
              *(float *)(lVar11 + 0x24) = fVar16;
              if (uVar2 == 1) goto LAB_0417a250;
              *(float *)(lVar11 + 0x2c) = fVar16;
              *(float *)(lVar11 + 0x30) = fVar15;
              *(undefined4 *)(lVar11 + 0x34) = 0;
              if (uVar2 < 3) goto LAB_0417a250;
              *(float *)(lVar11 + 0x38) = fVar15;
              *(float *)(lVar11 + 0x3c) = fVar15;
              *(undefined4 *)(lVar11 + 0x40) = 0;
              if (uVar2 == 3) goto LAB_0417a250;
              *(float *)(lVar11 + 0x44) = fVar15;
              *(float *)(lVar11 + 0x48) = fVar16;
              *(undefined4 *)(lVar11 + 0x4c) = 0;
              fVar15 = (float)UnityEngine_ParticleSystem_Particle__get_rotation3D(auStack_12c,0);
              uVar6 = 0x3c8efa35;
              fStack_168 = fVar14 * 0.017453292;
              local_170 = CONCAT44(fVar19 * 0.017453292,fVar15 * 0.017453292);
              fVar19 = fStack_168;
              uVar17 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_170,0);
              lVar12 = *(long *)(param_4 + 0xf8);
              if (lVar12 == 0) goto LAB_0417a24c;
              if ((*(int *)(lVar11 + 0x18) == 0) ||
                 (fVar15 = fVar19, fVar16 = fVar14,
                 fVar20 = (float)UnityEngine_Quaternion__op_Multiply(0),
                 *(int *)(lVar12 + 0x18) == 0)) goto LAB_0417a250;
              *(float *)(lVar12 + 0x20) = fVar13 + fVar20;
              *(float *)(lVar12 + 0x24) = fVar21 + fVar15;
              *(float *)(lVar12 + 0x28) = fVar18 + fVar16;
              lVar12 = *(long *)(param_4 + 0xf8);
              if (lVar12 == 0) goto LAB_0417a24c;
              if (((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) ||
                 (fVar15 = fVar19, fVar16 = fVar14,
                 fVar20 = (float)UnityEngine_Quaternion__op_Multiply
                                           (uVar17,fVar19,fVar14,uVar6,
                                            *(undefined4 *)(lVar11 + 0x2c),
                                            *(undefined4 *)(lVar11 + 0x30),
                                            *(undefined4 *)(lVar11 + 0x34),0),
                 (*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0)) goto LAB_0417a250;
              *(float *)(lVar12 + 0x8c) = fVar13 + fVar20;
              *(float *)(lVar12 + 0x90) = fVar21 + fVar15;
              *(float *)(lVar12 + 0x94) = fVar18 + fVar16;
              lVar12 = *(long *)(param_4 + 0xf8);
              if (lVar12 == 0) goto LAB_0417a24c;
              if ((*(uint *)(lVar11 + 0x18) < 3) ||
                 (fVar15 = fVar19, fVar16 = fVar14,
                 fVar20 = (float)UnityEngine_Quaternion__op_Multiply
                                           (uVar17,fVar19,fVar14,uVar6,
                                            *(undefined4 *)(lVar11 + 0x38),
                                            *(undefined4 *)(lVar11 + 0x3c),
                                            *(undefined4 *)(lVar11 + 0x40),0),
                 *(uint *)(lVar12 + 0x18) < 3)) goto LAB_0417a250;
              *(float *)(lVar12 + 0xf8) = fVar13 + fVar20;
              *(float *)(lVar12 + 0xfc) = fVar21 + fVar15;
              *(float *)(lVar12 + 0x100) = fVar18 + fVar16;
              lVar12 = *(long *)(param_4 + 0xf8);
              if (lVar12 == 0) goto LAB_0417a24c;
              if (((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) ||
                 (fVar15 = (float)UnityEngine_Quaternion__op_Multiply
                                            (uVar17,fVar19,fVar14,uVar6,
                                             *(undefined4 *)(lVar11 + 0x44),
                                             *(undefined4 *)(lVar11 + 0x48),
                                             *(undefined4 *)(lVar11 + 0x4c),0),
                 (*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 0)) goto LAB_0417a250;
              param_3 = (ulong)(uint)(fVar18 + fVar14);
              param_2 = (ulong)(uint)(fVar21 + fVar19);
              fVar13 = fVar13 + fVar15;
            }
            *(float *)(lVar12 + 0x164) = fVar13;
            *(int *)(lVar12 + 0x168) = (int)param_2;
            *(int *)(lVar12 + 0x16c) = (int)param_3;
            UnityEngine_UI_VertexHelper__AddUIVertexQuad(param_5,*(undefined8 *)(param_4 + 0xf8),0);
            uVar9 = uVar9 + 1;
            lVar8 = lVar8 + 0x84;
          } while (uVar4 != uVar9);
        }
      }
      return;
    }
  }
LAB_0417a24c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

