// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ReadNumberCharIntoBuffer
// address: 0x7654704
// body: available
// range: 0x7654704-0x7654867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7654854 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_JsonTextReader__ReadNumberCharIntoBuffer
          (long param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_24 [2];
  
  uVar1 = param_2 & 0xffff;
  if (uVar1 < 0x59) {
    if (uVar1 - 0x2b < 0x1c) {
      if ((1 << (ulong)(uVar1 - 0x2b & 0x1f) & 0xfc07fedU) == 0) goto LAB_07654768;
    }
    else if ((param_2 & 0xffff) != 0x58) goto LAB_07654768;
    uVar2 = 0;
  }
  else {
    if (uVar1 == 0x78) {
      return 0;
    }
    if (uVar1 - 0x61 < 6) {
      return 0;
    }
LAB_07654768:
    *(undefined4 *)(param_1 + 0x8c) = param_3;
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Char__IsWhiteSpace(param_2,0);
    if ((uVar3 & 1) == 0) {
      uVar2 = 1;
      uVar1 = (param_2 & 0xffff) - 0x29;
      if (((0x34 < uVar1) || ((1L << ((ulong)uVar1 & 0x3f) & 0x10000000000049U) == 0)) &&
         ((param_2 & 0xffff) != 0x7d)) {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        local_24[0] = (undefined2)param_2;
        uVar4 = FUN_03f5c42c(DAT_09535460,local_24);
        uVar5 = thunk_FUN_03fc39d4(&DAT_09211c38);
        uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar2,uVar4,0);
        uVar2 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar2);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091d1cb0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,uVar4);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

