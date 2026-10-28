// rea decompile_all
// name: Coffee.UIEffects.UIEffectTweener$$UpdateTime
// address: 0x43f58e4
// body: available
// range: 0x43f58e4-0x43f5bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f5bd4 to 0x8674f54 UnityEngine.Events.UnityEvent$$Invoke (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f5bd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectTweener__UpdateTime(float param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = Coffee_UIEffects_UIEffectTweener__get_isTweening();
  if (*(int *)(param_2 + 0x54) == 1) {
    fVar10 = *(float *)(param_2 + 0x78) + param_1;
    *(float *)(param_2 + 0x78) = fVar10;
LAB_043f5938:
    if (fVar10 < 0.0) {
      fVar4 = (float)Coffee_UIEffects_UIEffectTweener__get_totalTime(param_2);
      fVar10 = fVar10 - fVar4 * (float)(int)(fVar10 / fVar4);
      if (fVar10 <= fVar4) {
        fVar4 = fVar10;
      }
      bVar2 = fVar10 < 0.0;
      goto LAB_043f59e4;
    }
    fVar4 = *(float *)(param_2 + 0x40);
    if ((fVar4 < fVar10) || ((param_1 < 0.0 && (fVar4 <= fVar10 - param_1)))) {
      fVar7 = (float)Coffee_UIEffects_UIEffectTweener__get_totalTime(param_2);
      fVar7 = fVar7 - *(float *)(param_2 + 0x40);
      fVar4 = (fVar10 - fVar4) - fVar7 * (float)(int)((fVar10 - fVar4) / fVar7);
      if (fVar4 <= fVar7) {
        fVar7 = fVar4;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar4) {
        fVar10 = fVar7;
      }
      fVar10 = *(float *)(param_2 + 0x40) + fVar10;
      goto LAB_043f59e8;
    }
  }
  else {
    fVar10 = *(float *)(param_2 + 0x78) + param_1;
    *(float *)(param_2 + 0x78) = fVar10;
    if (*(int *)(param_2 + 0x54) == 3) goto LAB_043f5938;
    fVar4 = (float)Coffee_UIEffects_UIEffectTweener__get_totalTime(param_2);
    if (fVar10 <= fVar4) {
      fVar4 = fVar10;
    }
    bVar2 = false;
    if (!NAN(fVar10)) {
      bVar2 = fVar10 < 0.0;
    }
LAB_043f59e4:
    fVar10 = 0.0;
    if (!bVar2) {
      fVar10 = fVar4;
    }
LAB_043f59e8:
    *(float *)(param_2 + 0x78) = fVar10;
  }
  fVar7 = *(float *)(param_2 + 0x40);
  fVar4 = fVar10 - fVar7;
  if ((0.0 <= fVar10) && (fVar4 <= 0.0)) {
    fVar10 = 0.0;
    goto LAB_043f5b8c;
  }
  iVar1 = *(int *)(param_2 + 0x54);
  fVar5 = *(float *)(param_2 + 0x44);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      fVar10 = fVar5;
      if (fVar4 <= fVar5) {
        fVar10 = fVar4;
      }
      bVar2 = 0.0 <= fVar4;
      fVar4 = 0.0;
      if (bVar2) {
        fVar4 = fVar10;
      }
      *(float *)(param_2 + 0x78) = fVar7 + fVar4;
    }
    else if (iVar1 == 1) {
      fVar10 = fVar5 + *(float *)(param_2 + 0x48);
      fVar6 = fVar4 - fVar10 * (float)(int)(fVar4 / fVar10);
      if (fVar6 <= fVar10) {
        fVar10 = fVar6;
      }
      fVar9 = 0.0;
      fVar4 = 0.0;
      if (0.0 <= fVar6) {
        fVar9 = fVar10;
        fVar4 = fVar10;
      }
      goto LAB_043f5b70;
    }
  }
  else if (iVar1 == 2) {
    fVar10 = fVar5 + fVar5 + *(float *)(param_2 + 0x48);
    fVar6 = fVar5 + *(float *)(param_2 + 0x48) * 0.5;
    if (fVar4 <= fVar10) {
      fVar10 = fVar4;
    }
    fVar9 = 0.0;
    if (0.0 <= fVar4) {
      fVar9 = fVar10;
    }
    fVar10 = fVar6 + fVar6;
    fVar4 = fVar9 - fVar10 * (float)(int)(fVar9 / fVar10);
    if (fVar4 <= fVar10) {
      fVar10 = fVar4;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar4) {
      fVar8 = fVar10;
    }
    fVar4 = fVar6 - ABS(fVar8 - fVar6);
LAB_043f5b70:
    *(float *)(param_2 + 0x78) = fVar7 + fVar9;
  }
  else if (iVar1 == 3) {
    fVar6 = *(float *)(param_2 + 0x48);
    fVar10 = fVar5 + fVar6 + fVar5 + fVar6;
    fVar9 = fVar4 - fVar10 * (float)(int)(fVar4 / fVar10);
    fVar4 = 0.0;
    if (fVar9 <= fVar10) {
      fVar10 = fVar9;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar10;
    }
    *(float *)(param_2 + 0x78) = fVar7 + fVar8;
    if (fVar8 < fVar5 + fVar5 + fVar6) {
      fVar4 = fVar5 + fVar6 * 0.5;
      fVar10 = fVar4 + fVar4;
      fVar8 = fVar8 - fVar10 * (float)(int)(fVar8 / fVar10);
      if (fVar8 <= fVar10) {
        fVar10 = fVar8;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar8) {
        fVar7 = fVar10;
      }
      fVar4 = fVar4 - ABS(fVar7 - fVar4);
    }
  }
  fVar7 = fVar5;
  if (fVar4 <= fVar5) {
    fVar7 = fVar4;
  }
  fVar10 = 0.0;
  if (0.0 <= fVar4) {
    fVar10 = fVar7;
  }
  fVar10 = fVar10 / fVar5;
LAB_043f5b8c:
  Coffee_UIEffects_UIEffectTweener__set_rate(fVar10,param_2);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = Coffee_UIEffects_UIEffectTweener__get_isTweening(param_2), (uVar3 & 1) == 0)) {
    if (*(long *)(param_2 + 0x60) != 0) {
      UnityEngine_Events_UnityEvent__Invoke(*(long *)(param_2 + 0x60),0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

