// rea decompile_all
// name: DG.Tweening.Plugins.UintPlugin$$EvaluateAndApply
// address: 0x4567d9c
// body: available
// range: 0x4567d9c-0x4567f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4567f68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_UintPlugin__EvaluateAndApply
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,ulong param_4,long param_5,
               undefined8 param_6,undefined8 param_7,long param_8,int param_9,uint param_10)

{
  int iVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  double __x;
  double local_38;
  
  if ((DAT_09518855 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09518855 = 1;
  }
  if (param_5 == 0) goto LAB_04567f68;
  if (*(int *)(param_5 + 0xa8) == 2) {
    iVar1 = (*(int *)(param_5 + 0x10c) - (int)*(char *)(param_5 + 0x111)) * param_10;
    if ((param_4 & 1) == 0) {
      param_9 = iVar1 + param_9;
    }
    else {
      param_9 = param_9 - iVar1;
    }
  }
  if (*(char *)(param_5 + 0xe9) != '\0') {
    lVar2 = *(long *)(param_5 + 0xf0);
    if (lVar2 == 0) goto LAB_04567f68;
    if (*(int *)(lVar2 + 0xa8) == 2) {
      if (*(int *)(param_5 + 0xa8) == 2) {
        iVar1 = *(int *)(param_5 + 0xa4);
      }
      else {
        iVar1 = 1;
      }
      iVar1 = iVar1 * param_10 * (*(int *)(lVar2 + 0x10c) - (int)*(char *)(lVar2 + 0x111));
      if ((param_4 & 1) == 0) {
        param_9 = iVar1 + param_9;
      }
      else {
        param_9 = param_9 - iVar1;
      }
    }
  }
  fVar3 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                           (param_1,param_2,*(undefined4 *)(param_5 + 0xc0),
                            *(undefined4 *)(param_5 + 0xc4),*(undefined4 *)(param_5 + 0xb4),
                            *(undefined8 *)(param_5 + 0xb8),0);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)(fVar3 * (float)param_10);
  dVar4 = modf(__x,&local_38);
  if (0.0 <= fVar3 * (float)param_10) {
    if (dVar4 == 0.5) {
      dVar4 = 1.0;
      goto LAB_04567ef4;
    }
    local_38 = (double)(long)(__x + 0.5);
  }
  else if (dVar4 == -0.5) {
    dVar4 = -1.0;
LAB_04567ef4:
    if (((long)local_38 & 1U) != 0) {
      local_38 = local_38 + dVar4;
    }
  }
  else {
    local_38 = (double)(long)(__x + -0.5);
  }
  iVar1 = (int)local_38;
  if ((param_4 & 1) == 0) {
    if (param_8 == 0) {
LAB_04567f68:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if (param_8 == 0) goto LAB_04567f68;
    iVar1 = -iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x04567f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_8 + 0x18))
            (*(undefined8 *)(param_8 + 0x40),iVar1 + param_9,*(undefined8 *)(param_8 + 0x28));
  return;
}

