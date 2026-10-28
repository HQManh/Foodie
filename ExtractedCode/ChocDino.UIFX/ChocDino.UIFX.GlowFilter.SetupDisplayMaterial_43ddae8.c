// rea decompile_all
// name: ChocDino.UIFX.GlowFilter$$SetupDisplayMaterial
// address: 0x43ddae8
// body: available
// range: 0x43ddae8-0x43de137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43de130 to 0x43c6a24 ChocDino.UIFX.FilterBase$$SetupDisplayMaterial (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43de134 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_GlowFilter__SetupDisplayMaterial
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_09517cf2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184c70);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09190dc0);
    FUN_03f5c2a4(&DAT_092117d0);
    FUN_03f5c2a4(&DAT_092117b8);
    FUN_03f5c2a4(&DAT_092117a8);
    DAT_09517cf2 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x70);
  if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar4 == 0) goto LAB_043de134;
  UnityEngine_Material__SetFloat
            ((*(float *)(param_1 + 0x230) + -1.0) * *(float *)(param_1 + 0x20) + 1.0,lVar4,
             *(undefined4 *)(*(long *)(DAT_09190dc0 + 0xb8) + 0x24),0);
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043de134;
  UnityEngine_Material__SetFloat
            (*(undefined4 *)(param_1 + 0x22c),*(long *)(param_1 + 0x70),
             *(undefined4 *)(*(long *)(DAT_09190dc0 + 0xb8) + 0x1c),0);
  lVar4 = *(long *)(param_1 + 0x70);
  if (*(float *)(param_1 + 0x228) <= 0.0) {
    if (lVar4 == 0) goto LAB_043de134;
    UnityEngine_Material__DisableKeyword(lVar4,DAT_092117d0,0);
  }
  else {
    if (lVar4 == 0) goto LAB_043de134;
    UnityEngine_Material__EnableKeyword(lVar4,DAT_092117d0,0);
    lVar4 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar4 == 0) goto LAB_043de134;
    UnityEngine_Material__SetFloat
              (*(undefined4 *)(param_1 + 0x228),lVar4,
               *(undefined4 *)(*(long *)(DAT_09190dc0 + 0xb8) + 0x18),0);
  }
  lVar4 = *(long *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x1d4) == 0) {
    if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar4 == 0) goto LAB_043de134;
    fVar6 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0x1cc)) {
      fVar6 = *(float *)(param_1 + 0x1cc);
    }
    fVar8 = *(float *)(param_1 + 0xb8);
  }
  else {
    if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar4 == 0) goto LAB_043de134;
    fVar6 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0x1cc)) {
      fVar6 = *(float *)(param_1 + 0x1cc);
    }
    fVar6 = *(float *)(param_1 + 0xb8) * fVar6;
    fVar8 = *(float *)(param_1 + 0x20);
  }
  UnityEngine_Material__SetFloat(fVar8 * fVar6,lVar4,**(undefined4 **)(DAT_09190dc0 + 0xb8),0);
  iVar1 = *(int *)(param_1 + 0x1c4);
  if (iVar1 == 2) {
    lVar4 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = *(undefined4 *)(*(long *)(DAT_09190dc0 + 0xb8) + 0x20);
    if (*(int *)(DAT_09184c70 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184c70);
    }
    if (lVar4 == 0) goto LAB_043de134;
    uVar7 = *(undefined4 *)(*(long *)(DAT_09184c70 + 0xb8) + 0x10);
    uVar9 = *(undefined4 *)(*(long *)(DAT_09184c70 + 0xb8) + 0x14);
LAB_043dde2c:
    UnityEngine_Material__SetColorImpl(uVar7,uVar9,0,0,lVar4,uVar5,0);
  }
  else {
    if (iVar1 == 1) {
      lVar4 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = *(undefined4 *)(*(long *)(DAT_09190dc0 + 0xb8) + 0x20);
      if (*(int *)(DAT_09184c70 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09184c70);
      }
      if (lVar4 == 0) goto LAB_043de134;
      uVar7 = *(undefined4 *)(*(long *)(DAT_09184c70 + 0xb8) + 8);
      uVar9 = *(undefined4 *)(*(long *)(DAT_09184c70 + 0xb8) + 0xc);
      goto LAB_043dde2c;
    }
    if (iVar1 == 0) {
      lVar4 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = *(undefined4 *)(*(long *)(DAT_09190dc0 + 0xb8) + 0x20);
      if (*(int *)(DAT_09184c70 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09184c70);
      }
      if (lVar4 == 0) goto LAB_043de134;
      uVar7 = **(undefined4 **)(DAT_09184c70 + 0xb8);
      uVar9 = (*(undefined4 **)(DAT_09184c70 + 0xb8))[1];
      goto LAB_043dde2c;
    }
  }
  if (*(long *)(param_1 + 0x240) == 0) goto LAB_043de134;
  ChocDino_UIFX_GradientTexture__Update
            (*(long *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x1e8),0);
  lVar4 = *(long *)(param_1 + 0x70);
  if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((*(long *)(param_1 + 0x240) == 0) || (lVar4 == 0)) goto LAB_043de134;
  UnityEngine_Material__SetTextureImpl
            (lVar4,*(undefined4 *)(*(long *)(DAT_09190dc0 + 0xb8) + 8),
             *(undefined8 *)(*(long *)(param_1 + 0x240) + 0x18),0);
  if (*(int *)(param_1 + 0x1d4) == 1) {
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043de134;
    UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_092117a8,0);
    lVar4 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar4 == 0) goto LAB_043de134;
    fVar10 = *(float *)(param_1 + 0x1f0);
    fVar8 = fVar10;
    fVar6 = fVar10;
    fVar11 = fVar10;
