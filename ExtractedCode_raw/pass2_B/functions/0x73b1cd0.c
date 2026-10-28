// rea decompile_all
// name: MessagePack.Internal.AutomataDictionary$$TryGetValue
// address: 0x73b1cd0
// body: available
// range: 0x73b1cd0-0x73b1d73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool MessagePack_Internal_AutomataDictionary__TryGetValue
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = param_2;
  local_38 = param_3;
  if ((DAT_09520be0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09520be0 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  iVar1 = (int)param_3;
  while ((lVar3 = lVar2, 0 < iVar1 && (lVar3 = 0, lVar2 != 0))) {
    lVar2 = MessagePack_Internal_AutomataDictionary_AutomataNode__SearchNext(lVar2,&local_40);
    iVar1 = (int)local_38;
  }
  if (lVar2 != 0) {
    uVar4 = *(undefined4 *)(lVar3 + 0x18);
  }
  else {
    uVar4 = 0xffffffff;
  }
  *param_4 = uVar4;
  return lVar2 != 0;
}

