// rea decompile_all
// name: ChocDino.UIFX.FrameFilter$$SetupDisplayMaterial
// address: 0x43db594
// body: available
// range: 0x43db594-0x43dc587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43dc584 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FrameFilter__SetupDisplayMaterial
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  
  if ((DAT_09517cd6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091967c8);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09203238);
    FUN_03f5c2a4(&DAT_09203218);
    FUN_03f5c2a4(&DAT_0920c390);
    FUN_03f5c2a4(&DAT_092031f8);
    FUN_03f5c2a4(&DAT_0920c398);
    FUN_03f5c2a4(&DAT_092117a0);
    FUN_03f5c2a4(&DAT_0920c388);
    FUN_03f5c2a4(&DAT_09203230);
    FUN_03f5c2a4(&DAT_092031f0);
    FUN_03f5c2a4(&DAT_09203220);
    FUN_03f5c2a4(&DAT_09211828);
    FUN_03f5c2a4(&DAT_091fc760);
    DAT_09517cd6 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x70);
  if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 4);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189c30);
  }
  if (lVar7 == 0) goto LAB_043dc584;
  fVar11 = (float)*(undefined8 *)(param_1 + 0x1a0);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x1a0) >> 0x20);
  uVar6 = NEON_fmov(0x3f800000,4);
  auVar13._0_4_ = (float)uVar6 / fVar11;
  auVar13._4_4_ = (float)((ulong)uVar6 >> 0x20) / fVar12;
  auVar13._8_8_ = 0;
  UnityEngine_Material__SetColorImpl
            (auVar13,auVar13._4_4_,-(float)*(undefined8 *)(param_1 + 0x198) / fVar11,
             -(float)((ulong)*(undefined8 *)(param_1 + 0x198) >> 0x20) / fVar12,lVar7,uVar8,0);
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
  UnityEngine_Material__SetFloat
            (*(float *)(param_1 + 0xb8) * *(float *)(param_1 + 0x24c),*(float *)(param_1 + 0x24c),
             *(long *)(param_1 + 0x70),*(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x24),0);
  lVar7 = *(long *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x250) == '\0') {
    if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = 0;
    if (lVar7 == 0) goto LAB_043dc584;
  }
  else {
    if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar7 == 0) goto LAB_043dc584;
    uVar8 = *(undefined4 *)(param_1 + 0x20);
  }
  UnityEngine_Material__SetFloat(uVar8,lVar7,**(undefined4 **)(DAT_091967c8 + 0xb8),0);
  if (*(uint *)(param_1 + 0x1c4) < 2) {
    iVar1 = *(int *)(param_1 + 0x234);
    if (iVar1 < 4) {
      if (1 < iVar1) {
        if (iVar1 == 2) {
          uVar9 = 0x3e800000;
          uVar8 = 0x3e800000;
        }
        else {
          if (iVar1 != 3) goto LAB_043db858;
          uVar9 = 0x3f000000;
          uVar8 = 0x3f000000;
        }
LAB_043db874:
        *(undefined4 *)(param_1 + 0x238) = uVar8;
LAB_043db878:
        *(undefined4 *)(param_1 + 0x23c) = uVar9;
        *(undefined4 *)(param_1 + 0x240) = uVar9;
        *(undefined4 *)(param_1 + 0x244) = uVar9;
        *(undefined4 *)(param_1 + 0x248) = uVar9;
        goto LAB_043db888;
      }
      if (iVar1 != 0) {
        if (iVar1 != 1) goto LAB_043db858;
        uVar9 = 0x3e000000;
        uVar8 = 0x3e000000;
        goto LAB_043db874;
      }
LAB_043db8f0:
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_0920c390,0);
      goto LAB_043db90c;
    }
    if (iVar1 < 7) {
      if (iVar1 == 4) {
        uVar9 = 0x3f800000;
        uVar8 = 0x3f800000;
        goto LAB_043db874;
      }
      if (iVar1 != 6) goto LAB_043db858;
    }
    else if ((iVar1 == 7) || (iVar1 != 8)) {
LAB_043db858:
      uVar9 = *(undefined4 *)(param_1 + 0x238);
      goto LAB_043db878;
    }
