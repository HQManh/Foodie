// rea decompile_all
// name: Newtonsoft.Json.Linq.JObject$$PropertyValues
// address: 0x76e09bc
// body: available
// range: 0x76e09bc-0x76e0aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Linq_JObject__PropertyValues(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  if ((DAT_095227de & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca5b0);
    FUN_03f5c2a4(&DAT_09178c48);
    FUN_03f5c2a4(&DAT_091a91d0);
    FUN_03f5c2a4(&DAT_091ebec0);
    FUN_03f5c2a4(&DAT_09191ee0);
    DAT_095227de = 1;
  }
  uVar1 = Newtonsoft_Json_Linq_JObject__Properties(param_1);
  if (*(int *)(DAT_09191ee0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09191ee0);
  }
  puVar3 = *(undefined8 **)(DAT_09191ee0 + 0xb8);
  lVar4 = puVar3[1];
  if (lVar4 == 0) {
    if (*(int *)(DAT_09191ee0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09191ee0);
      puVar3 = *(undefined8 **)(DAT_09191ee0 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_03f9944c(DAT_09178c48);
    FUN_05324070(lVar4,uVar5,DAT_091ebec0,0);
    plVar2 = (long *)(*(long *)(DAT_09191ee0 + 0xb8) + 8);
    *plVar2 = lVar4;
    thunk_FUN_03f5d7b8(plVar2,lVar4);
  }
  uVar1 = FUN_04af8044(uVar1,lVar4,DAT_091ca5b0);
  local_38 = 0;
  FUN_0558e254(&local_38,uVar1,DAT_091a91d0);
  return local_38;
}

