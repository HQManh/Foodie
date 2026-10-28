// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter$$EnsureWriteBuffer
// address: 0x76699c4
// body: available
// range: 0x76699c4-0x7669a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_JsonTextWriter__EnsureWriteBuffer(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_1 + 0x90);
  lVar3 = *plVar2;
  if (param_2 < 0x24) {
    param_2 = 0x23;
  }
  if (lVar3 == 0) {
    lVar1 = Newtonsoft_Json_Utilities_BufferUtils__RentBuffer
                      (*(undefined8 *)(param_1 + 0x98),param_2,0);
  }
  else {
    if (param_2 <= *(int *)(lVar3 + 0x18)) {
      return lVar3;
    }
    lVar1 = Newtonsoft_Json_Utilities_BufferUtils__RentBuffer
                      (*(undefined8 *)(param_1 + 0x98),param_2,0);
    if (param_3 != 0) {
      System_Array__Copy(lVar3,lVar1,param_3,0);
    }
    Newtonsoft_Json_Utilities_BufferUtils__ReturnBuffer(*(undefined8 *)(param_1 + 0x98),lVar3,0);
  }
  *plVar2 = lVar1;
  thunk_FUN_03f5d7b8(plVar2,lVar1);
  return lVar1;
}

