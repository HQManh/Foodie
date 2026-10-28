// rea decompile_all
// name: Newtonsoft.Json.Utilities.ConvertUtils.<>c__DisplayClass8_0$$<CreateCastConverter>b__0
// address: 0x768c2f0
// body: available
// range: 0x768c2f0-0x768c3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768c39c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768c3a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768c3ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ConvertUtils_<>c__DisplayClass8_0__<CreateCastConverter>b__0
               (long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_0952256f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_0952256f = 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (plVar1 != (long *)0x0) {
    if ((param_2 != 0) &&
       (lVar2 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,0);
    }
    if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar1[4] = param_2;
    thunk_FUN_03f5d7b8(plVar1 + 4,param_2);
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0768c398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),0,plVar1,*(undefined8 *)(lVar4 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

