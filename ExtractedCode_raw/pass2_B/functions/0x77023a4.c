// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.ScanFilter.<ExecuteFilter>d__2$$System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator
// address: 0x77023a4
// body: available
// range: 0x77023a4-0x77023a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Linq_JsonPath_ScanFilter_<ExecuteFilter>d__2__System_Collections_Generic_IEnumerable<Newtonsoft_Json_Linq_JToken>_GetEnumerator
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09522948 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194190);
    DAT_09522948 = 1;
  }
  if ((*(int *)(param_1 + 0x10) == -2) &&
     (iVar1 = *(int *)(param_1 + 0x20), iVar2 = System_Environment__get_CurrentManagedThreadId(0),
     iVar1 == iVar2)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar4 = param_1;
  }
  else {
    lVar4 = thunk_FUN_03f9944c(DAT_09194190);
    System_Object___ctor(lVar4,0);
    *(undefined4 *)(lVar4 + 0x10) = 0;
    uVar3 = System_Environment__get_CurrentManagedThreadId(0);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(lVar4 + 0x20) = uVar3;
    *(undefined8 *)(lVar4 + 0x38) = uVar5;
    thunk_FUN_03f5d7b8();
  }
  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0x30);
  thunk_FUN_03f5d7b8();
  return lVar4;
}