LAB_043db888:
    fVar11 = *(float *)(param_1 + 0x23c);
    if ((((fVar11 <= 0.0) && (*(float *)(param_1 + 0x240) <= 0.0)) &&
        (*(float *)(param_1 + 0x244) <= 0.0)) && (*(float *)(param_1 + 0x248) <= 0.0))
    goto LAB_043db8f0;
    lVar7 = *(long *)(param_1 + 0x60);
    if (iVar1 - 7U < 2) {
      if (lVar7 == 0) goto LAB_043dc584;
      if (*(int *)(param_1 + 0x24) == 0) {
        fVar12 = 1.0;
      }
      else {
        fVar12 = *(float *)(param_1 + 0xb8);
      }
      fVar18 = *(float *)(lVar7 + 0x34);
      fVar24 = *(float *)(lVar7 + 0x38);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
        fVar11 = *(float *)(param_1 + 0x23c);
      }
      fVar20 = *(float *)(param_1 + 0x240);
      uVar6 = *(undefined8 *)(param_1 + 0x244);
      lVar7 = *(long *)(param_1 + 0x70);
      if (fVar24 <= fVar18) {
        fVar18 = fVar24;
      }
      if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar7 == 0) goto LAB_043dc584;
      fVar21 = (float)uVar6;
      fVar22 = (float)((ulong)uVar6 >> 0x20);
      fVar10 = (fVar18 / fVar12) * 0.5;
      fVar12 = (float)((uint)fVar10 ^ ((uint)fVar10 ^ (uint)fVar11) & ~-(uint)(fVar10 < fVar11));
      fVar11 = *(float *)(param_1 + 0xb8);
      fVar18 = fVar11;
      fVar24 = fVar11;
      fVar17 = fVar11;
      fVar20 = (float)((uint)fVar10 ^ ((uint)fVar10 ^ (uint)fVar20) & ~-(uint)(fVar10 < fVar20));
      fVar21 = (float)((uint)fVar10 ^ ((uint)fVar10 ^ (uint)fVar21) & ~-(uint)(fVar10 < fVar21));
      fVar10 = (float)((uint)fVar10 ^ ((uint)fVar10 ^ (uint)fVar22) & ~-(uint)(fVar10 < fVar22));
    }
    else {
      if (lVar7 == 0) goto LAB_043dc584;
      if (*(int *)(param_1 + 0x24) == 0) {
        fVar11 = 1.0;
      }
      else {
        fVar11 = *(float *)(param_1 + 0xb8);
      }
      fVar12 = *(float *)(lVar7 + 0x34);
      fVar18 = *(float *)(lVar7 + 0x38);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(param_1 + 0x70);
      if (fVar18 <= fVar12) {
        fVar12 = fVar18;
      }
      if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar7 == 0) goto LAB_043dc584;
      fVar12 = fVar12 / fVar11;
      fVar11 = (float)*(undefined8 *)(param_1 + 0x23c) * fVar12 * 0.5;
      fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x23c) >> 0x20) * fVar12 * 0.5;
      fVar24 = (float)*(undefined8 *)(param_1 + 0x244) * fVar12 * 0.5;
      fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x244) >> 0x20) * fVar12 * 0.5;
      fVar12 = *(float *)(param_1 + 0xb8);
      fVar20 = fVar12;
      fVar21 = fVar12;
      fVar10 = fVar12;
    }
    auVar14._0_4_ = fVar12 * fVar11;
    auVar14._4_4_ = fVar20 * fVar18;
    auVar14._8_4_ = fVar21 * fVar24;
    auVar14._12_4_ = fVar10 * fVar17;
    UnityEngine_Material__SetColorImpl
              (auVar14,auVar14._4_4_,auVar14._8_4_,auVar14._12_4_,lVar7,
               *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 8),0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_0920c390,0);
    if (*(int *)(param_1 + 0x230) != 1) {
      if (*(int *)(param_1 + 0x230) != 0) goto LAB_043dbac0;
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_0920c398,0);
      goto LAB_043dba68;
    }
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_0920c398,0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
    UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_0920c388,0);
  }
  else {
    if (*(uint *)(param_1 + 0x1c4) != 2) goto LAB_043dbac0;
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
    UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_0920c390,0);
