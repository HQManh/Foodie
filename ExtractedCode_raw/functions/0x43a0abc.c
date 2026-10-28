// rea decompile_all
// name: ChocDino.UIFX.Compositor$$Start
// address: 0x43a0abc
// body: available
// range: 0x43a0abc-0x43a162b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a1628 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
ChocDino_UIFX_Compositor__Start
          (float param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
          ulong param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  char cVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320 [2];
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
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined4 uStack_258;
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
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  float local_1b0;
  float local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  float local_160 [6];
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((DAT_09517aa1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091828b0);
    FUN_03f5c2a4(&DAT_09184618);
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c48);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09203f10);
    DAT_09517aa1 = 1;
  }
  puVar13 = (undefined8 *)(param_2 + 0x60);
  uVar14 = *puVar13;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar14,0,0);
  if ((uVar7 & 1) != 0) {
    uVar14 = UnityEngine_Shader__Find(DAT_09203f10,0);
    uVar8 = thunk_FUN_03f9944c(DAT_09187e28);
    UnityEngine_Material___ctor(uVar8,uVar14,0);
    *puVar13 = uVar8;
    thunk_FUN_03f5d7b8(puVar13,uVar8);
  }
  if (**(char **)(DAT_091828b0 + 0xb8) == '\0') {
    ChocDino_UIFX_Compositor__CreateTextureFormats();
    **(undefined1 **)(DAT_091828b0 + 0xb8) = 1;
  }
  if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar11 = (int)param_4;
  iVar3 = (int)param_5 + iVar11;
  iVar4 = iVar11;
  if (iVar3 <= iVar11) {
    iVar4 = iVar3;
  }
  if (DAT_09516626 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09516626 = '\x01';
  }
  fVar24 = (float)iVar4 * param_1;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar5 = -0x80000000;
  if ((float)(int)fVar24 != INFINITY) {
    iVar5 = (int)fVar24;
  }
  if (DAT_09517b17 == '\0') {
    FUN_03f5c2a4(&DAT_09189c48);
    DAT_09517b17 = '\x01';
  }
  if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar17 = (int)((ulong)param_4 >> 0x20);
  iVar6 = (int)((ulong)param_5 >> 0x20) + iVar17;
  iVar1 = iVar11;
  if (iVar11 <= iVar3) {
    iVar1 = iVar3;
  }
  iVar3 = iVar17;
  if (iVar6 <= iVar17) {
    iVar3 = iVar6;
  }
  if (DAT_09516626 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09516626 = '\x01';
  }
  fVar24 = (float)iVar3 * param_1;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = -0x80000000;
  if ((float)(int)fVar24 != INFINITY) {
    iVar2 = (int)fVar24;
  }
  if (DAT_09517b18 == '\0') {
    FUN_03f5c2a4(&DAT_09189c48);
    DAT_09517b18 = '\x01';
  }
  if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar24 = (float)iVar1;
  iVar1 = iVar17;
  if (iVar17 <= iVar6) {
    iVar1 = iVar6;
  }
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
    cVar10 = DAT_095163ce;
  }
  else {
    cVar10 = '\x01';
  }
  fVar25 = (float)iVar1;
  iVar6 = -0x80000000;
  if ((float)(int)(fVar24 * param_1) != INFINITY) {
    iVar6 = (int)(fVar24 * param_1);
  }
  if (cVar10 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar16 = DAT_09184618;
  fVar21 = INFINITY;
  *(undefined1 *)(param_2 + 0xc0) = 0;
  iVar6 = iVar6 - iVar5;
  iVar5 = -0x80000000;
  if ((float)(int)(fVar25 * param_1) != INFINITY) {
    iVar5 = (int)(fVar25 * param_1);
  }
  if (*(int *)(lVar16 + 0xe4) == 0) {
    fVar21 = INFINITY;
    FUN_03f5c424();
  }
  iVar5 = iVar5 - iVar2;
  iVar1 = ChocDino_UIFX_Filters__GetMaxiumumTextureSize(0);
  if (iVar1 < iVar6) {
LAB_043a0e78:
    lVar16 = DAT_09189c48;
    *(undefined1 *)(param_2 + 0xc0) = 1;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar26 = (float)iVar6 / (float)iVar5;
    if (*(int *)(DAT_09184618 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = ChocDino_UIFX_Filters__GetMaxiumumTextureSize(0);
    if (iVar1 <= iVar6) {
      iVar6 = iVar1;
    }
    iVar1 = ChocDino_UIFX_Filters__GetMaxiumumTextureSize(0);
    if (iVar1 <= iVar5) {
      iVar5 = iVar1;
    }
    if (fVar26 <= 1.0) {
      if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095163ce == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar21 = INFINITY;
      iVar6 = -0x80000000;
      if ((float)(int)(fVar26 * (float)iVar5) != INFINITY) {
        iVar6 = (int)(fVar26 * (float)iVar5);
      }
      if (*(int *)(DAT_09184618 + 0xe4) == 0) {
        fVar21 = INFINITY;
        FUN_03f5c424();
      }
      iVar1 = ChocDino_UIFX_Filters__GetMaxiumumTextureSize(0);
      if (iVar1 <= iVar6) {
        iVar6 = iVar1;
      }
    }
    else {
      if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095163ce == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar21 = INFINITY;
      iVar5 = -0x80000000;
      if ((float)(int)((float)iVar6 / fVar26) != INFINITY) {
        iVar5 = (int)((float)iVar6 / fVar26);
      }
      if (*(int *)(DAT_09184618 + 0xe4) == 0) {
        fVar21 = INFINITY;
        FUN_03f5c424();
      }
      iVar1 = ChocDino_UIFX_Filters__GetMaxiumumTextureSize(0);
      if (iVar1 <= iVar5) {
        iVar5 = iVar1;
      }
    }
  }
  else {
    if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(DAT_09184618 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = ChocDino_UIFX_Filters__GetMaxiumumTextureSize(0);
    if (iVar1 < iVar5) goto LAB_043a0e78;
  }
  lVar16 = 8;
  if ((param_6 & 1) == 0) {
    lVar16 = 4;
  }
  plVar12 = (long *)(param_2 + 0x10);
  lVar15 = *plVar12;
  iVar1 = *(int *)(*(long *)(DAT_091828b0 + 0xb8) + lVar16);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar15,0,0);
  if ((uVar7 & 1) != 0) {
    plVar9 = (long *)*plVar12;
    if (plVar9 == (long *)0x0) goto LAB_043a1628;
    iVar2 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189c48);
    }
    if (iVar2 == iVar6) {
      plVar9 = (long *)*plVar12;
      if (plVar9 == (long *)0x0) goto LAB_043a1628;
      iVar2 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
      if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189c48);
      }
      if (iVar2 == iVar5) {
        if (*plVar12 == 0) goto LAB_043a1628;
        iVar2 = UnityEngine_RenderTexture__get_format(*plVar12,0);
        if (iVar2 == iVar1) goto LAB_043a10b4;
      }
    }
    ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(plVar12);
  }
