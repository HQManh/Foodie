// rea decompile_all
// name: Coffee.UIEffects.UIEffectTweener$$set_rate
// address: 0x43f5378
// body: available
// range: 0x43f5378-0x43f5553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f554c to 0x647ff8c FUN_0647ff8c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f5550 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectTweener__set_rate(float param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_09517e07 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091be0e8);
    DAT_09517e07 = 1;
  }
  fVar10 = *(float *)(param_2 + 0x74);
  fVar5 = 1.0;
  if (param_1 <= 1.0) {
    fVar5 = param_1;
  }
  fVar9 = 0.0;
  if (0.0 <= param_1) {
    fVar9 = fVar5;
  }
  if (DAT_09515cee == '\0') {
    FUN_03f5c2a4(&DAT_09187e98);
    DAT_09515cee = '\x01';
  }
  fVar5 = ABS(fVar10);
  if (fVar5 <= ABS(fVar9)) {
    fVar5 = ABS(fVar9);
  }
  fVar8 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
  fVar6 = fVar5 * 1e-06;
  if (fVar5 * 1e-06 <= fVar8) {
    fVar6 = fVar8;
  }
  if (ABS(fVar9 - fVar10) < fVar6) {
    return;
  }
  *(float *)(param_2 + 0x74) = fVar9;
  uVar1 = Coffee_UIEffects_UIEffectTweener__get_target(param_2);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + 0x28);
  if (*(char *)(param_2 + 0x30) != '\0') {
    if (*(uint *)(param_2 + 0x54) < 2) {
      if (*(int *)(param_2 + 0x24) != 1) goto LAB_043f54d8;
    }
    else if (((*(uint *)(param_2 + 0x54) & 0xfffffffe) != 2) ||
            (*(float *)(param_2 + 0x78) <
             *(float *)(param_2 + 0x40) + *(float *)(param_2 + 0x44) + *(float *)(param_2 + 0x48)))
    goto LAB_043f54d8;
    lVar3 = *(long *)(param_2 + 0x38);
  }
LAB_043f54d8:
  if (lVar3 != 0) {
    uVar7 = UnityEngine_AnimationCurve__Evaluate(*(undefined4 *)(param_2 + 0x74),lVar3,0);
    plVar4 = (long *)Coffee_UIEffects_UIEffectTweener__get_target(param_2);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x368))
                (uVar7,plVar4,*(undefined4 *)(param_2 + 0x20),*(undefined8 *)(*plVar4 + 0x370));
      if (-1 < *(int *)(param_2 + 0x20)) {
        return;
      }
      if (*(long *)(param_2 + 0x68) != 0) {
        FUN_0647ff8c(uVar7,*(long *)(param_2 + 0x68),DAT_091be0e8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

