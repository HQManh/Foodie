// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$ReadInt32String
// address: 0x76447bc
// body: available
// range: 0x76447bc-0x764496b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7644968 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_JsonReader__ReadInt32String(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  if ((DAT_09522302 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6f98);
    DAT_09522302 = 1;
  }
  local_2c = 0;
  uVar1 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(param_2,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = Newtonsoft_Json_JsonReader__get_Culture(param_1);
    uVar1 = System_Int32__TryParse(param_2,7,uVar2,&local_2c,0);
    if ((uVar1 & 1) == 0) {
      Newtonsoft_Json_JsonReader__SetToken(param_1,9,param_2,0);
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091ff3c0);
      uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar3,uVar2,param_2,0);
      uVar2 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar2);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091d1980);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar3);
    }
    local_30 = local_2c;
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_30);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = 7;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
    uVar4 = 8;
    if ((*(int *)(param_1 + 0x28) == 0) && (uVar4 = 0xc, *(char *)(param_1 + 0x71) != '\0')) {
      uVar4 = 8;
    }
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    local_28 = 0;
    FUN_05c3078c(&local_28,local_2c,DAT_091b6f98);
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xb;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    uVar4 = 8;
    if ((*(int *)(param_1 + 0x28) == 0) && (uVar4 = 0xc, *(char *)(param_1 + 0x71) != '\0')) {
      uVar4 = 8;
    }
    local_28 = 0;
    *(undefined4 *)(param_1 + 0x24) = uVar4;
  }
  return local_28;
}