LAB_043db90c:
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_0920c398,0);
LAB_043dba68:
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_0920c388,0);
  }
LAB_043dbac0:
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
  UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09203218,0);
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
  UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09203230,0);
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
  UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_092031f0,0);
  iVar1 = *(int *)(param_1 + 0x1c8);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09211828,0);
      lVar7 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar7 == 0) goto LAB_043dc584;
      auVar15 = ZEXT816(0);
      fVar11 = 0.0;
      uVar8 = *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0xc);
      fVar12 = 0.0;
      fVar18 = 0.0;
    }
    else {
      if (iVar1 != 1) goto LAB_043dbe0c;
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09211828,0);
      lVar7 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar7 == 0) goto LAB_043dc584;
      fVar18 = *(float *)(param_1 + 0x20);
      fVar24 = *(float *)(param_1 + 0x1d4);
      fVar11 = (float)*(undefined8 *)(param_1 + 0x1cc);
      fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x1cc) >> 0x20);
      uVar8 = *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0xc);
      auVar15._0_4_ = fVar11 + (fVar11 - fVar11) * fVar18;
      auVar15._4_4_ = fVar12 + (fVar12 - fVar12) * fVar18;
      auVar15._8_8_ = 0;
      fVar11 = auVar15._4_4_;
      fVar12 = fVar24 + fVar18 * (fVar24 - fVar24);
      fVar18 = *(float *)(param_1 + 0x1d8) * fVar18 + 0.0;
    }
