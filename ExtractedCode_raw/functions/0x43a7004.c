// rea decompile_all
// name: ChocDino.UIFX.MotionBlurReal$$RenderMeshToTexture
// address: 0x43a7004
// body: available
// range: 0x43a7004-0x43a786f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a7434 to 0x85f70f4 UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43a7868 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43a786c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurReal__RenderMeshToTexture(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
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
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  if ((DAT_09517acd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09188400);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09189ff0);
    FUN_03f5c2a4(&DAT_09192a40);
    FUN_03f5c2a4(&DAT_0918bc08);
    FUN_03f5c2a4(&DAT_0918c760);
    FUN_03f5c2a4(&DAT_0920d360);
    DAT_09517acd = 1;
  }
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(float *)(param_1 + 0x158) <= 0.0) {
    return;
  }
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(float *)(param_1 + 0x15c) <= 0.0) {
    return;
  }
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar17 = *(float *)(param_1 + 0x158);
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
    cVar7 = DAT_095163ce;
  }
  else {
    cVar7 = '\x01';
  }
  fVar18 = *(float *)(param_1 + 0x15c);
  uVar1 = 0x7fffffff;
  if ((float)(int)fVar17 != INFINITY) {
    uVar1 = (int)fVar17 - 1;
  }
  uVar1 = uVar1 | (int)uVar1 >> 0x10;
  uVar1 = uVar1 | (int)uVar1 >> 8;
  uVar1 = uVar1 | (int)uVar1 >> 4;
  uVar1 = uVar1 | (int)uVar1 >> 2;
  uVar1 = uVar1 | (int)uVar1 >> 1;
  if (cVar7 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  iVar4 = uVar1 + 1;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = 0x7fffffff;
  if ((float)(int)fVar18 != INFINITY) {
    uVar2 = (int)fVar18 - 1;
  }
  uVar2 = uVar2 | (int)uVar2 >> 0x10;
  iVar8 = 0x1000;
  if (0xfff < iVar4) {
    iVar4 = 0x1000;
  }
  uVar2 = uVar2 | (int)uVar2 >> 8;
  uVar2 = uVar2 | (int)uVar2 >> 4;
  uVar2 = uVar2 | (int)uVar2 >> 2;
  uVar2 = uVar2 | (int)uVar2 >> 1;
  if ((int)(uVar2 + 1) < 0x1000) {
    iVar8 = uVar2 + 1;
  }
  if (0x7ffffffe < uVar1) {
    return;
  }
  if (0x7ffffffe < uVar2) {
    return;
  }
  if (*(float *)(param_1 + 0x130) <= 0.0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_0920d360,0);
    return;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x1a0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar5 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0x1a0);
    if (plVar6 == (long *)0x0) goto LAB_043a7868;
    iVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    if (iVar3 == iVar4) {
      plVar6 = *(long **)(param_1 + 0x1a0);
      if (plVar6 == (long *)0x0) goto LAB_043a7868;
      iVar3 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      if (iVar3 == iVar8) goto LAB_043a72a8;
    }
    UnityEngine_RenderTexture__ReleaseTemporary(*(undefined8 *)(param_1 + 0x1a0),0);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x1a0,0);
  }
