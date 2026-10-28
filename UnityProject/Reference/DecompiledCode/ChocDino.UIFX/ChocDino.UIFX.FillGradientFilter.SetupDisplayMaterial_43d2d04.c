// rea decompile_all
// name: ChocDino.UIFX.FillGradientFilter$$SetupDisplayMaterial
// address: 0x43d2d04
// body: available
// range: 0x43d2d04-0x43d364f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d364c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FillGradientFilter__SetupDisplayMaterial
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_48;
  
  if ((DAT_09517c6b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09190980);
    FUN_03f5c2a4(&DAT_09190970);
    FUN_03f5c2a4(&DAT_09203250);
    FUN_03f5c2a4(&DAT_09203258);
    FUN_03f5c2a4(&DAT_091fc6e8);
    FUN_03f5c2a4(&DAT_09203200);
    FUN_03f5c2a4(&DAT_09203248);
    FUN_03f5c2a4(&DAT_09203260);
    FUN_03f5c2a4(&DAT_09203240);
    FUN_03f5c2a4(&DAT_091ffcd8);
    FUN_03f5c2a4(&DAT_092031e8);
    FUN_03f5c2a4(&DAT_09203208);
    FUN_03f5c2a4(&DAT_09203210);
    DAT_09517c6b = 1;
  }
  local_48 = 0;
  local_80 = 0;
  local_78 = 0;
  ChocDino_UIFX_FillGradientFilter__GradientToArrays(param_1);
  lVar5 = *(long *)(param_1 + 0x70);
  if (*(int *)(DAT_09190970 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(long *)(param_1 + 0x1e0) == 0) goto LAB_043d364c;
  uVar7 = **(undefined4 **)(DAT_09190970 + 0xb8);
  lVar3 = UnityEngine_Gradient__get_colorKeys(*(long *)(param_1 + 0x1e0),0);
  if ((lVar3 == 0) || (lVar5 == 0)) goto LAB_043d364c;
  UnityEngine_Material__SetInt(lVar5,uVar7,*(undefined4 *)(lVar3 + 0x18),0);
  if (*(long *)(param_1 + 0x1e0) == 0) goto LAB_043d364c;
  lVar3 = *(long *)(param_1 + 0x70);
  uVar7 = *(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 4);
  lVar5 = UnityEngine_Gradient__get_alphaKeys(*(long *)(param_1 + 0x1e0),0);
  if ((lVar5 == 0) || (lVar3 == 0)) goto LAB_043d364c;
  UnityEngine_Material__SetInt(lVar3,uVar7,*(undefined4 *)(lVar5 + 0x18),0);
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
  UnityEngine_Material__SetVectorArray
            (*(long *)(param_1 + 0x70),*(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 8),
             *(undefined8 *)(param_1 + 0x218),0);
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
  UnityEngine_Material__SetVectorArray
            (*(long *)(param_1 + 0x70),*(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 0xc),
             *(undefined8 *)(param_1 + 0x220),0);
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
  fVar10 = (float)*(int *)(param_1 + 0x1f0);
  fVar9 = *(float *)(param_1 + 0x204) + *(float *)(param_1 + 0x214);
  fVar8 = *(float *)(param_1 + 0x200);
  UnityEngine_Material__SetColorImpl
            (*(undefined4 *)(param_1 + 0x1fc),fVar8,fVar9,fVar10,*(long *)(param_1 + 0x70),
             *(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 0x10),0);
  lVar5 = *(long *)(param_1 + 0x70);
  if (*(float *)(param_1 + 500) <= 0.0) {
    if (lVar5 == 0) goto LAB_043d364c;
    UnityEngine_Material__DisableKeyword(lVar5,DAT_091ffcd8,0);
  }
  else {
    if (lVar5 == 0) goto LAB_043d364c;
    UnityEngine_Material__EnableKeyword(lVar5,DAT_091ffcd8,0);
    lVar5 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190970 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar5 == 0) goto LAB_043d364c;
    fVar8 = *(float *)(param_1 + 500);
    fVar6 = 1.0;
    if (fVar8 <= 1.0) {
      fVar6 = fVar8;
    }
    fVar9 = 0.0;
    fVar2 = 0.0;
    if (0.0 <= fVar8) {
      fVar2 = fVar6 * 0.05 + 0.0;
    }
    UnityEngine_Material__SetFloat
              (fVar2,lVar5,*(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 0x18),0);
  }
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
  UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09203240,0);
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
  UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09203258,0);
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
  UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09203250,0);
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
  UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09203260,0);
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
  UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09203248,0);
  iVar1 = *(int *)(param_1 + 0x1c4);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09203240,0);
      lVar5 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190970 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = *(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 0x24);
      if (DAT_09516627 == '\0') {
        FUN_03f5c2a4(&DAT_0918cc38);
        DAT_09516627 = '\x01';
      }
      if (lVar5 == 0) goto LAB_043d364c;
      pfVar4 = *(float **)(DAT_0918cc38 + 0xb8);
      fVar9 = pfVar4[2];
      fVar10 = pfVar4[3];
      fVar6 = *pfVar4;
      fVar8 = pfVar4[1];
    }
    else {
      if (iVar1 == 1) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
        UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09203240,0);
        lVar5 = *(long *)(param_1 + 0x70);
        if (*(int *)(DAT_09190970 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar5 == 0) goto LAB_043d364c;
        fVar8 = 0.0;
        fVar10 = 0.0;
        fVar6 = 1.0;
      }
      else {
        if (iVar1 != 2) goto LAB_043d3374;
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
        UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09203240,0);
        lVar5 = *(long *)(param_1 + 0x70);
        if (*(int *)(DAT_09190970 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar5 == 0) goto LAB_043d364c;
        fVar6 = 0.0;
        fVar8 = -1.0;
        fVar10 = 1.0;
      }
