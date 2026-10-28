// rea decompile_all
// name: DG.Tweening.Plugins.FloatPlugin$$EvaluateAndApply
// address: 0x456b0fc
// body: available
// range: 0x456b0fc-0x456b2ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456b2a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_FloatPlugin__EvaluateAndApply
               (undefined4 param_1,float param_2,float param_3,undefined4 param_4,undefined8 param_5
               ,ulong param_6,long param_7,undefined8 param_8,undefined8 param_9,long param_10)

{
  long lVar1;
  float fVar2;
  double dVar3;
  double __x;
  double local_28;
  
  if ((DAT_0951886b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951886b = 1;
  }
  if (param_7 == 0) goto LAB_0456b2a8;
  if (*(int *)(param_7 + 0xa8) == 2) {
    param_2 = (float)(*(int *)(param_7 + 0x10c) - (int)*(char *)(param_7 + 0x111)) * param_3 +
              param_2;
  }
  if (*(char *)(param_7 + 0xe9) != '\0') {
    lVar1 = *(long *)(param_7 + 0xf0);
    if (lVar1 == 0) goto LAB_0456b2a8;
    if (*(int *)(lVar1 + 0xa8) == 2) {
      fVar2 = 1.0;
      if (*(int *)(param_7 + 0xa8) == 2) {
        fVar2 = (float)*(int *)(param_7 + 0xa4);
      }
      param_2 = param_2 + fVar2 * param_3 *
                          (float)(*(int *)(lVar1 + 0x10c) - (int)*(char *)(lVar1 + 0x111));
    }
  }
  fVar2 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                           (param_1,param_4,*(undefined4 *)(param_7 + 0xc0),
                            *(undefined4 *)(param_7 + 0xc4),*(undefined4 *)(param_7 + 0xb4),
                            *(undefined8 *)(param_7 + 0xb8),0);
  if ((param_6 & 1) == 0) {
    param_2 = param_2 + fVar2 * param_3;
  }
  else {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_2 = param_2 + fVar2 * param_3;
    __x = (double)param_2;
    dVar3 = modf(__x,&local_28);
    if (0.0 <= param_2) {
      if (dVar3 == 0.5) {
        dVar3 = 1.0;
        goto LAB_0456b254;
      }
      local_28 = (double)(long)(__x + 0.5);
    }
    else if (dVar3 == -0.5) {
      dVar3 = -1.0;
LAB_0456b254:
      if (((long)local_28 & 1U) != 0) {
        local_28 = local_28 + dVar3;
      }
    }
    else {
      local_28 = (double)(long)(__x + -0.5);
    }
    param_2 = (float)local_28;
  }
  if (param_10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0456b2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_10 + 0x18))
              (param_2,*(undefined8 *)(param_10 + 0x40),*(undefined8 *)(param_10 + 0x28));
    return;
  }
LAB_0456b2a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

