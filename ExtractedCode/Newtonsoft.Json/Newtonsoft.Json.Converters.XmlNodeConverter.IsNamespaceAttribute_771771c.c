// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$IsNamespaceAttribute
// address: 0x771771c
// body: available
// range: 0x771771c-0x77177fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77177f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
Newtonsoft_Json_Converters_XmlNodeConverter__IsNamespaceAttribute
          (undefined8 param_1,long param_2,undefined8 *param_3)

{
  short sVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((DAT_095229d9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09225c00);
    DAT_095229d9 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = System_String__StartsWith(param_2,DAT_09225c00,4,0);
  if ((uVar2 & 1) == 0) {
LAB_077177d4:
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x10) == 5) {
      uVar3 = **(undefined8 **)(DAT_09535468 + 0xb8);
    }
    else {
      sVar1 = System_String__get_Chars(param_2,5,0);
      if (sVar1 != 0x3a) goto LAB_077177d4;
      uVar3 = System_String__Substring(param_2,6,*(int *)(param_2 + 0x10) + -6,0);
    }
    uVar4 = 1;
  }
  *param_3 = uVar3;
  thunk_FUN_03f5d7b8(param_3);
  return uVar4;
}

