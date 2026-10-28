// rea decompile_all
// name: MessagePack.MessagePackSerializer.Typeless$$Deserialize
// address: 0x73962bc
// body: available
// range: 0x73962bc-0x739639b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7396398 to 0x4c108b0 FUN_04c108b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackSerializer_Typeless__Deserialize(undefined8 param_1,long param_2)

{
  if ((DAT_09520b00 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d35c8);
    FUN_03f5c2a4(&DAT_09188188);
    FUN_03f5c2a4(&DAT_091928d8);
    DAT_09520b00 = 1;
  }
  if (param_2 == 0) {
    if (*(int *)(DAT_091928d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09520b33 == '\0') {
      FUN_03f5c2a4(&DAT_091928d8);
      DAT_09520b33 = '\x01';
    }
    if (*(int *)(DAT_091928d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_2 = **(long **)(DAT_091928d8 + 0xb8);
  }
  if (*(int *)(DAT_09188188 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_04c108b0(param_1,param_2,DAT_091d35c8);
  return;
}

