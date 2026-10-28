// rea decompile_all
// name: Newtonsoft.Json.Serialization.TraceJsonReader$$.ctor
// address: 0x76c65f4
// body: available
// range: 0x76c65f4-0x76c675f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c6758 to 0x767f080 Newtonsoft.Json.JsonWriter$$set_Formatting (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76c675c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_TraceJsonReader___ctor(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if ((DAT_0952270e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09187470);
    FUN_03f5c2a4(&DAT_0918b438);
    FUN_03f5c2a4(&DAT_092007b0);
    DAT_0952270e = 1;
  }
  Newtonsoft_Json_JsonReader___ctor(param_1,0);
  *(undefined8 *)(param_1 + 0x78) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),param_2);
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  uVar2 = thunk_FUN_03f9944c(DAT_0918b438);
  System_IO_StringWriter___ctor(uVar2,uVar1,0);
  puVar4 = (undefined8 *)(param_1 + 0x88);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  plVar5 = (long *)*puVar4;
  uVar1 = System_Environment__get_NewLine(0);
  uVar1 = System_String__Concat(DAT_092007b0,uVar1,0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x278))(plVar5,uVar1,*(undefined8 *)(*plVar5 + 0x280));
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    lVar3 = thunk_FUN_03f9944c(DAT_09187470);
    Newtonsoft_Json_JsonTextWriter___ctor(lVar3,uVar1,0);
    plVar5 = (long *)(param_1 + 0x80);
    *plVar5 = lVar3;
    thunk_FUN_03f5d7b8(plVar5,lVar3);
    if (*plVar5 != 0) {
      Newtonsoft_Json_JsonWriter__set_Formatting(*plVar5,1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

