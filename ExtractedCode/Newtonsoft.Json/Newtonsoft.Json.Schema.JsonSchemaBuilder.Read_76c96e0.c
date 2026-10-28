// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaBuilder$$Read
// address: 0x76c96e0
// body: available
// range: 0x76c96e0-0x76c97ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Schema_JsonSchemaBuilder__Read(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((DAT_09522735 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_09187250);
    DAT_09522735 = 1;
  }
  if (*(int *)(DAT_09187250 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)Newtonsoft_Json_Linq_JToken__ReadFrom(param_2,0);
  lVar2 = DAT_09187220;
  if (plVar3 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar5 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(DAT_09187220 + 0x130);
    if (*(byte *)(*plVar3 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = plVar3;
      if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09187220) {
        plVar5 = (long *)0x0;
      }
    }
    *(long **)(param_1 + 0x30) = plVar5;
    if (*(byte *)(*plVar3 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = plVar3;
      if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
        plVar5 = (long *)0x0;
      }
    }
  }
  thunk_FUN_03f5d7b8(param_1 + 0x30,plVar5);
  uVar4 = Newtonsoft_Json_Schema_JsonSchemaBuilder__BuildSchema(param_1,plVar3);
  Newtonsoft_Json_Schema_JsonSchemaBuilder__ResolveReferences(param_1,uVar4);
  return uVar4;
}

