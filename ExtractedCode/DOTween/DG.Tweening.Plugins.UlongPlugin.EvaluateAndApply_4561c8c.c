// rea decompile_all
// name: DG.Tweening.Plugins.UlongPlugin$$EvaluateAndApply
// address: 0x4561c8c
// body: available
// range: 0x4561c8c-0x4561e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4561e00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_UlongPlugin__EvaluateAndApply
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9,
               long param_10)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((DAT_09518838 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091837d8);
    DAT_09518838 = 1;
  }
  if (param_5 != 0) {
    if (*(int *)(param_5 + 0xa8) == 2) {
      param_9 = param_9 + (ulong)(uint)(*(int *)(param_5 + 0x10c) - (int)*(char *)(param_5 + 0x111))
                          * param_10;
    }
    if (*(char *)(param_5 + 0xe9) != '\0') {
      lVar3 = *(long *)(param_5 + 0xf0);
      if (lVar3 == 0) goto LAB_04561e00;
      if (*(int *)(lVar3 + 0xa8) == 2) {
        if (*(int *)(param_5 + 0xa8) == 2) {
          uVar2 = (ulong)*(uint *)(param_5 + 0xa4);
        }
        else {
          uVar2 = 1;
        }
        param_9 = param_9 + uVar2 * param_10 *
                            (ulong)(uint)(*(int *)(lVar3 + 0x10c) - (int)*(char *)(lVar3 + 0x111));
      }
    }
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar4 = System_Decimal__op_Implicit(param_9,0);
    auVar5 = System_Decimal__op_Implicit(param_10,0);
    DG_Tweening_Core_Easing_EaseManager__Evaluate
              (param_1,param_2,*(undefined4 *)(param_5 + 0xc0),*(undefined4 *)(param_5 + 0xc4),
               *(undefined4 *)(param_5 + 0xb4),*(undefined8 *)(param_5 + 0xb8),0);
    auVar6 = System_Decimal__op_Explicit(0);
    auVar5 = System_Decimal__op_Multiply(auVar5._0_8_,auVar5._8_8_,auVar6._0_8_,auVar6._8_8_,0);
    auVar4 = System_Decimal__op_Addition(auVar4._0_8_,auVar4._8_8_,auVar5._0_8_,auVar5._8_8_,0);
    uVar1 = System_Decimal__op_Explicit(auVar4._0_8_,auVar4._8_8_,0);
    if (param_8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04561dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_8 + 0x18))
                (*(undefined8 *)(param_8 + 0x40),uVar1,*(undefined8 *)(param_8 + 0x28));
      return;
    }
  }
LAB_04561e00:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

