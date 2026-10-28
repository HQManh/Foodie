// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ConvertUnicode
// address: 0x765452c
// body: available
// range: 0x765452c-0x765467f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765467c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader__ConvertUnicode(long param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_24;
  
  if ((DAT_095223b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09182b88);
    DAT_095223b7 = 1;
  }
  local_24 = 0;
  if ((param_2 & 1) == 0) {
    uVar6 = thunk_FUN_03fc39d4(&DAT_09211d40);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    iVar1 = *(int *)(param_1 + 0x8c);
    if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Utilities_ConvertUtils__TryHexTextToInt
                      (uVar6,iVar1,iVar1 + 4,&local_24,0);
    uVar2 = local_24;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Convert__ToChar(uVar2,0);
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 4;
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar4 = System_String__CreateString
                      (0,*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x8c),4,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09205410);
    uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar6,uVar4,0);
  }
  uVar6 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar6);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d1be8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar4);
}

