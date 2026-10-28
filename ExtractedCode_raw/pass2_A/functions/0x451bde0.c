// rea decompile_all
// name: Utilities.CameraBlurSnapshot$$Capture
// address: 0x451bde0
// body: available
// range: 0x451bde0-0x451c44b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451c404 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c408 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c40c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c410 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c41c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c420 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c424 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c428 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c434 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c438 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Utilities_CameraBlurSnapshot__Capture
               (long param_1,long param_2,undefined4 param_3,undefined8 param_4,ulong param_5,
               long param_6)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double local_150;
  long **pplStack_148;
  long **local_140;
  undefined8 *puStack_138;
  undefined4 *local_130;
  undefined8 *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  long *local_98;
  long *local_88;
  
  if ((DAT_09518593 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091822f0);
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180448);
    DAT_09518593 = 1;
  }
  local_88 = (long *)0x0;
  local_98 = (long *)0x0;
  local_a0 = 0;
  local_d8 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  fVar20 = 0.0;
  if (0.0 <= (float)param_5) {
    fVar20 = (float)param_5;
  }
  local_dc = 0;
  local_e8 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar8 = (int)param_4;
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  fVar20 = fVar20 + 1.0;
  iVar4 = UnityEngine_Camera__get_pixelWidth(param_2,0);
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  fVar21 = (fVar20 * (float)iVar4) / (float)iVar8;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar19 = (double)fVar21;
  dVar18 = modf(dVar19,&local_150);
  if (0.0 <= fVar21) {
    if (dVar18 == 0.5) {
      dVar18 = 1.0;
      goto LAB_0451bf44;
    }
    dVar19 = (double)(long)(dVar19 + 0.5);
  }
  else if (dVar18 == -0.5) {
    dVar18 = -1.0;
LAB_0451bf44:
    dVar19 = local_150;
    if (((long)local_150 & 1U) != 0) {
      dVar19 = local_150 + dVar18;
    }
  }
  else {
    dVar19 = (double)(long)(dVar19 + -0.5);
  }
  iVar4 = (int)dVar19;
  if (iVar4 < 0x11) {
    iVar4 = 0x10;
  }
  iVar1 = 0x10;
  if (dVar19 != INFINITY) {
    iVar1 = iVar4;
  }
  iVar4 = UnityEngine_Camera__get_pixelHeight(param_2,0);
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  fVar21 = (fVar20 * (float)iVar4) / (float)iVar8;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar19 = (double)fVar21;
  dVar18 = modf(dVar19,&local_150);
  if (0.0 <= fVar21) {
    if (dVar18 != 0.5) {
      local_150 = (double)(long)(dVar19 + 0.5);
      goto LAB_0451c05c;
    }
    dVar18 = 1.0;
  }
  else {
    if (dVar18 != -0.5) {
      local_150 = (double)(long)(dVar19 + -0.5);
      goto LAB_0451c05c;
    }
    dVar18 = -1.0;
  }
  if (((long)local_150 & 1U) != 0) {
    local_150 = local_150 + dVar18;
  }
