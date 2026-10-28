// rea decompile_all
// name: DG.Tweening.Plugins.LongPlugin$$EvaluateAndApply
// address: 0x4561948
// body: available
// range: 0x4561948-0x4561af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4561af4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_LongPlugin__EvaluateAndApply
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9,
               long param_10)

{
  long lVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  double __x;
  double local_48;
  
  if ((DAT_09518836 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09518836 = 1;
  }
  if (param_5 == 0) goto LAB_04561af4;
  if (*(int *)(param_5 + 0xa8) == 2) {
    param_9 = param_9 + (*(int *)(param_5 + 0x10c) - (int)*(char *)(param_5 + 0x111)) * param_10;
  }
  if (*(char *)(param_5 + 0xe9) != '\0') {
    lVar2 = *(long *)(param_5 + 0xf0);
    if (lVar2 == 0) goto LAB_04561af4;
    if (*(int *)(lVar2 + 0xa8) == 2) {
      if (*(int *)(param_5 + 0xa8) == 2) {
        lVar1 = (long)*(int *)(param_5 + 0xa4);
      }
      else {
        lVar1 = 1;
      }
      param_9 = param_9 + lVar1 * param_10 *
                          (long)(*(int *)(lVar2 + 0x10c) - (int)*(char *)(lVar2 + 0x111));
    }
  }
  fVar3 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                           (param_1,param_2,*(undefined4 *)(param_5 + 0xc0),
                            *(undefined4 *)(param_5 + 0xc4),*(undefined4 *)(param_5 + 0xb4),
                            *(undefined8 *)(param_5 + 0xb8),0);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar3 = fVar3 * (float)param_10 + (float)param_9;
  __x = (double)fVar3;
  dVar4 = modf(__x,&local_48);
  if (0.0 <= fVar3) {
    if (dVar4 == 0.5) {
      dVar4 = 1.0;
      goto LAB_04561a8c;
    }
    local_48 = (double)(long)(__x + 0.5);
  }
  else if (dVar4 == -0.5) {
    dVar4 = -1.0;
LAB_04561a8c:
    if (((long)local_48 & 1U) != 0) {
      local_48 = local_48 + dVar4;
    }
  }
  else {
    local_48 = (double)(long)(__x + -0.5);
  }
  if (param_8 != 0) {
    lVar2 = -0x8000000000000000;
    if (local_48 != INFINITY) {
      lVar2 = (long)local_48;
    }
                    /* WARNING: Could not recover jumptable at 0x04561af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_8 + 0x18))
              (*(undefined8 *)(param_8 + 0x40),lVar2,*(undefined8 *)(param_8 + 0x28));
    return;
  }
LAB_04561af4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

