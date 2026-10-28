// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeParser$$Parse4Digit
// address: 0x768c9bc
// body: available
// range: 0x768c9bc-0x768ca9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768ca98 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768ca9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_DateTimeParser__Parse4Digit(long param_1,uint param_2,int *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = param_2 + 3;
  if ((int)uVar2 < *(int *)(param_1 + 0x30)) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = *(uint *)(lVar4 + 0x18);
    if ((((uVar5 <= param_2) || (uVar5 <= param_2 + 1)) || (uVar5 <= param_2 + 2)) ||
       (uVar5 <= uVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar5 = (uint)*(ushort *)(lVar4 + (long)(int)param_2 * 2 + 0x20);
    iVar3 = 0;
    if (((uVar5 - 0x3a < 0xfffffff6) ||
        (uVar7 = (uint)*(ushort *)(lVar4 + (long)(int)(param_2 + 1) * 2 + 0x20),
        uVar7 - 0x3a < 0xfffffff6)) ||
       (uVar6 = (uint)*(ushort *)(lVar4 + (long)(int)(param_2 + 2) * 2 + 0x20),
       uVar6 - 0x3a < 0xfffffff6)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      uVar2 = (uint)*(ushort *)(lVar4 + (long)(int)uVar2 * 2 + 0x20);
      if (0xfffffff5 < uVar2 - 0x3a) {
        uVar1 = 1;
        iVar3 = uVar2 + (uVar6 + (uVar7 + uVar5 * 10) * 10) * 10 + -0xd050;
      }
    }
  }
  else {
    iVar3 = 0;
    uVar1 = 0;
  }
  *param_3 = iVar3;
  return uVar1;
}

