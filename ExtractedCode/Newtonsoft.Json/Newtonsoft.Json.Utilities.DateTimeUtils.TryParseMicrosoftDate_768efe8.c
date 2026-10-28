// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$TryParseMicrosoftDate
// address: 0x768efe8
// body: available
// range: 0x768efe8-0x768f163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_Utilities_DateTimeUtils__TryParseMicrosoftDate
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
               undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if ((DAT_0952258a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_0952258a = 1;
  }
  iVar4 = (int)((ulong)param_2 >> 0x20);
  iVar2 = iVar4 + -8;
  *param_5 = 1;
  iVar1 = Newtonsoft_Json_Utilities_StringReferenceExtensions__IndexOf
                    (param_1,param_2,0x2b,7,iVar2,0);
  if ((iVar1 == -1) &&
     (iVar1 = Newtonsoft_Json_Utilities_StringReferenceExtensions__IndexOf
                        (param_1,param_2,0x2d,7,iVar2,0), iVar1 == -1)) {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = iVar4 + -2;
    *param_4 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
  }
  else {
    *param_5 = 2;
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Utilities_DateTimeUtils__TryReadOffset
                      (param_1,param_2,iVar1 + (int)param_2,param_4);
    if ((uVar3 & 1) == 0) {
      *param_3 = 0;
      return false;
    }
  }
  if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = Newtonsoft_Json_Utilities_ConvertUtils__Int64TryParse
                    (param_1,(int)param_2 + 6,iVar1 + -6,param_3);
  return iVar2 == 1;
}

