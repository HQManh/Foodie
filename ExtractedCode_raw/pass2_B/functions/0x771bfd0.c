// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonWriter$$AddToken
// address: 0x771bfd0
// body: available
// range: 0x771bfd0-0x771c1b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771c08c to 0x771b59c Newtonsoft.Json.Bson.BsonArray$$Add (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771c110 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771c114 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x771c118 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x771c1b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Bson_BsonWriter__AddToken(long param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 local_24 [4];
  
  if ((DAT_09522a00 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181fc8);
    FUN_03f5c2a4(&DAT_09181ff0);
    DAT_09522a00 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x70);
  if (plVar2 == (long *)0x0) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    cVar1 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    if (cVar1 != '\x03') {
      cVar1 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
      if (cVar1 != '\x04') {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_2);
        local_24[0] = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
        uVar4 = thunk_FUN_03fc39d4(&DAT_09182028);
        uVar4 = FUN_03f5c42c(uVar4,local_24);
        uVar5 = thunk_FUN_03fc39d4(&DAT_09201a20);
        uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar3,uVar4,0);
        uVar3 = Newtonsoft_Json_JsonWriterException__Create(param_1,uVar3,0,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091c41b0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,uVar4);
      }
    }
    *(long **)(param_1 + 0x70) = param_2;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x70),param_2);
    plVar7 = (long *)(param_1 + 0x68);
    *plVar7 = (long)param_2;
  }
  else {
    lVar6 = *plVar2;
    if ((*(byte *)(lVar6 + 0x130) < *(byte *)(DAT_09181ff0 + 0x130)) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_09181ff0 + 0x130) * 8 + -8) !=
        DAT_09181ff0)) {
      if ((*(byte *)(DAT_09181fc8 + 0x130) <= *(byte *)(lVar6 + 0x130)) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_09181fc8 + 0x130) * 8 + -8) ==
          DAT_09181fc8)) {
        Newtonsoft_Json_Bson_BsonArray__Add(plVar2,param_2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    plVar7 = (long *)(param_1 + 0x78);
    Newtonsoft_Json_Bson_BsonObject__Add(plVar2,*plVar7,param_2);
    param_2 = (long *)0x0;
    *plVar7 = 0;
  }
  thunk_FUN_03f5d7b8(plVar7,param_2);
  return;
}