LAB_043d3360:
      fVar9 = 0.0;
      uVar7 = *(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 0x24);
    }
LAB_043d336c:
    UnityEngine_Material__SetColorImpl(fVar6,fVar8,fVar9,fVar10,lVar5,uVar7,0);
  }
  else if (iVar1 < 5) {
    if (iVar1 == 3) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09203240,0);
      lVar5 = *(long *)(param_1 + 0x70);
      if (*(char *)(param_1 + 0x1c8) == '\0') {
        if (*(int *)(DAT_09190970 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar5 == 0) goto LAB_043d364c;
        fVar6 = 0.5;
        fVar8 = -0.5;
        fVar10 = 0.5;
      }
      else {
        if (*(int *)(DAT_09190970 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar5 == 0) goto LAB_043d364c;
        fVar10 = 0.0;
        fVar6 = 0.5;
        fVar8 = 0.5;
      }
      goto LAB_043d3360;
    }
    if (iVar1 == 4) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09203250,0);
      lVar5 = *(long *)(param_1 + 0x60);
      if (lVar5 == 0) goto LAB_043d364c;
      ChocDino_UIFX_GradientUtils__GetCssLinearGradientShaderParams
                (*(undefined4 *)(param_1 + 0x1cc),*(undefined4 *)(lVar5 + 0x2c),
                 *(undefined4 *)(lVar5 + 0x30),*(undefined4 *)(lVar5 + 0x34),
                 *(undefined4 *)(lVar5 + 0x38),&local_48,&local_78,(long)&local_80 + 4,&local_80,0);
      lVar5 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190970 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar5 == 0) goto LAB_043d364c;
      UnityEngine_Material__SetColorImpl
                (local_48 & 0xffffffff,local_48._4_4_,local_78 & 0xffffffff,local_78._4_4_,lVar5,
                 *(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 0x1c),0);
      lVar5 = *(long *)(param_1 + 0x70);
      if (lVar5 == 0) goto LAB_043d364c;
      uVar7 = *(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 0x20);
      fVar6 = local_80._4_4_;
      fVar8 = (float)local_80;
      goto LAB_043d32f0;
    }
  }
  else {
    if (iVar1 == 5) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09203260,0);
      lVar5 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190970 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar5 == 0) goto LAB_043d364c;
      UnityEngine_Material__SetColorImpl
                (*(undefined4 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1d4),
                 *(undefined4 *)(param_1 + 0x1d8),0,lVar5,
                 *(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 0x14),0);
      lVar5 = *(long *)(param_1 + 0x70);
      if (lVar5 == 0) goto LAB_043d364c;
      fVar8 = 1.0;
      if (*(int *)(param_1 + 0x1f8) != 1) {
        fVar8 = 0.0;
      }
      fVar6 = 0.0;
      if (*(char *)(param_1 + 0x1dc) != '\0') {
        fVar6 = 1.0;
      }
      uVar7 = *(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 0x30);