LAB_043ddf48:
    UnityEngine_Material__SetColorImpl
              (fVar8,fVar10,fVar6,fVar11,lVar4,*(undefined4 *)(*(long *)(DAT_09190dc0 + 0xb8) + 4),0
              );
  }
  else if (*(int *)(param_1 + 0x1d4) == 0) {
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043de134;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_092117a8,0);
    fVar8 = *(float *)(param_1 + 0x1d8);
    fVar6 = *(float *)(param_1 + 0xb8);
    fVar11 = *(float *)(param_1 + 0x20);
    fVar10 = *(float *)(param_1 + 0x1dc);
    fVar12 = *(float *)(param_1 + 0x1e0);
    lVar4 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar4 == 0) goto LAB_043de134;
    fVar8 = fVar8 * fVar6 * fVar11 + 0.0;
    fVar6 = fVar6 * fVar12;
    fVar11 = 0.0;
    goto LAB_043ddf48;
  }
  iVar1 = *(int *)(param_1 + 500);
  if (iVar1 == 2) {
    if (*(long *)(param_1 + 0x238) == 0) goto LAB_043de134;
    ChocDino_UIFX_GradientTexture__Update
              (*(long *)(param_1 + 0x238),*(undefined8 *)(param_1 + 0x210),0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043de134;
    UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_092117b8,0);
    lVar4 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((*(long *)(param_1 + 0x238) == 0) || (lVar4 == 0)) goto LAB_043de134;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x238) + 0x18);
    uVar5 = *(undefined4 *)(*(long *)(DAT_09190dc0 + 0xb8) + 0x10);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        if (*(long *)(param_1 + 0x70) != 0) {
          UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_092117b8,0);
          uVar3 = *(undefined8 *)(param_1 + 0x1f8);
          fVar8 = *(float *)(param_1 + 0x200);
          fVar6 = *(float *)(param_1 + 0x204);
          lVar4 = *(long *)(param_1 + 0x70);
          if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar4 != 0) {
            fVar10 = *(float *)(param_1 + 0x20);
            fVar11 = (float)((ulong)uVar3 >> 0x20) * fVar6 * fVar10 + 0.0;
            UnityEngine_Material__SetColorImpl
                      (CONCAT44(fVar11,(float)uVar3 * fVar6 * fVar10 + 0.0),fVar11,
                       fVar8 * fVar6 * fVar10 + 0.0,fVar6 * fVar10 + 0.0,lVar4,
                       *(undefined4 *)(*(long *)(DAT_09190dc0 + 0xb8) + 0xc),0);
            goto LAB_043de100;
          }
        }
        goto LAB_043de134;
      }
      goto LAB_043de100;
    }
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043de134;
    UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_092117b8,0);
    lVar4 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar4 == 0) goto LAB_043de134;
    uVar3 = *(undefined8 *)(param_1 + 0x208);
    uVar5 = *(undefined4 *)(*(long *)(DAT_09190dc0 + 0xb8) + 0x10);
  }
  UnityEngine_Material__SetTextureImpl(lVar4,uVar5,uVar3,0);
  if (*(long *)(param_1 + 0x70) == 0) {
LAB_043de134:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = 0;
  if (*(char *)(param_1 + 0x220) != '\0') {
    uVar5 = 0x3f800000;
  }
  UnityEngine_Material__SetColorImpl
            (*(undefined4 *)(param_1 + 0x218),*(undefined4 *)(param_1 + 0x21c),uVar5,0,
             *(long *)(param_1 + 0x70),*(undefined4 *)(*(long *)(DAT_09190dc0 + 0xb8) + 0x14),0);
LAB_043de100:
  ChocDino_UIFX_FilterBase__SetupDisplayMaterial(param_1,param_2,param_3,0);
  return;
}