LAB_0451c05c:
  iVar8 = (int)local_150;
  fVar21 = (1.0 - 1.0 / fVar20) * 0.5;
  if (iVar8 < 0x11) {
    iVar8 = 0x10;
  }
  iVar4 = 0x10;
  if (local_150 != INFINITY) {
    iVar4 = iVar8;
  }
  UnityEngine_RenderTextureDescriptor___ctor(&local_d0,iVar1,iVar4,0,0x18,0);
  uStack_c8 = CONCAT44(uStack_c8._4_4_,1);
  uStack_108 = uStack_b8;
  local_110 = local_c0;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  local_f0 = local_a0;
  uStack_118 = uStack_c8;
  local_120 = local_d0;
  local_88 = (long *)UnityEngine_RenderTexture__GetTemporary(&local_120,0);
  uVar9 = (uint)((ulong)param_4 >> 0x20);
  if (5 < (int)uVar9) {
    uVar9 = 6;
  }
  if ((int)uVar9 < 2) {
    uVar9 = 1;
  }
  local_98 = (long *)FUN_03f5c394(DAT_09180448,uVar9);
  plVar12 = local_88;
  pplStack_148 = &local_88;
  local_150 = 0.0;
  local_140 = &local_98;
  puStack_138 = &local_d8;
  local_130 = &local_dc;
  puStack_128 = &local_e8;
  if (*(int *)(DAT_091822f0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_CameraBlurSnapshot__RenderCamera(fVar20,param_2,plVar12,param_3);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_Material__SetFloat
            (param_5 >> 0x20,*(long *)(param_1 + 0x10),**(undefined4 **)(DAT_091822f0 + 0xb8),0);
  if ((param_6 == 0) ||
     (((*(char *)(param_6 + 0x10) == '\0' && (*(char *)(param_6 + 0x20) == '\0')) &&
      (*(char *)(param_6 + 100) == '\0')))) {
    uVar11 = 1;
  }
  else {
    Utilities_CameraBlurSnapshot__ApplyGrading(fVar21,(float)iVar1 / (float)iVar4,param_1,param_6);
    uVar11 = 2;
  }
  uVar15 = 0;
  lVar17 = 0x20;
  plVar12 = local_88;
  while( true ) {
    plVar2 = local_98;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar8 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
    iVar5 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
    if (iVar8 < 0) {
      iVar8 = iVar8 + 1;
    }
    iVar8 = iVar8 >> 1;
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    if (iVar5 < 0) {
      iVar5 = iVar5 + 1;
    }
    iVar5 = iVar5 >> 1;
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    lVar6 = UnityEngine_RenderTexture__GetTemporary(iVar8,iVar5,0,0,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
      uVar11 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar11,0);
    }
    if (*(uint *)(plVar2 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(long *)((long)plVar2 + lVar17) = lVar6;
    thunk_FUN_03f5d7b8((long)plVar2 + lVar17,lVar6);
    if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(local_98 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(long *)((long)local_98 + lVar17) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Texture__set_filterMode(*(long *)((long)local_98 + lVar17),1,0);
    if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(local_98 + 3) <= uVar15) break;
    uVar13 = *(undefined8 *)((long)local_98 + lVar17);
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Graphics__Blit(plVar12,uVar13,uVar14,0,0);
    if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((uint)local_98[3] <= uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar15 = uVar15 + 1;
    plVar12 = *(long **)((long)local_98 + lVar17);
    lVar17 = lVar17 + 8;
    if (uVar9 == uVar15) {
      if (1 < uVar9) {
        uVar10 = local_98[3] & 0xffffffff;
        lVar17 = (ulong)(uVar9 - 2) + 4;
        do {
          uVar16 = lVar17 - 4;
          if (uVar10 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar6 = local_98[lVar17];
          uVar13 = *(undefined8 *)(param_1 + 0x10);
          if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Graphics__Blit(plVar12,lVar6,uVar13,1,0);
          if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar10 = (ulong)*(uint *)(local_98 + 3);
          if (uVar10 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar12 = (long *)local_98[lVar17];
          lVar17 = lVar17 + -1;
        } while (0 < (long)uVar16);
      }
      bVar3 = *(int *)(param_1 + 0x20) == 0;
      uVar13 = Utilities_CameraBlurSnapshot__EnsureOutput(param_1,bVar3,iVar1,iVar4);
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Graphics__Blit(plVar12,uVar13,uVar14,uVar11,0);
      *(uint *)(param_1 + 0x20) = (uint)bVar3;
      FUN_039bad78(&local_150);
      *(float *)(param_1 + 0x24) = fVar21;
      *(float *)(param_1 + 0x28) = fVar21;
      fVar20 = 1.0 - (fVar21 + fVar21);
      *(float *)(param_1 + 0x2c) = fVar20;
      *(float *)(param_1 + 0x30) = fVar20;
      Utilities_CameraBlurSnapshot__get_Texture(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