LAB_043dbe04:
    UnityEngine_Material__SetColorImpl(auVar15,fVar11,fVar12,fVar18,lVar7,uVar8,0);
  }
  else {
    if (iVar1 == 2) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09211828,0);
      lVar7 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar7 == 0) goto LAB_043dc584;
      UnityEngine_Material__SetTextureImpl
                (lVar7,*(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x10),
                 *(undefined8 *)(param_1 + 0x1e0),0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
      UnityEngine_Material__SetColorImpl
                (ZEXT816(0x3f800000),0,0,0,*(long *)(param_1 + 0x70),
                 *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x14),0);
      lVar7 = *(long *)(param_1 + 0x70);
      if (lVar7 == 0) goto LAB_043dc584;
      fVar11 = *(float *)(param_1 + 0x20) + 0.0;
      auVar15 = ZEXT416((uint)fVar11);
      uVar8 = *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0xc);
      fVar12 = fVar11;
      fVar18 = fVar11;
      goto LAB_043dbe04;
    }
    if (iVar1 == 3) {
      if (*(long *)(param_1 + 0x2a8) == 0) goto LAB_043dc584;
      ChocDino_UIFX_GradientTexture__Update
                (*(long *)(param_1 + 0x2a8),*(undefined8 *)(param_1 + 0x1f0),0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09211828,0);
      lVar7 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((*(long *)(param_1 + 0x2a8) == 0) || (lVar7 == 0)) goto LAB_043dc584;
      UnityEngine_Material__SetTextureImpl
                (lVar7,*(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x10),
                 *(undefined8 *)(*(long *)(param_1 + 0x2a8) + 0x18),0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
      fVar11 = *(float *)(param_1 + 0x20) + 0.0;
      UnityEngine_Material__SetColorImpl
                (fVar11,fVar11,fVar11,fVar11,*(long *)(param_1 + 0x70),
                 *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0xc),0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
      UnityEngine_Material__SetColorImpl
                (*(undefined4 *)(param_1 + 0x1fc),
                 *(float *)(param_1 + 0x204) + *(float *)(param_1 + 0x2a0),
                 *(undefined4 *)(param_1 + 0x200),0,*(long *)(param_1 + 0x70),
                 *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x18),0);
      iVar1 = *(int *)(param_1 + 0x1e8);
      if (iVar1 < 3) {
        if (iVar1 == 1) {
          lVar7 = *(long *)(param_1 + 0x70);
          if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar7 == 0) goto LAB_043dc584;
          auVar13 = ZEXT816(0);
          uVar8 = 0xbf800000;
          uVar6 = 0x3f800000;
        }
        else if (iVar1 == 2) {
          lVar7 = *(long *)(param_1 + 0x70);
          if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar7 == 0) goto LAB_043dc584;
          auVar13 = ZEXT816(0x3f000000);
          uVar8 = 0xbf000000;
          uVar6 = 0x3f000000;
        }
        else {
LAB_043dc2bc:
          lVar7 = *(long *)(param_1 + 0x70);
          if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar7 == 0) goto LAB_043dc584;
          uVar8 = 0;
          uVar6 = 0;
          auVar13 = ZEXT816(0x3f800000);
        }
        UnityEngine_Material__SetColorImpl
                  (auVar13,uVar8,0,uVar6,lVar7,
                   *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x14),0);
      }
      else {
        if (iVar1 == 3) {
          lVar7 = *(long *)(param_1 + 0x70);
          if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar7 == 0) goto LAB_043dc584;
          UnityEngine_Material__SetColorImpl
                    (ZEXT816(0x3f800000),0,0,0,lVar7,
                     *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x14),0);
          lVar7 = *(long *)(param_1 + 0x70);
          uVar6 = DAT_09203230;
        }
        else if (iVar1 == 4) {
          lVar7 = *(long *)(param_1 + 0x60);
          if (lVar7 == 0) goto LAB_043dc584;
          ChocDino_UIFX_GradientUtils__GetCssLinearGradientShaderParams
                    (*(undefined4 *)(param_1 + 0x1f8),*(undefined4 *)(lVar7 + 0x2c),
                     *(undefined4 *)(lVar7 + 0x30),*(undefined4 *)(lVar7 + 0x34),
                     *(undefined4 *)(lVar7 + 0x38),&local_68,&local_78,(long)&local_80 + 4,&local_80
                     ,0);
          lVar7 = *(long *)(param_1 + 0x70);
          if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar7 == 0) goto LAB_043dc584;
          UnityEngine_Material__SetColorImpl
                    ((undefined4)local_68,local_68._4_4_,(undefined4)local_78,local_78._4_4_,lVar7,
                     *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x1c),0);
          if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
          UnityEngine_Material__SetColorImpl
                    (local_80._4_4_,(undefined4)local_80,0,0,*(long *)(param_1 + 0x70),
                     *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x20),0);
          lVar7 = *(long *)(param_1 + 0x70);
          uVar6 = DAT_09203218;
        }
        else {
          if (iVar1 != 5) goto LAB_043dc2bc;
          lVar7 = *(long *)(param_1 + 0x70);
          if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar7 == 0) goto LAB_043dc584;
          UnityEngine_Material__SetColorImpl
                    (ZEXT816(0x3f800000),0,0,0,lVar7,
                     *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x14),0);
          lVar7 = *(long *)(param_1 + 0x70);
          uVar6 = DAT_092031f0;
        }
        if (lVar7 == 0) goto LAB_043dc584;
        UnityEngine_Material__EnableKeyword(lVar7,uVar6,0);
      }
    }
  }
LAB_043dbe0c:
  if (((*(float *)(param_1 + 0x294) <= 0.0) || (*(float *)(param_1 + 0x260) <= 0.0)) ||
     (*(int *)(param_1 + 0x264) == 0)) {
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_091fc760,0);
    lVar7 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(DAT_091967c8 + 0xb8);
