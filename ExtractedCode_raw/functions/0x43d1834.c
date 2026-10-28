// rea decompile_all
// name: ChocDino.UIFX.FillColorFilter$$SetupDisplayMaterial
// address: 0x43d1834
// body: available
// range: 0x43d1834-0x43d1de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d1de0 to 0x43c6a24 ChocDino.UIFX.FilterBase$$SetupDisplayMaterial (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43d1de4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FillColorFilter__SetupDisplayMaterial
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 in_s3;
  float fVar6;
  
  if ((DAT_09517c53 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09190968);
    FUN_03f5c2a4(&DAT_09190980);
    FUN_03f5c2a4(&DAT_09207440);
    FUN_03f5c2a4(&DAT_091fc6e8);
    FUN_03f5c2a4(&DAT_09207450);
    FUN_03f5c2a4(&DAT_09207448);
    DAT_09517c53 = 1;
  }
  fVar4 = 0.5;
  fVar5 = *(float *)(param_1 + 0x23c);
  iVar1 = *(int *)(param_1 + 0x1c4);
  fVar6 = fVar5 * (ABS(*(float *)(param_1 + 0x238)) * 0.5 + 0.5) + 0.5;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190968 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar2 == 0) goto LAB_043d1de4;
      in_s3 = *(undefined4 *)(param_1 + 0x1d4);
      fVar5 = *(float *)(param_1 + 0x1d0);
      fVar4 = *(float *)(param_1 + 0x1cc);
      UnityEngine_Material__SetColorImpl
                (*(undefined4 *)(param_1 + 0x1c8),fVar4,fVar5,in_s3,lVar2,
                 **(undefined4 **)(DAT_09190968 + 0xb8),0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09207448,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09207450,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09207440,0);
    }
    else if (iVar1 == 1) {
      lVar2 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190968 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar2 == 0) goto LAB_043d1de4;
      UnityEngine_Material__SetColorImpl
                (*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
                 *(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4),lVar2,
                 *(undefined4 *)(*(long *)(DAT_09190968 + 0xb8) + 4),0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__SetColorImpl
                (*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec),
                 *(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500),
                 *(long *)(param_1 + 0x70),*(undefined4 *)(*(long *)(DAT_09190968 + 0xb8) + 8),0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09207448,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09207450,0);
      goto LAB_043d1c10;
    }
  }
  else {
    if (iVar1 == 2) {
      lVar2 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190968 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar2 == 0) goto LAB_043d1de4;
      UnityEngine_Material__SetColorImpl
                (*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
                 *(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4),lVar2,
                 *(undefined4 *)(*(long *)(DAT_09190968 + 0xb8) + 4),0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__SetColorImpl
                (*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec),
                 *(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500),
                 *(long *)(param_1 + 0x70),*(undefined4 *)(*(long *)(DAT_09190968 + 0xb8) + 8),0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09207448,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09207450,0);
LAB_043d1c10:
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09207440,0);
    }
    else {
      if (iVar1 != 3) goto LAB_043d1c58;
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09207448,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09207450,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09207440,0);
      lVar2 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190968 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar2 == 0) goto LAB_043d1de4;
      UnityEngine_Material__SetColorImpl
                (*(undefined4 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x1fc),
                 *(undefined4 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x204),lVar2,
                 *(undefined4 *)(*(long *)(DAT_09190968 + 0xb8) + 0xc),0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__SetColorImpl
                (*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c),
                 *(undefined4 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x214),
                 *(long *)(param_1 + 0x70),*(undefined4 *)(*(long *)(DAT_09190968 + 0xb8) + 0x10),0)
      ;
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__SetColorImpl
                (*(undefined4 *)(param_1 + 0x218),*(undefined4 *)(param_1 + 0x21c),
                 *(undefined4 *)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x224),
                 *(long *)(param_1 + 0x70),*(undefined4 *)(*(long *)(DAT_09190968 + 0xb8) + 0x14),0)
      ;
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
      UnityEngine_Material__SetColorImpl
                (*(undefined4 *)(param_1 + 0x228),*(undefined4 *)(param_1 + 0x22c),
                 *(undefined4 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x234),
                 *(long *)(param_1 + 0x70),*(undefined4 *)(*(long *)(DAT_09190968 + 0xb8) + 0x18),0)
      ;
    }
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043d1de4;
    fVar5 = 0.0;
    in_s3 = 0;
    fVar4 = fVar6;
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_1 + 0x238),fVar6,0,0,*(long *)(param_1 + 0x70),
               *(undefined4 *)(*(long *)(DAT_09190968 + 0xb8) + 0x1c),0);
  }
LAB_043d1c58:
  lVar2 = *(long *)(param_1 + 0x70);
  if (*(int *)(DAT_09190968 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar2 != 0) {
    UnityEngine_Material__SetInt
              (lVar2,*(undefined4 *)(*(long *)(DAT_09190968 + 0xb8) + 0x20),
               *(undefined4 *)(param_1 + 0x244),0);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*(char *)(param_1 + 0x248) == '\0') {
      if (lVar2 == 0) goto LAB_043d1de4;
      UnityEngine_Material__DisableKeyword(lVar2,DAT_091fc6e8,0);
    }
    else {
      if (lVar2 == 0) goto LAB_043d1de4;
      UnityEngine_Material__EnableKeyword(lVar2,DAT_091fc6e8,0);
    }
    if ((*(int *)(param_1 + 0x240) == 1) && (*(int *)(param_1 + 0x24) == 1)) {
      uVar3 = ChocDino_UIFX_FilterBase__GetScreenRect(param_1);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190968 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar2 == 0) goto LAB_043d1de4;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190968 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar2 == 0) goto LAB_043d1de4;
      uVar3 = 0;
      fVar4 = 0.0;
      fVar5 = 1.0;
      in_s3 = 0x3f800000;
    }
    UnityEngine_Material__SetColorImpl
              (uVar3,fVar4,fVar5,in_s3,lVar2,*(undefined4 *)(*(long *)(DAT_09190968 + 0xb8) + 0x24),
               0);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190980 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar2 != 0) {
      UnityEngine_Material__SetFloat
                (*(undefined4 *)(param_1 + 0x20),lVar2,
                 *(undefined4 *)(*(long *)(DAT_09190980 + 0xb8) + 8),0);
      ChocDino_UIFX_FilterBase__SetupDisplayMaterial(param_1,param_2,param_3);
      return;
    }
  }
LAB_043d1de4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

