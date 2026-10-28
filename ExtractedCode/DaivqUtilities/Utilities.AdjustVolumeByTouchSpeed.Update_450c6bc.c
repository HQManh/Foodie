// rea decompile_all
// name: Utilities.AdjustVolumeByTouchSpeed$$Update
// address: 0x450c6bc
// body: available
// range: 0x450c6bc-0x450c99f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450c778 to 0x85da940 UnityEngine.AudioSource$$set_volume (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x450c99c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_AdjustVolumeByTouchSpeed__Update(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_0951850a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_0951850a = 1;
  }
  fVar6 = (float)UnityEngine_Time__get_timeScale(0);
  fVar10 = **(float **)(DAT_09187e98 + 0xb8);
  if (fVar6 <= fVar10) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_AudioSource__set_volume(0,*(long *)(param_1 + 0x20),0);
      return;
    }
    goto LAB_0450c99c;
  }
  uVar4 = UnityEngine_Input__GetMouseButtonDown(0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = UnityEngine_Input__GetMouseButton(0,0);
    fVar6 = 0.0;
    if ((uVar4 & 1) != 0) {
      fVar7 = (float)UnityEngine_Input__get_mousePosition(0);
      cVar1 = *(char *)(param_1 + 0x28);
      lVar5 = UnityEngine_Camera__get_main(0);
      fVar9 = fVar10;
      if (cVar1 == '\0') {
        if (lVar5 == 0) goto LAB_0450c99c;
        fVar11 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar7,fVar10,0,lVar5,0);
      }
      else {
        if (lVar5 == 0) goto LAB_0450c99c;
        fVar11 = (float)UnityEngine_Camera__ScreenToViewportPoint(fVar7,fVar10,0,lVar5,0);
      }
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09518541 == '\0') {
        FUN_03f5c2a4(&DAT_09189c30);
        DAT_09518541 = '\x01';
      }
      fVar8 = *(float *)(param_1 + 0x2c);
      fVar6 = 0.0;
      if (fVar8 <= fVar11) {
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
          fVar8 = *(float *)(param_1 + 0x2c);
        }
        if ((fVar11 < fVar8 + *(float *)(param_1 + 0x34)) &&
           (fVar11 = *(float *)(param_1 + 0x30), fVar11 <= fVar9)) {
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
            fVar11 = *(float *)(param_1 + 0x30);
          }
          if (fVar9 < fVar11 + *(float *)(param_1 + 0x38)) {
            fVar6 = *(float *)(param_1 + 0x40);
            iVar2 = UnityEngine_Screen__get_width(0);
            fVar9 = *(float *)(param_1 + 0x44);
            iVar3 = UnityEngine_Screen__get_width(0);
            fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
            if (DAT_09516ea4 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09516ea4 = '\x01';
            }
            fVar6 = (ABS(fVar7 - fVar6) / (float)iVar2) / fVar11;
            fVar11 = (ABS(fVar10 - fVar9) / (float)iVar3) / fVar11;
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            fVar6 = SQRT(fVar6 * fVar6 + fVar11 * fVar11);
          }
        }
      }
      goto LAB_0450c748;
    }
  }
  else {
    fVar7 = (float)UnityEngine_Input__get_mousePosition(0);
    fVar6 = 0.0;
LAB_0450c748:
    *(float *)(param_1 + 0x40) = fVar7;
    *(float *)(param_1 + 0x44) = fVar10;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    fVar10 = (float)UnityEngine_AudioSource__get_volume(lVar5,0);
    if (*(long *)(param_1 + 0x50) != 0) {
      fVar7 = (float)UnityEngine_AnimationCurve__Evaluate
                               (fVar6 * *(float *)(param_1 + 0x3c),*(long *)(param_1 + 0x50),0);
      fVar11 = *(float *)(param_1 + 0x58);
      fVar9 = 1.0;
      if (fVar11 <= 1.0) {
        fVar9 = fVar11;
      }
      fVar8 = 0.0;
      if (0.0 <= fVar11) {
        fVar8 = fVar9;
      }
      UnityEngine_AudioSource__set_volume(fVar10 + (fVar7 - fVar10) * fVar8,lVar5,0);
      *(float *)(param_1 + 0x48) = fVar6;
      return;
    }
  }
LAB_0450c99c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

