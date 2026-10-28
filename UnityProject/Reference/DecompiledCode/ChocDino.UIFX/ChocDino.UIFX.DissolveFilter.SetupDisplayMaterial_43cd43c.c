// rea decompile_all
// name: ChocDino.UIFX.DissolveFilter$$SetupDisplayMaterial
// address: 0x43cd43c
// body: available
// range: 0x43cd43c-0x43cd9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43cd9bc to 0x43c6a24 ChocDino.UIFX.FilterBase$$SetupDisplayMaterial (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43cd9c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_DissolveFilter__SetupDisplayMaterial
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  float *pfVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((DAT_09517c11 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183be8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09190198);
    FUN_03f5c2a4(&DAT_09200fa0);
    FUN_03f5c2a4(&DAT_09200f90);
    DAT_09517c11 = 1;
  }
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
  pfVar8 = *(float **)(DAT_09189c30 + 0xb8);
  uVar12 = *(undefined8 *)(param_1 + 0x1c8);
  fVar15 = *pfVar8;
  fVar17 = pfVar8[1];
  fVar18 = pfVar8[2];
  fVar19 = pfVar8[3];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar12,0);
  if ((uVar6 & 1) != 0) {
    lVar9 = *(long *)(param_1 + 0x60);
    if ((lVar9 == 0) || (plVar7 = *(long **)(param_1 + 0x1c8), plVar7 == (long *)0x0))
    goto LAB_043cd9c0;
    uVar16 = *(undefined4 *)(lVar9 + 0x2c);
    fVar19 = *(float *)(lVar9 + 0x30);
    fVar18 = *(float *)(lVar9 + 0x34);
    fVar20 = *(float *)(lVar9 + 0x38);
    iVar4 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    plVar7 = *(long **)(param_1 + 0x1c8);
    if (plVar7 == (long *)0x0) goto LAB_043cd9c0;
    iVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    fVar15 = fVar19;
    fVar17 = fVar18;
    fVar14 = fVar20;
    uVar13 = ChocDino_UIFX_MathUtils__ResizeRectToAspectRatio
                       (uVar16,fVar19,fVar18,fVar20,(float)iVar4 / (float)iVar5,
                        *(undefined4 *)(param_1 + 0x1d0),0);
    fVar14 = (float)ChocDino_UIFX_MathUtils__GetRelativeRect
                              (uVar16,fVar19,fVar18,fVar20,uVar13,fVar15,fVar17,fVar14,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar15 = *(float *)(param_1 + 0x1d4);
    if (DAT_09517b1c == '\0') {
      FUN_03f5c2a4(&DAT_09189c30);
      DAT_09517b1c = '\x01';
    }
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar15 = (fVar14 + -0.5) * fVar15;
    fVar17 = *(float *)(param_1 + 0x1d4);
    if (DAT_09517b1d == '\0') {
      FUN_03f5c2a4(&DAT_09189c30);
      DAT_09517b1d = '\x01';
    }
    fVar17 = (fVar19 + -0.5) * fVar17;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar18 = (fVar15 + ((fVar18 + fVar14 + -0.5) - fVar15)) * *(float *)(param_1 + 0x1d4) - fVar15;
    fVar15 = fVar15 + 0.5;
    fVar19 = (fVar17 + ((fVar20 + fVar19 + -0.5) - fVar17)) * *(float *)(param_1 + 0x1d4) - fVar17;
    fVar17 = fVar17 + 0.5;
  }
  lVar9 = *(long *)(param_1 + 0x70);
  if (*(int *)(DAT_09190198 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar9 != 0) {
    UnityEngine_Material__SetTextureImpl
              (lVar9,*(undefined4 *)(*(long *)(DAT_09190198 + 0xb8) + 4),
               *(undefined8 *)(param_1 + 0x1c8),0);
    lVar9 = *(long *)(param_1 + 0x70);
    uVar16 = *(undefined4 *)(*(long *)(DAT_09190198 + 0xb8) + 4);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar9 == 0) goto LAB_043cd9c0;
    UnityEngine_Material__SetTextureScaleImpl(fVar18,fVar19,lVar9,uVar16,0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043cd9c0;
    UnityEngine_Material__SetTextureOffsetImpl
              (fVar15,fVar17,*(long *)(param_1 + 0x70),
               *(undefined4 *)(*(long *)(DAT_09190198 + 0xb8) + 4),0);
    lVar9 = *(long *)(param_1 + 0x70);
    uVar16 = *(undefined4 *)(*(long *)(DAT_09190198 + 0xb8) + 0x14);
    if (*(char *)(param_1 + 0x1d8) == '\0') {
      if (*(int *)(DAT_09183be8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar10 = *(undefined4 **)(DAT_09183be8 + 0xb8);
      puVar1 = puVar10 + 1;
      puVar2 = puVar10 + 2;
      puVar3 = puVar10 + 3;
    }
    else {
      if (*(int *)(DAT_09183be8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = *(long *)(DAT_09183be8 + 0xb8);
      puVar10 = (undefined4 *)(lVar11 + 0x10);
      puVar1 = (undefined4 *)(lVar11 + 0x14);
      puVar2 = (undefined4 *)(lVar11 + 0x18);
      puVar3 = (undefined4 *)(lVar11 + 0x1c);
    }
    if (lVar9 == 0) goto LAB_043cd9c0;
    UnityEngine_Material__SetColorImpl(*puVar10,*puVar1,*puVar2,*puVar3,lVar9,uVar16,0);
    fVar15 = *(float *)(param_1 + 0x1dc);
    fVar17 = *(float *)(param_1 + 0x1c4);
    fVar18 = *(float *)(param_1 + 0x20);
    lVar9 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190198 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar9 == 0) goto LAB_043cd9c0;
    UnityEngine_Material__SetColorImpl
              ((fVar15 + 1.0) * fVar17 * fVar18 - fVar15,*(undefined4 *)(param_1 + 0x1dc),0,0,lVar9,
               **(undefined4 **)(DAT_09190198 + 0xb8),0);
    iVar4 = *(int *)(param_1 + 0x1e0);
    if (iVar4 == 2) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043cd9c0;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09200f90,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043cd9c0;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09200fa0,0);
      lVar9 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190198 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar9 == 0) goto LAB_043cd9c0;
      UnityEngine_Material__SetTextureImpl
                (lVar9,*(undefined4 *)(*(long *)(DAT_09190198 + 0xb8) + 8),
                 *(undefined8 *)(param_1 + 0x1f8),0);
    }
    else {
      if (iVar4 != 1) {
        if (iVar4 == 0) {
          if (*(long *)(param_1 + 0x70) != 0) {
            UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09200f90,0);
            if (*(long *)(param_1 + 0x70) != 0) {
              UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09200fa0,0);
              goto LAB_043cd994;
            }
          }
          goto LAB_043cd9c0;
        }
        goto LAB_043cd994;
      }
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043cd9c0;
      UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x70),DAT_09200f90,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043cd9c0;
      UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x70),DAT_09200fa0,0);
      lVar9 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_09190198 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar9 == 0) goto LAB_043cd9c0;
      UnityEngine_Material__SetColorImpl
                (*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
                 *(undefined4 *)(param_1 + 0x1ec),*(undefined4 *)(param_1 + 0x1f0),lVar9,
                 *(undefined4 *)(*(long *)(DAT_09190198 + 0xb8) + 0xc),0);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      UnityEngine_Material__SetFloat
                (*(float *)(param_1 + 0x200) + 1.0,*(long *)(param_1 + 0x70),
                 *(undefined4 *)(*(long *)(DAT_09190198 + 0xb8) + 0x10),0);
LAB_043cd994:
      ChocDino_UIFX_FilterBase__SetupDisplayMaterial(param_1,param_2,param_3);
      return;
    }
  }
LAB_043cd9c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

