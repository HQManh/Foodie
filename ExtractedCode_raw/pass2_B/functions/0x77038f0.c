// rea decompile_all
// name: Newtonsoft.Json.Converters.BsonObjectIdConverter$$ReadJson
// address: 0x77038f0
// body: available
// range: 0x77038f0-0x7703a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77039a8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77039d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703a7c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Converters_BsonObjectIdConverter__ReadJson(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_24;
  
  if ((DAT_09522954 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181ff8);
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09522954 = 1;
  }
  if (param_2 != (long *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar1 != 0x11) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(param_2);
      local_24 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      uVar3 = thunk_FUN_03fc39d4(&DAT_09187478);
      uVar3 = FUN_03f5c42c(uVar3,&local_24);
      uVar6 = thunk_FUN_03fc39d4(&DAT_09201d38);
      uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar5,uVar3,0);
      thunk_FUN_03fc39d4(&DAT_09187420);
      uVar3 = thunk_FUN_03f9944c();
      Newtonsoft_Json_JsonSerializationException___ctor(uVar3,uVar5,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091c4178);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar5);
    }
    lVar2 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    uVar3 = thunk_FUN_03f9944c(DAT_09181ff8);
    uVar5 = DAT_0917fc88;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_03f99350(lVar2,DAT_0917fc88);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar2,uVar5);
      }
    }
    Newtonsoft_Json_Bson_BsonObjectId___ctor(uVar3,lVar4,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

