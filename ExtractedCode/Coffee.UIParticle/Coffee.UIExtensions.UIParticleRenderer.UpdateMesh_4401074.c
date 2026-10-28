// rea decompile_all
// name: Coffee.UIExtensions.UIParticleRenderer$$UpdateMesh
// address: 0x4401074
// body: available
// range: 0x4401074-0x4402133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4401ef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4402120 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440212c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4402130 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticleRenderer__UpdateMesh
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4,undefined8 param_5
               )

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  char cVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  float local_3cc;
  undefined4 uStack_3c8;
  undefined4 local_3c4;
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
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined8 local_2b4;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  float local_290;
  float local_28c;
  float local_288;
  undefined4 local_284;
  undefined8 local_280 [3];
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0 [3];
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined7 uStack_17f;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  float fStack_f4;
  undefined4 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  
  if ((DAT_09517e93 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091826d0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184e28);
    FUN_03f5c2a4(&DAT_09171cc0);
    FUN_03f5c2a4(&DAT_09186070);
    FUN_03f5c2a4(&DAT_091a9140);
    FUN_03f5c2a4(&DAT_091a9130);
    FUN_03f5c2a4(&DAT_091a9138);
    FUN_03f5c2a4(&DAT_091a9148);
    FUN_03f5c2a4(&DAT_091abbc0);
    FUN_03f5c2a4(&DAT_091b1660);
    FUN_03f5c2a4(&DAT_091abbc8);
    FUN_03f5c2a4(&DAT_091b1668);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188ee8);
    FUN_03f5c2a4(&DAT_0918c440);
    FUN_03f5c2a4(&DAT_0918c448);
    FUN_03f5c2a4(&DAT_09210b38);
    DAT_09517e93 = 1;
  }
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled(param_4,0);
  if ((uVar4 & 1) != 0) {
    lVar13 = param_4[0x23];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(lVar13,0);
    if ((uVar4 & 1) != 0) {
      lVar13 = param_4[0x22];
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar13,0);
      if ((uVar4 & 1) != 0) {
        uVar5 = UnityEngine_UI_Graphic__get_canvasRenderer(param_4,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
        if ((uVar4 & 1) != 0) {
          uVar5 = UnityEngine_UI_Graphic__get_canvas(param_4,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Implicit(param_5,0);
            if ((uVar4 & 1) != 0) {
              if (param_4[0x22] == 0) goto LAB_04401ef0;
              if (*(int *)(param_4[0x22] + 0xf8) != 4) {
                lVar13 = UnityEngine_Component__get_transform(param_4,0);
                if ((lVar13 == 0) ||
                   (fVar14 = (float)UnityEngine_Transform__get_lossyScale(lVar13,0),
                   param_4[0x22] == 0)) goto LAB_04401ef0;
                fVar22 = param_2;
                fVar24 = param_3;
                fVar15 = (float)Coffee_UIExtensions_UIParticle__get_scale3DForCalc();
                param_2 = param_2 * fVar22;
                param_3 = param_3 * fVar24;
                fVar14 = param_3 * fVar14 * fVar15 * param_2;
                if ((fVar14 != 0.0) && (!NAN(fVar14))) {
                  if (param_4[0x23] == 0) goto LAB_04401ef0;
                  uVar4 = UnityEngine_ParticleSystem__IsAlive(param_4[0x23],0);
                  if ((uVar4 & 1) == 0) {
                    if (param_4[0x23] == 0) goto LAB_04401ef0;
                    uVar4 = UnityEngine_ParticleSystem__get_isPlaying(param_4[0x23],0);
                    if ((uVar4 & 1) == 0) goto LAB_044012b4;
                  }
                  if (*(char *)((long)param_4 + 0xe1) != '\0') {
                    if (param_4[0x23] == 0) goto LAB_04401ef0;
                    local_b8 = UnityEngine_ParticleSystem__get_trails(param_4[0x23],0);
                    uVar4 = UnityEngine_ParticleSystem_TrailModule__get_enabled(&local_b8,0);
                    if ((uVar4 & 1) == 0) goto LAB_044012b4;
                  }
                  if (param_4[0x23] == 0) goto LAB_04401ef0;
                  local_a8 = UnityEngine_ParticleSystem__get_main(param_4[0x23],0);
                  fVar14 = (float)Coffee_UIExtensions_UIParticleRenderer__GetWorldScale(param_4);
                  if ((param_4[0x23] == 0) ||
                     (fVar22 = param_2, fVar24 = param_3,
                     lVar13 = UnityEngine_Component__get_transform(param_4[0x23],0), lVar13 == 0))
                  goto LAB_04401ef0;
                  uVar16 = UnityEngine_Transform__get_position(lVar13,0);
                  fVar15 = fVar22;
                  fVar25 = fVar24;
                  if (*(char *)((long)param_4 + 0xe1) == '\0') {
                    if (param_4[0x22] == 0) goto LAB_04401ef0;
                    if (*(uint *)(param_4[0x22] + 0xf8) < 4) {
                      lVar13 = param_4[0x2a];
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar4 = UnityEngine_Object__op_Implicit(lVar13,0);
                      if ((uVar4 & 1) == 0) {
                        Coffee_UIExtensions_UIParticleRenderer__ResolveResolutionChange
                                  (uVar16,fVar22,fVar24,fVar14,param_2,param_3,param_4);
                        lVar13 = param_4[0x23];
                        if (*(int *)(DAT_09188ee8 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar4 = Coffee_UIParticleInternal_ParticleSystemExtensions__IsLocalSpace
                                          (lVar13);
                        if (((uVar4 & 1) == 0) &&
                           (uVar4 = UnityEngine_ParticleSystem_MainModule__get_loop(&local_a8,0),
                           (uVar4 & 1) == 0)) {
                          if (param_4[0x23] == 0) goto LAB_04401ef0;
                          fVar15 = (float)UnityEngine_ParticleSystem__get_time(param_4[0x23],0);
                          if (fVar15 == 0.0) {
                            *(undefined1 *)(param_4 + 0x1b) = 1;
                          }
                        }
                        if (param_4[0x22] == 0) goto LAB_04401ef0;
                        if (*(char *)(param_4[0x22] + 0x145) == '\0') {
                          cVar10 = (char)param_4[0x1b];
                        }
                        else {
                          cVar10 = '\x01';
                        }
                        fVar15 = param_2;
                        fVar25 = param_3;
                        Coffee_UIExtensions_UIParticleRenderer__Simulate
                                  (fVar14,param_4,cVar10 != '\0');
                        if ((char)param_4[0x1b] != '\0') {
                          if (param_4[0x22] == 0) goto LAB_04401ef0;
                          if (*(char *)(param_4[0x22] + 0x145) == '\0') {
                            fVar15 = param_2;
                            fVar25 = param_3;
                            Coffee_UIExtensions_UIParticleRenderer__Simulate(fVar14,param_4,0);
                          }
                        }
                        uVar4 = UnityEngine_ParticleSystem_MainModule__get_loop(&local_a8,0);
                        if ((uVar4 & 1) == 0) {
                          fVar17 = (float)UnityEngine_ParticleSystem_MainModule__get_duration
                                                    (&local_a8,0);
                          if (param_4[0x23] == 0) goto LAB_04401ef0;
                          fVar18 = (float)UnityEngine_ParticleSystem__get_time(param_4[0x23],0);
                          if (fVar17 <= fVar18) {
                            if (param_4[0x23] == 0) goto LAB_04401ef0;
                            uVar4 = UnityEngine_ParticleSystem__IsAlive(param_4[0x23],0);
                            if ((uVar4 & 1) == 0) {
                              if (param_4[0x23] == 0) goto LAB_04401ef0;
                              iVar3 = UnityEngine_ParticleSystem__get_particleCount(param_4[0x23],0)
                              ;
                              if (iVar3 != 0) goto LAB_044015f4;
                            }
                            if (param_4[0x23] == 0) goto LAB_04401ef0;
                            UnityEngine_ParticleSystem__Stop(param_4[0x23],0,0);
                          }
                        }
LAB_044015f4:
                        *(float *)(param_4 + 0x26) = fVar14;
                        *(float *)((long)param_4 + 0x134) = param_2;
                        *(float *)(param_4 + 0x27) = param_3;
                        *(undefined4 *)((long)param_4 + 0x124) = uVar16;
                        *(float *)(param_4 + 0x25) = fVar22;
                        *(float *)((long)param_4 + 300) = fVar24;
                        *(undefined1 *)(param_4 + 0x1b) = 0;
                      }
                    }
                  }
                  if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar13 = **(long **)(DAT_0918c440 + 0xb8);
                  if (lVar13 == 0) goto LAB_04401ef0;
                  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_04402130;
                  lVar13 = UnityEngine_CombineInstance__get_mesh(lVar13 + 0x20,0);
                  if (lVar13 == 0) goto LAB_04401ef0;
                  UnityEngine_Mesh__Clear(lVar13,0,0);
                  lVar13 = **(long **)(DAT_0918c440 + 0xb8);
                  if (lVar13 == 0) goto LAB_04401ef0;
                  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_04402130;
                  lVar13 = UnityEngine_CombineInstance__get_mesh(lVar13 + 0x20,0);
                  if (lVar13 == 0) goto LAB_04401ef0;
                  UnityEngine_Mesh__get_bounds(&local_100,lVar13,0);
                  if ((((uint)ABS(fStack_f4) < 0x7f800001) && (0.0 < fStack_f4)) &&
                     (ABS(fStack_f4) != INFINITY)) {
                    if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar13 = **(long **)(DAT_0918c440 + 0xb8);
                    if (lVar13 == 0) goto LAB_04401ef0;
                    if (*(int *)(lVar13 + 0x18) == 0) goto LAB_04402130;
                    lVar13 = UnityEngine_CombineInstance__get_mesh(lVar13 + 0x20,0);
                    if (lVar13 == 0) goto LAB_04401ef0;
                    UnityEngine_Mesh__RecalculateBounds(lVar13,0);
                  }
                  if (*(char *)((long)param_4 + 0xe1) == '\0') {
LAB_04401790:
                    lVar13 = param_4[0x29];
                    if (*(int *)(DAT_09188ee8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar4 = Coffee_UIParticleInternal_ParticleSystemExtensions__CanBakeMesh(lVar13);
                    if ((uVar4 & 1) != 0) {
                      lVar13 = param_4[0x23];
                      if (*(int *)(DAT_09188ee8 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      Coffee_UIParticleInternal_ParticleSystemExtensions__ValidateShape(lVar13);
                      lVar13 = param_4[0x29];
                      if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      lVar11 = **(long **)(DAT_0918c440 + 0xb8);
                      if (lVar11 == 0) goto LAB_04401ef0;
                      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_04402130;
                      uVar5 = UnityEngine_CombineInstance__get_mesh(lVar11 + 0x20,0);
                      if (lVar13 == 0) goto LAB_04401ef0;
                      UnityEngine_ParticleSystemRenderer__BakeMesh(lVar13,uVar5,param_5,1,0);
                    }
                  }
                  else {
                    if (param_4[0x22] == 0) goto LAB_04401ef0;
                    if (*(uint *)(param_4[0x22] + 0xf8) < 4) {
                      if (param_4[0x23] == 0) goto LAB_04401ef0;
                      iVar3 = UnityEngine_ParticleSystem__get_particleCount(param_4[0x23],0);
                      if (iVar3 < 1) {
                        if (*(char *)((long)param_4 + 0xe1) == '\0') goto LAB_04401790;
                      }
                      else {
                        lVar13 = param_4[0x29];
                        if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        lVar11 = **(long **)(DAT_0918c440 + 0xb8);
                        if (lVar11 == 0) goto LAB_04401ef0;
                        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_04402130;
                        uVar5 = UnityEngine_CombineInstance__get_mesh(lVar11 + 0x20,0);
                        if (lVar13 == 0) goto LAB_04401ef0;
                        UnityEngine_ParticleSystemRenderer__BakeTrailsMesh(lVar13,uVar5,param_5,1,0)
                        ;
                      }
                    }
                  }
                  if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar13 = **(long **)(DAT_0918c440 + 0xb8);
                  if (lVar13 == 0) goto LAB_04401ef0;
                  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_04402130;
                  lVar13 = UnityEngine_CombineInstance__get_mesh(lVar13 + 0x20,0);
                  if (lVar13 == 0) goto LAB_04401ef0;
                  iVar3 = UnityEngine_Mesh__get_vertexCount(lVar13,0);
                  if (0xfffe < iVar3) {
                    lVar13 = FUN_03f5c394(DAT_09180318,3);
                    local_100 = *(undefined4 *)((long)param_4 + 0xdc);
                    uVar5 = FUN_03f5c42c(DAT_09535420,&local_100);
                    if (lVar13 == 0) goto LAB_04401ef0;
                    FUN_039b0da0(lVar13,uVar5);
                    FUN_039af17c(lVar13,0,uVar5);
                    local_180 = *(undefined1 *)((long)param_4 + 0xe1);
                    uVar5 = FUN_03f5c42c(DAT_09535400,&local_180);
                    FUN_039b0da0(lVar13,uVar5);
                    FUN_039af17c(lVar13,1,uVar5);
                    if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar11 = **(long **)(DAT_0918c440 + 0xb8);
                    if (lVar11 == 0) goto LAB_04401ef0;
                    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_04402130;
                    lVar11 = UnityEngine_CombineInstance__get_mesh(lVar11 + 0x20,0);
                    if (lVar11 == 0) goto LAB_04401ef0;
                    local_140 = UnityEngine_Mesh__get_vertexCount(lVar11,0);
                    uVar5 = FUN_03f5c42c(DAT_09535420,&local_140);
                    FUN_039b0da0(lVar13,uVar5);
                    FUN_039af17c(lVar13,2,uVar5);
                    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    UnityEngine_Debug__LogErrorFormat(param_4,DAT_09210b38,lVar13,0);
                    lVar13 = **(long **)(DAT_0918c440 + 0xb8);
                    if (lVar13 == 0) goto LAB_04401ef0;
                    if (*(int *)(lVar13 + 0x18) == 0) goto LAB_04402130;
                    lVar13 = UnityEngine_CombineInstance__get_mesh(lVar13 + 0x20,0);
                    if (lVar13 == 0) goto LAB_04401ef0;
                    UnityEngine_Mesh__Clear(lVar13,0,0);
                  }
                  lVar13 = param_4[0x22];
                  if (lVar13 != 0) {
                    if (*(uint *)(lVar13 + 0xf8) < 4) {
                      if (*(int *)(lVar13 + 0x104) == 1) {
                        if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        lVar13 = **(long **)(DAT_0918c440 + 0xb8);
                        if (((lVar13 == 0) ||
                            (lVar11 = UnityEngine_UI_Graphic__get_canvasRenderer(param_4,0),
                            lVar11 == 0)) ||
                           (lVar11 = UnityEngine_Component__get_transform(lVar11,0), lVar11 == 0))
                        goto LAB_04401ef0;
                        UnityEngine_Transform__get_worldToLocalMatrix(&local_100,lVar11,0);
                        Coffee_UIExtensions_UIParticleRenderer__GetWorldMatrix
                                  (&local_140,uVar16,fVar22,fVar24,fVar14,param_2,param_3,param_4);
                        local_1c0[0] = CONCAT44(uStack_fc,local_100);
                        uStack_1a8 = uStack_e8;
                        uStack_198 = uStack_d8;
                        local_1a0 = local_e0;
                        uStack_188 = uStack_c8;
                        uStack_190 = uStack_d0;
                        local_200 = CONCAT44(uStack_13c,local_140);
                        uStack_1f8 = uStack_138;
                        uStack_1e8 = uStack_128;
                        uStack_1f0 = local_130;
                        uStack_1d8 = uStack_118;
                        local_1e0 = local_120;
                        uStack_1c8 = uStack_108;
                        uStack_1d0 = local_110;
                        FUN_04125f68(&local_180,local_1c0,&local_200,0);
                        if (*(int *)(lVar13 + 0x18) == 0) {
LAB_04402130:
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c558();
                        }
                        local_240 = CONCAT71(uStack_17f,local_180);
                        puVar8 = &local_240;
                        uStack_238 = uStack_178;
                        uStack_228 = uStack_168;
                        uStack_230 = uStack_170;
                        uStack_218 = uStack_158;
                        local_220 = local_160;
                        uStack_208 = uStack_148;
                        uStack_210 = uStack_150;
                      }
                      else {
                        if ((param_4[0x23] == 0) ||
                           (lVar13 = UnityEngine_Component__get_transform(param_4[0x23],0),
                           lVar13 == 0)) goto LAB_04401ef0;
                        fVar17 = (float)UnityEngine_Transform__get_position(lVar13,0);
                        if ((param_4[0x22] == 0) ||
                           (fVar18 = fVar15, fVar26 = fVar25,
                           lVar13 = UnityEngine_Component__get_transform(param_4[0x22],0),
                           lVar13 == 0)) goto LAB_04401ef0;
                        fVar19 = (float)UnityEngine_Transform__get_position(lVar13,0);
                        fVar23 = fVar18;
                        fVar27 = fVar26;
                        if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        lVar13 = **(long **)(DAT_0918c440 + 0xb8);
                        if (((lVar13 == 0) ||
                            (lVar11 = UnityEngine_UI_Graphic__get_canvasRenderer(param_4,0),
                            lVar11 == 0)) ||
                           (lVar11 = UnityEngine_Component__get_transform(lVar11,0), lVar11 == 0))
                        goto LAB_04401ef0;
                        UnityEngine_Transform__get_worldToLocalMatrix(&local_100,lVar11,0);
                        fVar20 = (float)FUN_0436ebb8(0);
                        local_280[0] = CONCAT44(uStack_fc,local_100);
                        local_2c0 = 0x3f800000;
                        uStack_268 = uStack_e8;
                        local_290 = (fVar17 - fVar19) * (fVar14 - fVar20);
                        local_28c = (fVar15 - fVar18) * (param_2 - fVar23);
                        local_2ac = 0x3f800000;
                        local_288 = (fVar25 - fVar26) * (param_3 - fVar27);
                        local_284 = 0x3f800000;
                        uStack_258 = uStack_d8;
                        local_260 = local_e0;
                        uStack_248 = uStack_c8;
                        uStack_250 = uStack_d0;
                        local_2b4 = 0;
                        local_2bc = 0;
                        local_2a8 = 0;
                        uStack_2a0 = 0;
                        local_298 = 0x3f800000;
                        FUN_04125f68(&local_140,local_280,&local_2c0,0);
                        Coffee_UIExtensions_UIParticleRenderer__GetWorldMatrix
                                  (&local_180,uVar16,fVar22,fVar24,fVar14,param_2,param_3,param_4);
                        uStack_328 = uStack_128;
                        local_330 = local_130;
                        uStack_318 = uStack_118;
                        uStack_320 = local_120;
                        local_380 = CONCAT71(uStack_17f,local_180);
                        uStack_308 = uStack_108;
                        local_310 = local_110;
                        uStack_378 = uStack_178;
                        uStack_368 = uStack_168;
                        uStack_370 = uStack_170;
                        uStack_340 = CONCAT44(uStack_13c,local_140);
                        uStack_358 = uStack_158;
                        local_360 = local_160;
                        uStack_348 = uStack_148;
                        local_350 = uStack_150;
                        uStack_338 = uStack_138;
                        FUN_04125f68(&local_300,&uStack_340,&local_380,0);
                        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_04402130;
                        puVar8 = &local_3c0;
                        uStack_3b8 = uStack_2f8;
                        local_3c0 = local_300;
                        uStack_3a8 = uStack_2e8;
                        uStack_3b0 = uStack_2f0;
                        uStack_398 = uStack_2d8;
                        local_3a0 = local_2e0;
                        uStack_388 = uStack_2c8;
                        uStack_390 = uStack_2d0;
                      }
                      UnityEngine_CombineInstance__set_transform(lVar13 + 0x20,puVar8,0);
                      if (*(int *)(DAT_09184e28 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      lVar13 = UnityEngine_UI_Graphic__get_workerMesh(0);
                      if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_0918c440);
                      }
                      if (lVar13 != 0) {
                        UnityEngine_Mesh__CombineMeshes
                                  (lVar13,**(undefined8 **)(DAT_0918c440 + 0xb8),1,1,0);
                        lVar13 = UnityEngine_UI_Graphic__get_workerMesh(0);
                        if (lVar13 != 0) {
                          UnityEngine_Mesh__RecalculateBounds(lVar13,0);
                          lVar13 = UnityEngine_UI_Graphic__get_workerMesh(0);
                          if (lVar13 != 0) {
                            UnityEngine_Mesh__get_bounds(&local_100,lVar13,0);
                            uVar16 = local_100;
                            lVar13 = UnityEngine_UI_Graphic__get_workerMesh(0);
                            if (lVar13 != 0) {
                              local_3d8 = uVar16;
                              uStack_3d4 = uStack_fc;
                              local_3d0 = 0;
                              local_3cc = fStack_f4;
                              uStack_3c8 = local_f0;
                              local_3c4 = 0;
                              UnityEngine_Mesh__set_bounds(lVar13,&local_3d8,0);
                              *(undefined4 *)((long)param_4 + 0xe4) = uVar16;
                              *(undefined4 *)(param_4 + 0x1d) = uStack_fc;
                              *(undefined4 *)((long)param_4 + 0xec) = 0;
                              *(float *)(param_4 + 0x1e) = fStack_f4;
                              *(undefined4 *)((long)param_4 + 0xf4) = local_f0;
                              *(undefined4 *)(param_4 + 0x1f) = 0;
                              uVar4 = Coffee_UIExtensions_UIParticleProjectSettings__get_enableLinearToGamma
                                                ();
                              if ((uVar4 & 1) != 0) {
                                UnityEngine_UI_Graphic__get_canvas(param_4,0);
                                uVar4 = Coffee_UIParticleInternal_CanvasExtensions__ShouldGammaToLinearInMesh
                                                  ();
                                if ((uVar4 & 1) != 0) {
                                  if (*(int *)(DAT_09184e28 + 0xe4) == 0) {
                                    FUN_03f5c424();
                                  }
                                  uVar5 = UnityEngine_UI_Graphic__get_workerMesh(0);
                                  if (*(int *)(DAT_091826d0 + 0xe4) == 0) {
                                    FUN_03f5c424(DAT_091826d0);
                                  }
                                  Coffee_UIParticleInternal_Color32Extensions__LinearToGamma(uVar5);
                                }
                              }
                              local_c0 = FUN_05565b2c(DAT_091a9130);
                              uVar5 = DAT_09171cc0;
                              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
                              UnityEngine_Component__GetComponentsForListInternal
                                        (param_4,uVar5,local_c0,0);
                              if (local_c0 != 0) {
                                iVar3 = 0;
                                do {
                                  if (*(int *)(local_c0 + 0x18) <= iVar3) {
                                    FUN_05565b90(&local_c0,DAT_091a9138);
                                    goto LAB_04401f08;
                                  }
                                  lVar13 = FUN_057e0998(local_c0,iVar3,DAT_091abbc8);
                                  if (*(int *)(DAT_09184e28 + 0xe4) == 0) {
                                    FUN_03f5c424(DAT_09184e28);
                                  }
                                  uVar5 = UnityEngine_UI_Graphic__get_workerMesh(0);
                                  lVar11 = DAT_09186070;
                                  if (lVar13 == 0) break;
                                  lVar6 = thunk_FUN_03f99350(lVar13,DAT_09186070);
                                  lVar9 = DAT_09186070;
                                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c8d0(lVar13,lVar11);
                                  }
                                  plVar7 = (long *)thunk_FUN_03f99350(lVar13,DAT_09186070);
                                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c8d0(lVar13,lVar9);
                                  }
                                  lVar13 = *plVar7;
                                  uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
                                  if (uVar4 != 0) {
                                    piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar12 + -2) == lVar9) {
                                        puVar8 = (undefined8 *)
                                                 (lVar13 + (long)*piVar12 * 0x10 + 0x138);
                                        goto LAB_04401ed4;
                                      }
                                      uVar4 = uVar4 - 1;
                                      piVar12 = piVar12 + 4;
                                    } while (uVar4 != 0);
                                  }
                                  puVar8 = (undefined8 *)FUN_03f95da8(plVar7,lVar9,0);
LAB_04401ed4:
                                  (*(code *)*puVar8)(plVar7,uVar5,puVar8[1]);
                                  iVar3 = iVar3 + 1;
                                } while (local_c0 != 0);
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
LAB_04401f08:
                      Coffee_UIExtensions_UIParticleRenderer__UpdateMaterialProperties(param_4);
                      lVar13 = FUN_05565b2c(DAT_091a9140);
                      lVar11 = param_4[0x22];
                      local_b0 = lVar13;
                      if (lVar11 != 0) {
                        if (*(int *)(lVar11 + 0xf8) != 0) {
                          uVar16 = *(undefined4 *)(lVar11 + 0x130);
                          uVar1 = *(undefined4 *)((long)param_4 + 0xdc);
                          if (*(int *)(DAT_0918c448 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          Coffee_UIExtensions_UIParticleUpdater__GetGroupedRenderers
                                    (uVar16,uVar1,lVar13);
                        }
                        if (lVar13 != 0) {
                          if (0 < *(int *)(lVar13 + 0x18)) {
                            iVar3 = 0;
                            do {
                              lVar11 = FUN_057e0998(lVar13,iVar3,DAT_091b1668);
                              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                FUN_03f5c424(DAT_09188ad0);
                              }
                              uVar4 = UnityEngine_Object__op_Equality(lVar11,param_4,0);
                              if ((uVar4 & 1) == 0) {
                                if (lVar11 == 0) goto LAB_04401ef0;
                                lVar9 = UnityEngine_UI_Graphic__get_canvasRenderer(lVar11,0);
                                if (*(int *)(DAT_09184e28 + 0xe4) == 0) {
                                  FUN_03f5c424(DAT_09184e28);
                                }
                                uVar5 = UnityEngine_UI_Graphic__get_workerMesh(0);
                                if (lVar9 == 0) goto LAB_04401ef0;
                                UnityEngine_CanvasRenderer__SetMesh(lVar9,uVar5,0);
                                uVar21 = *(undefined8 *)((long)param_4 + 0xec);
                                uVar5 = *(undefined8 *)((long)param_4 + 0xe4);
                                *(undefined8 *)(lVar11 + 0xf4) =
                                     *(undefined8 *)((long)param_4 + 0xf4);
                                *(undefined8 *)(lVar11 + 0xec) = uVar21;
                                *(undefined8 *)(lVar11 + 0xe4) = uVar5;
                                lVar9 = UnityEngine_UI_Graphic__get_canvasRenderer(lVar11,0);
                                if (lVar9 == 0) goto LAB_04401ef0;
                                UnityEngine_CanvasRenderer__set_materialCount(lVar9,1,0);
                                lVar11 = UnityEngine_UI_Graphic__get_canvasRenderer(lVar11,0);
                                uVar5 = (**(code **)(*param_4 + 0x358))
                                                  (param_4,*(undefined8 *)(*param_4 + 0x360));
                                if (lVar11 == 0) goto LAB_04401ef0;
                                UnityEngine_CanvasRenderer__SetMaterial(lVar11,uVar5,0,0);
                              }
                              iVar3 = iVar3 + 1;
                            } while (iVar3 < *(int *)(lVar13 + 0x18));
                          }
                          FUN_05565b90(&local_b0,DAT_091a9148);
                          if (param_4[0x22] != 0) {
                            uVar2 = *(uint *)(param_4[0x22] + 0xf8);
                            if ((uVar2 < 5) && (uVar2 != 3)) {
                              lVar13 = UnityEngine_UI_Graphic__get_canvasRenderer(param_4,0);
                              if (*(int *)(DAT_09184e28 + 0xe4) == 0) {
                                FUN_03f5c424(DAT_09184e28);
                              }
                              uVar5 = UnityEngine_UI_Graphic__get_workerMesh(0);
                              if (lVar13 != 0) {
                                UnityEngine_CanvasRenderer__SetMesh(lVar13,uVar5,0);
                                return;
                              }
                            }
                            else {
                              if (*(int *)(DAT_09184e28 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              lVar13 = UnityEngine_UI_Graphic__get_workerMesh(0);
                              if (lVar13 != 0) {
                                UnityEngine_Mesh__Clear(lVar13,0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_04401ef0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_044012b4:
  if (*(int *)(DAT_09184e28 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar13 = UnityEngine_UI_Graphic__get_workerMesh(0);
  if (lVar13 != 0) {
    UnityEngine_Mesh__Clear(lVar13,0);
    lVar13 = UnityEngine_UI_Graphic__get_canvasRenderer(param_4,0);
    uVar5 = UnityEngine_UI_Graphic__get_workerMesh(0);
    if (lVar13 != 0) {
      UnityEngine_CanvasRenderer__SetMesh(lVar13,uVar5,0);
      *(undefined8 *)((long)param_4 + 0xec) = 0;
      *(undefined8 *)((long)param_4 + 0xe4) = 0;
      *(undefined8 *)((long)param_4 + 0xf4) = 0;
      return;
    }
  }
LAB_04401ef0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

