// rea decompile_all
// name: ChocDino.UIFX.DropShadowFilter$$SetupDisplayMaterial
// address: 0x43ce614
// body: available
// range: 0x43ce614-0x43ce987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ce980 to 0x43c6a24 ChocDino.UIFX.FilterBase$$SetupDisplayMaterial (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43ce984 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_DropShadowFilter__SetupDisplayMaterial
               (long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_09517c20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09190318);
    FUN_03f5c2a4(&DAT_092030d0);
    FUN_03f5c2a4(&DAT_091fd3e8);
    FUN_03f5c2a4(&DAT_09204488);
    DAT_09517c20 = 1;
  }
  fVar9 = *(float *)(param_1 + 0x1d0);
  if (DAT_09515ce9 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce9 = '\x01';
  }
  if (param_2 != (long *)0x0) {
    fVar9 = fVar9 * -0.017453292;
    lVar4 = *(long *)(DAT_0918cb68 + 0xb8);
    fVar5 = cosf(fVar9 + 3.1415927);
    fVar7 = *(float *)(param_1 + 0xb8);
    fVar11 = *(float *)(param_1 + 0x1d4);
    fVar12 = *(float *)(param_1 + 0x20);
    fVar9 = sinf(fVar9);
    uVar10 = *(undefined8 *)(lVar4 + 8);
    uVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    uVar3 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    lVar4 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190318 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09190318);
    }
    if (lVar4 == 0) goto LAB_043ce984;
    uVar8 = NEON_fmov(0x3f800000,4);
    uVar6 = NEON_scvtf(CONCAT44(uVar3,uVar2),4);
    fVar11 = fVar11 * fVar12;
    fVar5 = fVar5 * (float)((ulong)uVar10 >> 0x20) * fVar11 * fVar7 *
            ((float)((ulong)uVar8 >> 0x20) / (float)((ulong)uVar6 >> 0x20));
    UnityEngine_Material__SetColorImpl
              (CONCAT44(fVar5,fVar9 * (float)uVar10 * fVar11 * fVar7 * ((float)uVar8 / (float)uVar6)
                       ),fVar5,0,0,lVar4,*(undefined4 *)(*(long *)(DAT_09190318 + 0xb8) + 4),0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043ce984;
    UnityEngine_Material__SetFloat
              ((*(float *)(param_1 + 0x1cc) + -1.0) * *(float *)(param_1 + 0x20) + 1.0,
               *(long *)(param_1 + 0x70),**(undefined4 **)(DAT_09190318 + 0xb8),0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043ce984;
    UnityEngine_Material__SetFloat
              (*(undefined4 *)(param_1 + 0x1dc),*(long *)(param_1 + 0x70),
               *(undefined4 *)(*(long *)(DAT_09190318 + 0xb8) + 8),0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043ce984;
    fVar9 = *(float *)(param_1 + 0x1ec);
    UnityEngine_Material__SetColorImpl
              (fVar9 * *(float *)(param_1 + 0x1e0),fVar9 * *(float *)(param_1 + 0x1e4),
               *(float *)(param_1 + 0x1e8) * fVar9,*(long *)(param_1 + 0x70),
               *(undefined4 *)(*(long *)(DAT_09190318 + 0xb8) + 0xc),0);
    iVar1 = *(int *)(param_1 + 0x1f0);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_043ce984;
        UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09204488,0);
      }
      else {
        if (iVar1 != 1) goto LAB_043ce958;
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_043ce984;
        UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09204488,0);
      }
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043ce984;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_092030d0,0);
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 == 3) {
          if (*(long *)(param_1 + 0x70) != 0) {
            UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09204488,0);
            if (*(long *)(param_1 + 0x70) != 0) {
              UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_092030d0,0);
              if (*(long *)(param_1 + 0x70) != 0) {
                UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_091fd3e8,0);
                goto LAB_043ce958;
              }
            }
          }
          goto LAB_043ce984;
        }
        goto LAB_043ce958;
      }
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043ce984;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09204488,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043ce984;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_092030d0,0);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_091fd3e8,0);
LAB_043ce958:
      ChocDino_UIFX_FilterBase__SetupDisplayMaterial(param_1,param_2,param_3);
      return;
    }
  }
LAB_043ce984:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

