// rea decompile_all
// name: MessagePack.Internal.AutomataDictionary.AutomataNode$$CompareTo
// address: 0x73b276c
// body: available
// range: 0x73b276c-0x73b281b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_AutomataDictionary_AutomataNode__CompareTo(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09520be9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b75e8);
    FUN_03f5c2a4(&DAT_0917dcc0);
    DAT_09520be9 = 1;
  }
  local_30 = 0;
  uStack_28 = 0;
  if (param_2 == 0) {
    local_30 = 0;
    uStack_28 = 0;
  }
  else {
    local_40 = 0;
    uStack_38 = 0;
    FUN_05c396a8(&local_40,*(undefined8 *)(param_2 + 0x10),DAT_091b75e8);
    uStack_28 = uStack_38;
    local_30 = local_40;
  }
  uStack_38 = uStack_28;
  local_40 = local_30;
  uVar1 = FUN_03f5c42c(DAT_0917dcc0,&local_40);
  System_UInt64__CompareTo(param_1 + 0x10,uVar1,0);
  return;
}

