// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$ValidateEnd
// address: 0x7647094
// body: available
// range: 0x7647094-0x764718f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x764718c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonReader__ValidateEnd(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int local_28;
  undefined4 local_24;
  
  iVar1 = Newtonsoft_Json_JsonReader__Pop();
  iVar2 = Newtonsoft_Json_JsonReader__GetTypeForCloseToken(param_1,param_2);
  if (iVar2 != iVar1) {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    local_24 = param_2;
    uVar4 = thunk_FUN_03fc39d4(&DAT_09187478);
    uVar4 = FUN_03f5c42c(uVar4,&local_24);
    local_28 = iVar1;
    uVar5 = thunk_FUN_03fc39d4(&DAT_091872f8);
    uVar5 = FUN_03f5c42c(uVar5,&local_28);
    uVar6 = thunk_FUN_03fc39d4(&DAT_092063d0);
    uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar3,uVar4,uVar5,0);
    uVar3 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar3);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091d19a0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  uVar7 = 8;
  if ((*(int *)(param_1 + 0x28) == 0) && (uVar7 = 0xc, *(char *)(param_1 + 0x71) != '\0')) {
    uVar7 = 8;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  return;
}