LAB_043a10b4:
  if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (iVar6 < 1) {
    return 0;
  }
  if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (iVar5 < 1) {
    return 0;
  }
  lVar16 = *plVar12;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Equality(lVar16,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar16 = UnityEngine_RenderTexture__GetTemporary(iVar6,iVar5,0,iVar1,1,0);
    *plVar12 = lVar16;
    thunk_FUN_03f5d7b8(plVar12,lVar16);
    if (*plVar12 == 0) goto LAB_043a1628;
    UnityEngine_Texture__set_wrapMode(*plVar12,1,0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Equality(param_3,0,0);
  if ((uVar7 & 1) == 0) {
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
    if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (param_3 == 0) goto LAB_043a1628;
    fVar26 = (float)UnityEngine_Camera__get_pixelRect(param_3,0);
    UnityEngine_Camera__get_pixelRect(param_3,0);
    iVar3 = UnityEngine_Camera__get_pixelWidth(param_3,0);
    iVar4 = UnityEngine_Camera__get_pixelHeight(param_3,0);
    iVar5 = UnityEngine_Camera__get_pixelWidth(param_3,0);
    iVar6 = UnityEngine_Camera__get_pixelHeight(param_3,0);
    local_160[0] = 1.0 / ((fVar24 - (float)iVar11) / (float)iVar5);
    local_114 = 0;
    local_11c = 0;
    local_120 = 0x3f800000;
    local_10c = 0x3f800000;
    local_100 = 0;
    local_108 = 0;
    local_f8 = 0x3f800000;
    local_160[3] = 0.0;
    local_160[4] = 0.0;
    local_160[1] = 0.0;
    local_160[2] = 0.0;
    local_140 = 0;
    local_148 = 0;
    local_134 = 0;
    local_f0 = local_160[0] + -1.0;
    local_12c = 0;
    local_138 = 0x3f800000;
    local_124 = 0x3f800000;
    fVar21 = -((float)iVar17 - fVar21) / (float)iVar4;
    local_160[5] = 1.0 / ((fVar25 - (float)iVar17) / (float)iVar6);
    local_e8 = 0x3f80000000000000;
    fVar24 = -((float)iVar11 - fVar26) / (float)iVar3;
    local_ec = local_160[5] + -1.0;
    fVar25 = (fVar21 + fVar21) * local_160[5];
    fVar24 = (fVar24 + fVar24) * local_160[0];
    FUN_04125f68(&local_e0,&local_120,local_160,0);
    local_1d4 = 0;
    uStack_218 = uStack_d8;
    local_220 = local_e0;
    uStack_208 = uStack_c8;
    uStack_210 = uStack_d0;
    local_1dc = 0;
    local_1e0 = 0x3f800000;
    uStack_1f8 = uStack_b8;
    local_200 = local_c0;
    uStack_1e8 = uStack_a8;
    uStack_1f0 = uStack_b0;
    local_1cc = 0x3f800000;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0x3f800000;
    local_1a8 = 0x3f80000000000000;
    local_1b0 = fVar24;
    local_1ac = fVar25;
    FUN_04125f68(&local_1a0,&local_1e0,&local_220,0);
    UnityEngine_Camera__get_projectionMatrix(&local_260,param_3,0);
    uStack_2d8 = uStack_198;
    local_2e0 = local_1a0;
    uStack_2c8 = uStack_188;
    uStack_2d0 = uStack_190;
    uStack_2b8 = uStack_178;
    local_2c0 = local_180;
    uStack_2a8 = uStack_168;
    uStack_2b0 = uStack_170;
    local_320[0] = local_260;
    uStack_308 = uStack_248;
    uStack_310 = uStack_250;
    uStack_2f8 = uStack_238;
    local_300 = local_240;
    uStack_2e8 = uStack_228;
    uStack_2f0 = uStack_230;
    FUN_04125f68(&local_2a0,&local_2e0,local_320,0);
    *(ulong *)(param_2 + 0x20) = CONCAT44(uStack_294,uStack_298);
    *(undefined8 *)(param_2 + 0x18) = local_2a0;
  }
  else {
    if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Matrix4x4__Ortho
              (&local_e0,(float)iVar4,fVar24,(float)iVar3,fVar25,param_1 * -1000.0,param_1 * 1000.0,
               0);
    *(undefined8 *)(param_2 + 0x20) = uStack_d8;
    *(undefined8 *)(param_2 + 0x18) = local_e0;
    local_280 = local_c0;
    uStack_278 = uStack_b8;
    uStack_290 = uStack_d0;
    uStack_288 = uStack_c8;
    uStack_270 = uStack_b0;
    uStack_268 = uStack_a8;
  }
  *(undefined8 *)(param_2 + 0x30) = uStack_288;
  *(undefined8 *)(param_2 + 0x28) = uStack_290;
  *(undefined8 *)(param_2 + 0x40) = uStack_278;
  *(undefined8 *)(param_2 + 0x38) = local_280;
  *(undefined8 *)(param_2 + 0x50) = uStack_268;
  *(undefined8 *)(param_2 + 0x48) = uStack_270;
  uVar14 = UnityEngine_RenderTexture__GetActive(0);
  *(undefined8 *)(param_2 + 0x58) = uVar14;
  thunk_FUN_03f5d7b8();
  if (DAT_09516ccb == '\0') {
    FUN_03f5c2a4(&DAT_09187ec0);
    DAT_09516ccb = '\x01';
  }
  lVar16 = DAT_09188ad0;
  lVar15 = *(long *)(DAT_09187ec0 + 0xb8);
  uVar18 = *(undefined8 *)(lVar15 + 0x60);
  uVar8 = *(undefined8 *)(lVar15 + 0x78);
  uVar14 = *(undefined8 *)(lVar15 + 0x70);
  uVar23 = *(undefined8 *)(lVar15 + 0x48);
  uVar22 = *(undefined8 *)(lVar15 + 0x40);
  uVar20 = *(undefined8 *)(lVar15 + 0x58);
  uVar19 = *(undefined8 *)(lVar15 + 0x50);
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(lVar15 + 0x68);
  *(undefined8 *)(param_2 + 0x90) = uVar18;
  *(undefined8 *)(param_2 + 0xa8) = uVar8;
  *(undefined8 *)(param_2 + 0xa0) = uVar14;
  *(undefined8 *)(param_2 + 0x78) = uVar23;
  *(undefined8 *)(param_2 + 0x70) = uVar22;
  *(undefined8 *)(param_2 + 0x88) = uVar20;
  *(undefined8 *)(param_2 + 0x80) = uVar19;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(param_3,0);
  if ((uVar7 & 1) == 0) {
    if (DAT_09515ed5 == '\0') {
      FUN_03f5c2a4(&DAT_091898c0);
      DAT_09515ed5 = '\x01';
    }
    uVar8 = (*(undefined8 **)(DAT_091898c0 + 0xb8))[1];
    uVar14 = **(undefined8 **)(DAT_091898c0 + 0xb8);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    local_260 = 0;
    uStack_258 = 0xc1200000;
    local_2a0 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
    uStack_298 = *(undefined4 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14);
    local_1a0 = uVar14;
    uStack_198 = uVar8;
    UnityEngine_Matrix4x4__Internal_TRS(&local_e0,&local_260,&local_1a0,&local_2a0,0);
  }
  else {
    if (param_3 == 0) goto LAB_043a1628;
    UnityEngine_Camera__get_worldToCameraMatrix(&local_e0,param_3,0);
  }
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x70) = local_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x98) = uStack_b8;
  *(undefined8 *)(param_2 + 0x90) = local_c0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_a8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_b0;
  uVar14 = UnityEngine_Camera__get_currentInternal(0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar7 & 1) != 0) {
    lVar16 = UnityEngine_Camera__get_currentInternal(0);
    plVar9 = (long *)(param_2 + 0x68);
    *plVar9 = lVar16;
    thunk_FUN_03f5d7b8(plVar9,lVar16);
    if (*plVar9 == 0) {
LAB_043a1628:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uStack_358 = *(undefined8 *)(param_2 + 0x78);
    local_360 = *(undefined8 *)(param_2 + 0x70);
    uStack_348 = *(undefined8 *)(param_2 + 0x88);
    uStack_350 = *(undefined8 *)(param_2 + 0x80);
    uStack_338 = *(undefined8 *)(param_2 + 0x98);
    local_340 = *(undefined8 *)(param_2 + 0x90);
    uStack_328 = *(undefined8 *)(param_2 + 0xa8);
    uStack_330 = *(undefined8 *)(param_2 + 0xa0);
    UnityEngine_Camera__set_worldToCameraMatrix(*plVar9,&local_360,0);
  }
  UnityEngine_RenderTexture__set_active(*plVar12,0);
  UnityEngine_GL__Clear(0,0,0,0,0,1,0);
  return 1;
}