LAB_043a72a8:
  uVar10 = *(undefined8 *)(param_1 + 0x1a0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    uVar10 = UnityEngine_RenderTexture__GetTemporary(iVar4,iVar8,0,2,1,0);
    *(undefined8 *)(param_1 + 0x1a0) = uVar10;
    thunk_FUN_03f5d7b8(param_1 + 0x1a0,uVar10);
  }
  lVar9 = *(long *)(param_1 + 0x188);
  plVar6 = (long *)ChocDino_UIFX_MotionBlurReal__get_GraphicComponent(param_1);
  if ((plVar6 == (long *)0x0) ||
     (uVar10 = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370)), lVar9 == 0))
  goto LAB_043a7868;
  UnityEngine_Material__set_mainTexture(lVar9,uVar10,0);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043a7868;
  plVar6 = (long *)UnityEngine_Material__get_mainTexture(*(long *)(param_1 + 0x188),0);
  if ((plVar6 == (long *)0x0) || (*plVar6 != DAT_0918bc08)) {
LAB_043a7438:
    lVar9 = *(long *)(param_1 + 0x188);
    if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = **(undefined4 **)(DAT_0918c760 + 0xb8);
    uVar5 = FUN_043b2e90(0);
    if (lVar9 == 0) goto LAB_043a7868;
  }
  else {
    if ((*(long *)(param_1 + 0x188) == 0) ||
       (plVar6 = (long *)UnityEngine_Material__get_mainTexture(*(long *)(param_1 + 0x188),0),
       plVar6 == (long *)0x0)) goto LAB_043a7868;
    if (*plVar6 != DAT_0918bc08) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    iVar4 = UnityEngine_Texture2D__get_format(plVar6,0);
    if (iVar4 != 1) goto LAB_043a7438;
    lVar9 = *(long *)(param_1 + 0x188);
    if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = **(undefined4 **)(DAT_0918c760 + 0xb8);
    if (*(int *)(DAT_09188400 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188400);
    }
    if (lVar9 == 0) goto LAB_043a7868;
    uVar5 = (ulong)**(uint **)(DAT_09188400 + 0xb8);
  }
  UnityEngine_Material__SetColorImpl(uVar5,lVar9,uVar12,0);
  if (*(long *)(param_1 + 0x198) != 0) {
    UnityEngine_Rendering_CommandBuffer__Clear(*(long *)(param_1 + 0x198),0);
    lVar9 = *(long *)(param_1 + 0x198);
    uVar10 = *(undefined8 *)(param_1 + 0x1a0);
    if (*(int *)(DAT_09189ff0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit(&local_d8,uVar10,0);
    if (lVar9 != 0) {
      local_e0 = local_b8;
      uStack_f8 = uStack_d0;
      local_100 = local_d8;
      uStack_e8 = uStack_c0;
      uStack_f0 = uStack_c8;
      UnityEngine_Rendering_CommandBuffer__SetRenderTarget(lVar9,&local_100,0);
      lVar9 = *(long *)(param_1 + 0x198);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar9 != 0) {
        UnityEngine_Rendering_CommandBuffer__SetViewport
                  (0,0,(int)*(float *)(param_1 + 0x158),(int)*(float *)(param_1 + 0x15c),lVar9,0);
        if (*(long *)(param_1 + 0x198) != 0) {
          UnityEngine_Rendering_CommandBuffer__ClearRenderTarget
                    (0,0,0,0,0x3f800000,*(long *)(param_1 + 0x198),0,1,0);
          fVar18 = *(float *)(param_1 + 0x140);
          lVar9 = *(long *)(param_1 + 0x198);
          fVar17 = fVar18 * (*(float *)(param_1 + 0x158) / *(float *)(param_1 + 0x15c));
          UnityEngine_Matrix4x4__Ortho
                    (&local_140,-(fVar17 * 0.5),fVar17 * 0.5,-(fVar18 * 0.5),fVar18 * 0.5,0x3c23d70a
                     ,0x447a0000,0);
          if (lVar9 != 0) {
            uStack_178 = uStack_138;
            local_180 = local_140;
            uStack_168 = uStack_128;
            uStack_170 = uStack_130;
            uStack_158 = uStack_118;
            local_160 = local_120;
            uStack_148 = uStack_108;
            uStack_150 = uStack_110;
            UnityEngine_Rendering_CommandBuffer__SetProjectionMatrix(lVar9,&local_180,0);
            fVar18 = (float)uStack_110;
            fVar17 = (float)uStack_130;
            uVar10 = *(undefined8 *)(param_1 + 0xd8);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Object__op_Implicit(uVar10,0);
            fVar19 = *(float *)(param_1 + 0x144);
            fVar20 = *(float *)(param_1 + 0x148);
            fVar21 = *(float *)(param_1 + 0x14c);
            fVar11 = (float)FUN_043b2ed4(0);
            fVar11 = fVar19 + fVar11;
            FUN_043b2f18(0);
            FUN_043b2f5c(&local_1c0,fVar19,fVar20,fVar21,fVar11,fVar20 + fVar17,fVar21 + fVar18,0);
            uStack_a8 = uStack_1b8;
            local_b0 = local_1c0;
            uStack_98 = uStack_1a8;
            uStack_a0 = uStack_1b0;
            uStack_88 = uStack_198;
            local_90 = local_1a0;
            uStack_78 = uStack_188;
            uStack_80 = uStack_190;
            uVar5 = uStack_1b0;
            uVar16 = uStack_190;
            uVar12 = FUN_043b2d5c(0);
            uVar14 = (undefined4)uVar5;
            uVar15 = (undefined4)uVar16;
            uVar13 = FUN_041ca738(0);
            FUN_043b2cf4(&local_200,uVar12,uVar5 & 0xffffffff,uVar16 & 0xffffffff,uVar13,uVar14,
                         uVar15,fVar11,0);
            UnityEngine_Object__op_Implicit(*(undefined8 *)(param_1 + 0xd8),0);
            UnityEngine_Matrix4x4__Internal_Inverse(&local_240,&local_b0,0);
            uStack_2b8 = uStack_1f8;
            local_2c0 = local_200;
            uStack_2a8 = uStack_1e8;
            uStack_2b0 = uStack_1f0;
            uStack_298 = uStack_1d8;
            local_2a0 = local_1e0;
            uStack_288 = uStack_1c8;
            uStack_290 = uStack_1d0;
            uStack_2f8 = uStack_238;
            local_300 = local_240;
            uStack_2e8 = uStack_228;
            uStack_2f0 = uStack_230;
            uStack_2d8 = uStack_218;
            local_2e0 = local_220;
            uStack_2c8 = uStack_208;
            uStack_2d0 = uStack_210;
            FUN_04125f68(&local_280,&local_2c0,&local_300,0);
            if (*(long *)(param_1 + 0x198) != 0) {
              uStack_338 = uStack_278;
              local_340 = local_280;
              uStack_328 = uStack_268;
              uStack_330 = uStack_270;
              uStack_318 = uStack_258;
              local_320 = local_260;
              uStack_308 = uStack_248;
              uStack_310 = uStack_250;
              UnityEngine_Rendering_CommandBuffer__SetViewMatrix
                        (*(long *)(param_1 + 0x198),&local_340,0);
              uVar15 = (undefined4)uStack_250;
              uVar14 = (undefined4)uStack_270;
              lVar9 = *(long *)(param_1 + 0x198);
              uVar10 = *(undefined8 *)(param_1 + 0x110);
              uVar12 = FUN_041ca738(0);
              FUN_0436ebb8(0);
              FUN_043b2cf4(&local_380,0,0,0x41200000,uVar12,uVar14,uVar15,uVar13,0);
              if (lVar9 != 0) {
                uStack_3b8 = uStack_378;
                local_3c0 = local_380;
                uStack_3a8 = uStack_368;
                uStack_3b0 = uStack_370;
                uStack_398 = uStack_358;
                local_3a0 = local_360;
                uStack_388 = uStack_348;
                uStack_390 = uStack_350;
                UnityEngine_Rendering_CommandBuffer__DrawMesh
                          (lVar9,uVar10,&local_3c0,*(undefined8 *)(param_1 + 0x188),0);
                uVar10 = *(undefined8 *)(param_1 + 0x198);
                if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                UnityEngine_Graphics__ExecuteCommandBuffer(uVar10,0);
                if (*(long *)(param_1 + 400) != 0) {
                  UnityEngine_Material__set_mainTexture
                            (*(long *)(param_1 + 400),*(undefined8 *)(param_1 + 0x1a0),0);
                  lVar9 = *(long *)(param_1 + 400);
                  if (*(int *)(DAT_09192a40 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  if (lVar9 != 0) {
                    UnityEngine_Material__SetTextureImpl
                              (lVar9,**(undefined4 **)(DAT_09192a40 + 0xb8),
                               *(undefined8 *)(param_1 + 0x1a0),0);
                    if (*(long *)(param_1 + 400) != 0) {
                      UnityEngine_Material__SetFloat
                                (1.0 / (float)*(int *)(param_1 + 0x24),*(long *)(param_1 + 400),
                                 *(undefined4 *)(*(long *)(DAT_09192a40 + 0xb8) + 4),0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_043a7868:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