LAB_043d32f0:
      fVar9 = 0.0;
      fVar10 = 0.0;
      goto LAB_043d336c;
    }
    if (iVar1 == 6) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09203248,0);
      lVar5 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190970 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar5 == 0) goto LAB_043d364c;
      fVar10 = 0.0;
      fVar9 = *(float *)(param_1 + 0x1d8);
      fVar8 = *(float *)(param_1 + 0x1d4);
      fVar6 = *(float *)(param_1 + 0x1d0);
      uVar7 = *(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 0x14);
      goto LAB_043d336c;
    }
  }
LAB_043d3374:
  lVar5 = *(long *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x1e8) == 0) {
    if (lVar5 == 0) goto LAB_043d364c;
    UnityEngine_Material__DisableKeyword(lVar5,DAT_09203208,0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09203200,0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
    UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09203210,0);
  }
  else {
    if (*(int *)(param_1 + 0x1e8) == 1) {
      if (lVar5 == 0) goto LAB_043d364c;
      UnityEngine_Material__DisableKeyword(lVar5,DAT_09203208,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09203200,0);
    }
    else {
      if (lVar5 == 0) goto LAB_043d364c;
      UnityEngine_Material__EnableKeyword(lVar5,DAT_09203208,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09203200,0);
    }
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d364c;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09203210,0);
  }
  if (*(int *)(param_1 + 0x1e8) == 0) {
    lVar5 = *(long *)(param_1 + 0x70);
LAB_043d349c:
    if (lVar5 == 0) goto LAB_043d364c;
    UnityEngine_Material__DisableKeyword(lVar5,DAT_092031e8,0);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x1ec) != 1) goto LAB_043d349c;
    if (lVar5 == 0) goto LAB_043d364c;
    UnityEngine_Material__EnableKeyword(lVar5,DAT_092031e8,0);
  }
  lVar5 = *(long *)(param_1 + 0x70);
  if (*(int *)(DAT_09190970 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar5 != 0) {
    UnityEngine_Material__SetInt
              (lVar5,*(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 0x28),
               *(undefined4 *)(param_1 + 0x20c),0);
    lVar5 = *(long *)(param_1 + 0x70);
    if (*(char *)(param_1 + 0x210) == '\0') {
      if (lVar5 == 0) goto LAB_043d364c;
      UnityEngine_Material__DisableKeyword(lVar5,DAT_091fc6e8,0);
    }
    else {
      if (lVar5 == 0) goto LAB_043d364c;
      UnityEngine_Material__EnableKeyword(lVar5,DAT_091fc6e8,0);
    }
    if ((*(int *)(param_1 + 0x1f8) == 1) && (*(int *)(param_1 + 0x24) == 1)) {
      uVar7 = ChocDino_UIFX_FilterBase__GetScreenRect(param_1);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190970 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar5 == 0) goto LAB_043d364c;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190970 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar5 == 0) goto LAB_043d364c;
      uVar7 = 0;
      fVar8 = 0.0;
      fVar9 = 1.0;
      fVar10 = 1.0;
    }
    UnityEngine_Material__SetColorImpl
              (uVar7,fVar8,fVar9,fVar10,lVar5,*(undefined4 *)(*(long *)(DAT_09190970 + 0xb8) + 0x2c)
               ,0);
    lVar5 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190980 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar5 != 0) {
      UnityEngine_Material__SetFloat
                (*(undefined4 *)(param_1 + 0x20),lVar5,
                 *(undefined4 *)(*(long *)(DAT_09190980 + 0xb8) + 8),0);
      ChocDino_UIFX_FilterBase__SetupDisplayMaterial(param_1,param_2,param_3);
      return;
    }
  }
LAB_043d364c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

