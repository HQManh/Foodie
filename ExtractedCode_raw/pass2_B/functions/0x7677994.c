// rea decompile_all
// name: Newtonsoft.Json.JsonValidatingReader$$TestType
// address: 0x7677994
// body: available
// range: 0x7677994-0x7677ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7677ad0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Newtonsoft_Json_JsonValidatingReader__TestType
               (undefined8 param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_44;
  undefined8 local_38;
  
  if ((DAT_095224aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09187408);
    FUN_03f5c2a4(&DAT_091b7028);
    FUN_03f5c2a4(&DAT_09205b58);
    DAT_095224aa = 1;
  }
  if (param_2 != 0) {
    local_38 = 0;
    FUN_05c30b18(&local_38,*(undefined4 *)(param_2 + 0x14),DAT_091b7028);
    uVar1 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(local_38,param_3,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_2 + 0x14));
      uVar3 = FUN_03f5c42c(DAT_09187408,&local_38);
      local_44 = param_3;
      uVar4 = FUN_03f5c42c(DAT_09187408,&local_44);
      uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_09205b58,uVar2,uVar3,uVar4,0);
      Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar2);
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

