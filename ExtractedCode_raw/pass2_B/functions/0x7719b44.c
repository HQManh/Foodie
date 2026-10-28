// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonReader$$Read
// address: 0x7719b44
// body: available
// range: 0x7719b44-0x7719c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7719c4c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Bson_BsonReader__Read(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_34 [3];
  undefined4 local_28;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  local_28 = 0;
  if (iVar1 - 4U < 5) {
    uVar2 = Newtonsoft_Json_Bson_BsonReader__ReadCodeWScope(param_1);
  }
  else {
    if (iVar1 - 1U < 3) {
      Newtonsoft_Json_Bson_BsonReader__ReadReference(param_1);
      return 1;
    }
    if (iVar1 != 0) {
      lVar3 = thunk_FUN_03fc39d4(&DAT_09182ff8);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      local_34[0] = *(undefined4 *)(param_1 + 0x9c);
      uVar5 = thunk_FUN_03fc39d4(&DAT_0918e988);
      uVar5 = FUN_03f5c42c(uVar5,local_34);
      uVar6 = thunk_FUN_03fc39d4(&DAT_09211e28);
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar4,uVar5,0);
      uVar4 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar4,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091c4188);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    uVar2 = Newtonsoft_Json_Bson_BsonReader__ReadNormal(param_1);
  }
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  Newtonsoft_Json_JsonReader__SetToken(param_1,0,0);
  return 0;
}

