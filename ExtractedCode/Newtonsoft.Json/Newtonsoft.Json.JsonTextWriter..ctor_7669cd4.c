// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter$$.ctor
// address: 0x7669cd4
// body: available
// range: 0x7669cd4-0x7669e27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7669e24 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextWriter___ctor(long param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09522454 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091721c0);
    FUN_03f5c2a4(&DAT_09187490);
    DAT_09522454 = 1;
  }
  if (*(int *)(DAT_09187490 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Newtonsoft_Json_JsonWriter___ctor(param_1,0);
  if (param_2 != 0) {
    *(long *)(param_1 + 0x68) = param_2;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x68),param_2);
    *(undefined2 *)(param_1 + 0x80) = 0x22;
    *(undefined2 *)(param_1 + 0x78) = 0x20;
    *(undefined1 *)(param_1 + 0x82) = 1;
    *(undefined4 *)(param_1 + 0x7c) = 2;
    Newtonsoft_Json_JsonTextWriter__UpdateCharEscapeFlags(param_1);
    uVar2 = System_Object__GetType(param_1,0);
    uVar3 = DAT_091721c0;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    bVar1 = System_Type__op_Equality(uVar2,uVar3,0);
    *(byte *)(param_1 + 0x60) = bVar1 & 1;
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar3 = thunk_FUN_03f9944c();
  uVar2 = thunk_FUN_03fc39d4(&DAT_09223da8);
  System_ArgumentNullException___ctor(uVar3,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091d1cf0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