LAB_043dbfc0:
    uVar3 = *(undefined4 *)(lVar5 + 0x34);
    if (DAT_09516627 == '\0') {
      FUN_03f5c2a4(&DAT_0918cc38);
      DAT_09516627 = '\x01';
    }
    if (lVar7 == 0) goto LAB_043dc584;
    puVar4 = *(undefined4 **)(DAT_0918cc38 + 0xb8);
    uVar19 = puVar4[2];
    uVar23 = puVar4[3];
    uVar8 = puVar4[1];
    uVar9 = *puVar4;
LAB_043dc000:
    UnityEngine_Material__SetColorImpl(uVar9,uVar8,uVar19,uVar23,lVar7,uVar3,0);
  }
  else {
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
    UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_091fc760,0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09203220,0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09203238,0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_092031f8,0);
    lVar7 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar7 == 0) goto LAB_043dc584;
    UnityEngine_Material__SetColorImpl
              (*(float *)(param_1 + 0xb8) * *(float *)(param_1 + 0x294),
               *(float *)(param_1 + 0x298) * *(float *)(param_1 + 0xb8),0,0,lVar7,
               *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x34),0);
    iVar1 = *(int *)(param_1 + 0x264);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
        UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_092117a0,0);
        lVar7 = *(long *)(param_1 + 0x70);
        if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar7 == 0) goto LAB_043dc584;
        UnityEngine_Material__SetColorImpl
                  (ZEXT816(0),0,0,0,lVar7,*(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x28),0);
        lVar7 = *(long *)(param_1 + 0x70);
        lVar5 = *(long *)(DAT_091967c8 + 0xb8);
        goto LAB_043dbfc0;
      }
      if (iVar1 != 1) goto LAB_043dc008;
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_092117a0,0);
      lVar7 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar7 == 0) goto LAB_043dc584;
      fVar24 = *(float *)(param_1 + 0x20);
      fVar18 = *(float *)(param_1 + 0x25c);
      fVar11 = (float)*(undefined8 *)(param_1 + 0x254);
      fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x254) >> 0x20);
      uVar8 = *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x28);
      auVar16._0_4_ = fVar11 + (fVar11 - fVar11) * fVar24;
      auVar16._4_4_ = fVar12 + (fVar12 - fVar12) * fVar24;
      auVar16._8_8_ = 0;
      fVar12 = auVar16._4_4_;
      fVar18 = fVar18 + fVar24 * (fVar18 - fVar18);
      fVar11 = *(float *)(param_1 + 0x260) * fVar24 + 0.0;
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 3) goto LAB_043dc008;
        if (*(long *)(param_1 + 0x2b0) == 0) goto LAB_043dc584;
        ChocDino_UIFX_GradientTexture__Update
                  (*(long *)(param_1 + 0x2b0),*(undefined8 *)(param_1 + 0x278),0);
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
        UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_092117a0,0);
        lVar7 = *(long *)(param_1 + 0x70);
        if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((*(long *)(param_1 + 0x2b0) == 0) || (lVar7 == 0)) goto LAB_043dc584;
        UnityEngine_Material__SetTextureImpl
                  (lVar7,*(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x2c),
                   *(undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x18),0);
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
        fVar11 = *(float *)(param_1 + 0x20) + 0.0;
        UnityEngine_Material__SetColorImpl
                  (fVar11,fVar11,fVar11,fVar11,*(long *)(param_1 + 0x70),
                   *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x28),0);
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
        UnityEngine_Material__SetColorImpl
                  (*(undefined4 *)(param_1 + 0x284),
                   *(float *)(param_1 + 0x28c) + *(float *)(param_1 + 0x2a4),
                   *(undefined4 *)(param_1 + 0x288),0,*(long *)(param_1 + 0x70),
                   *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x38),0);
        iVar1 = *(int *)(param_1 + 0x270);
        lVar7 = *(long *)(param_1 + 0x70);
        if (iVar1 < 3) {
          if (iVar1 == 1) {
            if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (lVar7 == 0) goto LAB_043dc584;
            uVar9 = 0;
            uVar8 = 0xbf800000;
            uVar23 = 0x3f800000;
          }
          else {
            if (iVar1 != 2) goto LAB_043dc550;
            if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (lVar7 == 0) goto LAB_043dc584;
            uVar9 = 0x3f000000;
            uVar8 = 0xbf000000;
            uVar23 = 0x3f000000;
          }
        }
        else {
          uVar6 = DAT_09203238;
          if (iVar1 != 3) {
            if (iVar1 == 4) {
              if (lVar7 == 0) goto LAB_043dc584;
              UnityEngine_Material__EnableKeyword(lVar7,DAT_09203220,0);
              lVar7 = *(long *)(param_1 + 0x60);
              if (lVar7 == 0) goto LAB_043dc584;
              ChocDino_UIFX_GradientUtils__GetCssLinearGradientShaderParams
                        (*(undefined4 *)(param_1 + 0x280),*(undefined4 *)(lVar7 + 0x2c),
                         *(undefined4 *)(lVar7 + 0x30),*(undefined4 *)(lVar7 + 0x34),
                         *(undefined4 *)(lVar7 + 0x38),&local_88,&local_90,(long)&local_98 + 4,
                         &local_98,0);
              lVar7 = *(long *)(param_1 + 0x70);
              if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (lVar7 == 0) goto LAB_043dc584;
              UnityEngine_Material__SetColorImpl
                        ((undefined4)local_88,local_88._4_4_,(undefined4)local_90,local_90._4_4_,
                         lVar7,*(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x3c),0);
              lVar7 = *(long *)(param_1 + 0x70);
              if (lVar7 == 0) goto LAB_043dc584;
              uVar19 = 0;
              uVar23 = 0;
              uVar3 = *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x40);
              uVar8 = (undefined4)local_98;
              uVar9 = local_98._4_4_;
              goto LAB_043dc000;
            }
            uVar6 = DAT_092031f8;
            if (iVar1 != 5) goto LAB_043dc550;
          }
          if (lVar7 == 0) goto LAB_043dc584;
          UnityEngine_Material__EnableKeyword(lVar7,uVar6,0);
          lVar7 = *(long *)(param_1 + 0x70);
