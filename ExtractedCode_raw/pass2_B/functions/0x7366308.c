// rea decompile_all
// name: Lofelt.NiceVibrations.HapticPatterns.Preset$$.ctor
// address: 0x7366308
// body: available
// range: 0x7366308-0x73663fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73663f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lofelt_NiceVibrations_HapticPatterns_Preset___ctor
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_0952089f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09191240);
    DAT_0952089f = 1;
  }
  local_50 = 0;
  local_48 = 0;
  if (*(int *)(DAT_09191240 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_50 = param_3;
  thunk_FUN_03f5d7b8(&local_50,param_3);
  local_48 = param_4;
  thunk_FUN_03f5d7b8(&local_48,param_4);
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = local_50;
  thunk_FUN_03f5d7b8();
  plVar1 = (long *)System_Text_Encoding__get_UTF8(0);
  uVar2 = Lofelt_NiceVibrations_HapticPatterns_Pattern__ToClip(&local_50);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 600))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x260));
    *(undefined8 *)(param_1 + 4) = uVar2;
    thunk_FUN_03f5d7b8(param_1 + 4,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

