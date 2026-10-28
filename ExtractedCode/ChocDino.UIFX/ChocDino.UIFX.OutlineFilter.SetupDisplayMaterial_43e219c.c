// rea decompile_all
// name: ChocDino.UIFX.OutlineFilter$$SetupDisplayMaterial
// address: 0x43e219c
// body: available
// range: 0x43e219c-0x43e259b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e2598 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_OutlineFilter__SetupDisplayMaterial
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_38;
  
  if ((DAT_09517d39 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193118);
    FUN_03f5c2a4(&DAT_091ffc80);
    FUN_03f5c2a4(&DAT_091ffcb0);
    FUN_03f5c2a4(&DAT_091ffc90);
    FUN_03f5c2a4(&DAT_09211828);
    FUN_03f5c2a4(&DAT_091ffc88);
    DAT_09517d39 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x70);
  local_38 = 0;
  local_70 = 0;
  local_68 = 0;
  if (*(int *)(DAT_09193118 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar2 == 0) goto LAB_043e2598;
  UnityEngine_Material__SetFloat
            ((*(float *)(param_1 + 0x1d8) + -1.0) * *(float *)(param_1 + 0x20) + 1.0,lVar2,
             **(undefined4 **)(DAT_09193118 + 0xb8),0);
  if (*(int *)(param_1 + 0x1dc) == 1) {
    if (*(long *)(param_1 + 0x218) == 0) goto LAB_043e2598;
    ChocDino_UIFX_GradientTexture__Update
              (*(long *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x1f0),0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043e2598;
    UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09211828,0);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09193118 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((*(long *)(param_1 + 0x218) == 0) || (lVar2 == 0)) goto LAB_043e2598;
    UnityEngine_Material__SetTextureImpl
              (lVar2,*(undefined4 *)(*(long *)(DAT_09193118 + 0xb8) + 0xc),
               *(undefined8 *)(*(long *)(param_1 + 0x218) + 0x18),0);
    lVar2 = *(long *)(param_1 + 0x60);
    if (lVar2 == 0) goto LAB_043e2598;
    ChocDino_UIFX_GradientUtils__GetCssLinearGradientShaderParams
              (*(undefined4 *)(param_1 + 0x1f8),*(undefined4 *)(lVar2 + 0x2c),
               *(undefined4 *)(lVar2 + 0x30),*(undefined4 *)(lVar2 + 0x34),
               *(undefined4 *)(lVar2 + 0x38),&local_38,&local_68,(long)&local_70 + 4,&local_70,0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043e2598;
    UnityEngine_Material__SetColorImpl
              ((undefined4)local_38,local_38._4_4_,local_68 & 0xffffffff,local_68._4_4_,
               *(long *)(param_1 + 0x70),*(undefined4 *)(*(long *)(DAT_09193118 + 0xb8) + 0x10),0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043e2598;
    UnityEngine_Material__SetColorImpl
              (local_70._4_4_,(undefined4)local_70,0,0,*(long *)(param_1 + 0x70),
               *(undefined4 *)(*(long *)(DAT_09193118 + 0xb8) + 0x14),0);
  }
  else if (*(int *)(param_1 + 0x1dc) == 0) {
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043e2598;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09211828,0);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09193118 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar2 == 0) goto LAB_043e2598;
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4),
               *(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec),lVar2,
               *(undefined4 *)(*(long *)(DAT_09193118 + 0xb8) + 4),0);
  }
  iVar1 = *(int *)(param_1 + 0x1fc);
  if (iVar1 == 2) {
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043e2598;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_091ffc80,0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043e2598;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_091ffc88,0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043e2598;
    UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_091ffc90,0);
  }
  else {
    if (iVar1 == 1) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043e2598;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_091ffc80,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043e2598;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_091ffc88,0);
    }
    else {
      if (iVar1 != 0) goto LAB_043e24d0;
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043e2598;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_091ffc80,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043e2598;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_091ffc88,0);
    }
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043e2598;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_091ffc90,0);
  }
LAB_043e24d0:
  if (*(int *)(param_1 + 0x1c4) == 0) {
    fVar4 = *(float *)(param_1 + 0x1c8);
    fVar5 = *(float *)(param_1 + 0x20);
    fVar3 = *(float *)(param_1 + 0xb8);
    fVar6 = *(float *)(param_1 + 0x1d4);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09193118 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar2 != 0) {
      UnityEngine_Material__SetColorImpl
                (fVar4 * fVar5 * fVar3,fVar3 * fVar5 * fVar6,0,0,lVar2,
                 *(undefined4 *)(*(long *)(DAT_09193118 + 0xb8) + 8),0);
      if (*(long *)(param_1 + 0x70) != 0) {
        UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_091ffcb0,0);
        goto LAB_043e2564;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) {
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_091ffcb0,0);
LAB_043e2564:
    ChocDino_UIFX_FilterBase__SetupDisplayMaterial(param_1,param_2,param_3,0);
    return;
  }
LAB_043e2598:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