LAB_043dc550:
          if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar7 == 0) {
LAB_043dc584:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar8 = 0;
          uVar23 = 0;
          uVar9 = 0x3f800000;
        }
        uVar19 = 0;
        uVar3 = *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x30);
        goto LAB_043dc000;
      }
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_092117a0,0);
      lVar7 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_091967c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar7 == 0) goto LAB_043dc584;
      UnityEngine_Material__SetTextureImpl
                (lVar7,*(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x2c),
                 *(undefined8 *)(param_1 + 0x268),0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043dc584;
      UnityEngine_Material__SetColorImpl
                (ZEXT816(0x3f800000),0,0,0,*(long *)(param_1 + 0x70),
                 *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x30),0);
      lVar7 = *(long *)(param_1 + 0x70);
      if (lVar7 == 0) goto LAB_043dc584;
      fVar12 = *(float *)(param_1 + 0x20) + 0.0;
      auVar16 = ZEXT416((uint)fVar12);
      uVar8 = *(undefined4 *)(*(long *)(DAT_091967c8 + 0xb8) + 0x28);
      fVar18 = fVar12;
      fVar11 = fVar12;
    }
    UnityEngine_Material__SetColorImpl(auVar16,fVar12,fVar18,fVar11,lVar7,uVar8,0);
  }
LAB_043dc008:
  ChocDino_UIFX_FilterBase__SetupDisplayMaterial(param_1,param_2,param_3,0);
  return;
}

