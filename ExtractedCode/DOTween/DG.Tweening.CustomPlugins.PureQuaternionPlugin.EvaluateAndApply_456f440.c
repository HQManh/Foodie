// rea decompile_all
// name: DG.Tweening.CustomPlugins.PureQuaternionPlugin$$EvaluateAndApply
// address: 0x456f440
// body: available
// range: 0x456f440-0x456f4e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456f4e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_CustomPlugins_PureQuaternionPlugin__EvaluateAndApply
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,long param_8,
               undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
               undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  if (param_8 != 0) {
    DG_Tweening_Core_Easing_EaseManager__Evaluate
              (param_1,param_16,*(undefined4 *)(param_8 + 0xc0),*(undefined4 *)(param_8 + 0xc4),
               *(undefined4 *)(param_8 + 0xb4),*(undefined8 *)(param_8 + 0xb8),0);
    local_70[0] = param_14;
    local_68 = param_15;
    local_60 = param_2;
    uStack_5c = param_3;
    local_58 = param_4;
    uStack_54 = param_5;
    UnityEngine_Quaternion__Internal_Slerp(&local_60,local_70,0);
    if (param_11 != 0) {
      (**(code **)(param_11 + 0x18))
                (*(undefined8 *)(param_11 + 0x40),*(undefined8 *)(param_11 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

